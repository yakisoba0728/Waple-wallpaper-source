// Function: FUN_14014f1d0
// Addr: 14014f1d0
// Size: 1062 bytes


void FUN_14014f1d0(float *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong _Size;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte bVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined1 *puVar19;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  float fVar20;
  longlong *local_res10;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar19 = auStack_58;
  plVar2 = *(longlong **)(param_1 + 0xe);
  fVar20 = (float)FUN_140419fa0((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
  lVar11 = 0;
  if ((DAT_140492974 <= fVar20) && (fVar20 = fVar20 - DAT_140492974, fVar20 < DAT_140492974)) {
    lVar11 = -0x8000000000000000;
  }
  plVar12 = (longlong *)&DAT_00000008;
  if (&DAT_00000008 < (longlong *)((longlong)fVar20 + lVar11)) {
    plVar12 = (longlong *)((longlong)fVar20 + lVar11);
  }
  plVar17 = plVar2;
  if ((plVar2 < plVar12) &&
     (((longlong *)0x1ff < plVar2 ||
      (plVar17 = (longlong *)((longlong)plVar2 * 8), (longlong *)((longlong)plVar2 * 8) < plVar12)))
     ) {
    plVar17 = plVar12;
  }
  for (lVar11 = 0x3f; 0xfffffffffffffffU >> lVar11 == 0; lVar11 = lVar11 + -1) {
  }
  if ((longlong *)(1L << ((byte)lVar11 & 0x3f)) < plVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("invalid hash bucket count");
  }
  uVar8 = (ulonglong)((longlong)plVar17 + -1) | 1;
  plVar2 = *(longlong **)(param_1 + 2);
  lVar11 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  local_res10 = plVar2;
  bVar10 = (char)lVar11 + 1;
  uVar8 = 2L << (bVar10 & 0x3f);
  if (uVar8 <= (ulonglong)(*(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 6) >> 3)) {
    FUN_14000f7d0(*(longlong *)(param_1 + 6),*(longlong *)(param_1 + 8),&local_res10);
    puVar19 = auStack_58;
    goto LAB_14014f3be;
  }
  if (0x1fffffffffffffff < uVar8) {
LAB_14014f5e5:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar8 = 0x10L << (bVar10 & 0x3f);
  if (uVar8 == 0) {
    plVar17 = (longlong *)0x0;
LAB_14014f33a:
    lVar11 = *(longlong *)(param_1 + 6);
    if (7 < (ulonglong)(*(longlong *)(param_1 + 10) - lVar11)) {
      lVar9 = lVar11;
      puVar19 = auStack_58;
      if ((0xfff < (ulonglong)((*(longlong *)(param_1 + 10) - lVar11 >> 3) * 8)) &&
         (lVar9 = *(longlong *)(lVar11 + -8), puVar19 = auStack_58, 0x1f < (lVar11 - lVar9) - 8U))
      goto LAB_14014f377;
      goto LAB_14014f381;
    }
  }
  else {
    if (uVar8 < 0x1000) {
      plVar17 = (longlong *)FUN_14028af20(uVar8);
      goto LAB_14014f33a;
    }
    if (uVar8 + 0x27 <= uVar8) goto LAB_14014f5e5;
    lVar11 = FUN_14028af20();
    if (lVar11 != 0) {
      plVar17 = (longlong *)(lVar11 + 0x27U & 0xffffffffffffffe0);
      plVar17[-1] = lVar11;
      goto LAB_14014f33a;
    }
LAB_14014f377:
    pcVar6 = (code *)swi(0x29);
    lVar9 = (*pcVar6)(5);
    puVar19 = auStack_50;
LAB_14014f381:
    *(undefined8 *)(puVar19 + -8) = 0x14014f386;
    thunk_FUN_14028af80(lVar9);
  }
  *(longlong **)(param_1 + 6) = plVar17;
  plVar12 = (longlong *)(uVar8 + (longlong)plVar17);
  *(longlong **)(param_1 + 8) = plVar12;
  *(longlong **)(param_1 + 10) = plVar12;
  if (uVar8 != 0) {
    do {
      *plVar17 = (longlong)plVar2;
      plVar17 = plVar17 + 1;
    } while (plVar17 != plVar12);
  }
LAB_14014f3be:
  lVar11 = 1L << (bVar10 & 0x3f);
  *(longlong *)(param_1 + 0xe) = lVar11;
  *(longlong *)(param_1 + 0xc) = lVar11 + -1;
  plVar12 = (longlong *)**(longlong **)(param_1 + 2);
  if (plVar12 != plVar2) {
    *(undefined8 *)(puVar19 + 0x30) = unaff_R12;
    *(undefined8 *)(puVar19 + 0x28) = unaff_R13;
    do {
      uVar8 = plVar12[5];
      plVar17 = plVar12 + 2;
      plVar3 = (longlong *)*plVar12;
      if (0xf < uVar8) {
        plVar17 = (longlong *)plVar12[2];
      }
      _Size = plVar12[4];
      uVar13 = 0;
      uVar15 = 0xcbf29ce484222325;
      if (_Size != 0) {
        do {
          pbVar1 = (byte *)(uVar13 + (longlong)plVar17);
          uVar13 = uVar13 + 1;
          uVar15 = (uVar15 ^ *pbVar1) * 0x100000001b3;
        } while (uVar13 < _Size);
      }
      lVar11 = *(longlong *)(param_1 + 6);
      uVar15 = *(ulonglong *)(param_1 + 0xc) & uVar15;
      plVar17 = *(longlong **)(lVar11 + uVar15 * 0x10);
      if (plVar17 == plVar2) {
        *(longlong **)(lVar11 + uVar15 * 0x10) = plVar12;
        *(longlong **)(lVar11 + 8 + uVar15 * 0x10) = plVar12;
      }
      else {
        plVar18 = *(longlong **)(lVar11 + 8 + uVar15 * 0x10);
        plVar16 = plVar18 + 2;
        if (0xf < (ulonglong)plVar18[5]) {
          plVar16 = (longlong *)*plVar16;
        }
        plVar14 = plVar12 + 2;
        if (0xf < uVar8) {
          plVar14 = (longlong *)plVar12[2];
        }
        if (_Size == plVar18[4]) {
          if (_Size != 0) {
            *(undefined8 *)(puVar19 + -8) = 0x14014f49f;
            iVar7 = memcmp(plVar14,plVar16,_Size);
            if (iVar7 != 0) {
              plVar17 = *(longlong **)(lVar11 + uVar15 * 0x10);
              uVar8 = plVar12[5];
              goto LAB_14014f4df;
            }
          }
          plVar18 = (longlong *)*plVar18;
          if (plVar18 != plVar12) {
            plVar17 = (longlong *)plVar12[1];
            *plVar17 = (longlong)plVar3;
            puVar4 = (undefined8 *)plVar3[1];
            *puVar4 = plVar18;
            puVar5 = (undefined8 *)plVar18[1];
            *puVar5 = plVar12;
            plVar18[1] = (longlong)puVar4;
            plVar3[1] = (longlong)plVar17;
            plVar12[1] = (longlong)puVar5;
          }
          *(longlong **)(lVar11 + 8 + uVar15 * 0x10) = plVar12;
        }
        else {
LAB_14014f4df:
          if (plVar17 != plVar18) {
            do {
              plVar18 = (longlong *)plVar18[1];
              plVar16 = plVar18 + 2;
              if (0xf < (ulonglong)plVar18[5]) {
                plVar16 = (longlong *)*plVar16;
              }
              if (uVar8 < 0x10) {
                plVar14 = plVar12 + 2;
              }
              else {
                plVar14 = (longlong *)plVar12[2];
              }
              if (_Size == plVar18[4]) {
                if (_Size != 0) {
                  *(undefined8 *)(puVar19 + -8) = 0x14014f529;
                  iVar7 = memcmp(plVar14,plVar16,_Size);
                  if (iVar7 != 0) {
                    plVar17 = *(longlong **)(lVar11 + uVar15 * 0x10);
                    uVar8 = plVar12[5];
                    goto LAB_14014f53a;
                  }
                }
                lVar11 = *plVar18;
                plVar17 = (longlong *)plVar12[1];
                *plVar17 = (longlong)plVar3;
                plVar16 = (longlong *)plVar3[1];
                *plVar16 = lVar11;
                puVar4 = *(undefined8 **)(lVar11 + 8);
                *puVar4 = plVar12;
                *(longlong **)(lVar11 + 8) = plVar16;
                plVar3[1] = (longlong)plVar17;
                plVar12[1] = (longlong)puVar4;
                goto LAB_14014f565;
              }
LAB_14014f53a:
            } while (plVar17 != plVar18);
          }
          plVar17 = (longlong *)plVar12[1];
          *plVar17 = (longlong)plVar3;
          puVar4 = (undefined8 *)plVar3[1];
          *puVar4 = plVar18;
          puVar5 = (undefined8 *)plVar18[1];
          *puVar5 = plVar12;
          plVar18[1] = (longlong)puVar4;
          plVar3[1] = (longlong)plVar17;
          plVar12[1] = (longlong)puVar5;
          *(longlong **)(lVar11 + uVar15 * 0x10) = plVar12;
        }
      }
LAB_14014f565:
      param_1 = *(float **)(puVar19 + 0x60);
      plVar12 = plVar3;
    } while (plVar3 != plVar2);
  }
  *(undefined8 *)(puVar19 + 0x60) = 0;
  *(undefined8 *)(puVar19 + -8) = 0x14014f5a7;
  FUN_14003a070(puVar19 + 0x60);
  return;
}

