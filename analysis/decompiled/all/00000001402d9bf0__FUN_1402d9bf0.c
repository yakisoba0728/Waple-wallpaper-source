// Function: FUN_1402d9bf0
// Addr: 1402d9bf0
// Size: 54 bytes


undefined4 FUN_1402d9bf0(short *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  short sVar1;
  longlong lVar2;
  short *psVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto UNWIND_INFO_1402d9c28_UnwindCodes_19__UnwindOpCode;
    }
  }
  else if (param_1 == (short *)0x0) goto UNWIND_INFO_1402d9c28_UnwindCodes_19__UnwindOpCode;
  if (param_2 != 0) {
    if (param_4 == 0) {
      *param_1 = 0;
      return 0;
    }
    if (param_3 != 0) {
      psVar3 = param_1;
      lVar4 = param_2;
      lVar2 = param_4;
      if (param_4 == -1) {
        do {
          sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar3);
          *psVar3 = sVar1;
          psVar3 = psVar3 + 1;
          if (sVar1 == 0) {
            return 0;
          }
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        lVar4 = 0;
      }
      else {
        do {
          lVar5 = lVar2;
          sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar3);
          *psVar3 = sVar1;
          psVar3 = psVar3 + 1;
          if (sVar1 == 0) {
            return 0;
          }
          lVar4 = lVar4 + -1;
        } while ((lVar4 != 0) && (lVar2 = lVar5 + -1, lVar5 + -1 != 0));
        lVar2 = lVar5 + -1;
        if (lVar4 == 0) {
          lVar2 = lVar5;
        }
        if (lVar2 == 0) {
          *psVar3 = 0;
        }
      }
      if (lVar4 != 0) {
        return 0;
      }
      if (param_4 != -1) {
        *param_1 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_1402cb004();
      }
      param_1[param_2 + -1] = 0;
      return 0x50;
    }
    *param_1 = 0;
  }
UNWIND_INFO_1402d9c28_UnwindCodes_19__UnwindOpCode:
                    /* WARNING: Subroutine does not return */
  FUN_1402cb004();
}

