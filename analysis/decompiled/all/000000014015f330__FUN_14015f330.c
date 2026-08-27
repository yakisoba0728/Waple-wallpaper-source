// Function: FUN_14015f330
// Addr: 14015f330
// Size: 1140 bytes


undefined4 FUN_14015f330(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  byte bVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  float fVar20;
  undefined8 local_res8 [4];
  
  piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x1458);
  *piVar1 = *piVar1 + 1;
  lVar15 = *(longlong *)(param_1 + 8);
  lVar4 = *(longlong *)(param_1 + 0x108);
  puVar18 = *(undefined8 **)(param_1 + 0xf8);
  uVar19 = (((((ulonglong)*(byte *)(lVar15 + 0x1458) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)*(byte *)(lVar15 + 0x1459)) * 0x100000001b3 ^
            (ulonglong)*(byte *)(lVar15 + 0x145a)) * 0x100000001b3 ^
           (ulonglong)*(byte *)(lVar15 + 0x145b)) * 0x100000001b3;
  uVar14 = uVar19 & *(ulonglong *)(param_1 + 0x120);
  puVar12 = *(undefined8 **)(lVar4 + 8 + uVar14 * 0x10);
  if (puVar12 != puVar18) {
    iVar2 = *(int *)(puVar12 + 2);
    puVar18 = puVar12;
    while (puVar12 = puVar18, *(int *)(lVar15 + 0x1458) != iVar2) {
      if (puVar18 == *(undefined8 **)(lVar4 + uVar14 * 0x10)) goto LAB_14015f3fa;
      puVar18 = (undefined8 *)puVar18[1];
      iVar2 = *(int *)(puVar18 + 2);
    }
    goto LAB_14015f745;
  }
