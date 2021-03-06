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

#ifndef REQL_PYTHON_CONNECTION_H_
#define REQL_PYTHON_CONNECTION_H_

#ifdef __cplusplus
extern "C" {
#endif

#define Py_LIMITED_API
#include "Python.h"

#include "./reql/core.h"

typedef struct {
  PyObject_HEAD
  ReQL_Conn_t *reql_connection;
} ReQLConnection;

extern void
Connection_dealloc(ReQLConnection* self);

extern PyObject *
Connection_new(PyTypeObject *type, PyObject *args, PyObject *kwargs);

extern int
Connection_init(ReQLConnection *self, PyObject *args, PyObject *kwargs);

extern PyObject *
reql_py_connect(PyObject *args, PyObject *kwargs);

#ifdef __cplusplus
}
#endif

#endif  // REQL_PYTHON_CONNECTION_H_
