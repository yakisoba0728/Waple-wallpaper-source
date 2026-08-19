// Function: FUN_1402dc114
// Addr: 1402dc114
// Size: 164 bytes


void FUN_1402dc114(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_res8;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20 [2];
  undefined8 *local_18 [2];
  
  local_res8 = param_1;
  if (DAT_1405160e0 == -1) {
LAB_1402dc178:
    local_18[0] = &local_res8;
    local_24 = 4;
    local_20[0] = 4;
    FUN_1402dbc4c(local_28,local_20,local_18,&local_24);
  }
  else {
    if (DAT_1405160e0 == 0) {
      lVar1 = FUN_1402dbce0(2,"EnumSystemLocalesEx",&DAT_140430088,"EnumSystemLocalesEx");
      if (lVar1 == 0) goto LAB_1402dc178;
    }
    thunk_FUN_140420d40(local_res8,param_2,param_3,param_4);
  }
  return;
}

