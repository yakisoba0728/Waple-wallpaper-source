// Function: FUN_140327930
// Addr: 140327930
// Size: 100 bytes


void FUN_140327930(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar1 = *param_1;
  FUN_1402ef530(param_1[8]);
  iVar4 = FUN_1402f48d0(*(undefined8 *)(lVar1 + 0x2b8),param_2);
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

