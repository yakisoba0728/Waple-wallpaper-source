// Function: FUN_14022ab40
// Addr: 14022ab40
// Size: 287 bytes


undefined8 * FUN_14022ab40(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_1404915b0;
  FUN_140176f70(param_1[0x19] + 0x1708,param_1 + 0xef,0);
  lVar2 = param_1[0x128];
  lVar1 = param_1[0x129];
  if (lVar2 != lVar1) {
    do {
      FUN_140017240(lVar2 + 0x18);
      lVar2 = lVar2 + 0x38;
    } while (lVar2 != lVar1);
    param_1[0x129] = param_1[0x128];
  }
  FUN_140251db0(param_1 + 0x128);
  FUN_14000d9e0(param_1 + 0x103);
  FUN_14015a700(param_1 + 0x101);
  FUN_14000d9e0(param_1 + 0xfb);
  FUN_14015a780(param_1 + 0xf9);
  FUN_1401a3b60(param_1 + 0xef);
  FUN_14022ac60(param_1 + 0x58);
  FUN_14000d9e0(param_1 + 0x53);
  FUN_14015a700(param_1 + 0x51);
  FUN_14000d9e0(param_1 + 0x4b);
  FUN_14015a780(param_1 + 0x49);
  FUN_1401de1e0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x960);
  }
  return param_1;
}

