// Function: FUN_140293310
// Addr: 140293310
// Size: 153 bytes


void FUN_140293310(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined **ppuVar5;
  undefined *local_40;
  undefined **ppuStack_38;
  
  if (param_3 != (undefined8 *)0x0) {
    *(undefined4 *)(param_3 + 1) = 1;
    *(undefined4 *)((longlong)param_3 + 0xc) = 1;
    *param_3 = &PTR_UNWIND_INFO_14029347f_SizeOfProlog_14042b1b0;
    param_3[0x15] = 0;
    *(undefined4 *)(param_3 + 2) = *param_2;
    *(uint *)((longlong)param_3 + 0x14) = param_2[1] | 1;
    param_3[3] = 0;
    param_3[4] = 0;
    uVar4 = param_2[6];
    *(uint *)(param_3 + 5) = uVar4;
    if (0xf < uVar4) {
      uVar4 = 0xf;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(param_3 + 6,param_2 + 8,(ulonglong)uVar4 * 8,param_4,0);
  }
  LOCK();
  DAT_1404dc388 = DAT_1404dc388 + 1;
  UNLOCK();
  local_40 = &DAT_1404dc390;
  ppuStack_38 = &PTR_DAT_1404dc380;
  FUN_140292f50(param_1,&local_40,0,param_4,1);
  ppuVar5 = ppuStack_38;
  if (ppuStack_38 != (undefined **)0x0) {
    LOCK();
    ppuVar1 = ppuStack_38 + 1;
    iVar3 = *(int *)ppuVar1;
    *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)PTR_FUN_140426bb8)(ppuStack_38);
      LOCK();
      piVar2 = (int *)((longlong)ppuVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)PTR_FUN_140426bb8)(ppuVar5);
        return;
      }
    }
  }
  return;
}

