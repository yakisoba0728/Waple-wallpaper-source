// Function: FUN_1402bfb74
// Addr: 1402bfb74
// Size: 587 bytes


undefined8 FUN_1402bfb74(short *param_1,undefined8 *param_2,undefined1 param_3)

{
  short sVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  ulonglong uVar9;
  
  psVar6 = (short *)0x0;
  if ((param_1 == (short *)0x0) || (param_2 == (undefined8 *)0x0)) {
LAB_1402bfd85:
    reset_buffers<>(param_2,param_3);
    puVar4 = (undefined4 *)FUN_1402caf34();
    *puVar4 = 0x16;
    FUN_1402cad8c();
    return 0x16;
  }
  puVar2 = (undefined2 *)*param_2;
  uVar5 = param_2[1];
  if (((puVar2 == (undefined2 *)0x0) != (uVar5 == 0)) ||
     ((((param_2[2] == 0) != (param_2[3] == 0) || ((param_2[4] == 0) != (param_2[5] == 0))) ||
      ((param_2[6] == 0) != (param_2[7] == 0))))) goto LAB_1402bfd85;
  lVar3 = 1;
  psVar7 = param_1;
  do {
    if (*psVar7 == 0) break;
    psVar7 = psVar7 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*psVar7 == 0x3a) {
    if (puVar2 != (undefined2 *)0x0) {
      if (uVar5 < 3) goto LAB_1402bfc4b;
      FUN_1402d9b20(puVar2,uVar5,param_1,2);
    }
    param_1 = psVar7 + 1;
  }
  else if (puVar2 != (undefined2 *)0x0) {
    *puVar2 = 0;
  }
  sVar1 = *param_1;
  psVar8 = param_1;
  psVar7 = psVar6;
  if (sVar1 == 0) {
LAB_1402bfcec:
    psVar7 = param_1;
    if ((undefined2 *)param_2[2] != (undefined2 *)0x0) {
      *(undefined2 *)param_2[2] = 0;
    }
  }
  else {
    do {
      if ((sVar1 == 0x2f) || (sVar1 == 0x5c)) {
        psVar7 = psVar8 + 1;
      }
      else if (sVar1 == 0x2e) {
        psVar6 = psVar8;
      }
      psVar8 = psVar8 + 1;
      sVar1 = *psVar8;
    } while (sVar1 != 0);
    if (psVar7 == (short *)0x0) goto LAB_1402bfcec;
    if (param_2[2] != 0) {
      uVar5 = param_2[3];
      if (uVar5 <= (ulonglong)((longlong)psVar7 - (longlong)param_1 >> 1)) goto LAB_1402bfc4b;
      FUN_1402d9b20();
    }
  }
  if ((psVar6 == (short *)0x0) || (psVar6 < psVar7)) {
    if (param_2[4] != 0) {
      uVar5 = param_2[5];
      if (uVar5 <= (ulonglong)((longlong)psVar8 - (longlong)psVar7 >> 1)) goto LAB_1402bfc4b;
      FUN_1402d9b20();
    }
    if ((undefined2 *)param_2[6] != (undefined2 *)0x0) {
      *(undefined2 *)param_2[6] = 0;
    }
  }
  else {
    if (param_2[4] != 0) {
      uVar5 = param_2[5];
      if (uVar5 <= (ulonglong)((longlong)psVar6 - (longlong)psVar7 >> 1)) goto LAB_1402bfc4b;
      FUN_1402d9b20();
    }
    if (param_2[6] != 0) {
      uVar5 = param_2[7];
      uVar9 = (longlong)psVar8 - (longlong)psVar6 >> 1;
      if (uVar5 <= uVar9) {
LAB_1402bfc4b:
        reset_buffers<>(param_2,CONCAT71((int7)(uVar5 >> 8),param_3));
        puVar4 = (undefined4 *)FUN_1402caf34();
        *puVar4 = 0x22;
        return 0x22;
      }
      FUN_1402d9b20(param_2[6],uVar5,psVar6,uVar9);
    }
  }
  return 0;
}

