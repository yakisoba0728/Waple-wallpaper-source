// Function: FUN_14025cf90
// Addr: 14025cf90
// Size: 235 bytes


undefined8 * FUN_14025cf90(undefined8 *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_140491c38;
  if ((undefined8 *)param_1[0x6f] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0x6f])();
  }
  if ((*(char *)(param_1 + 0x58) == '\x05') &&
     (lVar3 = (longlong)(int)*(uint *)(param_1 + 0x59), *(uint *)(param_1 + 0x59) < 4)) {
    lVar2 = param_1[0x19];
    *(undefined8 *)(lVar2 + 0x1258 + lVar3 * 0x10) = 0;
    *(undefined4 *)(lVar2 + 0x1260 + lVar3 * 0x10) = 0;
    *(undefined4 *)(lVar2 + 0x1264 + lVar3 * 0x10) = 0x3f800000;
    iVar1 = *(int *)(param_1 + 0x59);
    lVar3 = param_1[0x19];
    *(undefined4 *)(lVar3 + 0x1228 + (longlong)iVar1 * 0xc) = 0;
    *(undefined8 *)(lVar3 + 0x122c + (longlong)iVar1 * 0xc) = 0x42c80000;
  }
  FUN_14000d9e0(param_1 + 0x53);
  FUN_14015a700(param_1 + 0x51);
  FUN_14000d9e0(param_1 + 0x4b);
  FUN_14015a780(param_1 + 0x49);
  FUN_1401de1e0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x3a0);
  }
  return param_1;
}

