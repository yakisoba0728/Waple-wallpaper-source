// Function: FUN_14003aa70
// Addr: 14003aa70
// Size: 155 bytes


undefined8 FUN_14003aa70(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  
  if (param_4 == 0) {
    return 0;
  }
  if (param_1 != 0) {
    if ((param_3 != 0) && (param_4 < 0x401)) {
      FUN_1404210f0(param_1,param_3,param_4);
      return 0;
    }
    FUN_1404217a0(param_1,0,0x400);
    if (param_3 != 0) {
      if (param_4 < 0x401) {
        return 0x16;
      }
      puVar1 = (undefined4 *)FUN_1402caf34();
      *puVar1 = 0x22;
      FUN_1402cad8c();
      return 0x22;
    }
  }
  puVar1 = (undefined4 *)FUN_1402caf34();
  *puVar1 = 0x16;
  FUN_1402cad8c();
  return 0x16;
}

