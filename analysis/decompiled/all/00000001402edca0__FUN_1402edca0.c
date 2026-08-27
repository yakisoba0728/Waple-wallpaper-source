// Function: FUN_1402edca0
// Addr: 1402edca0
// Size: 74 bytes


void FUN_1402edca0(int *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_1402bb760();
  if ((((*(byte *)(param_1 + 1) & 0x66) == 0) && (*param_1 == -0x1f928c9d)) && (iVar2 == 1)) {
    lVar1 = FUN_1402bbec0();
    *(int **)(lVar1 + 0x20) = param_1;
    lVar1 = FUN_1402bbec0();
    *(undefined8 *)(lVar1 + 0x28) = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_1402d3b24();
  }
  return;
}

