// Function: FUN_14010f520
// Addr: 14010f520
// Size: 126 bytes


void FUN_14010f520(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(int *)(param_1 + 0x3b) != 0) {
    uVar1 = (*DAT_140426338)(param_1[0x3a]);
    (*DAT_1404268b0)(uVar1,0x12,0,0);
    if (*(int *)(param_1 + 0x3b) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(1);
    }
    iVar2 = func_0x000140291210();
    if (*(int *)(param_1 + 0x3b) == iVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(5);
    }
    uStack_18 = *(undefined4 *)(param_1 + 0x3a);
    uStack_14 = *(undefined4 *)((longlong)param_1 + 0x1d4);
    uStack_10 = *(undefined4 *)(param_1 + 0x3b);
    uStack_c = *(undefined4 *)((longlong)param_1 + 0x1dc);
    iVar2 = func_0x000140291220(&uStack_18,0);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(2);
    }
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
  }
  func_0x00014010b940(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014010f5a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}

