// Function: FUN_140042790
// Addr: 140042790
// Size: 1658 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_140042790(longlong *param_1)

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
  code *pcVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  byte bVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  ulonglong unaff_RBP;
  undefined8 *puVar21;
  ulonglong uVar22;
  float fVar23;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  ulonglong uStack_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  uVar3 = *(uint *)(param_1 + 0x13);
  if ((int)uVar3 < 0) {
    *param_1 = (longlong)"wallpaperconfig";
    return;
  }
  puVar21 = (undefined8 *)0xcbf29ce484222325;
  plVar12 = param_1 + 0x17;
  uVar22 = (((((ulonglong)(byte)uVar3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)(uVar3 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar3 >> 0x10) & 0xff) *
            0x100000001b3 ^ (ulonglong)(uVar3 >> 0x18)) * 0x100000001b3 & param_1[0x1a];
  lVar17 = *(longlong *)(*plVar12 + 8 + uVar22 * 0x10);
  if (lVar17 == param_1[0x15]) {
LAB_140042869:
    lVar17 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar17 + 0x10);
    while (uVar3 != uVar1) {
      if (lVar17 == *(longlong *)(*plVar12 + uVar22 * 0x10)) goto LAB_140042869;
      lVar17 = *(longlong *)(lVar17 + 8);
      uVar1 = *(uint *)(lVar17 + 0x10);
    }
  }
  if ((lVar17 != 0) && (lVar17 != param_1[0x15])) {
    plVar12 = *(longlong **)(lVar17 + 0x18);
    if (0xf < (ulonglong)plVar12[3]) {
      plVar12 = (longlong *)*plVar12;
    }
    *param_1 = (longlong)plVar12;
    return;
  }
  plVar13 = (longlong *)FUN_14028af20(0x20);
  *plVar13 = 0;
  plVar13[1] = 0;
  plVar13[2] = 0;
  plVar13[3] = 0xf;
  *(undefined1 *)plVar13 = 0;
  uVar14 = FUN_140053e40(local_48,(int)param_1[0x13]);
  FUN_14002fd20(&local_68,"wallpaperconfigvd",uVar14);
  if (local_30 < 0x10) {
LAB_140042914:
    if (plVar13 == &local_68) {
      if (0xf < uStack_50) {
        lVar11 = CONCAT44(local_68._4_4_,(undefined4)local_68);
        uVar22 = uStack_50 + 1;
        lVar17 = lVar11;
        if (0xfff < uVar22) {
          lVar17 = *(longlong *)(lVar11 + -8);
          if (0x1f < (lVar11 - lVar17) - 8U) goto LAB_140042a4b;
          uVar22 = uStack_50 + 0x28;
        }
        thunk_FUN_14028af80(lVar17,uVar22);
      }
    }
    else {
      uVar22 = plVar13[3];
      if (0xf < uVar22) {
        lVar17 = *plVar13;
        uVar18 = uVar22 + 1;
        if (0xfff < uVar18) {
          if (0x1f < (lVar17 - *(longlong *)(lVar17 + -8)) - 8U) goto LAB_140042a4b;
          uVar18 = uVar22 + 0x28;
          lVar17 = *(longlong *)(lVar17 + -8);
        }
        thunk_FUN_14028af80(lVar17,uVar18);
      }
      *(undefined4 *)plVar13 = (undefined4)local_68;
      *(undefined4 *)((longlong)plVar13 + 4) = local_68._4_4_;
      *(undefined4 *)(plVar13 + 1) = uStack_60;
      *(undefined4 *)((longlong)plVar13 + 0xc) = uStack_5c;
      plVar13[2] = local_58;
      plVar13[3] = uStack_50;
    }
    puVar21 = (undefined8 *)param_1[0x15];
    unaff_RBP = (((((ulonglong)*(byte *)(param_1 + 0x13) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)param_1 + 0x99)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)param_1 + 0x9a)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_1 + 0x9b)) * 0x100000001b3;
    puVar15 = *(undefined8 **)(*plVar12 + 8 + (unaff_RBP & param_1[0x1a]) * 0x10);
    puVar20 = auStack_88;
    if (puVar15 != puVar21) {
      iVar2 = *(int *)(puVar15 + 2);
      puVar21 = puVar15;
      while (puVar15 = puVar21, (int)param_1[0x13] != iVar2) {
        puVar20 = auStack_88;
        if (puVar21 == *(undefined8 **)(*plVar12 + (unaff_RBP & param_1[0x1a]) * 0x10))
        goto LAB_140042a55;
        puVar21 = (undefined8 *)puVar21[1];
        iVar2 = *(int *)(puVar21 + 2);
      }
      goto LAB_140042dab;
    }
  }
  else {
    uVar22 = local_30 + 1;
    lVar17 = local_48[0];
    if (uVar22 < 0x1000) {
LAB_14004290f:
      thunk_FUN_14028af80(lVar17,uVar22);
      goto LAB_140042914;
    }
    lVar17 = *(longlong *)(local_48[0] + -8);
    if ((local_48[0] - lVar17) - 8U < 0x20) {
      uVar22 = local_30 + 0x28;
      goto LAB_14004290f;
    }
LAB_140042a4b:
    pcVar10 = (code *)swi(0x29);
    (*pcVar10)(5);
    puVar20 = auStack_80;
  }
