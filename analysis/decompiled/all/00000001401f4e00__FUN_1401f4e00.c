// Function: FUN_1401f4e00
// Addr: 1401f4e00
// Size: 274 bytes


undefined8 * FUN_1401f4e00(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_140490ae8;
  lVar1 = param_1[0x59];
  for (lVar2 = param_1[0x58]; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
    (**(code **)(**(longlong **)(param_1[0x19] + 0x158) + 0x90))
              (*(longlong **)(param_1[0x19] + 0x158),*(undefined8 *)(lVar2 + 0x28));
    (**(code **)(**(longlong **)(param_1[0x19] + 0x158) + 0x80))
              (*(longlong **)(param_1[0x19] + 0x158),*(undefined8 *)(lVar2 + 0x20));
  }
  lVar1 = param_1[0x59];
  lVar2 = param_1[0x58];
  if (lVar2 != lVar1) {
    do {
      FUN_140017240(lVar2);
      lVar2 = lVar2 + 0x38;
    } while (lVar2 != lVar1);
    param_1[0x59] = param_1[0x58];
  }
  FUN_14000d9e0(param_1 + 0x5b);
  FUN_1401f8880(param_1 + 0x58);
  FUN_14000d9e0(param_1 + 0x53);
  FUN_14015a700(param_1 + 0x51);
  FUN_14000d9e0(param_1 + 0x4b);
  FUN_14015a780(param_1 + 0x49);
  FUN_1401de1e0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,800);
  }
  return param_1;
}