LAB_14015f3fa:
  if (*(longlong *)(param_1 + 0x100) == 0x2e8ba2e8ba2e8ba) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar12 = (undefined8 *)FUN_14028af20(0x58);
  *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(lVar15 + 0x1458);
  puVar12[10] = 0;
  fVar20 = (float)(*(longlong *)(param_1 + 0x100) + 1);
  uVar14 = *(ulonglong *)(param_1 + 0x128);
  if (*(float *)(param_1 + 0xf0) < fVar20 / (float)uVar14) {
    fVar20 = (float)FUN_140419fa0(fVar20 / *(float *)(param_1 + 0xf0));
    lVar15 = 0;
    if ((DAT_140492974 <= fVar20) && (fVar20 = fVar20 - DAT_140492974, fVar20 < DAT_140492974)) {
      lVar15 = -0x8000000000000000;
    }
    uVar16 = 8;
    if (8 < (ulonglong)((longlong)fVar20 + lVar15)) {
      uVar16 = (longlong)fVar20 + lVar15;
    }
    uVar17 = uVar14;
    if ((uVar14 < uVar16) && ((0x1ff < uVar14 || (uVar17 = uVar14 * 8, uVar14 * 8 < uVar16)))) {
      uVar17 = uVar16;
    }
    for (lVar15 = 0x3f; 0xfffffffffffffffU >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
    if ((ulonglong)(1L << ((byte)lVar15 & 0x3f)) < uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c2e0("invalid hash bucket count");
    }
    plVar10 = *(longlong **)(param_1 + 0xf8);
    uVar14 = uVar17 - 1 | 1;
    lVar15 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    bVar13 = (char)lVar15 + 1;
    lVar15 = 1L << (bVar13 & 0x3f);
    FUN_14004f190((longlong *)(param_1 + 0x108),2L << (bVar13 & 0x3f),plVar10);
    *(longlong *)(param_1 + 0x128) = lVar15;
    *(longlong *)(param_1 + 0x120) = lVar15 + -1;
    plVar11 = (longlong *)**(undefined8 **)(param_1 + 0xf8);
joined_r0x00014015f56e:
    if (plVar11 != plVar10) {
      lVar15 = *(longlong *)(param_1 + 0x108);
      plVar5 = (longlong *)*plVar11;
      uVar14 = *(ulonglong *)(param_1 + 0x120) &
               (((((ulonglong)*(byte *)(plVar11 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar11 + 0x11)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar11 + 0x12)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar11 + 0x13)) * 0x100000001b3;
      plVar6 = *(longlong **)(lVar15 + uVar14 * 0x10);
      if (plVar6 == plVar10) {
        *(longlong **)(lVar15 + uVar14 * 0x10) = plVar11;
        *(longlong **)(lVar15 + 8 + uVar14 * 0x10) = plVar11;
        plVar11 = plVar5;
      }
      else {
        plVar7 = *(longlong **)(lVar15 + 8 + uVar14 * 0x10);
        if ((int)plVar11[2] == (int)plVar7[2]) {
          plVar7 = (longlong *)*plVar7;
          if (plVar7 != plVar11) {
            plVar6 = (longlong *)plVar11[1];
            *plVar6 = (longlong)plVar5;
            puVar18 = (undefined8 *)plVar5[1];
            *puVar18 = plVar7;
            puVar8 = (undefined8 *)plVar7[1];
            *puVar8 = plVar11;
            plVar7[1] = (longlong)puVar18;
            plVar5[1] = (longlong)plVar6;
            plVar11[1] = (longlong)puVar8;
          }
          *(longlong **)(lVar15 + 8 + uVar14 * 0x10) = plVar11;
          plVar11 = plVar5;
        }
        else {
          do {
            if (plVar6 == plVar7) {
              plVar6 = (longlong *)plVar11[1];
              *plVar6 = (longlong)plVar5;
              puVar18 = (undefined8 *)plVar5[1];
              *puVar18 = plVar7;
              puVar8 = (undefined8 *)plVar7[1];
              *puVar8 = plVar11;
              plVar7[1] = (longlong)puVar18;
              plVar5[1] = (longlong)plVar6;
              plVar11[1] = (longlong)puVar8;
              *(longlong **)(lVar15 + uVar14 * 0x10) = plVar11;
              plVar11 = plVar5;
              goto joined_r0x00014015f56e;
            }
            plVar7 = (longlong *)plVar7[1];
          } while ((int)plVar11[2] != (int)plVar7[2]);
          lVar15 = *plVar7;
          plVar6 = (longlong *)plVar11[1];
          *plVar6 = (longlong)plVar5;
          plVar7 = (longlong *)plVar5[1];
          *plVar7 = lVar15;
          puVar18 = *(undefined8 **)(lVar15 + 8);
          *puVar18 = plVar11;
          *(longlong **)(lVar15 + 8) = plVar7;
          plVar5[1] = (longlong)plVar6;
          plVar11[1] = (longlong)puVar18;
          plVar11 = plVar5;
        }
      }
      goto joined_r0x00014015f56e;
    }
    local_res8[0] = 0;
    FUN_1400d26c0(local_res8);
    uVar14 = uVar19 & *(ulonglong *)(param_1 + 0x120);
    puVar18 = *(undefined8 **)(param_1 + 0xf8);
    puVar8 = *(undefined8 **)(*(longlong *)(param_1 + 0x108) + 8 + uVar14 * 0x10);
    if (puVar8 != puVar18) {
      iVar2 = *(int *)(puVar8 + 2);
      puVar18 = puVar8;
      while (*(int *)(puVar12 + 2) != iVar2) {
        if (puVar18 == *(undefined8 **)(*(longlong *)(param_1 + 0x108) + uVar14 * 0x10))
        goto LAB_14015f6c3;
        puVar18 = (undefined8 *)puVar18[1];
        iVar2 = *(int *)(puVar18 + 2);
      }
      puVar18 = (undefined8 *)*puVar18;
    }
  }
LAB_14015f6c3:
  puVar8 = (undefined8 *)puVar18[1];
  *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + 1;
  *puVar12 = puVar18;
  puVar12[1] = puVar8;
  *puVar8 = puVar12;
  puVar18[1] = puVar12;
  lVar15 = *(longlong *)(param_1 + 0x108);
  uVar19 = *(ulonglong *)(param_1 + 0x120) & uVar19;
  puVar9 = *(undefined8 **)(lVar15 + uVar19 * 0x10);
  if (puVar9 == *(undefined8 **)(param_1 + 0xf8)) {
    *(undefined8 **)(lVar15 + uVar19 * 0x10) = puVar12;
  }
  else {
    if (puVar9 == puVar18) {
      *(undefined8 **)(lVar15 + uVar19 * 0x10) = puVar12;
      goto LAB_14015f745;
    }
    if (*(undefined8 **)(lVar15 + 8 + uVar19 * 0x10) != puVar8) goto LAB_14015f745;
  }
  *(undefined8 **)(lVar15 + 8 + uVar19 * 0x10) = puVar12;
LAB_14015f745:
  FUN_1400cb010(puVar12 + 3,param_2);
  plVar10 = (longlong *)param_2[7];
  uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1458);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10,plVar10 != param_2);
    param_2[7] = 0;
  }
  return uVar3;
}

