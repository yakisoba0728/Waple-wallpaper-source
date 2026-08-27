// Function: FUN_140053110
// Addr: 140053110
// Size: 393 bytes


ulonglong *
FUN_140053110(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
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
  uVar8 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff - uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  uVar4 = param_1[3];
  uVar7 = uVar3 + param_2 | 0xf;
  if ((uVar7 < 0x8000000000000000) && (uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1))) {
    uVar2 = (uVar4 >> 1) + uVar4;
    uVar8 = uVar7;
    if (uVar7 < uVar2) {
      uVar8 = uVar2;
    }
    uVar2 = uVar8 + 1;
    if (uVar2 == 0) {
      unaff_RDI = 0;
    }
    else {
      if (0xfff < uVar2) {
        uVar7 = uVar8 + 0x28;
        if (uVar7 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        goto LAB_1400531b7;
      }
      unaff_RDI = FUN_14028af20(uVar2);
    }
LAB_1400531da:
    param_1[2] = uVar3 + param_2;
    lVar6 = unaff_RDI + uVar3;
    param_1[3] = uVar8;
    if (uVar4 < 0x10) {
      FUN_1404210f0(unaff_RDI,param_1,uVar3);
      FUN_1404210f0(lVar6,param_4,param_5);
      *(undefined1 *)(lVar6 + param_5) = 0;
      goto LAB_14005326a;
    }
    uVar8 = *param_1;
    FUN_1404210f0(unaff_RDI,uVar8,uVar3);
    FUN_1404210f0(lVar6,param_4,param_5);
    *(undefined1 *)(lVar6 + param_5) = 0;
    if (0xfff < uVar4 + 1) {
      plVar1 = (longlong *)(uVar8 - 8);
      uVar8 = (uVar8 - *plVar1) - 8;
      if (uVar8 < 0x20) {
        thunk_FUN_14028af80(*plVar1,uVar4 + 0x28);
        goto LAB_14005326a;
      }
      goto LAB_14005323e;
    }
  }
  else {
    uVar7 = 0x8000000000000027;
LAB_1400531b7:
    lVar6 = FUN_14028af20(uVar7);
    if (lVar6 != 0) {
      unaff_RDI = lVar6 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RDI - 8) = lVar6;
      goto LAB_1400531da;
    }
LAB_14005323e:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar9 = auStack_40;
  }
  *(undefined8 *)(puVar9 + -8) = 0x14005324d;
  thunk_FUN_14028af80(uVar8);
LAB_14005326a:
  *param_1 = unaff_RDI;
  return param_1;
}

