// Function: FUN_1402deb90
// Addr: 1402deb90
// Size: 2 bytes


undefined8 FUN_1402deb90(uint param_1,short *param_2,ulonglong param_3,uint param_4,byte param_5)

{
  ulonglong uVar1;
  short *psVar2;
  short sVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  short *psVar6;
  short *psVar7;
  
  if ((param_2 != (short *)0x0) && (param_3 != 0)) {
    *param_2 = 0;
    if (param_3 <= (ulonglong)param_5 + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_1402cb004();
    }
    if (param_4 - 2 < 0x23) {
      psVar6 = param_2;
      if (param_5 != 0) {
        *param_2 = 0x2d;
        psVar6 = param_2 + 1;
        param_1 = -param_1;
      }
      uVar5 = (ulonglong)(param_5 != 0);
      uVar4 = (ulonglong)param_1;
      psVar2 = psVar6;
      do {
        psVar7 = psVar2;
        uVar1 = uVar4 / param_4;
        uVar4 = uVar4 % (ulonglong)param_4;
        sVar3 = 0x57;
        if ((uint)uVar4 < 10) {
          sVar3 = 0x30;
        }
        uVar5 = uVar5 + 1;
        *psVar7 = sVar3 + (short)uVar4;
      } while (((int)uVar1 != 0) && (uVar4 = uVar1, psVar2 = psVar7 + 1, uVar5 < param_3));
      if (param_3 <= uVar5) {
        *param_2 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_1402cb004();
      }
      psVar7[1] = 0;
      do {
        sVar3 = *psVar7;
        *psVar7 = *psVar6;
        psVar7 = psVar7 + -1;
        *psVar6 = sVar3;
        psVar6 = psVar6 + 1;
      } while (psVar6 < psVar7);
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402cb004();
}

