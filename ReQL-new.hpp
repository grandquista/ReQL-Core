/*
Copyright 2014 Adam Grandquist

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

#include <string>

namespace ReQL {
extern "C" {
#include "ReQL.h"
}
}

#ifndef _REQL_NEW_CPP
#define _REQL_NEW_CPP

namespace ReQL {

_ReQL_Op
_reql_new_array(std::uint32_t size);
_ReQL_Op
_reql_new_bool(bool val);
_ReQL_Op
_reql_new_datum(_ReQL_Op val);
_ReQL_Op
_reql_new_make_array(_ReQL_Op val);
_ReQL_Op
_reql_new_make_obj(_ReQL_Op val);
_ReQL_Op
_reql_new_null();
_ReQL_Op
_reql_new_number(double val);
_ReQL_Op
_reql_new_object(uint32_t idx);
_ReQL_Op
_reql_new_string(std::string val);

}

#endif
