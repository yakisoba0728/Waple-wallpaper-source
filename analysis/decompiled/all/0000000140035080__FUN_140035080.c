// Function: FUN_140035080
// Addr: 140035080
// Size: 516 bytes


ulonglong *
FUN_140035080(ulonglong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             longlong param_5,undefined8 param_6,longlong param_7)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  code *pcVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  ulonglong unaff_RDI;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar11 = auStack_58;
  uVar5 = param_1[2];
  uVar10 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe - uVar5 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  uVar6 = param_1[3];
  uVar9 = uVar5 + param_2 | 7;
  if ((uVar9 < 0x7fffffffffffffff) && (uVar6 <= 0x7ffffffffffffffe - (uVar6 >> 1))) {
    uVar2 = (uVar6 >> 1) + uVar6;
    uVar10 = uVar9;
    if (uVar9 < uVar2) {
      uVar10 = uVar2;
    }
    if (0x7fffffffffffffff < uVar10 + 1) goto LAB_14003527a;
    uVar9 = (uVar10 + 1) * 2;
    if (uVar9 != 0) goto LAB_140035126;
    unaff_RDI = 0;
LAB_140035163:
    param_1[3] = uVar10;
    param_1[2] = uVar5 + param_2;
    lVar8 = param_4 * 2 + unaff_RDI;
    lVar4 = ((uVar5 - param_4) - param_5) * 2 + 2;
    lVar3 = unaff_RDI + (param_7 + param_4) * 2;
    if (uVar6 < 8) {
      FUN_1404210f0(unaff_RDI,param_1);
      FUN_1404210f0(lVar8,param_6,param_7 * 2);
      FUN_1404210f0(lVar3,(longlong)param_1 + (param_4 + param_5) * 2,lVar4);
      goto LAB_140035255;
    }
    uVar10 = *param_1;
    FUN_1404210f0(unaff_RDI,uVar10);
    FUN_1404210f0(lVar8,param_6,param_7 * 2);
    FUN_1404210f0(lVar3,uVar10 + (param_4 + param_5) * 2,lVar4);
    if (0xfff < uVar6 * 2 + 2) {
      plVar1 = (longlong *)(uVar10 - 8);
      uVar10 = (uVar10 - *plVar1) - 8;
      if (uVar10 < 0x20) {
        thunk_FUN_14028af80(*plVar1,uVar6 * 2 + 0x29);
        goto LAB_140035255;
      }
      goto LAB_140035218;
    }
  }
  else {
    uVar9 = 0xfffffffffffffffe;
LAB_140035126:
    if (uVar9 < 0x1000) {
      unaff_RDI = FUN_14028af20();
      goto LAB_140035163;
    }
    if (uVar9 + 0x27 <= uVar9) {
LAB_14003527a:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    lVar8 = FUN_14028af20(uVar9 + 0x27);
    if (lVar8 != 0) {
      unaff_RDI = lVar8 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RDI - 8) = lVar8;
      goto LAB_140035163;
    }
LAB_140035218:
    pcVar7 = (code *)swi(0x29);
    (*pcVar7)(5);
    puVar11 = auStack_50;
  }
  *(undefined8 *)(puVar11 + -8) = 0x140035227;
  thunk_FUN_14028af80(uVar10);
LAB_140035255:
  *param_1 = unaff_RDI;
  return param_1;
}

