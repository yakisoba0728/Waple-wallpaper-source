// Function: FUN_140293490
// Addr: 140293490
// Size: 121 bytes


void FUN_140293490(undefined8 param_1,undefined8 param_2,byte *param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*param_3 & 1) == 0) && (iVar1 = *(int *)(param_3 + 0x18), iVar1 != 0)) {
    uVar2 = FUN_1402ba870(param_2,param_3 + 8);
    if ((*param_3 & 4) == 0) {
      FUN_140293470(param_1,param_4 + iVar1,uVar2);
    }
    else {
      func_0x000140293480();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(param_1,param_2,(longlong)*(int *)(param_3 + 0x14));
}

