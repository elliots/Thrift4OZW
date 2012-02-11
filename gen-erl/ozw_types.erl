%%
%% Autogenerated by Thrift Compiler (0.7.0)
%%
%% DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
%%

-module(ozw_types).

-include("ozw_types.hrl").

-export([struct_info/1, struct_info_ext/1]).

struct_info('remoteValueID') ->
  {struct, [{1, i32}, {2, byte}, {3, i32}, {4, byte}, {5, byte}, {6, byte}, {7, i32}]}
;

struct_info('driverData') ->
  {struct, [{1, i32}, {2, i32}, {3, i32}, {4, i32}, {5, i32}, {6, i32}, {7, i32}, {8, i32}, {9, i32}, {10, i32}, {11, i32}, {12, i32}, {13, i32}, {14, i32}]}
;

struct_info('getDriverStatisticsReturnStruct') ->
  {struct, [{1, {struct, {'ozw_types', 'driverData'}}}]}
;

struct_info('getSwitchPointReturnStruct') ->
  {struct, [{1, bool}, {2, byte}, {3, byte}, {4, byte}]}
;

struct_info('bool_Bool') ->
  {struct, [{1, bool}, {2, bool}]}
;

struct_info('bool_UInt8') ->
  {struct, [{1, bool}, {2, byte}]}
;

struct_info('bool_Float') ->
  {struct, [{1, bool}, {2, double}]}
;

struct_info('bool_Int') ->
  {struct, [{1, bool}, {2, i32}]}
;

struct_info('bool_Int16') ->
  {struct, [{1, bool}, {2, i16}]}
;

struct_info('bool_String') ->
  {struct, [{1, bool}, {2, string}]}
;

struct_info('bool_ListString') ->
  {struct, [{1, bool}, {2, {list, string}}]}
;

struct_info('uInt32_ListByte') ->
  {struct, [{1, i32}, {2, {list, byte}}]}
;

struct_info('bool_GetNodeClassInformation') ->
  {struct, [{1, bool}, {2, string}, {3, byte}]}
;

struct_info('getAssociationsReturnStruct') ->
  {struct, [{1, i32}, {2, {list, byte}}]}
;

struct_info('getAllScenesReturnStruct') ->
  {struct, [{1, byte}, {2, {list, byte}}]}
;

struct_info('sceneGetValuesReturnStruct') ->
  {struct, [{1, i32}, {2, {list, {struct, {'ozw_types', 'remoteValueID'}}}}]}
;

struct_info('i am a dummy struct') -> undefined.

struct_info_ext('remoteValueID') ->
  {struct, [{1, undefined, i32, '_homeId', undefined}, {2, undefined, byte, '_nodeId', undefined}, {3, undefined, i32, '_genre', undefined}, {4, undefined, byte, '_commandClassId', undefined}, {5, undefined, byte, '_instance', undefined}, {6, undefined, byte, '_valueIndex', undefined}, {7, undefined, i32, '_type', undefined}]}
;

struct_info_ext('driverData') ->
  {struct, [{1, undefined, i32, 's_SOFCnt', undefined}, {2, undefined, i32, 's_ACKWaiting', undefined}, {3, undefined, i32, 's_readAborts', undefined}, {4, undefined, i32, 's_badChecksum', undefined}, {5, undefined, i32, 's_readCnt', undefined}, {6, undefined, i32, 's_writeCnt', undefined}, {7, undefined, i32, 's_CANCnt', undefined}, {8, undefined, i32, 's_NAKCnt', undefined}, {9, undefined, i32, 's_ACKCnt', undefined}, {10, undefined, i32, 's_OOFCnt', undefined}, {11, undefined, i32, 's_dropped', undefined}, {12, undefined, i32, 's_retries', undefined}, {13, undefined, i32, 's_controllerReadCnt', undefined}, {14, undefined, i32, 's_controllerWriteCnt', undefined}]}
;

struct_info_ext('getDriverStatisticsReturnStruct') ->
  {struct, [{1, undefined, {struct, {'ozw_types', 'driverData'}}, '_data', #driverData{}}]}
;

struct_info_ext('getSwitchPointReturnStruct') ->
  {struct, [{1, undefined, bool, 'retval', undefined}, {2, undefined, byte, 'o_hours', undefined}, {3, undefined, byte, 'o_minutes', undefined}, {4, undefined, byte, 'o_setback', undefined}]}
;

struct_info_ext('bool_Bool') ->
  {struct, [{1, undefined, bool, 'retval', undefined}, {2, undefined, bool, 'o_value', undefined}]}
;

struct_info_ext('bool_UInt8') ->
  {struct, [{1, undefined, bool, 'retval', undefined}, {2, undefined, byte, 'o_value', undefined}]}
;

struct_info_ext('bool_Float') ->
  {struct, [{1, undefined, bool, 'retval', undefined}, {2, undefined, double, 'o_value', undefined}]}
;

struct_info_ext('bool_Int') ->
  {struct, [{1, undefined, bool, 'retval', undefined}, {2, undefined, i32, 'o_value', undefined}]}
;

struct_info_ext('bool_Int16') ->
  {struct, [{1, undefined, bool, 'retval', undefined}, {2, undefined, i16, 'o_value', undefined}]}
;

struct_info_ext('bool_String') ->
  {struct, [{1, undefined, bool, 'retval', undefined}, {2, undefined, string, 'o_value', undefined}]}
;

struct_info_ext('bool_ListString') ->
  {struct, [{1, undefined, bool, 'retval', undefined}, {2, undefined, {list, string}, 'o_value', []}]}
;

struct_info_ext('uInt32_ListByte') ->
  {struct, [{1, undefined, i32, 'retval', undefined}, {2, undefined, {list, byte}, '_nodeNeighbors', []}]}
;

struct_info_ext('bool_GetNodeClassInformation') ->
  {struct, [{1, undefined, bool, 'retval', undefined}, {2, undefined, string, '_className', undefined}, {3, undefined, byte, '_classVersion', undefined}]}
;

struct_info_ext('getAssociationsReturnStruct') ->
  {struct, [{1, undefined, i32, 'retval', undefined}, {2, undefined, {list, byte}, 'o_associations', []}]}
;

struct_info_ext('getAllScenesReturnStruct') ->
  {struct, [{1, undefined, byte, 'retval', undefined}, {2, undefined, {list, byte}, '_sceneIds', []}]}
;

struct_info_ext('sceneGetValuesReturnStruct') ->
  {struct, [{1, undefined, i32, 'retval', undefined}, {2, undefined, {list, {struct, {'ozw_types', 'remoteValueID'}}}, 'o_value', []}]}
;

struct_info_ext('i am a dummy struct') -> undefined.

