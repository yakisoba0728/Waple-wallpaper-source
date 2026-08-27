// Function: FUN_1402933c0
// Addr: 1402933c0
// Size: 163 bytes


void FUN_1402933c0(undefined8 param_1,longlong *param_2,byte *param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*param_3 & 1) == 0) && (iVar1 = *(int *)(param_3 + 0x18), iVar1 != 0)) {
    uVar2 = FUN_1402ba7a0(param_2,param_3 + 8);
    if ((*param_3 & 4) == 0) {
      FUN_1402933a0(param_1,param_4 + iVar1,uVar2);
    }
    else {
      FUN_1402933b0();
    }
  }
  else {
    FUN_1404210f0(param_1,param_2,(longlong)*(int *)(param_3 + 0x14));
    if (((*param_3 & 8) != 0) && (*param_2 != 0)) {
      (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      return;
    }
  }
  return;
}