LAB_140042a55:
  if (param_1[0x16] == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar20 + -8) = &UNK_140042e0b;
    FUN_14028c2e0("unordered_map/set too long");
  }
  *(undefined8 *)(puVar20 + -8) = 0x140042a76;
  puVar15 = (undefined8 *)FUN_14028af20(0x20);
  *(int *)(puVar15 + 2) = (int)param_1[0x13];
  puVar15[3] = 0;
  lVar17 = param_1[0x16];
  uVar22 = param_1[0x1b];
  fVar23 = *(float *)(param_1 + 0x14);
  if (fVar23 < (float)(lVar17 + 1) / (float)uVar22) {
    *(undefined8 *)(puVar20 + -8) = 0x140042b03;
    fVar23 = (float)FUN_140419fa0((float)(lVar17 + 1) / fVar23);
    lVar17 = 0;
    if ((DAT_140492974 <= fVar23) && (fVar23 = fVar23 - DAT_140492974, fVar23 < DAT_140492974)) {
      lVar17 = -0x8000000000000000;
    }
    uVar18 = 8;
    if (8 < (ulonglong)((longlong)fVar23 + lVar17)) {
      uVar18 = (longlong)fVar23 + lVar17;
    }
    uVar19 = uVar22;
    if ((uVar22 < uVar18) && ((0x1ff < uVar22 || (uVar19 = uVar22 * 8, uVar22 * 8 < uVar18)))) {
      uVar19 = uVar18;
    }
    for (lVar17 = 0x3f; 0xfffffffffffffffU >> lVar17 == 0; lVar17 = lVar17 + -1) {
    }
    if ((ulonglong)(1L << ((byte)lVar17 & 0x3f)) < uVar19) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar20 + -8) = &UNK_140042dfe;
      FUN_14028c2e0("invalid hash bucket count");
    }
    plVar4 = (longlong *)param_1[0x15];
    uVar22 = uVar19 - 1 | 1;
    lVar17 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    bVar16 = (char)lVar17 + 1;
    lVar17 = 1L << (bVar16 & 0x3f);
    *(undefined8 *)(puVar20 + -8) = 0x140042ba5;
    FUN_14004f190(plVar12,2L << (bVar16 & 0x3f),plVar4);
    param_1[0x1b] = lVar17;
    param_1[0x1a] = lVar17 + -1;
    plVar12 = *(longlong **)param_1[0x15];
