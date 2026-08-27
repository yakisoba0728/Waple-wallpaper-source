// Function: FUN_14004eda0
// Addr: 14004eda0
// Size: 454 bytes


ulonglong *
FUN_14004eda0(ulonglong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             longlong param_5,undefined8 param_6,longlong param_7)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  ulonglong unaff_RDI;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar10 = auStack_48;
  uVar4 = param_1[2];
  uVar9 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff - uVar4 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  uVar5 = param_1[3];
  uVar8 = uVar4 + param_2 | 0xf;
  if ((uVar8 < 0x8000000000000000) && (uVar5 <= 0x7fffffffffffffff - (uVar5 >> 1))) {
    uVar2 = (uVar5 >> 1) + uVar5;
    uVar9 = uVar8;
    if (uVar8 < uVar2) {
      uVar9 = uVar2;
    }
    uVar2 = uVar9 + 1;
    if (uVar2 == 0) {
      unaff_RDI = 0;
    }
    else {
      if (0xfff < uVar2) {
        uVar8 = uVar9 + 0x28;
        if (uVar8 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        goto LAB_14004ee47;
      }
      unaff_RDI = FUN_14028af20(uVar2);
    }
LAB_14004ee6e:
    param_1[3] = uVar9;
    param_1[2] = uVar4 + param_2;
    lVar3 = unaff_RDI + param_4;
    lVar7 = ((uVar4 - param_4) - param_5) + 1;
    if (uVar5 < 0x10) {
      FUN_1404210f0(unaff_RDI,param_1,param_4);
      FUN_1404210f0(lVar3,param_6,param_7);
      FUN_1404210f0(lVar3 + param_7,(longlong)param_1 + param_5 + param_4,lVar7);
      goto LAB_14004ef37;
    }
    uVar9 = *param_1;
    FUN_1404210f0(unaff_RDI,uVar9,param_4);
    FUN_1404210f0(lVar3,param_6,param_7);
    FUN_1404210f0(lVar3 + param_7,uVar9 + param_4 + param_5,lVar7);
    if (0xfff < uVar5 + 1) {
      plVar1 = (longlong *)(uVar9 - 8);
      uVar9 = (uVar9 - *plVar1) - 8;
      if (uVar9 < 0x20) {
        thunk_FUN_14028af80(*plVar1,uVar5 + 0x28);
        goto LAB_14004ef37;
      }
      goto LAB_14004eefb;
    }
  }
  else {
    uVar8 = 0x8000000000000027;
LAB_14004ee47:
    lVar7 = FUN_14028af20(uVar8);
    if (lVar7 != 0) {
      unaff_RDI = lVar7 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RDI - 8) = lVar7;
      goto LAB_14004ee6e;
    }
LAB_14004eefb:
    pcVar6 = (code *)swi(0x29);
    (*pcVar6)(5);
    puVar10 = auStack_40;
  }
  *(undefined8 *)(puVar10 + -8) = 0x14004ef0a;
  thunk_FUN_14028af80(uVar9);
LAB_14004ef37:
  *param_1 = unaff_RDI;
  return param_1;
}

