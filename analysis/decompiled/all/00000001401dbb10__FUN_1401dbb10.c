// Function: FUN_1401dbb10
// Addr: 1401dbb10
// Size: 687 bytes


undefined8 * FUN_1401dbb10(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 unaff_RBP;
  undefined8 *puVar9;
  undefined8 unaff_R15;
  undefined8 *puVar10;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [80];
  
  puVar8 = auStack_78;
  puVar7 = auStack_78;
  lVar6 = *param_1;
  lVar5 = (param_1[1] - lVar6 >> 3) * -0x70a3d70a3d70a3d7;
  if (lVar5 == 0x147ae147ae147ae) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar3 = (param_1[2] - lVar6 >> 3) * -0x70a3d70a3d70a3d7;
  uVar2 = 0x147ae147ae147ae - (uVar3 >> 1);
  if (uVar3 < uVar2 || uVar3 - uVar2 == 0) {
    uVar2 = lVar5 + 1;
    uVar3 = (uVar3 >> 1) + uVar3;
    if (uVar2 <= uVar3) {
      uVar2 = uVar3;
    }
    if (uVar2 < 0x147ae147ae147af) {
      uVar4 = uVar2 * 200;
      uVar3 = 0;
      if (uVar4 != 0) {
        if (uVar4 < 0x1000) {
          uVar3 = FUN_14028af20();
          puVar8 = auStack_78;
        }
        else {
          if (uVar4 + 0x27 <= uVar4) goto LAB_1401dbdbb;
          lVar5 = FUN_14028af20(uVar4 + 0x27);
          if (lVar5 == 0) {
            pcVar1 = (code *)swi(0x29);
            lVar5 = (*pcVar1)(5);
            puVar7 = auStack_70;
          }
          uVar3 = lVar5 + 0x27U & 0xffffffffffffffe0;
          *(longlong *)(uVar3 - 8) = lVar5;
          puVar8 = puVar7;
        }
      }
      *(undefined8 *)(puVar8 + 0x88) = unaff_RBP;
      *(undefined8 *)(puVar8 + 0x50) = unaff_R15;
      *(longlong **)(puVar8 + 0x20) = param_1;
      *(ulonglong *)(puVar8 + 0x30) = uVar2;
      lVar6 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(param_2 - lVar6),8) + (param_2 - lVar6);
      puVar10 = (undefined8 *)(((lVar6 >> 7) - (lVar6 >> 0x3f)) * 200 + uVar3);
      *(undefined8 **)(puVar8 + 0x38) = puVar10;
      puVar10[0x10] = 0;
      puVar9 = puVar10 + 0x19;
      puVar10[0x12] = 0;
      puVar10[0x14] = 0;
      puVar10[8] = 0;
      puVar10[10] = 0;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[0xd] = 0;
      puVar10[0xe] = 0;
      puVar10[0xf] = 0;
      puVar10[3] = 0;
      puVar10[7] = 0;
      puVar10[9] = 0;
      puVar10[0xb] = 0;
      puVar10[0xc] = 0x3f800000;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      puVar10[0x11] = 0;
      puVar10[0x13] = 0;
      puVar10[0x15] = 0;
      puVar10[0x16] = 0;
      puVar10[0x17] = 0;
      puVar10[0x18] = 0;
      lVar6 = param_1[1];
      lVar5 = *param_1;
      *(undefined8 **)(puVar8 + 0x40) = puVar9;
      uVar4 = uVar3;
      if (param_2 == lVar6) {
        for (; lVar5 != lVar6; lVar5 = lVar5 + 200) {
          *(undefined8 *)(puVar8 + -8) = 0x1401dbcef;
          FUN_1401dd430(uVar4,lVar5);
          uVar4 = uVar4 + 200;
        }
      }
      else {
        for (; lVar5 != param_2; lVar5 = lVar5 + 200) {
          *(undefined8 *)(puVar8 + -8) = 0x1401dbd1b;
          FUN_1401dd430(uVar4,lVar5);
          uVar4 = uVar4 + 200;
        }
        lVar6 = param_1[1];
        *(ulonglong *)(puVar8 + 0x38) = uVar3;
        for (; param_2 != lVar6; param_2 = param_2 + 200) {
          *(undefined8 *)(puVar8 + -8) = 0x1401dbd4b;
          FUN_1401dd430(puVar9,param_2);
          puVar9 = puVar9 + 0x19;
        }
      }
      *(undefined8 *)(puVar8 + 0x28) = 0;
      *(undefined8 *)(puVar8 + -8) = 0x1401dbd7d;
      FUN_1401dcc40(param_1,uVar3,*(undefined8 *)(puVar8 + 0x80),uVar2);
      *(undefined8 *)(puVar8 + -8) = 0x1401dbd87;
      FUN_1401dcb80(puVar8 + 0x20);
      return puVar10;
    }
  }
LAB_1401dbdbb:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

