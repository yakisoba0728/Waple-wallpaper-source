// Function: FUN_1401b6270
// Addr: 1401b6270
// Size: 443 bytes


longlong FUN_1401b6270(longlong *param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 unaff_R12;
  longlong lVar10;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [80];
  
  puVar5 = auStack_78;
  puVar6 = auStack_78;
  lVar4 = *param_1;
  lVar9 = (param_1[1] - lVar4 >> 4) * -0x3333333333333333;
  if (lVar9 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_140133d70();
  }
  uVar3 = (param_1[2] - lVar4 >> 4) * -0x3333333333333333;
  uVar2 = 0x333333333333333 - (uVar3 >> 1);
  if (uVar3 < uVar2 || uVar3 - uVar2 == 0) {
    uVar2 = lVar9 + 1;
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar7 = uVar2;
    if (uVar2 <= uVar3) {
      uVar7 = uVar3;
    }
    if (uVar7 < 0x333333333333334) {
      uVar3 = uVar7 * 0x50;
      if (uVar3 == 0) {
        uVar3 = 0;
        puVar6 = auStack_78;
      }
      else if (uVar3 < 0x1000) {
        uVar3 = FUN_14028af20();
      }
      else {
        if (uVar3 + 0x27 <= uVar3) goto LAB_1401b6427;
        lVar9 = FUN_14028af20(uVar3 + 0x27);
        if (lVar9 == 0) {
          pcVar1 = (code *)swi(0x29);
          lVar9 = (*pcVar1)(5);
          puVar5 = auStack_70;
        }
        uVar3 = lVar9 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar3 - 8) = lVar9;
        puVar6 = puVar5;
      }
      *(undefined8 *)(puVar6 + 0x50) = unaff_R12;
      *(longlong **)(puVar6 + 0x20) = param_1;
      *(ulonglong *)(puVar6 + 0x30) = uVar7;
      lVar10 = ((param_2 - lVar4) / 0x50) * 0x50 + uVar3;
      *(ulonglong *)(puVar6 + 0x40) = lVar10 + 0x50U;
      *(undefined8 *)(puVar6 + -8) = 0x1401b63a1;
      FUN_1401b6ea0(-(param_2 - lVar4 >> 0x3f),lVar10,param_3);
      lVar4 = param_1[1];
      lVar9 = *param_1;
      *(longlong *)(puVar6 + 0x38) = lVar10;
      uVar8 = uVar3;
      if (param_2 != lVar4) {
        *(undefined8 *)(puVar6 + -8) = 0x1401b63bd;
        FUN_1401b6fe0(lVar9,param_2,uVar3);
        lVar4 = param_1[1];
        *(ulonglong *)(puVar6 + 0x38) = uVar3;
        lVar9 = param_2;
        uVar8 = lVar10 + 0x50U;
      }
      *(undefined8 *)(puVar6 + -8) = 0x1401b63d1;
      FUN_1401b6fe0(lVar9,lVar4,uVar8);
      *(undefined8 *)(puVar6 + 0x28) = 0;
      *(undefined8 *)(puVar6 + -8) = 0x1401b63eb;
      FUN_1401b7410(param_1,uVar3,uVar2,uVar7);
      *(undefined8 *)(puVar6 + -8) = 0x1401b63f5;
      FUN_1401b7360(puVar6 + 0x20);
      return lVar10;
    }
  }
LAB_1401b6427:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

