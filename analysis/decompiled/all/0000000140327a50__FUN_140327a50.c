// Function: FUN_140327a50
// Addr: 140327a50
// Size: 187 bytes


int FUN_140327a50(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_res8;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x98);
  if (*(longlong *)(lVar1 + 0x78) == 0) {
    iVar3 = 0;
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(*(longlong *)(lVar1 + 0x2b8) + 0x78);
  }
  else {
    iVar3 = FUN_1402f2220(*(longlong *)(lVar1 + 0x2b8),&local_res8);
    if (iVar3 == 0) {
      *(undefined8 *)(param_1 + 0xf8) = local_res8;
    }
  }
  FUN_1402f0f20(**(undefined8 **)(*(longlong *)(param_1 + 0xf8) + 0xf0));
  FUN_1402f7f90(uVar2,*(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0xf0));
  *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0xf0) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0xf0) = *(undefined8 *)(param_1 + 0xf0);
  return iVar3;
}

