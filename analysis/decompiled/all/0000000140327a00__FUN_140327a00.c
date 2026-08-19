// Function: FUN_140327a00
// Addr: 140327a00
// Size: 1 bytes


void FUN_140327a00(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar1 = *param_1;
  func_0x0001402ef600(param_1[8]);
  iVar4 = func_0x0001402f49a0(*(undefined8 *)(lVar1 + 0x2b8),param_2);
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

