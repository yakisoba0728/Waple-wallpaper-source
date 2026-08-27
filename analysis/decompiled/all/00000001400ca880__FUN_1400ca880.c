// Function: FUN_1400ca880
// Addr: 1400ca880
// Size: 1080 bytes


undefined8 * FUN_1400ca880(float *param_1,undefined8 *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  byte bVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  float fVar20;
  undefined8 local_res8;
  undefined8 *local_res10;
  
  uVar3 = *param_3;
  puVar18 = *(undefined8 **)(param_1 + 2);
  uVar19 = (((((ulonglong)(byte)uVar3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)(uVar3 >> 8) & 0xff) * 0x100000001b3 ^ (ulonglong)(uVar3 >> 0x10 & 0xff)) *
            0x100000001b3 ^ (ulonglong)(uVar3 >> 0x18)) * 0x100000001b3;
  puVar12 = *(undefined8 **)
             (*(longlong *)(param_1 + 6) + 8 + (uVar19 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  if (puVar12 == puVar18) {
LAB_1400ca955:
    local_res10 = param_2;
    if (*(longlong *)(param_1 + 4) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c2e0("unordered_map/set too long");
    }
    puVar12 = (undefined8 *)FUN_14028af20(0x18);
    *(uint *)(puVar12 + 2) = *param_3;
    uVar13 = *(ulonglong *)(param_1 + 0xe);
    if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar13) {
      fVar20 = (float)FUN_140419fa0((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
      lVar15 = 0;
      if ((DAT_140492974 <= fVar20) && (fVar20 = fVar20 - DAT_140492974, fVar20 < DAT_140492974)) {
        lVar15 = -0x8000000000000000;
      }
      uVar16 = 8;
      if (8 < (ulonglong)((longlong)fVar20 + lVar15)) {
        uVar16 = (longlong)fVar20 + lVar15;
      }
      uVar17 = uVar13;
      if ((uVar13 < uVar16) && ((0x1ff < uVar13 || (uVar17 = uVar13 * 8, uVar13 * 8 < uVar16)))) {
        uVar17 = uVar16;
      }
      for (lVar15 = 0x3f; 0xfffffffffffffffU >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
      if ((ulonglong)(1L << ((byte)lVar15 & 0x3f)) < uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2e0("invalid hash bucket count");
      }
      plVar4 = *(longlong **)(param_1 + 2);
      uVar13 = uVar17 - 1 | 1;
      lVar15 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      bVar14 = (char)lVar15 + 1;
      lVar15 = 1L << (bVar14 & 0x3f);
      FUN_140011f50(param_1 + 6,2L << (bVar14 & 0x3f),plVar4);
      *(longlong *)(param_1 + 0xe) = lVar15;
      *(longlong *)(param_1 + 0xc) = lVar15 + -1;
      plVar10 = (longlong *)**(undefined8 **)(param_1 + 2);
joined_r0x0001400caaa6:
      if (plVar10 != plVar4) {
        uVar3 = *(uint *)(plVar10 + 2);
        lVar15 = *(longlong *)(param_1 + 6);
        plVar5 = (longlong *)*plVar10;
        uVar13 = *(ulonglong *)(param_1 + 0xc) &
                 (((((ulonglong)(uVar3 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)(uVar3 >> 8 & 0xff)) * 0x100000001b3 ^
                  (ulonglong)(uVar3 >> 0x10 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar3 >> 0x18)) *
                 0x100000001b3;
        plVar6 = *(longlong **)(lVar15 + uVar13 * 0x10);
        param_2 = local_res10;
        if (plVar6 == plVar4) {
          *(longlong **)(lVar15 + uVar13 * 0x10) = plVar10;
          *(longlong **)(lVar15 + 8 + uVar13 * 0x10) = plVar10;
          plVar10 = plVar5;
        }
        else {
          plVar7 = *(longlong **)(lVar15 + 8 + uVar13 * 0x10);
          if (uVar3 == *(uint *)(plVar7 + 2)) {
            plVar7 = (longlong *)*plVar7;
            if (plVar7 != plVar10) {
              plVar6 = (longlong *)plVar10[1];
              *plVar6 = (longlong)plVar5;
              puVar18 = (undefined8 *)plVar5[1];
              *puVar18 = plVar7;
              puVar8 = (undefined8 *)plVar7[1];
              *puVar8 = plVar10;
              plVar7[1] = (longlong)puVar18;
              plVar5[1] = (longlong)plVar6;
              plVar10[1] = (longlong)puVar8;
            }
            *(longlong **)(lVar15 + 8 + uVar13 * 0x10) = plVar10;
            plVar10 = plVar5;
          }
          else {
            do {
              if (plVar6 == plVar7) {
                plVar6 = (longlong *)plVar10[1];
                *plVar6 = (longlong)plVar5;
                puVar18 = (undefined8 *)plVar5[1];
                *puVar18 = plVar7;
                puVar8 = (undefined8 *)plVar7[1];
                *puVar8 = plVar10;
                plVar7[1] = (longlong)puVar18;
                plVar5[1] = (longlong)plVar6;
                plVar10[1] = (longlong)puVar8;
                *(longlong **)(lVar15 + uVar13 * 0x10) = plVar10;
                plVar10 = plVar5;
                goto joined_r0x0001400caaa6;
              }
              plVar7 = (longlong *)plVar7[1];
            } while (uVar3 != *(uint *)(plVar7 + 2));
            lVar15 = *plVar7;
            plVar6 = (longlong *)plVar10[1];
            *plVar6 = (longlong)plVar5;
            plVar7 = (longlong *)plVar5[1];
            *plVar7 = lVar15;
            puVar18 = *(undefined8 **)(lVar15 + 8);
            *puVar18 = plVar10;
            *(longlong **)(lVar15 + 8) = plVar7;
            plVar5[1] = (longlong)plVar6;
            plVar10[1] = (longlong)puVar18;
            plVar10 = plVar5;
          }
        }
        goto joined_r0x0001400caaa6;
      }
      local_res8 = 0;
      FUN_1400cd820(&local_res8);
      puVar18 = *(undefined8 **)(param_1 + 2);
      puVar8 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + 8 + (uVar19 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      if (puVar8 != puVar18) {
        iVar2 = *(int *)(puVar8 + 2);
        puVar18 = puVar8;
        while (*(int *)(puVar12 + 2) != iVar2) {
          if (puVar18 ==
              *(undefined8 **)
               (*(longlong *)(param_1 + 6) + (uVar19 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
          goto LAB_1400cac11;
          puVar18 = (undefined8 *)puVar18[1];
          iVar2 = *(int *)(puVar18 + 2);
        }
        puVar18 = (undefined8 *)*puVar18;
      }
    }
LAB_1400cac11:
    puVar8 = (undefined8 *)puVar18[1];
    *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
    *puVar12 = puVar18;
    puVar12[1] = puVar8;
    *puVar8 = puVar12;
    puVar18[1] = puVar12;
    lVar15 = *(longlong *)(param_1 + 6);
    uVar19 = *(ulonglong *)(param_1 + 0xc) & uVar19;
    puVar9 = *(undefined8 **)(lVar15 + uVar19 * 0x10);
    if (puVar9 == *(undefined8 **)(param_1 + 2)) {
      *(undefined8 **)(lVar15 + uVar19 * 0x10) = puVar12;
      *(undefined8 **)(lVar15 + 8 + uVar19 * 0x10) = puVar12;
      uVar11 = 1;
    }
    else if (puVar9 == puVar18) {
      *(undefined8 **)(lVar15 + uVar19 * 0x10) = puVar12;
      uVar11 = 1;
    }
    else {
      if (*(undefined8 **)(lVar15 + 8 + uVar19 * 0x10) == puVar8) {
        *(undefined8 **)(lVar15 + 8 + uVar19 * 0x10) = puVar12;
      }
      uVar11 = 1;
    }
  }
  else {
    uVar1 = *(uint *)(puVar12 + 2);
    puVar18 = puVar12;
    while (uVar3 != uVar1) {
      if (puVar18 ==
          *(undefined8 **)
           (*(longlong *)(param_1 + 6) + (uVar19 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      goto LAB_1400ca955;
      puVar18 = (undefined8 *)puVar18[1];
      uVar1 = *(uint *)(puVar18 + 2);
    }
    uVar11 = 0;
    puVar12 = puVar18;
  }
  *param_2 = puVar12;
  *(undefined1 *)(param_2 + 1) = uVar11;
  return param_2;
}

