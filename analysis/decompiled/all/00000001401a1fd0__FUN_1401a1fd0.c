// Function: FUN_1401a1fd0
// Addr: 1401a1fd0
// Size: 475 bytes


undefined8 * FUN_1401a1fd0(ulonglong *param_1,ulonglong param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong unaff_RBX;
  undefined1 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar17 = (undefined8 *)*param_1;
  lVar16 = ((longlong)(param_1[1] - (longlong)puVar17) >> 2) * 0x2e8ba2e8ba2e8ba3;
  if (lVar16 == 0x5d1745d1745d174) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar12 = ((longlong)(param_1[2] - (longlong)puVar17) >> 2) * 0x2e8ba2e8ba2e8ba3;
  uVar11 = 0x5d1745d1745d174 - (uVar12 >> 1);
  if (uVar11 <= uVar12 && uVar12 - uVar11 != 0) {
LAB_1401a21a7:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar12 = (uVar12 >> 1) + uVar12;
  uVar11 = lVar16 + 1;
  uVar15 = uVar11;
  if (uVar11 <= uVar12) {
    uVar15 = uVar12;
  }
  if (0x5d1745d1745d174 < uVar15) goto LAB_1401a21a7;
  uVar15 = uVar15 * 0x2c;
  if (uVar15 == 0) {
    unaff_RBX = 0;
LAB_1401a20ad:
    uVar10 = param_3[1];
    uVar2 = *(undefined4 *)(param_3 + 2);
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
    uVar4 = *(undefined4 *)(param_3 + 3);
    uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
    puVar17 = (undefined8 *)(((longlong)(param_2 - (longlong)puVar17) / 0x2c) * 0x2c + unaff_RBX);
    *puVar17 = *param_3;
    puVar17[1] = uVar10;
    uVar6 = *(undefined4 *)((longlong)param_3 + 0x1c);
    uVar7 = *(undefined4 *)(param_3 + 4);
    uVar8 = *(undefined4 *)((longlong)param_3 + 0x24);
    uVar9 = *(undefined4 *)(param_3 + 5);
    *(undefined4 *)(puVar17 + 2) = uVar2;
    *(undefined4 *)((longlong)puVar17 + 0x14) = uVar3;
    *(undefined4 *)(puVar17 + 3) = uVar4;
    *(undefined4 *)((longlong)puVar17 + 0x1c) = uVar5;
    *(undefined4 *)((longlong)puVar17 + 0x1c) = uVar6;
    *(undefined4 *)(puVar17 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar17 + 0x24) = uVar8;
    *(undefined4 *)(puVar17 + 5) = uVar9;
    uVar12 = *param_1;
    if (param_2 == param_1[1]) {
      lVar16 = param_1[1] - uVar12;
      uVar13 = unaff_RBX;
      param_2 = uVar12;
    }
    else {
      FUN_1404210f0(unaff_RBX,uVar12,param_2 - uVar12);
      uVar13 = (longlong)puVar17 + 0x2c;
      lVar16 = param_1[1] - param_2;
    }
    FUN_1404210f0(uVar13,param_2,lVar16);
    uVar12 = *param_1;
    if (uVar12 == 0) goto LAB_1401a216c;
    uVar13 = uVar12;
    puVar14 = auStack_48;
    if ((0xfff < (ulonglong)(((longlong)(param_1[2] - uVar12) >> 2) * 4)) &&
       (uVar13 = *(ulonglong *)(uVar12 - 8), puVar14 = auStack_48, 0x1f < (uVar12 - uVar13) - 8))
    goto LAB_1401a215a;
  }
  else {
    if (uVar15 < 0x1000) {
      unaff_RBX = FUN_14028af20(uVar15);
      goto LAB_1401a20ad;
    }
    if (uVar15 + 0x27 <= uVar15) goto LAB_1401a21a7;
    lVar16 = FUN_14028af20();
    if (lVar16 != 0) {
      unaff_RBX = lVar16 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RBX - 8) = lVar16;
      goto LAB_1401a20ad;
    }
LAB_1401a215a:
    uVar13 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar14 = auStack_40;
  }
  *(undefined8 *)(puVar14 + -8) = 0x1401a216c;
  thunk_FUN_14028af80(uVar13);
LAB_1401a216c:
  *param_1 = unaff_RBX;
  param_1[1] = uVar11 * 0x2c + unaff_RBX;
  param_1[2] = uVar15 + unaff_RBX;
  return puVar17;
}

