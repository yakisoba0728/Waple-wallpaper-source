// Function: FUN_140113cb0
// Addr: 140113cb0
// Size: 146 bytes


void FUN_140113cb0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(int *)(param_1 + 0x1d8) != 0) {
    uVar1 = (*DAT_140426338)(*(undefined8 *)(param_1 + 0x1d0));
    (*DAT_1404268b0)(uVar1,0x12,0,0);
    if (*(int *)(param_1 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(1);
    }
    iVar2 = func_0x000140291210();
    if (*(int *)(param_1 + 0x1d8) == iVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(5);
    }
    local_18 = *(undefined4 *)(param_1 + 0x1d0);
    uStack_14 = *(undefined4 *)(param_1 + 0x1d4);
    uStack_10 = *(undefined4 *)(param_1 + 0x1d8);
    uStack_c = *(undefined4 *)(param_1 + 0x1dc);
    iVar2 = func_0x000140291220(&local_18,0);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(2);
    }
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  return;
}