joined_r0x000140042bc7:
    if (plVar12 != plVar4) {
      lVar17 = param_1[0x17];
      plVar5 = (longlong *)*plVar12;
      uVar22 = (((((ulonglong)*(byte *)(plVar12 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar12 + 0x11)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar12 + 0x12)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar12 + 0x13)) * 0x100000001b3 & param_1[0x1a];
      plVar6 = *(longlong **)(lVar17 + uVar22 * 0x10);
      if (plVar6 == plVar4) {
        *(longlong **)(lVar17 + uVar22 * 0x10) = plVar12;
        *(longlong **)(lVar17 + 8 + uVar22 * 0x10) = plVar12;
        plVar12 = plVar5;
      }
      else {
        plVar7 = *(longlong **)(lVar17 + 8 + uVar22 * 0x10);
        if ((int)plVar12[2] == (int)plVar7[2]) {
          plVar7 = (longlong *)*plVar7;
          if (plVar7 != plVar12) {
            plVar6 = (longlong *)plVar12[1];
            *plVar6 = (longlong)plVar5;
            puVar21 = (undefined8 *)plVar5[1];
            *puVar21 = plVar7;
            puVar8 = (undefined8 *)plVar7[1];
            *puVar8 = plVar12;
            plVar7[1] = (longlong)puVar21;
            plVar5[1] = (longlong)plVar6;
            plVar12[1] = (longlong)puVar8;
          }
          *(longlong **)(lVar17 + 8 + uVar22 * 0x10) = plVar12;
          plVar12 = plVar5;
        }
        else {
          do {
            if (plVar6 == plVar7) {
              plVar6 = (longlong *)plVar12[1];
              *plVar6 = (longlong)plVar5;
              puVar21 = (undefined8 *)plVar5[1];
              *puVar21 = plVar7;
              puVar8 = (undefined8 *)plVar7[1];
              *puVar8 = plVar12;
              plVar7[1] = (longlong)puVar21;
              plVar5[1] = (longlong)plVar6;
              plVar12[1] = (longlong)puVar8;
              *(longlong **)(lVar17 + uVar22 * 0x10) = plVar12;
              plVar12 = plVar5;
              goto joined_r0x000140042bc7;
            }
            plVar7 = (longlong *)plVar7[1];
          } while ((int)plVar12[2] != (int)plVar7[2]);
          lVar17 = *plVar7;
          plVar6 = (longlong *)plVar12[1];
          *plVar6 = (longlong)plVar5;
          plVar7 = (longlong *)plVar5[1];
          *plVar7 = lVar17;
          puVar21 = *(undefined8 **)(lVar17 + 8);
          *puVar21 = plVar12;
          *(longlong **)(lVar17 + 8) = plVar7;
          plVar5[1] = (longlong)plVar6;
          plVar12[1] = (longlong)puVar21;
          plVar12 = plVar5;
        }
      }
      goto joined_r0x000140042bc7;
    }
    *(undefined8 *)(puVar20 + 0x90) = 0;
    *(undefined8 *)(puVar20 + -8) = 0x140042ce4;
    FUN_1400500f0(puVar20 + 0x90);
    puVar21 = (undefined8 *)param_1[0x15];
    puVar8 = *(undefined8 **)(param_1[0x17] + 8 + (unaff_RBP & param_1[0x1a]) * 0x10);
    if (puVar8 != puVar21) {
      iVar2 = *(int *)(puVar8 + 2);
      puVar21 = puVar8;
      while (*(int *)(puVar15 + 2) != iVar2) {
        if (puVar21 == *(undefined8 **)(param_1[0x17] + (unaff_RBP & param_1[0x1a]) * 0x10))
        goto LAB_140042d29;
        puVar21 = (undefined8 *)puVar21[1];
        iVar2 = *(int *)(puVar21 + 2);
      }
      puVar21 = (undefined8 *)*puVar21;
    }
  }
LAB_140042d29:
  puVar8 = (undefined8 *)puVar21[1];
  param_1[0x16] = param_1[0x16] + 1;
  *puVar15 = puVar21;
  puVar15[1] = puVar8;
  *puVar8 = puVar15;
  puVar21[1] = puVar15;
  lVar17 = param_1[0x17];
  uVar22 = param_1[0x1a] & unaff_RBP;
  puVar9 = *(undefined8 **)(lVar17 + uVar22 * 0x10);
  if (puVar9 == (undefined8 *)param_1[0x15]) {
    *(undefined8 **)(lVar17 + uVar22 * 0x10) = puVar15;
  }
  else {
    if (puVar9 == puVar21) {
      *(undefined8 **)(lVar17 + uVar22 * 0x10) = puVar15;
      goto LAB_140042dab;
    }
    if (*(undefined8 **)(lVar17 + 8 + uVar22 * 0x10) != puVar8) goto LAB_140042dab;
  }
  *(undefined8 **)(lVar17 + 8 + uVar22 * 0x10) = puVar15;
LAB_140042dab:
  puVar15[3] = plVar13;
  if (0xf < (ulonglong)plVar13[3]) {
    plVar13 = (longlong *)*plVar13;
  }
  *param_1 = (longlong)plVar13;
  return;
}

