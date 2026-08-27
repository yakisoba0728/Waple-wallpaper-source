// Function: FUN_14007c9f0
// Addr: 14007c9f0
// Size: 465 bytes


longlong FUN_14007c9f0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 unaff_R12;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [80];
  
  puVar6 = auStack_78;
  puVar7 = auStack_78;
  lVar1 = *param_1;
  lVar10 = (param_1[1] - lVar1 >> 3) * -0x71c71c71c71c71c7;
  if (lVar10 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar4 = (param_1[2] - lVar1 >> 3) * -0x71c71c71c71c71c7;
  uVar3 = 0x38e38e38e38e38e - (uVar4 >> 1);
  if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
    uVar3 = lVar10 + 1;
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar8 = uVar3;
    if (uVar3 <= uVar4) {
      uVar8 = uVar4;
    }
    if (uVar8 < 0x38e38e38e38e38f) {
      uVar4 = uVar8 * 0x48;
      if (uVar4 == 0) {
        uVar4 = 0;
        puVar7 = auStack_78;
      }
      else if (uVar4 < 0x1000) {
        uVar4 = FUN_14028af20();
      }
      else {
        if (uVar4 + 0x27 <= uVar4) goto LAB_14007cbbd;
        lVar10 = FUN_14028af20(uVar4 + 0x27);
        if (lVar10 == 0) {
          pcVar2 = (code *)swi(0x29);
          lVar10 = (*pcVar2)(5);
          puVar6 = auStack_70;
        }
        uVar4 = lVar10 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar4 - 8) = lVar10;
        puVar7 = puVar6;
      }
      *(undefined8 *)(puVar7 + 0x50) = unaff_R12;
      *(longlong **)(puVar7 + 0x20) = param_1;
      *(ulonglong *)(puVar7 + 0x30) = uVar8;
      lVar1 = uVar4 + ((param_2 - lVar1) / 0x48) * 0x48;
      *(ulonglong *)(puVar7 + 0x40) = lVar1 + 0x48U;
      *(undefined8 *)(puVar7 + -8) = 0x14007cb22;
      FUN_140016fc0(lVar1,param_3);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(param_3 + 0x20);
      *(undefined8 *)(puVar7 + -8) = 0x14007cb37;
      FUN_140016fc0(lVar1 + 0x28,param_3 + 0x28);
      lVar10 = param_1[1];
      lVar5 = *param_1;
      *(longlong *)(puVar7 + 0x38) = lVar1;
      uVar9 = uVar4;
      if (param_2 != lVar10) {
        *(undefined8 *)(puVar7 + -8) = 0x14007cb53;
        FUN_14007c690(lVar5,param_2,uVar4);
        lVar10 = param_1[1];
        *(ulonglong *)(puVar7 + 0x38) = uVar4;
        lVar5 = param_2;
        uVar9 = lVar1 + 0x48U;
      }
      *(undefined8 *)(puVar7 + -8) = 0x14007cb67;
      FUN_14007c690(lVar5,lVar10,uVar9);
      *(undefined8 *)(puVar7 + 0x28) = 0;
      *(undefined8 *)(puVar7 + -8) = 0x14007cb81;
      FUN_14007d1c0(param_1,uVar4,uVar3,uVar8);
      *(undefined8 *)(puVar7 + -8) = 0x14007cb8b;
      FUN_14007d100(puVar7 + 0x20);
      return lVar1;
    }
  }
LAB_14007cbbd:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

