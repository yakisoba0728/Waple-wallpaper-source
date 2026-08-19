// Function: FUN_140290fe0
// Addr: 140290fe0
// Size: 44 bytes


undefined8 FUN_140290fe0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + -1;
  *(undefined4 *)(param_2 + 0x48) = 0xffffffff;
  iVar1 = (*DAT_1404262b0)(param_1 + 8,param_2 + 0x10,0xffffffff,0);
  if (iVar1 != 0) {
    uVar2 = (*DAT_1404266f8)();
    *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
    *(undefined4 *)(param_2 + 0x48) = uVar2;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402c98b4();
}

