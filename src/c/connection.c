/*
Copyright 2015 Adam Grandquist

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
 */
/**
 * @author Adam Grandquist
 * @copyright Apache
 */

#include "./c/connection.h"

#include "./c/types.h"
#include "./reql/core.h"

#include <stdlib.h>

extern ReQL_Connection_t *
reql_connect(const unsigned long timeout, char *address, char *port, char *key, const unsigned long key_size) {
  ReQL_Connection_t *conn = malloc(sizeof(ReQL_Connection_t));
  if (conn == NULL) {
    return NULL;
  }
  conn->connection = malloc(sizeof(ReQL_Conn_t));
  if (conn->connection == NULL) {
    free(conn);
    return NULL;
  }
  reql_conn_init(conn->connection);
  if (timeout > 0) {
    reql_conn_set_timeout(conn->connection, (ReQL_Token)timeout, 0);
  }
  if (address != NULL) {
    reql_conn_set_addr(conn->connection, address);
  }
  if (port != NULL) {
    reql_conn_set_port(conn->connection, port);
  }
  if (key_size > 0) {
    reql_conn_set_auth(conn->connection, (ReQL_Size)key_size, key);
  }
  ReQL_Byte buf[500];
  if (reql_conn_connect(conn->connection, buf, 500) != 0) {
    free(conn->connection);
    free(conn); conn = NULL;
  }
  return conn;
}

extern void
reql_noreply(ReQL_t *query, ReQL_t *kwargs, ReQL_Connection_t *conn) {
  if (kwargs == NULL) {
    reql_run(NULL, query->cb(query), conn->connection, NULL);
  } else {
    reql_run(NULL, query->cb(query), conn->connection, kwargs->cb(kwargs));
  }
}

extern void
reql_noreply_wait(ReQL_Connection_t *conn) {
  reql_no_reply_wait_query(conn->connection);
}

extern void
reql_connection_close(ReQL_Connection_t *conn) {
  reql_conn_close(conn->connection);
  reql_conn_destroy(conn->connection);
  free(conn->connection);
  free(conn);
}
