// Function: FUN_140078250
// Addr: 140078250
// Size: 1113 bytes


undefined8 * FUN_140078250(float *param_1,undefined8 *param_2,byte *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  byte bVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  float fVar17;
  
  puVar15 = *(undefined8 **)(param_1 + 2);
  uVar16 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]
                 ) * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3])
               * 0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
             0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
           0x100000001b3;
  puVar9 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar16 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  if (puVar9 == puVar15) {
LAB_140078341:
    if (*(longlong *)(param_1 + 4) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c2e0("unordered_map/set too long");
    }
    puVar9 = (undefined8 *)FUN_14028af20(0x18);
    puVar9[2] = *(undefined8 *)param_3;
    uVar10 = *(ulonglong *)(param_1 + 0xe);
    if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar10) {
      fVar17 = (float)FUN_140419fa0((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
      lVar12 = 0;
      if ((DAT_140492974 <= fVar17) && (fVar17 = fVar17 - DAT_140492974, fVar17 < DAT_140492974)) {
        lVar12 = -0x8000000000000000;
      }
      uVar13 = 8;
      if (8 < (ulonglong)((longlong)fVar17 + lVar12)) {
        uVar13 = (longlong)fVar17 + lVar12;
      }
      uVar14 = uVar10;
      if ((uVar10 < uVar13) && ((0x1ff < uVar10 || (uVar14 = uVar10 * 8, uVar10 * 8 < uVar13)))) {
        uVar14 = uVar13;
      }
      for (lVar12 = 0x3f; 0xfffffffffffffffU >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
      if ((ulonglong)(1L << ((byte)lVar12 & 0x3f)) < uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2e0("invalid hash bucket count");
      }
      plVar1 = *(longlong **)(param_1 + 2);
      uVar10 = uVar14 - 1 | 1;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      bVar11 = (char)lVar12 + 1;
      lVar12 = 1L << (bVar11 & 0x3f);
      FUN_14004f190(param_1 + 6,2L << (bVar11 & 0x3f),plVar1);
      *(longlong *)(param_1 + 0xe) = lVar12;
      *(longlong *)(param_1 + 0xc) = lVar12 + -1;
      plVar7 = (longlong *)**(undefined8 **)(param_1 + 2);
joined_r0x000140078494:
      if (plVar7 != plVar1) {
        lVar12 = *(longlong *)(param_1 + 6);
        plVar2 = (longlong *)*plVar7;
        uVar10 = *(ulonglong *)(param_1 + 0xc) &
                 (((((((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar7 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar7 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar7 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3;
        plVar3 = *(longlong **)(lVar12 + uVar10 * 0x10);
        if (plVar3 == plVar1) {
          *(longlong **)(lVar12 + uVar10 * 0x10) = plVar7;
          *(longlong **)(lVar12 + 8 + uVar10 * 0x10) = plVar7;
          plVar7 = plVar2;
        }
        else {
          plVar4 = *(longlong **)(lVar12 + 8 + uVar10 * 0x10);
          if (plVar7[2] == plVar4[2]) {
            plVar4 = (longlong *)*plVar4;
            if (plVar4 != plVar7) {
              plVar3 = (longlong *)plVar7[1];
              *plVar3 = (longlong)plVar2;
              puVar15 = (undefined8 *)plVar2[1];
              *puVar15 = plVar4;
              puVar5 = (undefined8 *)plVar4[1];
              *puVar5 = plVar7;
              plVar4[1] = (longlong)puVar15;
              plVar2[1] = (longlong)plVar3;
              plVar7[1] = (longlong)puVar5;
            }
            *(longlong **)(lVar12 + 8 + uVar10 * 0x10) = plVar7;
            plVar7 = plVar2;
          }
          else {
            do {
              if (plVar3 == plVar4) {
                plVar3 = (longlong *)plVar7[1];
                *plVar3 = (longlong)plVar2;
                puVar15 = (undefined8 *)plVar2[1];
                *puVar15 = plVar4;
                puVar5 = (undefined8 *)plVar4[1];
                *puVar5 = plVar7;
                plVar4[1] = (longlong)puVar15;
                plVar2[1] = (longlong)plVar3;
                plVar7[1] = (longlong)puVar5;
                *(longlong **)(lVar12 + uVar10 * 0x10) = plVar7;
                plVar7 = plVar2;
                goto joined_r0x000140078494;
              }
              plVar4 = (longlong *)plVar4[1];
            } while (plVar7[2] != plVar4[2]);
            lVar12 = *plVar4;
            plVar3 = (longlong *)plVar7[1];
            *plVar3 = (longlong)plVar2;
            plVar4 = (longlong *)plVar2[1];
            *plVar4 = lVar12;
            puVar15 = *(undefined8 **)(lVar12 + 8);
            *puVar15 = plVar7;
            *(longlong **)(lVar12 + 8) = plVar4;
            plVar2[1] = (longlong)plVar3;
            plVar7[1] = (longlong)puVar15;
            plVar7 = plVar2;
          }
        }
        goto joined_r0x000140078494;
      }
      puVar15 = *(undefined8 **)(param_1 + 2);
      puVar5 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + 8 + (uVar16 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      if (puVar5 != puVar15) {
        lVar12 = puVar5[2];
        puVar15 = puVar5;
        while (puVar9[2] != lVar12) {
          if (puVar15 ==
              *(undefined8 **)
               (*(longlong *)(param_1 + 6) + (uVar16 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
          goto LAB_140078602;
          puVar15 = (undefined8 *)puVar15[1];
          lVar12 = puVar15[2];
        }
        puVar15 = (undefined8 *)*puVar15;
      }
    }
LAB_140078602:
    puVar5 = (undefined8 *)puVar15[1];
    *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
    *puVar9 = puVar15;
    puVar9[1] = puVar5;
    *puVar5 = puVar9;
    puVar15[1] = puVar9;
    lVar12 = *(longlong *)(param_1 + 6);
    uVar16 = *(ulonglong *)(param_1 + 0xc) & uVar16;
    puVar6 = *(undefined8 **)(lVar12 + uVar16 * 0x10);
    if (puVar6 == *(undefined8 **)(param_1 + 2)) {
      *(undefined8 **)(lVar12 + uVar16 * 0x10) = puVar9;
      *(undefined8 **)(lVar12 + 8 + uVar16 * 0x10) = puVar9;
      uVar8 = 1;
    }
    else if (puVar6 == puVar15) {
      *(undefined8 **)(lVar12 + uVar16 * 0x10) = puVar9;
      uVar8 = 1;
    }
    else {
      if (*(undefined8 **)(lVar12 + 8 + uVar16 * 0x10) == puVar5) {
        *(undefined8 **)(lVar12 + 8 + uVar16 * 0x10) = puVar9;
      }
      uVar8 = 1;
    }
  }
  else {
    lVar12 = puVar9[2];
    puVar15 = puVar9;
    while (*(longlong *)param_3 != lVar12) {
      if (puVar15 ==
          *(undefined8 **)
           (*(longlong *)(param_1 + 6) + (uVar16 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      goto LAB_140078341;
      puVar15 = (undefined8 *)puVar15[1];
      lVar12 = puVar15[2];
    }
    uVar8 = 0;
    puVar9 = puVar15;
  }
  *param_2 = puVar9;
  *(undefined1 *)(param_2 + 1) = uVar8;
  return param_2;
}

