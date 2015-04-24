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

#include "./cpp/cursor.hpp"

#include <limits>
#include <map>
#include <string>
#include <vector>

namespace ReQL {

class ResultBuilder : public Parser {
public:
  Result result() { return p_result; }

private:
  void startObject();
  void addKey(std::string key);
  void addKeyValue(std::string key);
  void addKeyValue(std::string key, bool value);
  void addKeyValue(std::string key, double value);
  void addKeyValue(std::string key, std::string value);
  void endObject();
  void startArray();
  void addElement();
  void addElement(bool value);
  void addElement(double value);
  void addElement(std::string value);
  void addElement(Result val);
  void addElement(Result array, Result val);
  void endArray();
  void end();

  std::vector<Result> p_stack;
  std::vector<std::string> p_keys;
  Result p_result;
};

void
ResultBuilder::startObject() {
  p_stack.push_back(Result(std::map<std::string, Result>()));
}

void
ResultBuilder::addKey(std::string key) {
  p_keys.push_back(key);
}

void
ResultBuilder::addKeyValue(std::string key) {
  Result object = p_stack.back();
  p_stack.pop_back();
  object.insert(key, Result());
  p_stack.push_back(object);
}

void
ResultBuilder::addKeyValue(std::string key, bool value) {
  Result object = p_stack.back();
  p_stack.pop_back();
  object.insert(key, Result(value));
  p_stack.push_back(object);
}

void
ResultBuilder::addKeyValue(std::string key, double value) {
  Result object = p_stack.back();
  p_stack.pop_back();
  object.insert(key, Result(value));
  p_stack.push_back(object);
}

void
ResultBuilder::addKeyValue(std::string key, std::string value) {
  Result object = p_stack.back();
  p_stack.pop_back();
  object.insert(key, Result(value));
  p_stack.push_back(object);
}

void
ResultBuilder::endObject() {
  end();
}

void
ResultBuilder::startArray() {
  p_stack.push_back(Result(std::vector<Result>()));
}

void
ResultBuilder::addElement() {
  addElement(Result());
}

void
ResultBuilder::addElement(bool value) {
  addElement(Result(value));
}

void
ResultBuilder::addElement(double value) {
  addElement(Result(value));
}

void
ResultBuilder::addElement(std::string value) {
  addElement(Result(value));
}

void
ResultBuilder::endArray() {
  end();
}

void
ResultBuilder::addElement(Result val) {
  if (p_stack.empty()) {
    p_result = std::move(val);
    return;
  }
  Result array = p_stack.back();
  p_stack.pop_back();
  return addElement(array, val);
}

void
ResultBuilder::addElement(Result array, Result val) {
  if (array.type() == REQL_R_ARRAY) {
    array.insert(val);
    p_stack.push_back(array);
  } else {
    throw;
  }
}

void
ResultBuilder::end() {
  Result last = p_stack.back();
  p_stack.pop_back();
  if (p_stack.empty()) {
    p_result = std::move(last);
    return;
  }
  Result object = p_stack.back();
  p_stack.pop_back();
  if (object.type() == REQL_R_OBJECT) {
    std::string key = p_keys.back();
    p_keys.pop_back();
    object.insert(key, last);
    p_stack.push_back(object);
  } else if (object.type() == REQL_R_ARRAY) {
    addElement(object, last);
  } else {
    throw;
  }
}

Cursor::Cursor() : p_cur(new ReQL_Cur_t) {
  reql_cursor_init(data());
}

Cursor::~Cursor() {
}

Cursor &
Cursor::operator=(Cursor &&other) {
  if (this != &other) {
    p_cur = std::move(other.p_cur);
  }
  return *this;
}

bool Cursor::isOpen() const {
  return reql_cur_open(data());
}

Result
Cursor::next() {
  ResultBuilder builder;
  next(builder);
  return builder.result();
}

void
Cursor::next(Parser p) {
  p.parse(reql_cursor_next(data()));
}

ReQL_Cur_t *
Cursor::data() const {
  return p_cur.get();
}

void
Cursor::close() {
}

}  // namespace ReQL