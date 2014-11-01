/**
 * @author Adam Grandquist
 */

#include <lauxlib.h>
#include <lualib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "ReQL-expr-Lua.h"

/* function(cls, val, nesting_depth) */
static int _reql_lua_expr(lua_State *L) {
  lua_settop(L, 3);

  long nesting_depth = luaL_optlong(L, 3, 20) - 1;

  /* if nesting_depth <= 0 then */
  if (nesting_depth <= 0) {
    /* error('Nesting depth limit exceeded') */
    return luaL_error(L, "Nesting depth limit exceeded");
  }
  assert(lua_gettop(L) == 3);

  /* if is_instance(val, 'ReQLOp') then */
  lua_getfield(L, 1, "is_instance");
  lua_pushvalue(L, 2);
  lua_pushliteral(L, "ReQLOp");
  lua_call(L, 2, 1);
  const int lc54 = lua_toboolean(L, -1);
  lua_pop(L, 1);
  if (lc54) {
    /* return val */
    lua_pushvalue(L, 2);
    assert(lua_gettop(L) == 4);
    return 1;
  }
  assert(lua_gettop(L) == 3);

  switch (lua_type(L, 2)) {
    case LUA_TFUNCTION: {
      /* if type(val) == 'function' then */
      /* return Func({}, val) */
      lc_getupvalue(L, lua_upvalueindex(1), 16, 57);
      lua_newtable(L);
      lua_pushvalue(L, 2);
      lua_call(L, 2, 1);
      assert(lua_gettop(L) == 4);
      return 1;
    }
    case LUA_TTABLE: {
      /* if type(val) == 'table' then */
      /* local array = true */
      char array = 1;

      /* for k, v in pairs(val) do
         table is in the stack at index 't' */
      lua_pushnil(L);  /* first key */
      while (lua_next(L, 2)) {
        /* uses 'key' (at index -2) and 'value' (at index -1) */
        printf("%s - %s\n",
               lua_typename(L, lua_type(L, -2)),
               lua_typename(L, lua_type(L, -1)));
        /* if type(k) ~= 'number' then */
        switch (lua_type(L, -2)) {
          case LUA_TSTRING:
            /* array = false */
            array = 0;
          case LUA_TNUMBER: {
            /* val[k] = r(v, nesting_depth - 1) */
            _reql_lua_expr(L);
            lc_getupvalue(L, lua_upvalueindex(1), 24, 4);
            lua_pushvalue(L, -1);
            lua_pushnumber(L, nesting_depth);
            lua_call(L, 2, 1);
            lua_pushvalue(L, 8);
            lua_insert(L, -2);
            lua_settable(L, 2);
            break;
          }
          default:
            return luaL_error(L, "Invalid JSON key type");
        }
        /* removes 'value'; keeps 'key' for next iteration */
        lua_pop(L, 1);
      }
      assert(lua_gettop(L) == 3);

      /* if array then */
      if (array) {
        /* return MakeArray({}, unpack(val)) */
        const int lc67 = lua_gettop(L);
        lc_getupvalue(L, lua_upvalueindex(1), 11, 95);
        const int lc68 = lua_gettop(L);
        lua_newtable(L);
        lua_getfield(L, LUA_ENVIRONINDEX, "unpack");
        lua_pushvalue(L, 2);
        lua_call(L, 1, LUA_MULTRET);
        lua_call(L, (lua_gettop(L) - lc68), 1);
        assert(lua_gettop(L) == 4);
        return 1;
      }
      assert(lua_gettop(L) == 3);

      /* return MakeObj(val) */
      const int lc69 = lua_gettop(L);
      lc_getupvalue(L, lua_upvalueindex(1), 11, 94);
      lua_pushvalue(L, 2);
      lua_call(L, 1, 1);
      assert(lua_gettop(L) == 4);
      return 1;
    }
  }

  /* return DatumTerm(val) */
  lc_getupvalue(L, lua_upvalueindex(1), 22, 8);
  lua_pushvalue(L, 2);
  lua_call(L, 1, 1);
  assert(lua_gettop(L) == 4);
  return 1;
}