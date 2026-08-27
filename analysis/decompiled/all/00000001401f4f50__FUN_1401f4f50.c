// Function: FUN_1401f4f50
// Addr: 1401f4f50
// Size: 1285 bytes


void FUN_1401f4f50(longlong *param_1,float param_2)

{
  uint uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 unaff_XMM8_Da;
  float fVar23;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  float fVar24;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [120];
  
  puVar8 = auStack_a8;
  puVar9 = auStack_a8;
  uVar11 = *(uint *)(param_1 + 0x62);
  if (((uVar11 >> 0x1e & 1) == 0) && (-1 < (int)uVar11)) {
    fVar16 = *(float *)(param_1[0x19] + 0x154);
    if (fVar16 <= DAT_1404925e0) {
      param_2 = 0.0;
    }
    else {
      param_2 = param_2 / fVar16;
    }
    if (((0.0 < *(float *)(param_1 + 0x5e) * *(float *)(param_1 + 0x5e) *
                *(float *)(param_1[0x19] + 0x2d8)) && (0.0 < *(float *)((longlong)param_1 + 0x2fc)))
       && (fVar16 = *(float *)((longlong)param_1 + 0x2fc) - param_2,
          *(float *)((longlong)param_1 + 0x2fc) = fVar16, fVar16 <= 0.0)) {
      *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
      FUN_1401f5980(param_1);
      uVar11 = *(uint *)(param_1 + 0x62);
    }
    if ((0.0 < *(float *)(param_1[0x19] + 0x2d8)) && (0.0 < *(float *)(param_1 + 0x60))) {
      *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x60) - param_2;
    }
    if ((uVar11 & 4) != 0) {
      uVar12 = (param_1[0x59] - param_1[0x58] >> 3) * 0x6db6db6db6db6db7;
      uVar11 = (uint)uVar12;
      if (uVar11 != 0) {
        lVar4 = param_1[0x5c];
        uVar15 = lVar4 - param_1[0x5b];
        uVar7 = uVar12 & 0xffffffff;
        uVar14 = (longlong)uVar15 >> 3;
        puVar10 = auStack_a8;
        if (uVar14 < uVar7) {
          uVar6 = param_1[0x5d] - param_1[0x5b] >> 3;
          if (uVar6 < uVar7) {
            if (0x1fffffffffffffff - (uVar6 >> 1) < uVar6) {
LAB_1401f5450:
                    /* WARNING: Subroutine does not return */
              FUN_140017370();
            }
            uVar6 = (uVar6 >> 1) + uVar6;
            if (uVar6 < uVar7) {
              uVar6 = uVar12 & 0xffffffff;
            }
            else if (0x1fffffffffffffff < uVar6) goto LAB_1401f5450;
            uVar6 = uVar6 * 8;
            if (uVar6 == 0) {
              uVar6 = 0;
              puVar9 = auStack_a8;
            }
            else if (uVar6 < 0x1000) {
              uVar6 = FUN_14028af20();
            }
            else {
              if (uVar6 + 0x27 <= uVar6) goto LAB_1401f5450;
              lVar4 = FUN_14028af20(uVar6 + 0x27);
              if (lVar4 == 0) {
                pcVar2 = (code *)swi(0x29);
                lVar4 = (*pcVar2)(5);
                puVar8 = auStack_a0;
              }
              uVar6 = lVar4 + 0x27U & 0xffffffffffffffe0;
              *(longlong *)(uVar6 - 8) = lVar4;
              puVar9 = puVar8;
            }
            *(undefined8 *)(puVar9 + -8) = 0x1401f516f;
            FUN_1404217a0((uVar15 & 0xfffffffffffffff8) + uVar6,0,(uVar7 - uVar14) * 8);
            lVar4 = param_1[0x5b];
            lVar5 = param_1[0x5c];
            *(undefined8 *)(puVar9 + -8) = 0x1401f5188;
            FUN_1404210f0(uVar6,lVar4,lVar5 - lVar4);
            *(undefined8 *)(puVar9 + -8) = 0x1401f519d;
            FUN_1400384c0(param_1 + 0x5b,uVar6,uVar7);
            puVar10 = puVar9;
          }
          else {
            lVar5 = (uVar7 - uVar14) * 8;
            FUN_1404217a0(lVar4,0,lVar5);
            param_1[0x5c] = lVar5 + lVar4;
            puVar10 = auStack_a8;
          }
        }
        *(undefined4 *)(puVar10 + 0x50) = unaff_XMM8_Da;
        *(undefined4 *)(puVar10 + 0x54) = unaff_XMM8_Db;
        *(undefined4 *)(puVar10 + 0x58) = unaff_XMM8_Dc;
        *(undefined4 *)(puVar10 + 0x5c) = unaff_XMM8_Dd;
        uVar7 = 0;
        *(undefined4 *)(puVar10 + 0x40) = unaff_XMM9_Da;
        *(undefined4 *)(puVar10 + 0x44) = unaff_XMM9_Db;
        *(undefined4 *)(puVar10 + 0x48) = unaff_XMM9_Dc;
        *(undefined4 *)(puVar10 + 0x4c) = unaff_XMM9_Dd;
        *(undefined4 *)(puVar10 + 0x30) = unaff_XMM10_Da;
        *(undefined4 *)(puVar10 + 0x34) = unaff_XMM10_Db;
        *(undefined4 *)(puVar10 + 0x38) = unaff_XMM10_Dc;
        *(undefined4 *)(puVar10 + 0x3c) = unaff_XMM10_Dd;
        if (uVar11 != 0) {
          do {
            *(undefined8 *)(param_1[0x5b] + uVar7 * 8) =
                 *(undefined8 *)(uVar7 * 0x38 + 0x28 + param_1[0x58]);
            uVar13 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar13;
          } while (uVar13 < uVar11);
        }
        pcVar2 = *(code **)(*param_1 + 0x80);
        *(undefined8 *)(puVar10 + -8) = 0x1401f5212;
        lVar5 = (*pcVar2)(param_1);
        lVar4 = param_1[0x19];
        fVar21 = *(float *)(lVar5 + 0x34) - *(float *)(lVar4 + 0x6c);
        fVar16 = *(float *)(lVar5 + 0x38);
        fVar19 = *(float *)(lVar5 + 0x30) - *(float *)(lVar4 + 0x68);
        fVar20 = fVar16 - *(float *)(lVar4 + 0x70);
        *(float *)(puVar10 + 0x24) = fVar21;
        *(float *)(puVar10 + 0x20) = fVar19;
        *(float *)(puVar10 + 0x28) = fVar20;
        uVar11 = *(uint *)(lVar4 + 0x17c);
        uVar13 = *(uint *)(lVar4 + 0x180);
        fVar22 = *(float *)(lVar4 + 0x164);
        fVar24 = fVar21 * *(float *)(lVar4 + 0x170) + fVar19 * *(float *)(lVar4 + 0x16c) +
                 fVar20 * *(float *)(lVar4 + 0x174);
        uVar1 = *(uint *)(lVar4 + 0x178);
        fVar18 = *(float *)(lVar4 + 0x168);
        fVar17 = *(float *)(lVar4 + 0x160);
        *(float *)(puVar10 + 0x20) = fVar24;
        fVar23 = (float)(uVar11 ^ DAT_140492ff0) * fVar21 + (float)(uVar1 ^ DAT_140492ff0) * fVar19
                 + (float)(uVar13 ^ DAT_140492ff0) * fVar20;
        fVar22 = fVar21 * fVar22 + fVar19 * fVar17 + fVar20 * fVar18;
        *(float *)(puVar10 + 0x24) = fVar23;
        *(float *)(puVar10 + 0x28) = fVar22;
        if ((*(uint *)(lVar4 + 0x118) >> 10 & 1) != 0) {
          fVar18 = fVar23 * fVar23 + fVar24 * fVar24 + fVar22 * fVar22;
          if (fVar18 < 0.0) {
            *(undefined8 *)(puVar10 + -8) = 0x1401f533c;
            fVar18 = (float)FUN_14041ad10(fVar18);
          }
          else {
            fVar18 = SQRT(fVar18);
          }
          fVar18 = DAT_140492704 / fVar18;
          *(float *)(puVar10 + 0x20) = fVar24 * fVar18;
          *(float *)(puVar10 + 0x24) = fVar23 * fVar18;
          *(float *)(puVar10 + 0x28) = fVar22 * fVar18;
          fVar17 = (float)(*(int *)(lVar4 + 0x88) + *(int *)(lVar4 + 0x84)) * DAT_14049268c;
          fVar16 = fVar17 - fVar16;
          if (fVar16 <= 0.0) {
            fVar16 = 0.0;
          }
          fVar16 = fVar16 / fVar17;
          *(float *)(puVar10 + 0x20) = fVar24 * fVar18 * fVar16;
          *(float *)(puVar10 + 0x24) = fVar23 * fVar18 * fVar16;
          *(float *)(puVar10 + 0x28) = fVar22 * fVar18 * fVar16;
        }
        if (*(int *)(lVar4 + 0x144) == 0) {
          *(undefined8 *)(puVar10 + 0x20) = 0;
          *(undefined4 *)(puVar10 + 0x28) = 0x47c34f80;
        }
        plVar3 = *(longlong **)(lVar4 + 0x158);
        lVar4 = param_1[0x5b];
        pcVar2 = *(code **)(*plVar3 + 0xf8);
        *(undefined8 *)(puVar10 + -8) = 0x1401f5405;
        (*pcVar2)(plVar3,uVar12 & 0xffffffff,lVar4,puVar10 + 0x20);
      }
    }
  }
  return;
}

