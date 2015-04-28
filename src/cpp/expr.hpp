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

#ifndef REQL_CPP_EXPR_HPP_
#define REQL_CPP_EXPR_HPP_

#include "./cpp/new.hpp"

#include <map>
#include <string>
#include <vector>

namespace ReQL {

class Query;

class Expr {
public:
  bool operator<(const Expr &other) const;

  explicit Expr(const Expr &other);
  explicit Expr(Expr &&other);

  Expr &operator=(const Expr &other);
  Expr &operator=(Expr &&other);

  ReQL_Obj_t *data() const;

protected:
  Expr();
  Expr(const ReQL_AST_Function &f, const std::vector<Query> &args);
  Expr(const ReQL_AST_Function_Kwargs &f, const std::vector<Query> &args, const std::map<std::string, Query> &kwargs);
  explicit Expr(const std::string &val);
  explicit Expr(const double &val);
  explicit Expr(const bool &val);
  explicit Expr(const std::vector<Query> &val);
  explicit Expr(const std::map<std::string, Query> &val);
  void copy(const Expr &other);
  void move(Expr &&other);

private:
  ReQL p_query;
  ReQL_AST_Function p_func;
  ReQL_AST_Function_Kwargs p_func_kwargs;
  std::vector<Expr> p_array;
  std::map<Expr, Expr> p_object;
};

}  // namespace ReQL

#endif  // REQL_CPP_EXPR_HPP_
