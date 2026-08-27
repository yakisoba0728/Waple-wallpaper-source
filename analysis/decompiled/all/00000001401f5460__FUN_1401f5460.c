// Function: FUN_1401f5460
// Addr: 1401f5460
// Size: 1145 bytes


void FUN_1401f5460(longlong *param_1,char param_2)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 unaff_XMM6_Da;
  float fVar24;
  float fVar25;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  float fVar26;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  float fVar27;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [120];
  
  puVar11 = auStack_a8;
  puVar12 = auStack_a8;
  uVar15 = (param_1[0x59] - param_1[0x58] >> 3) * 0x6db6db6db6db6db7;
  uVar14 = (uint)uVar15;
  if (uVar14 != 0) {
    lVar7 = param_1[0x5c];
    uVar18 = lVar7 - param_1[0x5b];
    uVar10 = uVar15 & 0xffffffff;
    uVar17 = (longlong)uVar18 >> 3;
    puVar13 = auStack_a8;
    if (uVar17 < uVar10) {
      uVar9 = param_1[0x5d] - param_1[0x5b] >> 3;
      if (uVar9 < uVar10) {
        if (0x1fffffffffffffff - (uVar9 >> 1) < uVar9) {
LAB_1401f58d4:
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        uVar9 = (uVar9 >> 1) + uVar9;
        if (uVar9 < uVar10) {
          uVar9 = uVar15 & 0xffffffff;
        }
        else if (0x1fffffffffffffff < uVar9) goto LAB_1401f58d4;
        uVar9 = uVar9 * 8;
        if (uVar9 == 0) {
          uVar9 = 0;
          puVar12 = auStack_a8;
        }
        else if (uVar9 < 0x1000) {
          uVar9 = FUN_14028af20();
        }
        else {
          if (uVar9 + 0x27 <= uVar9) goto LAB_1401f58d4;
          lVar7 = FUN_14028af20(uVar9 + 0x27);
          if (lVar7 == 0) {
            pcVar3 = (code *)swi(0x29);
            lVar7 = (*pcVar3)(5);
            puVar11 = auStack_a0;
          }
          uVar9 = lVar7 + 0x27U & 0xffffffffffffffe0;
          *(longlong *)(uVar9 - 8) = lVar7;
          puVar12 = puVar11;
        }
        *(undefined8 *)(puVar12 + -8) = 0x1401f5592;
        FUN_1404217a0((uVar18 & 0xfffffffffffffff8) + uVar9,0,(uVar10 - uVar17) * 8);
        lVar7 = param_1[0x5b];
        lVar8 = param_1[0x5c];
        *(undefined8 *)(puVar12 + -8) = 0x1401f55ab;
        FUN_1404210f0(uVar9,lVar7,lVar8 - lVar7);
        *(undefined8 *)(puVar12 + -8) = 0x1401f55c0;
        FUN_1400384c0(param_1 + 0x5b,uVar9,uVar10);
        param_2 = puVar12[0xb8];
        puVar13 = puVar12;
      }
      else {
        lVar8 = (uVar10 - uVar17) * 8;
        FUN_1404217a0(lVar7,0,lVar8);
        param_1[0x5c] = lVar8 + lVar7;
        puVar13 = auStack_a8;
      }
    }
    *(undefined4 *)(puVar13 + 0x70) = unaff_XMM6_Da;
    *(undefined4 *)(puVar13 + 0x74) = unaff_XMM6_Db;
    *(undefined4 *)(puVar13 + 0x78) = unaff_XMM6_Dc;
    *(undefined4 *)(puVar13 + 0x7c) = unaff_XMM6_Dd;
    uVar10 = 0;
    *(undefined4 *)(puVar13 + 0x60) = unaff_XMM7_Da;
    *(undefined4 *)(puVar13 + 100) = unaff_XMM7_Db;
    *(undefined4 *)(puVar13 + 0x68) = unaff_XMM7_Dc;
    *(undefined4 *)(puVar13 + 0x6c) = unaff_XMM7_Dd;
    *(undefined4 *)(puVar13 + 0x50) = unaff_XMM8_Da;
    *(undefined4 *)(puVar13 + 0x54) = unaff_XMM8_Db;
    *(undefined4 *)(puVar13 + 0x58) = unaff_XMM8_Dc;
    *(undefined4 *)(puVar13 + 0x5c) = unaff_XMM8_Dd;
    *(undefined4 *)(puVar13 + 0x40) = unaff_XMM9_Da;
    *(undefined4 *)(puVar13 + 0x44) = unaff_XMM9_Db;
    *(undefined4 *)(puVar13 + 0x48) = unaff_XMM9_Dc;
    *(undefined4 *)(puVar13 + 0x4c) = unaff_XMM9_Dd;
    *(undefined4 *)(puVar13 + 0x30) = unaff_XMM10_Da;
    *(undefined4 *)(puVar13 + 0x34) = unaff_XMM10_Db;
    *(undefined4 *)(puVar13 + 0x38) = unaff_XMM10_Dc;
    *(undefined4 *)(puVar13 + 0x3c) = unaff_XMM10_Dd;
    if (uVar14 != 0) {
      do {
        *(undefined8 *)(param_1[0x5b] + uVar10 * 8) =
             *(undefined8 *)(uVar10 * 0x38 + 0x28 + param_1[0x58]);
        uVar16 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar16;
      } while (uVar16 < uVar14);
    }
    pcVar3 = *(code **)(*param_1 + 0x80);
    *(undefined8 *)(puVar13 + -8) = 0x1401f5643;
    lVar8 = (*pcVar3)(param_1);
    lVar7 = param_1[0x19];
    fVar24 = *(float *)(lVar8 + 0x34) - *(float *)(lVar7 + 0x6c);
    fVar19 = *(float *)(lVar8 + 0x38);
    fVar22 = *(float *)(lVar8 + 0x30) - *(float *)(lVar7 + 0x68);
    fVar23 = fVar19 - *(float *)(lVar7 + 0x70);
    *(float *)(puVar13 + 0x24) = fVar24;
    *(float *)(puVar13 + 0x20) = fVar22;
    *(float *)(puVar13 + 0x28) = fVar23;
    uVar14 = *(uint *)(lVar7 + 0x17c);
    uVar16 = *(uint *)(lVar7 + 0x180);
    fVar25 = *(float *)(lVar7 + 0x164);
    fVar27 = fVar24 * *(float *)(lVar7 + 0x170) + fVar22 * *(float *)(lVar7 + 0x16c) +
             fVar23 * *(float *)(lVar7 + 0x174);
    uVar1 = *(uint *)(lVar7 + 0x178);
    fVar21 = *(float *)(lVar7 + 0x168);
    fVar20 = *(float *)(lVar7 + 0x160);
    *(float *)(puVar13 + 0x20) = fVar27;
    fVar26 = (float)(uVar14 ^ DAT_140492ff0) * fVar24 + (float)(uVar1 ^ DAT_140492ff0) * fVar22 +
             (float)(uVar16 ^ DAT_140492ff0) * fVar23;
    fVar25 = fVar24 * fVar25 + fVar22 * fVar20 + fVar23 * fVar21;
    *(float *)(puVar13 + 0x24) = fVar26;
    *(float *)(puVar13 + 0x28) = fVar25;
    if ((*(uint *)(lVar7 + 0x118) >> 10 & 1) != 0) {
      fVar21 = fVar26 * fVar26 + fVar27 * fVar27 + fVar25 * fVar25;
      if (fVar21 < 0.0) {
        *(undefined8 *)(puVar13 + -8) = 0x1401f5769;
        fVar21 = (float)FUN_14041ad10(fVar21);
      }
      else {
        fVar21 = SQRT(fVar21);
      }
      fVar21 = DAT_140492704 / fVar21;
      *(float *)(puVar13 + 0x20) = fVar27 * fVar21;
      *(float *)(puVar13 + 0x24) = fVar26 * fVar21;
      *(float *)(puVar13 + 0x28) = fVar25 * fVar21;
      fVar20 = (float)(*(int *)(lVar7 + 0x88) + *(int *)(lVar7 + 0x84)) * DAT_14049268c;
      fVar19 = fVar20 - fVar19;
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      fVar19 = fVar19 / fVar20;
      *(float *)(puVar13 + 0x20) = fVar27 * fVar21 * fVar19;
      *(float *)(puVar13 + 0x24) = fVar26 * fVar21 * fVar19;
      *(float *)(puVar13 + 0x28) = fVar25 * fVar21 * fVar19;
    }
    if (*(int *)(lVar7 + 0x144) == 0) {
      *(undefined8 *)(puVar13 + 0x20) = 0;
      *(undefined4 *)(puVar13 + 0x28) = 0x47c34f80;
    }
    plVar4 = *(longlong **)(lVar7 + 0x158);
    lVar7 = param_1[0x5b];
    pcVar3 = *(code **)(*plVar4 + 0xf8);
    *(undefined8 *)(puVar13 + -8) = 0x1401f5839;
    (*pcVar3)(plVar4,uVar15 & 0xffffffff,lVar7,puVar13 + 0x20);
    if (param_2 != '\0') {
      lVar7 = param_1[0x59];
      for (lVar8 = param_1[0x58]; lVar8 != lVar7; lVar8 = lVar8 + 0x38) {
        uVar2 = *(undefined4 *)((longlong)param_1 + 0x304);
        uVar5 = *(undefined8 *)(lVar8 + 0x28);
        plVar4 = *(longlong **)(param_1[0x19] + 0x158);
        pcVar3 = *(code **)(*plVar4 + 0xe0);
        *(undefined8 *)(puVar13 + -8) = 0x1401f5874;
        (*pcVar3)(plVar4,uVar5,uVar2);
        lVar6 = param_1[0x61];
        uVar5 = *(undefined8 *)(lVar8 + 0x28);
        plVar4 = *(longlong **)(param_1[0x19] + 0x158);
        pcVar3 = *(code **)(*plVar4 + 0xe8);
        *(undefined8 *)(puVar13 + -8) = 0x1401f5897;
        (*pcVar3)(plVar4,uVar5,(int)lVar6);
      }
    }
  }
  return;
}

