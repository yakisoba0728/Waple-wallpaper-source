// Function: FUN_14004c600
// Addr: 14004c600
// Size: 467 bytes


longlong FUN_14004c600(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 unaff_R13;
  ulonglong uVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar9 = auStack_48;
  puVar10 = auStack_48;
  lVar2 = *param_1;
  lVar7 = (param_1[1] - lVar2 >> 3) * -0x3333333333333333;
  if (lVar7 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar6 = (param_1[2] - lVar2 >> 3) * -0x3333333333333333;
  uVar5 = 0x666666666666666 - (uVar6 >> 1);
  if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
    uVar5 = lVar7 + 1;
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar11 = uVar5;
    if (uVar5 <= uVar6) {
      uVar11 = uVar6;
    }
    if (uVar11 < 0x666666666666667) {
      uVar6 = uVar11 * 0x28;
      if (uVar6 == 0) {
        uVar6 = 0;
        puVar10 = auStack_48;
      }
      else if (uVar6 < 0x1000) {
        uVar6 = FUN_14028af20();
      }
      else {
        if (uVar6 + 0x27 <= uVar6) goto LAB_14004c7cf;
        lVar7 = FUN_14028af20(uVar6 + 0x27);
        if (lVar7 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar7 = (*pcVar3)(5);
          puVar9 = auStack_40;
        }
        uVar6 = lVar7 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar6 - 8) = lVar7;
        puVar10 = puVar9;
      }
      *(undefined8 *)(puVar10 + 0x58) = unaff_R13;
      uVar1 = *param_3;
      lVar2 = uVar6 + ((param_2 - lVar2) / 0x28) * 0x28;
      *(undefined8 *)(puVar10 + -8) = 0x14004c71d;
      FUN_140084dd0(lVar2,uVar1);
      lVar7 = param_1[1];
      lVar8 = *param_1;
      uVar4 = uVar6;
      if (param_2 == lVar7) {
        for (; lVar8 != lVar7; lVar8 = lVar8 + 0x28) {
          *(undefined8 *)(puVar10 + -8) = 0x14004c73d;
          FUN_140085350(uVar4,lVar8);
          uVar4 = uVar4 + 0x28;
        }
      }
      else {
        for (; lVar8 != param_2; lVar8 = lVar8 + 0x28) {
          *(undefined8 *)(puVar10 + -8) = 0x14004c75f;
          FUN_140085350(uVar4,lVar8);
          uVar4 = uVar4 + 0x28;
        }
        lVar7 = param_1[1];
        lVar8 = lVar2;
        for (; param_2 != lVar7; param_2 = param_2 + 0x28) {
          lVar8 = lVar8 + 0x28;
          *(undefined8 *)(puVar10 + -8) = 0x14004c78b;
          FUN_140085350(lVar8,param_2);
        }
      }
      *(undefined8 *)(puVar10 + -8) = 0x14004c7a9;
      FUN_14004f3a0(param_1,uVar6,uVar5,uVar11);
      return lVar2;
    }
  }
LAB_14004c7cf:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

