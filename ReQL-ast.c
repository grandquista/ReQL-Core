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

#include "ReQL-ast.h"

#include <stdlib.h>

/**
 */
_ReQL_Op _reql_add(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_ADD;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_all(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_ALL;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_any(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_ANY;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_append(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_APPEND;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_april(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_APRIL;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_args(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_ARGS;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_asc(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_ASC;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_august(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_AUGUST;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_avg(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_AVG;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_between(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_BETWEEN;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_binary(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_BINARY;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_bracket(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_BRACKET;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_branch(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_BRANCH;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_changes(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_CHANGES;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_change_at(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_CHANGE_AT;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_circle(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_CIRCLE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_coerce_to(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_COERCE_TO;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_concat_map(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_CONCAT_MAP;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_contains(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_CONTAINS;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_count(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_COUNT;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_date(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_DATE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_datum(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_DATUM;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_day(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_DAY;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_day_of_week(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_DAY_OF_WEEK;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_day_of_year(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_DAY_OF_YEAR;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_db(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_DB;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_db_config(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_DB_CONFIG;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_db_create(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_DB_CREATE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_db_drop(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_DB_DROP;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_db_list(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_DB_LIST;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_december(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_DECEMBER;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_default(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_DEFAULT;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_delete(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_DELETE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_delete_at(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_DELETE_AT;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_desc(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_DESC;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_difference(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_DIFFERENCE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_distance(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_DISTANCE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_distinct(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_DISTINCT;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_div(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_DIV;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_downcase(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_DOWNCASE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_during(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_DURING;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_epoch_time(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_EPOCH_TIME;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_eq(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_EQ;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_eq_join(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_EQ_JOIN;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_error(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_ERROR;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_february(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_FEBRUARY;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_fill(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_FILL;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_filter(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_FILTER;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_for_each(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_FOR_EACH;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_friday(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_FRIDAY;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_func(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_FUNC;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_funcall(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_FUNCALL;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_ge(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_GE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_geojson(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_GEOJSON;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_get(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_GET;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_get_all(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_GET_ALL;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_get_field(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_GET_FIELD;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_get_intersecting(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_GET_INTERSECTING;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_get_nearest(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_GET_NEAREST;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_group(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_GROUP;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_gt(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_GT;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_has_fields(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_HAS_FIELDS;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_hours(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_HOURS;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_http(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_HTTP;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_implicit_var(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_IMPLICIT_VAR;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_includes(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_INCLUDES;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_indexes_of(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_INDEXES_OF;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_index_create(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_INDEX_CREATE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_index_drop(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_INDEX_DROP;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_index_list(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_INDEX_LIST;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_index_rename(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_INDEX_RENAME;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_index_status(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_INDEX_STATUS;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_index_wait(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_INDEX_WAIT;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_info(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_INFO;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_inner_join(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_INNER_JOIN;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_insert(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_INSERT;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_insert_at(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_INSERT_AT;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_intersects(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_INTERSECTS;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_in_timezone(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_IN_TIMEZONE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_iso8601(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_ISO8601;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_is_empty(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_IS_EMPTY;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_january(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_JANUARY;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_javascript(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_JAVASCRIPT;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_json(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_JSON;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_july(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_JULY;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_june(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_JUNE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_keys(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_KEYS;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_le(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_LE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_limit(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_LIMIT;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_line(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_LINE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_literal(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_LITERAL;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_lt(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_LT;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_make_array(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_MAKE_ARRAY;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_make_obj(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_MAKE_OBJ;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_map(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_MAP;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_march(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_MARCH;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_match(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_MATCH;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_max(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_MAX;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_may(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_MAY;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_merge(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_MERGE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_min(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_MIN;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_minutes(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_MINUTES;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_mod(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_MOD;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_monday(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_MONDAY;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_month(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_MONTH;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_mul(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_MUL;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_ne(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_NE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_not(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_NOT;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_november(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_NOVEMBER;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_now(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_NOW;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_nth(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_NTH;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_object(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_OBJECT;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_october(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_OCTOBER;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_order_by(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_ORDER_BY;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_outer_join(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_OUTER_JOIN;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_pluck(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_PLUCK;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_point(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_POINT;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_polygon(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_POLYGON;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_polygon_sub(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_POLYGON_SUB;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_prepend(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_PREPEND;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_random(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_RANDOM;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_range(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_RANGE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_rebalance(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_REBALANCE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_reconfigure(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_RECONFIGURE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_reduce(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_REDUCE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_replace(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_REPLACE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_sample(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_SAMPLE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_saturday(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_SATURDAY;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_seconds(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_SECONDS;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_september(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_SEPTEMBER;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_set_difference(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_SET_DIFFERENCE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_set_insert(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_SET_INSERT;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_set_intersection(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_SET_INTERSECTION;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_set_union(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_SET_UNION;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_skip(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_SKIP;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_slice(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_SLICE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_splice_at(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_SPLICE_AT;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_split(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_SPLIT;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_sub(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_SUB;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_sum(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_SUM;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_sunday(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_SUNDAY;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_sync(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_SYNC;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_table(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_TABLE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_table_config(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_TABLE_CONFIG;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_table_create(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_TABLE_CREATE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_table_drop(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_TABLE_DROP;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_table_list(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_TABLE_LIST;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_table_status(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_TABLE_STATUS;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_table_wait(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_TABLE_WAIT;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_thursday(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_THURSDAY;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_time(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_TIME;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_timezone(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_TIMEZONE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_time_of_day(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_TIME_OF_DAY;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_to_epoch_time(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_TO_EPOCH_TIME;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_to_geojson(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_TO_GEOJSON;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_to_iso8601(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_TO_ISO8601;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_to_json_string(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_TO_JSON_STRING;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_tuesday(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_TUESDAY;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_type_of(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_TYPE_OF;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_ungroup(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_UNGROUP;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_union(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_UNION;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_upcase(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_UPCASE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_update(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_UPDATE;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_uuid(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_UUID;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_var(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_VAR;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_wednesday(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_WEDNESDAY;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_without(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_WITHOUT;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_with_fields(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_WITH_FIELDS;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_year(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_YEAR;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}

/**
 */
_ReQL_Op _reql_zip(_ReQL_Op args, _ReQL_Op kwargs) {
  _ReQL_Op term = _reql_expr_null();
  term->tt = _REQL_ZIP;
  term->dt = _REQL_R_JSON;
  term->args = args->args;
  term->kwargs = kwargs->kwargs;
  return term;
}
