// Function: FUN_1401da520
// Addr: 1401da520
// Size: 687 bytes


void FUN_1401da520(undefined4 param_1,undefined8 *param_2,ulonglong param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *in_RCX;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  puVar11 = auStack_58;
  puVar12 = auStack_58;
  puVar14 = (undefined8 *)*in_RCX;
  uVar8 = ((longlong)(in_RCX[2] - (longlong)puVar14) >> 3) * -0x1111111111111111;
  if (param_3 <= uVar8) {
    puVar13 = (undefined8 *)in_RCX[1];
    lVar7 = (longlong)puVar13 - (longlong)puVar14 >> 3;
    if ((ulonglong)(lVar7 * -0x1111111111111111) < param_3) {
      if (puVar14 != puVar13) {
        do {
          param_1 = FUN_1401db340(puVar14,param_2);
          puVar13 = (undefined8 *)in_RCX[1];
          puVar14 = puVar14 + 0xf;
          param_2 = param_2 + 0xf;
        } while (puVar14 != puVar13);
      }
      for (lVar7 = param_3 + lVar7 * 0x1111111111111111; lVar7 != 0; lVar7 = lVar7 + -1) {
        param_1 = FUN_1401dc3f0(param_1,puVar13,param_2);
        puVar13 = puVar13 + 0xf;
        param_2 = param_2 + 0xf;
      }
    }
    else {
      puVar13 = puVar14 + param_3 * 0xf;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        if (puVar14 != param_2) {
          puVar10 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar10 = (undefined8 *)*param_2;
          }
          FUN_14000f880(puVar14,puVar10,param_2[2]);
        }
        uVar5 = param_2[5];
        puVar14[4] = param_2[4];
        puVar14[5] = uVar5;
        uVar5 = param_2[7];
        puVar14[6] = param_2[6];
        puVar14[7] = uVar5;
        uVar2 = *(undefined4 *)((longlong)param_2 + 0x44);
        uVar3 = *(undefined4 *)(param_2 + 9);
        uVar4 = *(undefined4 *)((longlong)param_2 + 0x4c);
        *(undefined4 *)(puVar14 + 8) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)((longlong)puVar14 + 0x44) = uVar2;
        *(undefined4 *)(puVar14 + 9) = uVar3;
        *(undefined4 *)((longlong)puVar14 + 0x4c) = uVar4;
        uVar2 = *(undefined4 *)((longlong)param_2 + 0x54);
        uVar3 = *(undefined4 *)(param_2 + 0xb);
        uVar4 = *(undefined4 *)((longlong)param_2 + 0x5c);
        *(undefined4 *)(puVar14 + 10) = *(undefined4 *)(param_2 + 10);
        *(undefined4 *)((longlong)puVar14 + 0x54) = uVar2;
        *(undefined4 *)(puVar14 + 0xb) = uVar3;
        *(undefined4 *)((longlong)puVar14 + 0x5c) = uVar4;
        *(undefined4 *)(puVar14 + 0xc) = *(undefined4 *)(param_2 + 0xc);
        *(undefined4 *)((longlong)puVar14 + 100) = *(undefined4 *)((longlong)param_2 + 100);
        *(undefined4 *)(puVar14 + 0xd) = *(undefined4 *)(param_2 + 0xd);
        *(undefined4 *)((longlong)puVar14 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
        puVar10 = param_2 + 0xe;
        param_2 = param_2 + 0xf;
        *(undefined4 *)(puVar14 + 0xe) = *(undefined4 *)puVar10;
        puVar14 = puVar14 + 0xf;
      }
      puVar14 = (undefined8 *)in_RCX[1];
      puVar10 = puVar13;
      if (puVar13 != puVar14) {
        do {
          FUN_140017240(puVar10);
          puVar10 = puVar10 + 0xf;
        } while (puVar10 != puVar14);
        in_RCX[1] = (ulonglong)puVar13;
        return;
      }
    }
    in_RCX[1] = (ulonglong)puVar13;
    return;
  }
  if (0x222222222222222 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar6 = 0x222222222222222 - (uVar8 >> 1);
  if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
    uVar8 = (uVar8 >> 1) + uVar8;
    if (uVar8 < param_3) {
      uVar8 = param_3;
    }
  }
  else {
    uVar8 = 0x222222222222222;
  }
  if (puVar14 == (undefined8 *)0x0) {
LAB_1401da619:
    if (0x222222222222222 < uVar8) {
LAB_1401da7c5:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar8 = uVar8 * 0x78;
    if (uVar8 == 0) {
      uVar6 = 0;
      puVar12 = auStack_58;
      goto LAB_1401da66f;
    }
    if (uVar8 < 0x1000) {
      uVar6 = FUN_14028af20(uVar8);
      param_1 = extraout_XMM0_Da_01;
      goto LAB_1401da66f;
    }
    if (uVar8 + 0x27 <= uVar8) goto LAB_1401da7c5;
    lVar7 = FUN_14028af20();
    param_1 = extraout_XMM0_Da;
    if (lVar7 == 0) goto LAB_1401da64f;
  }
  else {
    puVar13 = (undefined8 *)in_RCX[1];
    for (; puVar14 != puVar13; puVar14 = puVar14 + 0xf) {
      FUN_140017240(puVar14);
    }
    uVar6 = *in_RCX;
    uVar9 = ((longlong)(in_RCX[2] - uVar6) >> 3) * 8;
    if (uVar9 < 0x1000) {
LAB_1401da5fa:
      param_1 = thunk_FUN_14028af80(uVar6,uVar9);
      *in_RCX = 0;
      in_RCX[1] = 0;
      in_RCX[2] = 0;
      goto LAB_1401da619;
    }
    if ((uVar6 - *(ulonglong *)(uVar6 - 8)) - 8 < 0x20) {
      uVar9 = uVar9 + 0x27;
      uVar6 = *(ulonglong *)(uVar6 - 8);
      goto LAB_1401da5fa;
    }
LAB_1401da64f:
    pcVar1 = (code *)swi(0x29);
    lVar7 = (*pcVar1)(5);
    puVar11 = auStack_50;
    param_1 = extraout_XMM0_Da_00;
  }
  uVar6 = lVar7 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar6 - 8) = lVar7;
  puVar12 = puVar11;
LAB_1401da66f:
  *in_RCX = uVar6;
  in_RCX[1] = uVar6;
  in_RCX[2] = uVar8 + uVar6;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined8 *)(puVar12 + -8) = 0x1401da68e;
    param_1 = FUN_1401dc3f0(param_1,uVar6,param_2);
    uVar6 = uVar6 + 0x78;
    param_2 = param_2 + 0xf;
  }
  in_RCX[1] = uVar6;
  return;
}

