// Function: FUN_1403279a0
// Addr: 1403279a0
// Size: 98 bytes


void FUN_1403279a0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar1 = *param_1;
  FUN_1402ef530(param_1[8]);
  iVar4 = FUN_1402f4cb0(*(undefined8 *)(lVar1 + 0x2b8),param_2);
  if (iVar4 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x2b8) + 0x80);
    lVar2 = *(longlong *)(lVar1 + 0x20);
    param_1[3] = *(longlong *)(lVar1 + 0x18);
    param_1[4] = lVar2;
    uVar3 = *(undefined8 *)(lVar1 + 0x2c);
    *(undefined8 *)((longlong)param_1 + 0x24) = *(undefined8 *)(lVar1 + 0x24);
    *(undefined8 *)((longlong)param_1 + 0x2c) = uVar3;
  }
  return;
}

