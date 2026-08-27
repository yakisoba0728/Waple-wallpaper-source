// Function: FUN_1400cb3b0
// Addr: 1400cb3b0
// Size: 639 bytes


undefined8 * FUN_1400cb3b0(float *param_1,undefined8 *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  float fVar13;
  
  uVar3 = *param_3;
  puVar11 = *(undefined8 **)(param_1 + 2);
  uVar12 = (((((ulonglong)(byte)uVar3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)(uVar3 >> 8) & 0xff) * 0x100000001b3 ^ (ulonglong)(uVar3 >> 0x10 & 0xff)) *
            0x100000001b3 ^ (ulonglong)(uVar3 >> 0x18)) * 0x100000001b3;
  puVar7 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar12 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  if (puVar7 != puVar11) {
    uVar1 = *(uint *)(puVar7 + 2);
    puVar11 = puVar7;
    while( true ) {
      if (uVar3 == uVar1) {
        *param_2 = puVar11;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar11 ==
          *(undefined8 **)
           (*(longlong *)(param_1 + 6) + (uVar12 & *(ulonglong *)(param_1 + 0xc)) * 0x10)) break;
      puVar11 = (undefined8 *)puVar11[1];
      uVar1 = *(uint *)(puVar11 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar7 = (undefined8 *)FUN_14028af20(0x18);
  *(uint *)(puVar7 + 2) = *param_3;
  uVar4 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar4) {
    fVar13 = (float)FUN_140419fa0((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar8 = 0;
    if ((DAT_140492974 <= fVar13) && (fVar13 = fVar13 - DAT_140492974, fVar13 < DAT_140492974)) {
      lVar8 = -0x8000000000000000;
    }
    uVar9 = 8;
    if (8 < (ulonglong)((longlong)fVar13 + lVar8)) {
      uVar9 = (longlong)fVar13 + lVar8;
    }
    uVar10 = uVar4;
    if ((uVar4 < uVar9) && ((0x1ff < uVar4 || (uVar10 = uVar4 * 8, uVar4 * 8 < uVar9)))) {
      uVar10 = uVar9;
    }
    FUN_1400cd5a0(param_1,uVar10);
    puVar11 = *(undefined8 **)(param_1 + 2);
    puVar5 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar12 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    if (puVar5 != puVar11) {
      iVar2 = *(int *)(puVar5 + 2);
      puVar11 = puVar5;
      while (*(int *)(puVar7 + 2) != iVar2) {
        if (puVar11 ==
            *(undefined8 **)
             (*(longlong *)(param_1 + 6) + (uVar12 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
        goto LAB_1400cb5b1;
        puVar11 = (undefined8 *)puVar11[1];
        iVar2 = *(int *)(puVar11 + 2);
      }
      puVar11 = (undefined8 *)*puVar11;
    }
  }
LAB_1400cb5b1:
  puVar5 = (undefined8 *)puVar11[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar7 = puVar11;
  puVar7[1] = puVar5;
  *puVar5 = puVar7;
  puVar11[1] = puVar7;
  lVar8 = *(longlong *)(param_1 + 6);
  uVar12 = *(ulonglong *)(param_1 + 0xc) & uVar12;
  puVar6 = *(undefined8 **)(lVar8 + uVar12 * 0x10);
  if (puVar6 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar8 + uVar12 * 0x10) = puVar7;
  }
  else {
    if (puVar6 == puVar11) {
      *(undefined8 **)(lVar8 + uVar12 * 0x10) = puVar7;
      *param_2 = puVar7;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(undefined8 **)(lVar8 + 8 + uVar12 * 0x10) != puVar5) goto LAB_1400cb611;
  }
  *(undefined8 **)(lVar8 + 8 + uVar12 * 0x10) = puVar7;
LAB_1400cb611:
  *param_2 = puVar7;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

