// Function: FUN_1401b6c20
// Addr: 1401b6c20
// Size: 435 bytes


void FUN_1401b6c20(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [72];
  
  puVar9 = auStack_78;
  puVar8 = auStack_78;
  if (0x333333333333333 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140133d70();
  }
  lVar10 = *param_1;
  uVar6 = (param_1[2] - lVar10 >> 4) * -0x3333333333333333;
  uVar3 = 0x333333333333333 - (uVar6 >> 1);
  if ((uVar6 < uVar3 || uVar6 - uVar3 == 0) &&
     ((uVar6 = (uVar6 >> 1) + uVar6, uVar3 = param_2, uVar6 < param_2 ||
      (uVar3 = uVar6, uVar6 < 0x333333333333334)))) {
    lVar1 = param_1[1];
    uVar7 = uVar3 * 0x50;
    uVar6 = 0;
    if (uVar7 != 0) {
      if (uVar7 < 0x1000) {
        uVar6 = FUN_14028af20();
        puVar9 = auStack_78;
      }
      else {
        if (uVar7 + 0x27 <= uVar7) goto LAB_1401b6dcf;
        lVar4 = FUN_14028af20(uVar7 + 0x27);
        if (lVar4 == 0) {
          pcVar2 = (code *)swi(0x29);
          lVar4 = (*pcVar2)(5);
          puVar8 = auStack_70;
        }
        uVar6 = lVar4 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar6 - 8) = lVar4;
        puVar9 = puVar8;
      }
    }
    *(longlong **)(puVar9 + 0x20) = param_1;
    lVar10 = lVar1 - lVar10 >> 4;
    *(ulonglong *)(puVar9 + 0x30) = uVar3;
    puVar5 = (undefined8 *)(lVar10 * 0x10 + uVar6);
    *(undefined8 **)(puVar9 + 0x38) = puVar5;
    for (lVar10 = param_2 + lVar10 * 0x3333333333333333; lVar10 != 0; lVar10 = lVar10 + -1) {
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 3;
      *(undefined4 *)puVar5 = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[9] = 0;
      puVar5 = puVar5 + 10;
    }
    lVar10 = param_1[1];
    lVar1 = *param_1;
    *(undefined8 **)(puVar9 + 0x40) = puVar5;
    *(undefined8 *)(puVar9 + -8) = 0x1401b6d7b;
    FUN_1401b6fe0(lVar1,lVar10,uVar6);
    *(undefined8 *)(puVar9 + 0x28) = 0;
    *(undefined8 *)(puVar9 + -8) = 0x1401b6d91;
    FUN_1401b7410(param_1,uVar6,param_2,uVar3);
    *(undefined8 *)(puVar9 + -8) = 0x1401b6d9b;
    FUN_1401b7360(puVar9 + 0x20);
    return;
  }
LAB_1401b6dcf:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

