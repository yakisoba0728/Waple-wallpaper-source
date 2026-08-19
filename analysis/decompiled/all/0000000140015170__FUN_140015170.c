// Function: FUN_140015170
// Addr: 140015170
// Size: 13 bytes


void FUN_140015170(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(int *)(param_1 + 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(1);
  }
  iVar2 = *(int *)(param_1 + 1);
  iVar1 = func_0x000140291210();
  if (iVar2 != iVar1) {
    uStack_18 = *(undefined4 *)param_1;
    uStack_14 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_10 = *(undefined4 *)(param_1 + 1);
    uStack_c = *(undefined4 *)((longlong)param_1 + 0xc);
    iVar2 = func_0x000140291220(&uStack_18,0);
    if (iVar2 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140290e00(5);
}

