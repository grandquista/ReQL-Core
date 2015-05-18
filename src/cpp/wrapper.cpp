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

#include "./cpp/wrapper.hpp"

#include "./cpp/error.hpp"

namespace ReQL {

Wrapper::Wrapper(_C::ReQL_Obj_t *obj) : _C::Types::object(obj) {
  switch (reql_datum_type(obj)) {
    case _C::REQL_R_ARRAY: {
      break;
    }
    case _C::REQL_R_BOOL: {
      break;
    }
    case _C::REQL_R_JSON: throw ReQLDriverError();
    case _C::REQL_R_NULL: {
      break;
    }
    case _C::REQL_R_NUM: {
      break;
    }
    case _C::REQL_R_OBJECT: {
      break;
    }
    case _C::REQL_R_REQL: {
      break;
    }
    case _C::REQL_R_STR: {
      break;
    }
  }
}

Wrapper::~Wrapper() {}

}
