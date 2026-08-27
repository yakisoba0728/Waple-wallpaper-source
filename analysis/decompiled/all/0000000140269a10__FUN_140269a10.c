// Function: FUN_140269a10
// Addr: 140269a10
// Size: 571 bytes


undefined8 FUN_140269a10(longlong *param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 unaff_RSI;
  ulonglong uVar10;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [72];
  
  puVar8 = auStack_78;
  puVar9 = auStack_78;
  lVar6 = *param_1;
  lVar5 = (param_1[1] - lVar6 >> 3) * -0x70a3d70a3d70a3d7;
  if (lVar5 == 0x147ae147ae147ae) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar4 = (param_1[2] - lVar6 >> 3) * -0x70a3d70a3d70a3d7;
  uVar3 = 0x147ae147ae147ae - (uVar4 >> 1);
  if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
    uVar3 = lVar5 + 1;
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar10 = uVar3;
    if (uVar3 <= uVar4) {
      uVar10 = uVar4;
    }
    if (uVar10 < 0x147ae147ae147af) {
      uVar4 = uVar10 * 200;
      if (uVar4 == 0) {
        uVar4 = 0;
        puVar9 = auStack_78;
      }
      else if (uVar4 < 0x1000) {
        uVar4 = FUN_14028af20();
      }
      else {
        if (uVar4 + 0x27 <= uVar4) goto LAB_140269c47;
        lVar5 = FUN_14028af20(uVar4 + 0x27);
        if (lVar5 == 0) {
          pcVar1 = (code *)swi(0x29);
          lVar5 = (*pcVar1)(5);
          puVar8 = auStack_70;
        }
        uVar4 = lVar5 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar4 - 8) = lVar5;
        puVar9 = puVar8;
      }
      *(undefined8 *)(puVar9 + 0x88) = unaff_RSI;
      *(longlong **)(puVar9 + 0x20) = param_1;
      *(ulonglong *)(puVar9 + 0x30) = uVar10;
      lVar6 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(param_2 - lVar6),8) + (param_2 - lVar6);
      lVar7 = ((lVar6 >> 7) - (lVar6 >> 0x3f)) * 200 + uVar4;
      *(longlong *)(puVar9 + 0x80) = lVar7;
      lVar6 = lVar7 + 200;
      *(longlong *)(puVar9 + 0x40) = lVar6;
      *(undefined8 *)(puVar9 + -8) = 0x140269b4f;
      FUN_1401dd430(lVar7,param_3);
      lVar5 = param_1[1];
      *(longlong *)(puVar9 + 0x38) = lVar7;
      lVar7 = *param_1;
      uVar2 = uVar4;
      if (param_2 == lVar5) {
        for (; lVar7 != lVar5; lVar7 = lVar7 + 200) {
          *(undefined8 *)(puVar9 + -8) = 0x140269b7b;
          FUN_1401dd430(uVar2,lVar7);
          uVar2 = uVar2 + 200;
        }
      }
      else {
        for (; lVar7 != param_2; lVar7 = lVar7 + 200) {
          *(undefined8 *)(puVar9 + -8) = 0x140269bab;
          FUN_1401dd430(uVar2,lVar7);
          uVar2 = uVar2 + 200;
        }
        lVar5 = param_1[1];
        *(ulonglong *)(puVar9 + 0x38) = uVar4;
        for (; param_2 != lVar5; param_2 = param_2 + 200) {
          *(undefined8 *)(puVar9 + -8) = 0x140269bdb;
          FUN_1401dd430(lVar6,param_2);
          lVar6 = lVar6 + 200;
        }
      }
      *(undefined8 *)(puVar9 + 0x28) = 0;
      *(undefined8 *)(puVar9 + -8) = 0x140269c08;
      FUN_1401dcc40(param_1,uVar4,uVar3,uVar10);
      *(undefined8 *)(puVar9 + -8) = 0x140269c12;
      FUN_1401dcb80(puVar9 + 0x20);
      return *(undefined8 *)(puVar9 + 0x80);
    }
  }
LAB_140269c47:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

