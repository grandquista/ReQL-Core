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

#ifndef REQL_C_DEV_CURSOR_H_
#define REQL_C_DEV_CURSOR_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "./c/cursor.h"
#include "./c/connection.h"
#include "./c/dev/expr.h"

extern void
reql_cursor_init(ReQL_Cur_t *cur, ReQL_Conn_t *conn, ReQL_Token token);

extern void
reql_cursor_set_response(ReQL_Cur_t *cur, ReQL_Obj_t *res);

#ifdef __cplusplus
}
#endif

#endif  // REQL_C_DEV_CURSOR_H_
