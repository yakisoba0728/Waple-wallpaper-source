// Function: FUN_1400f9070
// Addr: 1400f9070
// Size: 606 bytes


ulonglong * FUN_1400f9070(ulonglong *param_1,ulonglong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong unaff_RBX;
  ulonglong uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar10 = auStack_58;
  puVar14 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar14 = (undefined8 *)*param_3;
  }
  uVar13 = param_1[2];
  if (uVar13 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140012940();
  }
  uVar4 = param_3[2];
  uVar9 = param_1[3];
  if (uVar4 <= uVar9 - uVar13) {
    param_1[2] = uVar4 + uVar13;
    puVar6 = param_1;
    if (0xf < uVar9) {
      puVar6 = (ulonglong *)*param_1;
    }
    puVar2 = (undefined8 *)((longlong)puVar6 + param_2);
    uVar9 = uVar4;
    if ((puVar2 < (undefined8 *)(uVar4 + (longlong)puVar14)) &&
       (puVar14 <= (undefined8 *)((longlong)puVar6 + uVar13))) {
      if (puVar14 < puVar2) {
        uVar9 = (longlong)puVar2 - (longlong)puVar14;
      }
      else {
        uVar9 = 0;
      }
    }
    FUN_1404210f0(uVar4 + (longlong)puVar2,puVar2,(uVar13 - param_2) + 1);
    FUN_1404210f0(puVar2,puVar14,uVar9);
    FUN_1404210f0(uVar9 + (longlong)puVar2,(longlong)(uVar4 + (longlong)puVar14) + uVar9,
                  uVar4 - uVar9);
    return param_1;
  }
  uVar11 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff - uVar13 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  uVar8 = uVar13 + uVar4 | 0xf;
  if ((uVar8 < 0x8000000000000000) && (uVar9 <= 0x7fffffffffffffff - (uVar9 >> 1))) {
    uVar3 = (uVar9 >> 1) + uVar9;
    uVar11 = uVar8;
    if (uVar8 < uVar3) {
      uVar11 = uVar3;
    }
    uVar3 = uVar11 + 1;
    if (uVar3 == 0) {
      unaff_RBX = 0;
    }
    else {
      if (0xfff < uVar3) {
        uVar8 = uVar11 + 0x28;
        if (uVar8 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        goto LAB_1400f91b3;
      }
      unaff_RBX = FUN_14028af20(uVar3);
    }
LAB_1400f91da:
    param_1[3] = uVar11;
    param_1[2] = uVar13 + uVar4;
    lVar7 = unaff_RBX + uVar4 + param_2;
    lVar12 = (uVar13 - param_2) + 1;
    if (uVar9 < 0x10) {
      FUN_1404210f0(unaff_RBX,param_1,param_2);
      FUN_1404210f0(unaff_RBX + param_2,puVar14,uVar4);
      FUN_1404210f0(lVar7,(longlong)param_1 + param_2,lVar12);
      goto LAB_1400f929a;
    }
    uVar13 = *param_1;
    FUN_1404210f0(unaff_RBX,uVar13,param_2);
    FUN_1404210f0(unaff_RBX + param_2,puVar14,uVar4);
    FUN_1404210f0(lVar7,uVar13 + param_2,lVar12);
    if (0xfff < uVar9 + 1) {
      plVar1 = (longlong *)(uVar13 - 8);
      uVar13 = (uVar13 - *plVar1) - 8;
      if (uVar13 < 0x20) {
        thunk_FUN_14028af80(*plVar1,uVar9 + 0x28);
        goto LAB_1400f929a;
      }
      goto LAB_1400f9262;
    }
  }
  else {
    uVar8 = 0x8000000000000027;
LAB_1400f91b3:
    lVar7 = FUN_14028af20(uVar8);
    if (lVar7 != 0) {
      unaff_RBX = lVar7 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RBX - 8) = lVar7;
      goto LAB_1400f91da;
    }
LAB_1400f9262:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar10 = auStack_50;
  }
  *(undefined8 *)(puVar10 + -8) = 0x1400f9271;
  thunk_FUN_14028af80(uVar13);
LAB_1400f929a:
  *param_1 = unaff_RBX;
  return param_1;
}

