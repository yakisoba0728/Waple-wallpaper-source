// Function: FUN_1401b8900
// Addr: 1401b8900
// Size: 450 bytes


void FUN_1401b8900(ulonglong *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong unaff_RDI;
  ulonglong uVar8;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  uVar7 = param_1[2];
  uVar2 = param_1[3];
  if (uVar7 < uVar2) {
    param_1[2] = uVar7 + 1;
    if (3 < uVar2) {
      param_1 = (ulonglong *)*param_1;
    }
    *(undefined4 *)((longlong)param_1 + uVar7 * 4) = param_2;
    *(undefined4 *)((longlong)param_1 + uVar7 * 4 + 4) = 0;
    return;
  }
  uVar8 = 0x3ffffffffffffffe;
  if (uVar7 == 0x3ffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  uVar5 = uVar7 + 1 | 3;
  if ((uVar5 < 0x3fffffffffffffff) && (uVar2 <= 0x3ffffffffffffffe - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar8 = uVar5;
    if (uVar5 < uVar1) {
      uVar8 = uVar1;
    }
    if (0x3fffffffffffffff < uVar8 + 1) goto LAB_1401b8ab8;
    uVar5 = (uVar8 + 1) * 4;
    if (uVar5 != 0) goto LAB_1401b89d9;
    unaff_RDI = 0;
LAB_1401b8a12:
    param_1[3] = uVar8;
    lVar4 = uVar7 * 4;
    param_1[2] = uVar7 + 1;
    if (uVar2 < 4) {
      FUN_1404210f0(unaff_RDI,param_1,lVar4);
      *(undefined4 *)(lVar4 + unaff_RDI) = param_2;
      *(undefined4 *)(lVar4 + 4 + unaff_RDI) = 0;
      goto LAB_1401b8a81;
    }
    uVar7 = *param_1;
    FUN_1404210f0(unaff_RDI,uVar7,lVar4);
    *(undefined4 *)(lVar4 + unaff_RDI) = param_2;
    *(undefined4 *)(lVar4 + 4 + unaff_RDI) = 0;
    uVar8 = uVar7;
    puVar6 = auStack_38;
    if (0xfff < uVar2 * 4 + 4) {
      uVar8 = *(ulonglong *)(uVar7 - 8);
      uVar7 = (uVar7 - uVar8) - 8;
      puVar6 = auStack_38;
      if (0x1f < uVar7) goto LAB_1401b8a72;
    }
  }
  else {
    uVar5 = 0xfffffffffffffffc;
LAB_1401b89d9:
    if (uVar5 < 0x1000) {
      unaff_RDI = FUN_14028af20();
      goto LAB_1401b8a12;
    }
    if (uVar5 + 0x27 <= uVar5) {
LAB_1401b8ab8:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    lVar4 = FUN_14028af20(uVar5 + 0x27);
    if (lVar4 != 0) {
      unaff_RDI = lVar4 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RDI - 8) = lVar4;
      goto LAB_1401b8a12;
    }
LAB_1401b8a72:
    uVar8 = uVar7;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar6 = auStack_30;
  }
  *(undefined8 *)(puVar6 + -8) = 0x1401b8a81;
  thunk_FUN_14028af80(uVar8);
LAB_1401b8a81:
  *param_1 = unaff_RDI;
  return;
}

