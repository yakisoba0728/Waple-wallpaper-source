// Function: FUN_1402bfc44
// Addr: 1402bfc44
// Size: 364 bytes


undefined8 FUN_1402bfc44(short *param_1,undefined8 *param_2,undefined1 param_3)

{
  short sVar1;
  undefined2 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  ulonglong uVar8;
  
  psVar5 = (short *)0x0;
  if ((param_1 == (short *)0x0) || (param_2 == (undefined8 *)0x0)) {
LAB_1402bfe55:
    reset_buffers<>(param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  puVar2 = (undefined2 *)*param_2;
  uVar4 = param_2[1];
  if (((puVar2 == (undefined2 *)0x0) != (uVar4 == 0)) ||
     ((((param_2[2] == 0) != (param_2[3] == 0) || ((param_2[4] == 0) != (param_2[5] == 0))) ||
      ((param_2[6] == 0) != (param_2[7] == 0))))) goto LAB_1402bfe55;
  lVar3 = 1;
  psVar6 = param_1;
  do {
    if (*psVar6 == 0) break;
    psVar6 = psVar6 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*psVar6 == 0x3a) {
    if (puVar2 != (undefined2 *)0x0) {
      if (uVar4 < 3) goto LAB_1402bfd1b;
      FUN_1402d9bf0(puVar2,uVar4,param_1,2);
    }
    param_1 = psVar6 + 1;
  }
  else if (puVar2 != (undefined2 *)0x0) {
    *puVar2 = 0;
  }
  sVar1 = *param_1;
  psVar7 = param_1;
  psVar6 = psVar5;
  if (sVar1 == 0) {
LAB_1402bfdbc:
    psVar6 = param_1;
    if ((undefined2 *)param_2[2] != (undefined2 *)0x0) {
      *(undefined2 *)param_2[2] = 0;
    }
  }
  else {
    do {
      if ((sVar1 == 0x2f) || (sVar1 == 0x5c)) {
        psVar6 = psVar7 + 1;
      }
      else if (sVar1 == 0x2e) {
        psVar5 = psVar7;
      }
      psVar7 = psVar7 + 1;
      sVar1 = *psVar7;
    } while (sVar1 != 0);
    if (psVar6 == (short *)0x0) goto LAB_1402bfdbc;
    if (param_2[2] != 0) {
      uVar4 = param_2[3];
      if (uVar4 <= (ulonglong)((longlong)psVar6 - (longlong)param_1 >> 1)) goto LAB_1402bfd1b;
      FUN_1402d9bf0();
    }
  }
  if ((psVar5 == (short *)0x0) || (psVar5 < psVar6)) {
    if (param_2[4] != 0) {
      uVar4 = param_2[5];
      if (uVar4 <= (ulonglong)((longlong)psVar7 - (longlong)psVar6 >> 1)) goto LAB_1402bfd1b;
      FUN_1402d9bf0();
    }
    if ((undefined2 *)param_2[6] != (undefined2 *)0x0) {
      *(undefined2 *)param_2[6] = 0;
    }
  }
  else {
    if (param_2[4] != 0) {
      uVar4 = param_2[5];
      if (uVar4 <= (ulonglong)((longlong)psVar5 - (longlong)psVar6 >> 1)) goto LAB_1402bfd1b;
      FUN_1402d9bf0();
    }
    if (param_2[6] != 0) {
      uVar4 = param_2[7];
      uVar8 = (longlong)psVar7 - (longlong)psVar5 >> 1;
      if (uVar4 <= uVar8) {
LAB_1402bfd1b:
        reset_buffers<>(param_2,CONCAT71((int7)(uVar4 >> 8),param_3));
                    /* WARNING: Subroutine does not return */
        FUN_1402cb004();
      }
      FUN_1402d9bf0(param_2[6],uVar4,psVar5,uVar8);
    }
  }
  return 0;
}

