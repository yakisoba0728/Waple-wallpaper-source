// Function: FUN_14010fd60
// Addr: 14010fd60
// Size: 224 bytes


void FUN_14010fd60(longlong param_1,WPARAM param_2)

{
  int iVar1;
  BOOL BVar2;
  undefined8 uVar3;
  ULONG_PTR local_res8;
  undefined1 local_38 [48];
  
  iVar1 = FUN_140290d80(param_1 + 0x3d8);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x424) != 0x7fffffff) {
    uVar3 = FUN_140085090(local_38,param_2);
    FUN_14010c380(param_1,uVar3);
    FUN_140290ea0(param_1 + 0x3d8);
    BVar2 = IsWindow(*(HWND *)(param_1 + 0x1c8));
    if (BVar2 != 0) {
      local_res8 = 0;
      SendMessageTimeoutW(*(HWND *)(param_1 + 0x1c8),0x466,param_2,0,1,0,&local_res8);
    }
    FUN_140085440(param_2);
    return;
  }
  *(undefined4 *)(param_1 + 0x424) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

