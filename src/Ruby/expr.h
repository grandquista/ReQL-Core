/*
Copyright 2014-2015 Adam Grandquist

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

#ifndef REQL_EXPR_RUBY_H_
#define REQL_EXPR_RUBY_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>

#include "ruby.h"

#include "./reql/core.h"

extern VALUE
reql_rb_expr(int argn, VALUE *args, VALUE self);
extern ReQL_Obj_t *
reql_from_rb(VALUE obj, long nesting_depth);
extern VALUE
reql_to_rb(ReQL_Obj_t *query);

#ifdef __cplusplus
}
#endif

#endif  // REQL_EXPR_RUBY_H_
