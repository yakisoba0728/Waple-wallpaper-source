// Function: FUN_140282410
// Addr: 140282410
// Size: 411 bytes


undefined8 * FUN_140282410(longlong *param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined8 unaff_R14;
  undefined8 *puVar10;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [80];
  
  puVar7 = auStack_78;
  puVar8 = auStack_78;
  lVar2 = *param_1;
  if (param_1[1] - lVar2 == -8) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar6 = param_1[2] - lVar2 >> 3;
  if (uVar6 <= 0x1fffffffffffffff - (uVar6 >> 1)) {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar1 = (param_1[1] - lVar2 >> 3) + 1;
    uVar9 = uVar1;
    if (uVar1 <= uVar6) {
      uVar9 = uVar6;
    }
    if (uVar9 < 0x2000000000000000) {
      uVar6 = uVar9 * 8;
      if (uVar6 == 0) {
        uVar6 = 0;
        puVar8 = auStack_78;
      }
      else if (uVar6 < 0x1000) {
        uVar6 = FUN_14028af20();
      }
      else {
        if (uVar6 + 0x27 <= uVar6) goto LAB_1402825a7;
        lVar4 = FUN_14028af20(uVar6 + 0x27);
        if (lVar4 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar4 = (*pcVar3)(5);
          puVar7 = auStack_70;
        }
        uVar6 = lVar4 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar6 - 8) = lVar4;
        puVar8 = puVar7;
      }
      param_3 = (longlong *)*param_3;
      *(undefined8 *)(puVar8 + 0x50) = unaff_R14;
      *(longlong **)(puVar8 + 0x20) = param_1;
      *(ulonglong *)(puVar8 + 0x30) = uVar9;
      puVar10 = (undefined8 *)((param_2 - lVar2 & 0xfffffffffffffff8U) + uVar6);
      *(undefined8 **)(puVar8 + 0x40) = puVar10 + 1;
      if (param_3 == (longlong *)0x0) {
        uVar5 = 0;
      }
      else {
        pcVar3 = *(code **)(*param_3 + 8);
        *(undefined8 *)(puVar8 + -8) = 0x140282514;
        uVar5 = (*pcVar3)();
      }
      *puVar10 = uVar5;
      lVar2 = param_1[1];
      lVar4 = *param_1;
      *(undefined8 **)(puVar8 + 0x38) = puVar10;
      if (param_2 == lVar2) {
        *(undefined8 *)(puVar8 + -8) = 0x140282534;
        FUN_1402825b0(lVar4,lVar2,uVar6);
      }
      else {
        *(undefined8 *)(puVar8 + -8) = 0x14028253e;
        FUN_1402825b0(lVar4,param_2,uVar6);
        lVar2 = param_1[1];
        *(ulonglong *)(puVar8 + 0x38) = uVar6;
        *(undefined8 *)(puVar8 + -8) = 0x140282552;
        FUN_1402825b0(param_2,lVar2,puVar10 + 1);
      }
      *(undefined8 *)(puVar8 + 0x28) = 0;
      *(undefined8 *)(puVar8 + -8) = 0x14028256c;
      FUN_140282850(param_1,uVar6,uVar1,uVar9);
      *(undefined8 *)(puVar8 + -8) = 0x140282576;
      FUN_1402827a0(puVar8 + 0x20);
      return puVar10;
    }
  }
LAB_1402825a7:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

