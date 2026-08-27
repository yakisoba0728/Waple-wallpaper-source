// Function: FUN_1401b8760
// Addr: 1401b8760
// Size: 412 bytes


ulonglong *
FUN_1401b8760(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong unaff_RBX;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar8 = auStack_38;
  uVar3 = param_1[2];
  uVar9 = 0x3ffffffffffffffe;
  if (uVar3 == 0x3ffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  uVar4 = param_1[3];
  uVar7 = uVar3 + 1 | 3;
  if ((uVar7 < 0x3fffffffffffffff) && (uVar4 <= 0x3ffffffffffffffe - (uVar4 >> 1))) {
    uVar2 = (uVar4 >> 1) + uVar4;
    uVar9 = uVar7;
    if (uVar7 < uVar2) {
      uVar9 = uVar2;
    }
    if (0x3fffffffffffffff < uVar9 + 1) goto LAB_1401b88f2;
    uVar7 = (uVar9 + 1) * 4;
    if (uVar7 != 0) goto LAB_1401b880a;
    unaff_RBX = 0;
LAB_1401b8843:
    param_1[2] = uVar3 + 1;
    lVar6 = uVar3 * 4;
    param_1[3] = uVar9;
    if (uVar4 < 4) {
      FUN_1404210f0(unaff_RBX,param_1,lVar6);
      *(undefined4 *)(lVar6 + unaff_RBX) = param_4;
      *(undefined4 *)(lVar6 + 4 + unaff_RBX) = 0;
      goto LAB_1401b88ce;
    }
    uVar9 = *param_1;
    FUN_1404210f0(unaff_RBX,uVar9,lVar6);
    *(undefined4 *)(lVar6 + unaff_RBX) = param_4;
    *(undefined4 *)(lVar6 + 4 + unaff_RBX) = 0;
    if (0xfff < uVar4 * 4 + 4) {
      plVar1 = (longlong *)(uVar9 - 8);
      uVar9 = (uVar9 - *plVar1) - 8;
      if (uVar9 < 0x20) {
        thunk_FUN_14028af80(*plVar1,uVar4 * 4 + 0x2b);
        goto LAB_1401b88ce;
      }
      goto LAB_1401b88a8;
    }
  }
  else {
    uVar7 = 0xfffffffffffffffc;
LAB_1401b880a:
    if (uVar7 < 0x1000) {
      unaff_RBX = FUN_14028af20();
      goto LAB_1401b8843;
    }
    if (uVar7 + 0x27 <= uVar7) {
LAB_1401b88f2:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    lVar6 = FUN_14028af20(uVar7 + 0x27);
    if (lVar6 != 0) {
      unaff_RBX = lVar6 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RBX - 8) = lVar6;
      goto LAB_1401b8843;
    }
LAB_1401b88a8:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar8 = auStack_30;
  }
  *(undefined8 *)(puVar8 + -8) = 0x1401b88b7;
  thunk_FUN_14028af80(uVar9);
LAB_1401b88ce:
  *param_1 = unaff_RBX;
  return param_1;
}

