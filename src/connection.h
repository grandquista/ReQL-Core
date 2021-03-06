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

#ifndef REQL_C_CONNECTION_H_
#define REQL_C_CONNECTION_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ReQL_Connection_s ReQL_Connection_t;

struct ReQL_Connection_s {};

extern ReQL_Connection_t *
reql_connect(const unsigned long timeout, char *address, char *port, char *key, const unsigned long key_size);

extern void
reql_noreply_wait(ReQL_Connection_t *conn);

extern void
reql_connection_close(ReQL_Connection_t *conn);

#ifdef __cplusplus
}
#endif

#endif  // REQL_C_CONNECTION_H_
