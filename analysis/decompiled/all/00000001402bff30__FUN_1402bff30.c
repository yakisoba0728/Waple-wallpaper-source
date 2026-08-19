// Function: FUN_1402bff30
// Addr: 1402bff30
// Size: 80 bytes


undefined8 FUN_1402bff30(short *param_1,longlong param_2,short *param_3,longlong param_4)

{
  short sVar1;
  short *psVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_1402bff7b;
    }
  }
  else if (param_1 == (short *)0x0) goto LAB_1402bff7b;
  if (param_2 != 0) {
    psVar2 = param_1;
    lVar3 = param_2;
    if ((param_4 == 0) || (param_3 != (short *)0x0)) {
      do {
        if (*psVar2 == 0) {
          lVar4 = param_4;
          if (param_4 != -1) goto joined_r0x0001402bffec;
          lVar4 = (longlong)param_3 - (longlong)psVar2;
          goto code_r0x0001402bffd0;
        }
        lVar3 = lVar3 + -1;
        psVar2 = psVar2 + 1;
      } while (lVar3 != 0);
      *param_1 = 0;
    }
    else {
      *param_1 = 0;
    }
  }
LAB_1402bff7b:
                    /* WARNING: Subroutine does not return */
  FUN_1402cb004();
joined_r0x0001402bffec:
  if (lVar4 == 0) goto code_r0x0001402c0014;
  sVar1 = *param_3;
  param_3 = param_3 + 1;
  *psVar2 = sVar1;
  psVar2 = psVar2 + 1;
  if (sVar1 == 0) {
    return 0;
  }
  lVar3 = lVar3 + -1;
  if (lVar3 == 0) goto code_r0x0001402c0014;
  lVar4 = lVar4 + -1;
  goto joined_r0x0001402bffec;
code_r0x0001402c0014:
  if (lVar4 == 0) {
    *psVar2 = 0;
  }
  goto code_r0x0001402c001d;
  while (lVar3 = lVar3 + -1, lVar3 != 0) {
code_r0x0001402bffd0:
    sVar1 = *(short *)(lVar4 + (longlong)psVar2);
    *psVar2 = sVar1;
    psVar2 = psVar2 + 1;
    if (sVar1 == 0) break;
  }
code_r0x0001402c001d:
  if (lVar3 != 0) {
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

