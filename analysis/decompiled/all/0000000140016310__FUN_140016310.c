// Function: FUN_140016310
// Addr: 140016310
// Size: 438 bytes


ulonglong *
FUN_140016310(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong unaff_RDI;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar9 = auStack_48;
  uVar3 = param_1[2];
  uVar8 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe - uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  uVar4 = param_1[3];
  uVar7 = uVar3 + param_2 | 7;
  if ((uVar7 < 0x7fffffffffffffff) && (uVar4 <= 0x7ffffffffffffffe - (uVar4 >> 1))) {
    uVar2 = (uVar4 >> 1) + uVar4;
    uVar8 = uVar7;
    if (uVar7 < uVar2) {
      uVar8 = uVar2;
    }
    if (0x7fffffffffffffff < uVar8 + 1) goto LAB_1400164bc;
    uVar7 = (uVar8 + 1) * 2;
    if (uVar7 != 0) goto LAB_1400163b6;
    unaff_RDI = 0;
LAB_1400163f3:
    param_1[2] = uVar3 + param_2;
    param_1[3] = uVar8;
    lVar6 = uVar3 * 2 + unaff_RDI;
    if (uVar4 < 8) {
      FUN_1404210f0(unaff_RDI,param_1);
      FUN_1404210f0(lVar6,param_4,param_5 * 2);
      *(undefined2 *)(unaff_RDI + (uVar3 + param_5) * 2) = 0;
      goto LAB_140016497;
    }
    uVar8 = *param_1;
    FUN_1404210f0(unaff_RDI,uVar8);
    FUN_1404210f0(lVar6,param_4,param_5 * 2);
    *(undefined2 *)(unaff_RDI + (uVar3 + param_5) * 2) = 0;
    if (0xfff < uVar4 * 2 + 2) {
      plVar1 = (longlong *)(uVar8 - 8);
      uVar8 = (uVar8 - *plVar1) - 8;
      if (uVar8 < 0x20) {
        thunk_FUN_14028af80(*plVar1,uVar4 * 2 + 0x29);
        goto LAB_140016497;
      }
      goto LAB_140016469;
    }
  }
  else {
    uVar7 = 0xfffffffffffffffe;
LAB_1400163b6:
    if (uVar7 < 0x1000) {
      unaff_RDI = FUN_14028af20();
      goto LAB_1400163f3;
    }
    if (uVar7 + 0x27 <= uVar7) {
LAB_1400164bc:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    lVar6 = FUN_14028af20(uVar7 + 0x27);
    if (lVar6 != 0) {
      unaff_RDI = lVar6 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RDI - 8) = lVar6;
      goto LAB_1400163f3;
    }
LAB_140016469:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar9 = auStack_40;
  }
  *(undefined8 *)(puVar9 + -8) = 0x140016478;
  thunk_FUN_14028af80(uVar8);
LAB_140016497:
  *param_1 = unaff_RDI;
  return param_1;
}

