// Function: FUN_140032670
// Addr: 140032670
// Size: 747 bytes


undefined8 * FUN_140032670(undefined8 param_1,undefined8 *param_2,byte *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  float fVar11;
  
  uVar8 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar5 = *(undefined8 **)(DAT_1404e8bf8 + 8 + (DAT_1404e8c10 & uVar8) * 0x10);
  puVar9 = DAT_1404e8be8;
  if (puVar5 != DAT_1404e8be8) {
    iVar1 = *(int *)(puVar5 + 2);
    puVar9 = puVar5;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar9;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == *(undefined8 **)(DAT_1404e8bf8 + (DAT_1404e8c10 & uVar8) * 0x10)) break;
      puVar9 = (undefined8 *)puVar9[1];
      iVar1 = *(int *)(puVar9 + 2);
    }
  }
  if (DAT_1404e8bf0 == 0x222222222222222) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_14028af20(0x78);
  *(undefined4 *)(puVar5 + 2) = *(undefined4 *)param_3;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[6] = 0xf;
  puVar5[5] = 0;
  *(undefined1 *)(puVar5 + 3) = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0xf;
  *(undefined1 *)(puVar5 + 7) = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0xf;
  *(undefined1 *)(puVar5 + 0xb) = 0;
  uVar4 = DAT_1404e8c18;
  if (DAT_1404e8be0 < (float)(DAT_1404e8bf0 + 1) / (float)DAT_1404e8c18) {
    fVar11 = (float)FUN_140419fa0((float)(DAT_1404e8bf0 + 1) / DAT_1404e8be0);
    lVar6 = 0;
    if ((DAT_140492974 <= fVar11) && (fVar11 = fVar11 - DAT_140492974, fVar11 < DAT_140492974)) {
      lVar6 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)fVar11 + lVar6)) {
      uVar7 = (longlong)fVar11 + lVar6;
    }
    uVar10 = uVar4;
    if ((uVar4 < uVar7) && ((0x1ff < uVar4 || (uVar10 = uVar4 * 8, uVar4 * 8 < uVar7)))) {
      uVar10 = uVar7;
    }
    FUN_140038600(uVar7,uVar10);
    puVar2 = *(undefined8 **)(DAT_1404e8bf8 + 8 + (DAT_1404e8c10 & uVar8) * 0x10);
    puVar9 = DAT_1404e8be8;
    if (puVar2 != DAT_1404e8be8) {
      iVar1 = *(int *)(puVar2 + 2);
      puVar9 = puVar2;
      while (*(int *)(puVar5 + 2) != iVar1) {
        if (puVar9 == *(undefined8 **)(DAT_1404e8bf8 + (DAT_1404e8c10 & uVar8) * 0x10))
        goto LAB_1400328be;
        puVar9 = (undefined8 *)puVar9[1];
        iVar1 = *(int *)(puVar9 + 2);
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_1400328be:
  puVar2 = (undefined8 *)puVar9[1];
  DAT_1404e8bf0 = DAT_1404e8bf0 + 1;
  *puVar5 = puVar9;
  puVar5[1] = puVar2;
  *puVar2 = puVar5;
  puVar9[1] = puVar5;
  lVar6 = DAT_1404e8bf8;
  uVar8 = DAT_1404e8c10 & uVar8;
  puVar3 = *(undefined8 **)(DAT_1404e8bf8 + uVar8 * 0x10);
  if (puVar3 == DAT_1404e8be8) {
    *(undefined8 **)(DAT_1404e8bf8 + uVar8 * 0x10) = puVar5;
  }
  else {
    if (puVar3 == puVar9) {
      *(undefined8 **)(DAT_1404e8bf8 + uVar8 * 0x10) = puVar5;
      *param_2 = puVar5;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(undefined8 **)(DAT_1404e8bf8 + 8 + uVar8 * 0x10) != puVar2) goto LAB_140032935;
  }
  *(undefined8 **)(lVar6 + 8 + uVar8 * 0x10) = puVar5;
LAB_140032935:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

