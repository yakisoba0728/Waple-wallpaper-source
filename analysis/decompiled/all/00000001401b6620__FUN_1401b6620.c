// Function: FUN_1401b6620
// Addr: 1401b6620
// Size: 475 bytes


undefined8 * FUN_1401b6620(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 unaff_R15;
  undefined8 *puVar14;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [80];
  
  puVar11 = auStack_78;
  puVar10 = auStack_78;
  lVar2 = *param_1;
  if (param_1[1] - lVar2 == -8) {
                    /* WARNING: Subroutine does not return */
    FUN_140133d70();
  }
  uVar9 = param_1[2] - lVar2 >> 3;
  if (uVar9 <= 0x1fffffffffffffff - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar1 = (param_1[1] - lVar2 >> 3) + 1;
    uVar12 = uVar1;
    if (uVar1 <= uVar9) {
      uVar12 = uVar9;
    }
    if (uVar12 < 0x2000000000000000) {
      uVar9 = uVar12 * 8;
      puVar13 = (undefined8 *)0x0;
      if (uVar9 != 0) {
        if (uVar9 < 0x1000) {
          puVar13 = (undefined8 *)FUN_14028af20();
          puVar11 = auStack_78;
        }
        else {
          if (uVar9 + 0x27 <= uVar9) goto LAB_1401b67f7;
          lVar7 = FUN_14028af20(uVar9 + 0x27);
          if (lVar7 == 0) {
            pcVar5 = (code *)swi(0x29);
            lVar7 = (*pcVar5)(5);
            puVar10 = auStack_70;
          }
          puVar13 = (undefined8 *)(lVar7 + 0x27U & 0xffffffffffffffe0);
          puVar13[-1] = lVar7;
          puVar11 = puVar10;
        }
      }
      uVar3 = *param_3;
      *(undefined8 *)(puVar11 + 0x50) = unaff_R15;
      *(longlong **)(puVar11 + 0x20) = param_1;
      *(ulonglong *)(puVar11 + 0x30) = uVar12;
      puVar14 = (undefined8 *)
                (((longlong)param_2 - lVar2 & 0xfffffffffffffff8U) + (longlong)puVar13);
      *(undefined8 **)(puVar11 + 0x38) = puVar14;
      *puVar14 = uVar3;
      puVar4 = (undefined8 *)param_1[1];
      puVar8 = (undefined8 *)*param_1;
      *(undefined8 **)(puVar11 + 0x40) = puVar14 + 1;
      puVar6 = puVar13;
      if (param_2 == puVar4) {
        for (; puVar8 != puVar4; puVar8 = puVar8 + 1) {
          uVar3 = *puVar8;
          *puVar8 = 0;
          *puVar6 = uVar3;
          puVar6 = puVar6 + 1;
        }
      }
      else {
        for (; puVar8 != param_2; puVar8 = puVar8 + 1) {
          uVar3 = *puVar8;
          *puVar8 = 0;
          *puVar6 = uVar3;
          puVar6 = puVar6 + 1;
        }
        puVar4 = (undefined8 *)param_1[1];
        *(undefined8 **)(puVar11 + 0x38) = puVar13;
        puVar8 = puVar14 + 1;
        for (; param_2 != puVar4; param_2 = param_2 + 1) {
          uVar3 = *param_2;
          *param_2 = 0;
          *puVar8 = uVar3;
          puVar8 = puVar8 + 1;
        }
      }
      *(undefined8 *)(puVar11 + 0x28) = 0;
      *(undefined8 *)(puVar11 + -8) = 0x1401b67bd;
      FUN_1401b7280(param_1,puVar13,uVar1,uVar12);
      *(undefined8 *)(puVar11 + -8) = 0x1401b67c7;
      FUN_1401b71c0(puVar11 + 0x20);
      return puVar14;
    }
  }
LAB_1401b67f7:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

