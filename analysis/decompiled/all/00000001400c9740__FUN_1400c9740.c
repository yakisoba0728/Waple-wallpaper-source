// Function: FUN_1400c9740
// Addr: 1400c9740
// Size: 2671 bytes


ulonglong FUN_1400c9740(undefined8 param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte bVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  float fVar19;
  undefined8 local_res8;
  
  uVar12 = 0;
  local_res8 = param_1;
  iVar8 = FUN_140290d80(&DAT_1404df788);
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (DAT_1404df7d4 == 0x7fffffff) {
    DAT_1404df7d4 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  uVar9 = 0;
LAB_1400c97a0:
  uVar18 = (ulonglong)uVar9;
  if (*(uint *)(PTR_DAT_1404df780 + uVar18 * 4) < param_2) goto code_r0x0001400c97a9;
  if ((&DAT_1404df840)[uVar18 * 5] == 0) {
    if (4000000000 < DAT_1404df7d8) {
      lVar14 = 0;
      do {
        if ((&DAT_1404df840)[lVar14 * 5] != 0) {
          while( true ) {
            DAT_1404df7d8 = DAT_1404df7d8 - *(int *)(PTR_DAT_1404df780 + lVar14 * 4);
            thunk_FUN_14028af80(*(undefined8 *)
                                 (*(longlong *)
                                   ((&DAT_1404df828)[lVar14 * 5] +
                                   ((&DAT_1404df830)[lVar14 * 5] - 1 &
                                   (ulonglong)(&DAT_1404df838)[lVar14 * 5] >> 1) * 8) +
                                 (ulonglong)((uint)(&DAT_1404df838)[lVar14 * 5] & 1) * 8));
            plVar15 = &DAT_1404df840 + lVar14 * 5;
            *plVar15 = *plVar15 + -1;
            if (*plVar15 == 0) break;
            (&DAT_1404df838)[lVar14 * 5] = (&DAT_1404df838)[lVar14 * 5] + 1;
          }
          (&DAT_1404df838)[lVar14 * 5] = 0;
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != 9);
    }
    DAT_1404df7d8 = DAT_1404df7d8 + *(int *)(PTR_DAT_1404df780 + uVar18 * 4);
    uVar12 = thunk_FUN_14028af20();
    uVar18 = ((((((((uVar12 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar12 >> 8 & 0xff) *
                   0x100000001b3 ^ (longlong)uVar12 >> 0x10 & 0xffU) * 0x100000001b3 ^
                 (longlong)uVar12 >> 0x18 & 0xffU) * 0x100000001b3 ^
                (longlong)uVar12 >> 0x20 & 0xffU) * 0x100000001b3 ^ (longlong)uVar12 >> 0x28 & 0xffU
               ) * 0x100000001b3 ^ (longlong)uVar12 >> 0x30 & 0xffU) * 0x100000001b3 ^
             (longlong)uVar12 >> 0x38 & 0xffU) * 0x100000001b3;
    plVar1 = *(longlong **)(DAT_1404df7f8 + 8 + (DAT_1404df810 & uVar18) * 0x10);
    plVar15 = DAT_1404df7e8;
    if (plVar1 != DAT_1404df7e8) {
      uVar11 = plVar1[2];
      plVar15 = plVar1;
      while( true ) {
        if (uVar12 == uVar11) goto LAB_1400ca132;
        if (plVar15 == *(longlong **)(DAT_1404df7f8 + (DAT_1404df810 & uVar18) * 0x10)) break;
        plVar15 = (longlong *)plVar15[1];
        uVar11 = plVar15[2];
      }
    }
    if (DAT_1404df7f0 == 0xaaaaaaaaaaaaaaa) goto LAB_1400ca1a6;
    puVar10 = (undefined8 *)FUN_14028af20(0x18);
    puVar10[2] = uVar12;
    uVar11 = DAT_1404df818;
    if ((float)(DAT_1404df7f0 + 1) / (float)DAT_1404df818 <= DAT_1404df7e0) goto LAB_1400c9c19;
    fVar19 = (float)FUN_140419fa0((float)(DAT_1404df7f0 + 1) / DAT_1404df7e0);
    plVar15 = DAT_1404df7e8;
    lVar14 = 0;
    if ((DAT_140492974 <= fVar19) && (fVar19 = fVar19 - DAT_140492974, fVar19 < DAT_140492974)) {
      lVar14 = -0x8000000000000000;
    }
    uVar16 = 8;
    if (8 < (ulonglong)((longlong)fVar19 + lVar14)) {
      uVar16 = (longlong)fVar19 + lVar14;
    }
    uVar17 = uVar11;
    if ((uVar11 < uVar16) && ((0x1ff < uVar11 || (uVar17 = uVar11 * 8, uVar11 * 8 < uVar16)))) {
      uVar17 = uVar16;
    }
    for (lVar14 = 0x3f; 0xfffffffffffffffU >> lVar14 == 0; lVar14 = lVar14 + -1) {
    }
    if ((ulonglong)(1L << ((byte)lVar14 & 0x3f)) < uVar17) goto LAB_1400ca17b;
    uVar11 = uVar17 - 1 | 1;
    lVar14 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    bVar13 = (char)lVar14 + 1;
    uVar11 = 1L << (bVar13 & 0x3f);
    FUN_14003e510(&DAT_1404df7f8,2L << (bVar13 & 0x3f),DAT_1404df7e8);
    DAT_1404df810 = uVar11 - 1;
    DAT_1404df818 = uVar11;
    plVar1 = (longlong *)*DAT_1404df7e8;
    lVar14 = DAT_1404df7f8;
joined_r0x0001400c9f75:
    do {
      DAT_1404df7f8 = lVar14;
      if (plVar1 == plVar15) {
        local_res8 = 0;
        FUN_14005b0e0(&local_res8);
        plVar1 = *(longlong **)(DAT_1404df7f8 + 8 + (DAT_1404df810 & uVar18) * 0x10);
        plVar15 = DAT_1404df7e8;
        if (plVar1 != DAT_1404df7e8) {
          lVar14 = plVar1[2];
          plVar15 = plVar1;
          while (puVar10[2] != lVar14) {
            if (plVar15 == *(longlong **)(DAT_1404df7f8 + (DAT_1404df810 & uVar18) * 0x10))
            goto LAB_1400c9c19;
            plVar15 = (longlong *)plVar15[1];
            lVar14 = plVar15[2];
          }
          goto LAB_1400c9c0f;
        }
        goto LAB_1400c9c19;
      }
      plVar2 = (longlong *)*plVar1;
      uVar11 = (((((((((ulonglong)*(byte *)(plVar1 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar1 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar1 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar1 + 0x13)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar1 + 0x14)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar1 + 0x15)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar1 + 0x16)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar1 + 0x17)) * 0x100000001b3 & DAT_1404df810;
      plVar3 = *(longlong **)(lVar14 + uVar11 * 0x10);
      if (plVar3 == plVar15) {
        *(longlong **)(lVar14 + uVar11 * 0x10) = plVar1;
        *(longlong **)(lVar14 + 8 + uVar11 * 0x10) = plVar1;
        plVar1 = plVar2;
        lVar14 = DAT_1404df7f8;
      }
      else {
        plVar4 = *(longlong **)(lVar14 + 8 + uVar11 * 0x10);
        if (plVar1[2] == plVar4[2]) {
          plVar4 = (longlong *)*plVar4;
          if (plVar4 != plVar1) {
            puVar7 = (undefined8 *)plVar1[1];
            *puVar7 = plVar2;
            puVar5 = (undefined8 *)plVar2[1];
            *puVar5 = plVar4;
            puVar6 = (undefined8 *)plVar4[1];
            *puVar6 = plVar1;
            plVar4[1] = (longlong)puVar5;
            plVar2[1] = (longlong)puVar7;
            plVar1[1] = (longlong)puVar6;
          }
          *(longlong **)(lVar14 + 8 + uVar11 * 0x10) = plVar1;
          plVar1 = plVar2;
          lVar14 = DAT_1404df7f8;
        }
        else {
          do {
            if (plVar3 == plVar4) {
              puVar7 = (undefined8 *)plVar1[1];
              *puVar7 = plVar2;
              puVar5 = (undefined8 *)plVar2[1];
              *puVar5 = plVar4;
              puVar6 = (undefined8 *)plVar4[1];
              *puVar6 = plVar1;
              plVar4[1] = (longlong)puVar5;
              plVar2[1] = (longlong)puVar7;
              plVar1[1] = (longlong)puVar6;
              *(longlong **)(lVar14 + uVar11 * 0x10) = plVar1;
              plVar1 = plVar2;
              lVar14 = DAT_1404df7f8;
              goto joined_r0x0001400c9f75;
            }
            plVar4 = (longlong *)plVar4[1];
          } while (plVar1[2] != plVar4[2]);
          lVar14 = *plVar4;
          puVar7 = (undefined8 *)plVar1[1];
          *puVar7 = plVar2;
          plVar3 = (longlong *)plVar2[1];
          *plVar3 = lVar14;
          puVar5 = *(undefined8 **)(lVar14 + 8);
          *puVar5 = plVar1;
          *(longlong **)(lVar14 + 8) = plVar3;
          plVar2[1] = (longlong)puVar7;
          plVar1[1] = (longlong)puVar5;
          plVar1 = plVar2;
          lVar14 = DAT_1404df7f8;
        }
      }
    } while( true );
  }
  uVar11 = (&DAT_1404df838)[uVar18 * 5];
  uVar12 = *(ulonglong *)
            (*(longlong *)
              ((&DAT_1404df828)[uVar18 * 5] + ((&DAT_1404df830)[uVar18 * 5] - 1 & uVar11 >> 1) * 8)
            + (ulonglong)((uint)uVar11 & 1) * 8);
  plVar15 = &DAT_1404df840 + uVar18 * 5;
  *plVar15 = *plVar15 + -1;
  lVar14 = 0;
  if (*plVar15 != 0) {
    lVar14 = uVar11 + 1;
  }
  (&DAT_1404df838)[uVar18 * 5] = lVar14;
  uVar18 = ((((((((uVar12 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (longlong)uVar12 >> 8 & 0xffU) * 0x100000001b3 ^ (longlong)uVar12 >> 0x10 & 0xffU)
                * 0x100000001b3 ^ (longlong)uVar12 >> 0x18 & 0xffU) * 0x100000001b3 ^
              (longlong)uVar12 >> 0x20 & 0xffU) * 0x100000001b3 ^ (longlong)uVar12 >> 0x28 & 0xffU)
             * 0x100000001b3 ^ (longlong)uVar12 >> 0x30 & 0xffU) * 0x100000001b3 ^
           (longlong)uVar12 >> 0x38 & 0xffU) * 0x100000001b3;
  plVar1 = *(longlong **)(DAT_1404df7f8 + 8 + (DAT_1404df810 & uVar18) * 0x10);
  plVar15 = DAT_1404df7e8;
  if (plVar1 == DAT_1404df7e8) goto LAB_1400c9908;
  uVar11 = plVar1[2];
  plVar15 = plVar1;
  goto joined_r0x0001400c98eb;
code_r0x0001400c97a9:
  uVar9 = uVar9 + 1;
  if (9 < (int)uVar9) goto LAB_1400ca132;
  goto LAB_1400c97a0;
joined_r0x0001400c98eb:
  if (uVar12 == uVar11) goto LAB_1400ca132;
  if (plVar15 == *(longlong **)(DAT_1404df7f8 + (DAT_1404df810 & uVar18) * 0x10))
  goto LAB_1400c9908;
  plVar15 = (longlong *)plVar15[1];
  uVar11 = plVar15[2];
  goto joined_r0x0001400c98eb;
LAB_1400c9908:
  if (DAT_1404df7f0 == 0xaaaaaaaaaaaaaaa) {
LAB_1400ca1a6:
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar10 = (undefined8 *)FUN_14028af20(0x18);
  puVar10[2] = uVar12;
  uVar11 = DAT_1404df818;
  if (DAT_1404df7e0 < (float)(DAT_1404df7f0 + 1) / (float)DAT_1404df818) {
    fVar19 = (float)FUN_140419fa0((float)(DAT_1404df7f0 + 1) / DAT_1404df7e0);
    plVar15 = DAT_1404df7e8;
    lVar14 = 0;
    if ((DAT_140492974 <= fVar19) && (fVar19 = fVar19 - DAT_140492974, fVar19 < DAT_140492974)) {
      lVar14 = -0x8000000000000000;
    }
    uVar16 = 8;
    if (8 < (ulonglong)((longlong)fVar19 + lVar14)) {
      uVar16 = (longlong)fVar19 + lVar14;
    }
    uVar17 = uVar11;
    if ((uVar11 < uVar16) && ((0x1ff < uVar11 || (uVar17 = uVar11 * 8, uVar11 * 8 < uVar16)))) {
      uVar17 = uVar16;
    }
    for (lVar14 = 0x3f; 0xfffffffffffffffU >> lVar14 == 0; lVar14 = lVar14 + -1) {
    }
    if ((ulonglong)(1L << ((byte)lVar14 & 0x3f)) < uVar17) {
LAB_1400ca17b:
                    /* WARNING: Subroutine does not return */
      FUN_14028c2e0("invalid hash bucket count");
    }
    uVar11 = uVar17 - 1 | 1;
    lVar14 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    bVar13 = (char)lVar14 + 1;
    uVar11 = 1L << (bVar13 & 0x3f);
    FUN_14003e510(&DAT_1404df7f8,2L << (bVar13 & 0x3f),DAT_1404df7e8);
    DAT_1404df810 = uVar11 - 1;
    DAT_1404df818 = uVar11;
    plVar1 = (longlong *)*DAT_1404df7e8;
    lVar14 = DAT_1404df7f8;
joined_r0x0001400c9a76:
    DAT_1404df7f8 = lVar14;
    if (plVar1 != plVar15) {
      plVar2 = (longlong *)*plVar1;
      uVar11 = (((((((((ulonglong)*(byte *)(plVar1 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar1 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar1 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar1 + 0x13)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar1 + 0x14)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar1 + 0x15)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar1 + 0x16)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar1 + 0x17)) * 0x100000001b3 & DAT_1404df810;
      plVar3 = *(longlong **)(lVar14 + uVar11 * 0x10);
      if (plVar3 == plVar15) {
        *(longlong **)(lVar14 + uVar11 * 0x10) = plVar1;
        *(longlong **)(lVar14 + 8 + uVar11 * 0x10) = plVar1;
        plVar1 = plVar2;
        lVar14 = DAT_1404df7f8;
      }
      else {
        plVar4 = *(longlong **)(lVar14 + 8 + uVar11 * 0x10);
        if (plVar1[2] == plVar4[2]) {
          plVar4 = (longlong *)*plVar4;
          if (plVar4 != plVar1) {
            puVar7 = (undefined8 *)plVar1[1];
            *puVar7 = plVar2;
            puVar5 = (undefined8 *)plVar2[1];
            *puVar5 = plVar4;
            puVar6 = (undefined8 *)plVar4[1];
            *puVar6 = plVar1;
            plVar4[1] = (longlong)puVar5;
            plVar2[1] = (longlong)puVar7;
            plVar1[1] = (longlong)puVar6;
          }
          *(longlong **)(lVar14 + 8 + uVar11 * 0x10) = plVar1;
          plVar1 = plVar2;
          lVar14 = DAT_1404df7f8;
        }
        else {
          do {
            if (plVar3 == plVar4) {
              puVar7 = (undefined8 *)plVar1[1];
              *puVar7 = plVar2;
              puVar5 = (undefined8 *)plVar2[1];
              *puVar5 = plVar4;
              puVar6 = (undefined8 *)plVar4[1];
              *puVar6 = plVar1;
              plVar4[1] = (longlong)puVar5;
              plVar2[1] = (longlong)puVar7;
              plVar1[1] = (longlong)puVar6;
              *(longlong **)(lVar14 + uVar11 * 0x10) = plVar1;
              plVar1 = plVar2;
              lVar14 = DAT_1404df7f8;
              goto joined_r0x0001400c9a76;
            }
            plVar4 = (longlong *)plVar4[1];
          } while (plVar1[2] != plVar4[2]);
          lVar14 = *plVar4;
          puVar7 = (undefined8 *)plVar1[1];
          *puVar7 = plVar2;
          plVar3 = (longlong *)plVar2[1];
          *plVar3 = lVar14;
          puVar5 = *(undefined8 **)(lVar14 + 8);
          *puVar5 = plVar1;
          *(longlong **)(lVar14 + 8) = plVar3;
          plVar2[1] = (longlong)puVar7;
          plVar1[1] = (longlong)puVar5;
          plVar1 = plVar2;
          lVar14 = DAT_1404df7f8;
        }
      }
      goto joined_r0x0001400c9a76;
    }
    local_res8 = 0;
    FUN_14005b0e0(&local_res8);
    plVar1 = *(longlong **)(DAT_1404df7f8 + 8 + (DAT_1404df810 & uVar18) * 0x10);
    plVar15 = DAT_1404df7e8;
    if (plVar1 != DAT_1404df7e8) {
      lVar14 = plVar1[2];
      plVar15 = plVar1;
      while (puVar10[2] != lVar14) {
        if (plVar15 == *(longlong **)(DAT_1404df7f8 + (DAT_1404df810 & uVar18) * 0x10))
        goto LAB_1400c9c19;
        plVar15 = (longlong *)plVar15[1];
        lVar14 = plVar15[2];
      }
LAB_1400c9c0f:
      plVar15 = (longlong *)*plVar15;
    }
  }
LAB_1400c9c19:
  puVar7 = (undefined8 *)plVar15[1];
  DAT_1404df7f0 = DAT_1404df7f0 + 1;
  *puVar10 = plVar15;
  puVar10[1] = puVar7;
  *puVar7 = puVar10;
  plVar15[1] = (longlong)puVar10;
  lVar14 = DAT_1404df7f8;
  uVar18 = DAT_1404df810 & uVar18;
  plVar1 = *(longlong **)(DAT_1404df7f8 + uVar18 * 0x10);
  if (plVar1 == DAT_1404df7e8) {
    *(undefined8 **)(DAT_1404df7f8 + uVar18 * 0x10) = puVar10;
  }
  else {
    if (plVar1 == plVar15) {
      *(undefined8 **)(DAT_1404df7f8 + uVar18 * 0x10) = puVar10;
      goto LAB_1400ca132;
    }
    if (*(undefined8 **)(DAT_1404df7f8 + 8 + uVar18 * 0x10) != puVar7) goto LAB_1400ca132;
  }
  *(undefined8 **)(lVar14 + 8 + uVar18 * 0x10) = puVar10;
LAB_1400ca132:
  FUN_140290ea0(&DAT_1404df788);
  if (uVar12 == 0) {
    FUN_1400986c0("Unable to allocate %u bytes.\n",param_2);
  }
  return uVar12;
}

