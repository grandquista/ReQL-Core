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

#include <stdlib.h>

#include "ReQL-ast-Python.h"

static PyMethodDef libReQLMethods[] = {
  {"expr", _reql_py_expr, METH_VARARGS, NULL},
  {"add", _reql_py_add, METH_VARARGS | METH_KEYWORDS, NULL},
  {"all", _reql_py_all, METH_VARARGS | METH_KEYWORDS, NULL},
  {"any", _reql_py_any, METH_VARARGS | METH_KEYWORDS, NULL},
  {"append", _reql_py_append, METH_VARARGS | METH_KEYWORDS, NULL},
  {"april", _reql_py_april, METH_VARARGS | METH_KEYWORDS, NULL},
  {"args", _reql_py_args, METH_VARARGS | METH_KEYWORDS, NULL},
  {"asc", _reql_py_asc, METH_VARARGS | METH_KEYWORDS, NULL},
  {"august", _reql_py_august, METH_VARARGS | METH_KEYWORDS, NULL},
  {"avg", _reql_py_avg, METH_VARARGS | METH_KEYWORDS, NULL},
  {"between", _reql_py_between, METH_VARARGS | METH_KEYWORDS, NULL},
  {"binary", _reql_py_binary, METH_VARARGS | METH_KEYWORDS, NULL},
  {"bracket", _reql_py_bracket, METH_VARARGS | METH_KEYWORDS, NULL},
  {"branch", _reql_py_branch, METH_VARARGS | METH_KEYWORDS, NULL},
  {"changes", _reql_py_changes, METH_VARARGS | METH_KEYWORDS, NULL},
  {"change_at", _reql_py_change_at, METH_VARARGS | METH_KEYWORDS, NULL},
  {"circle", _reql_py_circle, METH_VARARGS | METH_KEYWORDS, NULL},
  {"coerce_to", _reql_py_coerce_to, METH_VARARGS | METH_KEYWORDS, NULL},
  {"concat_map", _reql_py_concat_map, METH_VARARGS | METH_KEYWORDS, NULL},
  {"contains", _reql_py_contains, METH_VARARGS | METH_KEYWORDS, NULL},
  {"count", _reql_py_count, METH_VARARGS | METH_KEYWORDS, NULL},
  {"date", _reql_py_date, METH_VARARGS | METH_KEYWORDS, NULL},
  {"datum", _reql_py_datum, METH_VARARGS | METH_KEYWORDS, NULL},
  {"day", _reql_py_day, METH_VARARGS | METH_KEYWORDS, NULL},
  {"day_of_week", _reql_py_day_of_week, METH_VARARGS | METH_KEYWORDS, NULL},
  {"day_of_year", _reql_py_day_of_year, METH_VARARGS | METH_KEYWORDS, NULL},
  {"db", _reql_py_db, METH_VARARGS | METH_KEYWORDS, NULL},
  {"db_create", _reql_py_db_create, METH_VARARGS | METH_KEYWORDS, NULL},
  {"db_drop", _reql_py_db_drop, METH_VARARGS | METH_KEYWORDS, NULL},
  {"db_list", _reql_py_db_list, METH_VARARGS | METH_KEYWORDS, NULL},
  {"december", _reql_py_december, METH_VARARGS | METH_KEYWORDS, NULL},
  {"default", _reql_py_default_, METH_VARARGS | METH_KEYWORDS, NULL},
  {"delete", _reql_py_delete_, METH_VARARGS | METH_KEYWORDS, NULL},
  {"delete_at", _reql_py_delete_at, METH_VARARGS | METH_KEYWORDS, NULL},
  {"desc", _reql_py_desc, METH_VARARGS | METH_KEYWORDS, NULL},
  {"difference", _reql_py_difference, METH_VARARGS | METH_KEYWORDS, NULL},
  {"distance", _reql_py_distance, METH_VARARGS | METH_KEYWORDS, NULL},
  {"distinct", _reql_py_distinct, METH_VARARGS | METH_KEYWORDS, NULL},
  {"div", _reql_py_div, METH_VARARGS | METH_KEYWORDS, NULL},
  {"downcase", _reql_py_downcase, METH_VARARGS | METH_KEYWORDS, NULL},
  {"during", _reql_py_during, METH_VARARGS | METH_KEYWORDS, NULL},
  {"epoch_time", _reql_py_epoch_time, METH_VARARGS | METH_KEYWORDS, NULL},
  {"eq", _reql_py_eq, METH_VARARGS | METH_KEYWORDS, NULL},
  {"eq_join", _reql_py_eq_join, METH_VARARGS | METH_KEYWORDS, NULL},
  {"error", _reql_py_error, METH_VARARGS | METH_KEYWORDS, NULL},
  {"february", _reql_py_february, METH_VARARGS | METH_KEYWORDS, NULL},
  {"fill", _reql_py_fill, METH_VARARGS | METH_KEYWORDS, NULL},
  {"filter", _reql_py_filter, METH_VARARGS | METH_KEYWORDS, NULL},
  {"for_each", _reql_py_for_each, METH_VARARGS | METH_KEYWORDS, NULL},
  {"friday", _reql_py_friday, METH_VARARGS | METH_KEYWORDS, NULL},
  {"func", _reql_py_func, METH_VARARGS | METH_KEYWORDS, NULL},
  {"funcall", _reql_py_funcall, METH_VARARGS | METH_KEYWORDS, NULL},
  {"ge", _reql_py_ge, METH_VARARGS | METH_KEYWORDS, NULL},
  {"geojson", _reql_py_geojson, METH_VARARGS | METH_KEYWORDS, NULL},
  {"get", _reql_py_get, METH_VARARGS | METH_KEYWORDS, NULL},
  {"get_all", _reql_py_get_all, METH_VARARGS | METH_KEYWORDS, NULL},
  {"get_field", _reql_py_get_field, METH_VARARGS | METH_KEYWORDS, NULL},
  {"get_intersecting", _reql_py_get_intersecting, METH_VARARGS | METH_KEYWORDS, NULL},
  {"get_nearest", _reql_py_get_nearest, METH_VARARGS | METH_KEYWORDS, NULL},
  {"group", _reql_py_group, METH_VARARGS | METH_KEYWORDS, NULL},
  {"gt", _reql_py_gt, METH_VARARGS | METH_KEYWORDS, NULL},
  {"has_fields", _reql_py_has_fields, METH_VARARGS | METH_KEYWORDS, NULL},
  {"hours", _reql_py_hours, METH_VARARGS | METH_KEYWORDS, NULL},
  {"http", _reql_py_http, METH_VARARGS | METH_KEYWORDS, NULL},
  {"implicit_var", _reql_py_implicit_var, METH_VARARGS | METH_KEYWORDS, NULL},
  {"includes", _reql_py_includes, METH_VARARGS | METH_KEYWORDS, NULL},
  {"indexes_of", _reql_py_indexes_of, METH_VARARGS | METH_KEYWORDS, NULL},
  {"index_create", _reql_py_index_create, METH_VARARGS | METH_KEYWORDS, NULL},
  {"index_drop", _reql_py_index_drop, METH_VARARGS | METH_KEYWORDS, NULL},
  {"index_list", _reql_py_index_list, METH_VARARGS | METH_KEYWORDS, NULL},
  {"index_rename", _reql_py_index_rename, METH_VARARGS | METH_KEYWORDS, NULL},
  {"index_status", _reql_py_index_status, METH_VARARGS | METH_KEYWORDS, NULL},
  {"index_wait", _reql_py_index_wait, METH_VARARGS | METH_KEYWORDS, NULL},
  {"info", _reql_py_info, METH_VARARGS | METH_KEYWORDS, NULL},
  {"inner_join", _reql_py_inner_join, METH_VARARGS | METH_KEYWORDS, NULL},
  {"insert", _reql_py_insert, METH_VARARGS | METH_KEYWORDS, NULL},
  {"insert_at", _reql_py_insert_at, METH_VARARGS | METH_KEYWORDS, NULL},
  {"intersects", _reql_py_intersects, METH_VARARGS | METH_KEYWORDS, NULL},
  {"timezone", _reql_py_in_timezone, METH_VARARGS | METH_KEYWORDS, NULL},
  {"iso8601", _reql_py_iso8601, METH_VARARGS | METH_KEYWORDS, NULL},
  {"is_empty", _reql_py_is_empty, METH_VARARGS | METH_KEYWORDS, NULL},
  {"january", _reql_py_january, METH_VARARGS | METH_KEYWORDS, NULL},
  {"javascript", _reql_py_javascript, METH_VARARGS | METH_KEYWORDS, NULL},
  {"json", _reql_py_json, METH_VARARGS | METH_KEYWORDS, NULL},
  {"july", _reql_py_july, METH_VARARGS | METH_KEYWORDS, NULL},
  {"june", _reql_py_june, METH_VARARGS | METH_KEYWORDS, NULL},
  {"keys", _reql_py_keys, METH_VARARGS | METH_KEYWORDS, NULL},
  {"le", _reql_py_le, METH_VARARGS | METH_KEYWORDS, NULL},
  {"limit", _reql_py_limit, METH_VARARGS | METH_KEYWORDS, NULL},
  {"line", _reql_py_line, METH_VARARGS | METH_KEYWORDS, NULL},
  {"literal", _reql_py_literal, METH_VARARGS | METH_KEYWORDS, NULL},
  {"lt", _reql_py_lt, METH_VARARGS | METH_KEYWORDS, NULL},
  {"make_array", _reql_py_make_array, METH_VARARGS | METH_KEYWORDS, NULL},
  {"make_obj", _reql_py_make_obj, METH_VARARGS | METH_KEYWORDS, NULL},
  {"map", _reql_py_map, METH_VARARGS | METH_KEYWORDS, NULL},
  {"march", _reql_py_march, METH_VARARGS | METH_KEYWORDS, NULL},
  {"match", _reql_py_match, METH_VARARGS | METH_KEYWORDS, NULL},
  {"max", _reql_py_max, METH_VARARGS | METH_KEYWORDS, NULL},
  {"may", _reql_py_may, METH_VARARGS | METH_KEYWORDS, NULL},
  {"merge", _reql_py_merge, METH_VARARGS | METH_KEYWORDS, NULL},
  {"min", _reql_py_min, METH_VARARGS | METH_KEYWORDS, NULL},
  {"minutes", _reql_py_minutes, METH_VARARGS | METH_KEYWORDS, NULL},
  {"mod", _reql_py_mod, METH_VARARGS | METH_KEYWORDS, NULL},
  {"monday", _reql_py_monday, METH_VARARGS | METH_KEYWORDS, NULL},
  {"month", _reql_py_month, METH_VARARGS | METH_KEYWORDS, NULL},
  {"mul", _reql_py_mul, METH_VARARGS | METH_KEYWORDS, NULL},
  {"ne", _reql_py_ne, METH_VARARGS | METH_KEYWORDS, NULL},
  {"not_", _reql_py_not_, METH_VARARGS | METH_KEYWORDS, NULL},
  {"november", _reql_py_november, METH_VARARGS | METH_KEYWORDS, NULL},
  {"now", _reql_py_now, METH_VARARGS | METH_KEYWORDS, NULL},
  {"nth", _reql_py_nth, METH_VARARGS | METH_KEYWORDS, NULL},
  {"object", _reql_py_object, METH_VARARGS | METH_KEYWORDS, NULL},
  {"october", _reql_py_october, METH_VARARGS | METH_KEYWORDS, NULL},
  {"order_by", _reql_py_order_by, METH_VARARGS | METH_KEYWORDS, NULL},
  {"outer_join", _reql_py_outer_join, METH_VARARGS | METH_KEYWORDS, NULL},
  {"pluck", _reql_py_pluck, METH_VARARGS | METH_KEYWORDS, NULL},
  {"point", _reql_py_point, METH_VARARGS | METH_KEYWORDS, NULL},
  {"polygon", _reql_py_polygon, METH_VARARGS | METH_KEYWORDS, NULL},
  {"polygon_sub", _reql_py_polygon_sub, METH_VARARGS | METH_KEYWORDS, NULL},
  {"prepend", _reql_py_prepend, METH_VARARGS | METH_KEYWORDS, NULL},
  {"random", _reql_py_random, METH_VARARGS | METH_KEYWORDS, NULL},
  {"range", _reql_py_range, METH_VARARGS | METH_KEYWORDS, NULL},
  {"reduce", _reql_py_reduce, METH_VARARGS | METH_KEYWORDS, NULL},
  {"replace", _reql_py_replace, METH_VARARGS | METH_KEYWORDS, NULL},
  {"sample", _reql_py_sample, METH_VARARGS | METH_KEYWORDS, NULL},
  {"saturday", _reql_py_saturday, METH_VARARGS | METH_KEYWORDS, NULL},
  {"seconds", _reql_py_seconds, METH_VARARGS | METH_KEYWORDS, NULL},
  {"september", _reql_py_september, METH_VARARGS | METH_KEYWORDS, NULL},
  {"set_difference", _reql_py_set_difference, METH_VARARGS | METH_KEYWORDS, NULL},
  {"set_insert", _reql_py_set_insert, METH_VARARGS | METH_KEYWORDS, NULL},
  {"set_intersection", _reql_py_set_intersection, METH_VARARGS | METH_KEYWORDS, NULL},
  {"set_union", _reql_py_set_union, METH_VARARGS | METH_KEYWORDS, NULL},
  {"skip", _reql_py_skip, METH_VARARGS | METH_KEYWORDS, NULL},
  {"slice", _reql_py_slice, METH_VARARGS | METH_KEYWORDS, NULL},
  {"splice_at", _reql_py_splice_at, METH_VARARGS | METH_KEYWORDS, NULL},
  {"split", _reql_py_split, METH_VARARGS | METH_KEYWORDS, NULL},
  {"sub", _reql_py_sub, METH_VARARGS | METH_KEYWORDS, NULL},
  {"sum", _reql_py_sum, METH_VARARGS | METH_KEYWORDS, NULL},
  {"sunday", _reql_py_sunday, METH_VARARGS | METH_KEYWORDS, NULL},
  {"sync", _reql_py_sync, METH_VARARGS | METH_KEYWORDS, NULL},
  {"table", _reql_py_table, METH_VARARGS | METH_KEYWORDS, NULL},
  {"table_create", _reql_py_table_create, METH_VARARGS | METH_KEYWORDS, NULL},
  {"table_drop", _reql_py_table_drop, METH_VARARGS | METH_KEYWORDS, NULL},
  {"table_list", _reql_py_table_list, METH_VARARGS | METH_KEYWORDS, NULL},
  {"thursday", _reql_py_thursday, METH_VARARGS | METH_KEYWORDS, NULL},
  {"time", _reql_py_time, METH_VARARGS | METH_KEYWORDS, NULL},
  {"timezone", _reql_py_timezone, METH_VARARGS | METH_KEYWORDS, NULL},
  {"time_of_day", _reql_py_time_of_day, METH_VARARGS | METH_KEYWORDS, NULL},
  {"to_epoch_time", _reql_py_to_epoch_time, METH_VARARGS | METH_KEYWORDS, NULL},
  {"to_geojson", _reql_py_to_geojson, METH_VARARGS | METH_KEYWORDS, NULL},
  {"to_iso8601", _reql_py_to_iso8601, METH_VARARGS | METH_KEYWORDS, NULL},
  {"to_json_string", _reql_py_to_json_string, METH_VARARGS | METH_KEYWORDS, NULL},
  {"tuesday", _reql_py_tuesday, METH_VARARGS | METH_KEYWORDS, NULL},
  {"type_of", _reql_py_type_of, METH_VARARGS | METH_KEYWORDS, NULL},
  {"ungroup", _reql_py_ungroup, METH_VARARGS | METH_KEYWORDS, NULL},
  {"union", _reql_py_union_, METH_VARARGS | METH_KEYWORDS, NULL},
  {"upcase", _reql_py_upcase, METH_VARARGS | METH_KEYWORDS, NULL},
  {"update", _reql_py_update, METH_VARARGS | METH_KEYWORDS, NULL},
  {"uuid", _reql_py_uuid, METH_VARARGS | METH_KEYWORDS, NULL},
  {"var", _reql_py_var, METH_VARARGS | METH_KEYWORDS, NULL},
  {"wednesday", _reql_py_wednesday, METH_VARARGS | METH_KEYWORDS, NULL},
  {"without", _reql_py_without, METH_VARARGS | METH_KEYWORDS, NULL},
  {"with_fields", _reql_py_with_fields, METH_VARARGS | METH_KEYWORDS, NULL},
  {"year", _reql_py_year, METH_VARARGS | METH_KEYWORDS, NULL},
  {"zip", _reql_py_zip, METH_VARARGS | METH_KEYWORDS, NULL},
  {NULL, NULL, 0, NULL}
};

static struct PyModuleDef libReQLModule = {
  PyModuleDef_HEAD_INIT,
  "libReQL",
  NULL,
  0,
  libReQLMethods
};

PyMODINIT_FUNC
PyInit_libreql(void) {
  PyObject* m;
  m = PyModule_Create(&libReQLModule);

  if (!m) {
    return NULL;
  }

  return m;
}
