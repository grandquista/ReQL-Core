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

#include "./reql/connection.h"

#include "./reql/types.h"

#include "./reql/core/connection.hpp"

extern ReQL_Connection_t *
reql_connect(const unsigned long timeout, char *address, char *port, char *key, const unsigned long key_size) {
  (void)timeout;
  (void)address;
  (void)port;
  (void)key;
  (void)key_size;
  return nullptr;
}

extern void
reql_noreply_wait(ReQL_Connection_t *conn) {
  (void)conn;
}

extern void
reql_connection_close(ReQL_Connection_t *conn) {
  (void)conn;
}