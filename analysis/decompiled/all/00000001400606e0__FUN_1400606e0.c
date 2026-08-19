// Function: FUN_1400606e0
// Addr: 1400606e0
// Size: 114 bytes


void FUN_1400606e0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  int iStack_11c;
  longlong local_118;
  undefined1 local_110 [8];
  uint auStack_108 [14];
  longlong alStack_d0 [8];
  longlong local_90;
  
  FUN_140049960(&local_118,param_1,0x30);
  if (local_90 != 0) {
    FUN_14007ae70(&local_118,param_2,param_3);
    lVar1 = FUN_14004c490(local_110);
    if (lVar1 == 0) {
      lVar1 = (longlong)*(int *)(local_118 + 4);
      uVar2 = 6;
      if (*(longlong *)((longlong)alStack_d0 + lVar1) != 0) {
        uVar2 = 2;
      }
      func_0x000140013c20(local_110 + lVar1 + -8,uVar2 | *(uint *)((longlong)auStack_108 + lVar1),0)
      ;
    }
  }
  *(undefined **)(local_110 + (longlong)*(int *)(local_118 + 4) + -8) = &DAT_140475ed8;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0xa8;
                    /* WARNING: Subroutine does not return */
  FUN_14004a860(local_110);
}

