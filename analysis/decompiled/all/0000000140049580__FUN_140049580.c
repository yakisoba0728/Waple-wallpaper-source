// Function: FUN_140049580
// Addr: 140049580
// Size: 775 bytes


ulonglong *
FUN_140049580(ulonglong *param_1,ulonglong param_2,ulonglong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong unaff_RBX;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar9 = auStack_58;
  puVar10 = param_4;
  if (0xf < (ulonglong)param_4[3]) {
    puVar10 = (undefined8 *)*param_4;
  }
  uVar13 = param_1[2];
  if (uVar13 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140012940();
  }
  uVar4 = param_4[2];
  uVar8 = param_1[3];
  if (uVar13 - param_2 < param_3) {
    param_3 = uVar13 - param_2;
  }
  if (param_3 == uVar4) {
    if (0xf < uVar8) {
      FUN_1404210f0(*param_1 + param_2,puVar10,uVar4);
      return param_1;
    }
    FUN_1404210f0((longlong)param_1 + param_2,puVar10,uVar4);
    return param_1;
  }
  lVar12 = ((uVar13 - param_3) - param_2) + 1;
  if (uVar4 < param_3) {
    puVar6 = param_1;
    if (0xf < uVar8) {
      puVar6 = (ulonglong *)*param_1;
    }
    lVar14 = (longlong)puVar6 + param_2;
    FUN_1404210f0(lVar14,puVar10,uVar4);
    FUN_1404210f0(uVar4 + lVar14,lVar14 + param_3,lVar12);
    param_1[2] = (uVar4 - param_3) + uVar13;
    return param_1;
  }
  uVar7 = uVar4 - param_3;
  if (uVar7 <= uVar8 - uVar13) {
    param_1[2] = uVar7 + uVar13;
    puVar6 = param_1;
    if (0xf < uVar8) {
      puVar6 = (ulonglong *)*param_1;
    }
    param_2 = (longlong)puVar6 + param_2;
    puVar2 = (undefined8 *)(param_2 + param_3);
    uVar8 = uVar4;
    if ((param_2 < uVar4 + (longlong)puVar10) &&
       (puVar10 <= (undefined8 *)((longlong)puVar6 + uVar13))) {
      if (puVar10 < puVar2) {
        uVar8 = (longlong)puVar2 - (longlong)puVar10;
      }
      else {
        uVar8 = 0;
      }
    }
    FUN_1404210f0(uVar7 + (longlong)puVar2,puVar2);
    FUN_1404210f0(param_2,puVar10,uVar8);
    FUN_1404210f0(uVar8 + param_2,(longlong)puVar10 + uVar7 + uVar8,uVar4 - uVar8);
    return param_1;
  }
  uVar11 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff - uVar13 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  uVar13 = uVar13 + uVar7;
  uVar7 = uVar13 | 0xf;
  if ((uVar7 < 0x8000000000000000) && (uVar8 <= 0x7fffffffffffffff - (uVar8 >> 1))) {
    uVar3 = (uVar8 >> 1) + uVar8;
    uVar11 = uVar7;
    if (uVar7 < uVar3) {
      uVar11 = uVar3;
    }
    uVar3 = uVar11 + 1;
    if (uVar3 == 0) {
      unaff_RBX = 0;
    }
    else {
      if (0xfff < uVar3) {
        uVar7 = uVar11 + 0x28;
        if (uVar7 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        goto LAB_140049774;
      }
      unaff_RBX = FUN_14028af20(uVar3);
    }
LAB_14004979b:
    param_1[2] = uVar13;
    param_1[3] = uVar11;
    lVar14 = unaff_RBX + uVar4 + param_2;
    if (uVar8 < 0x10) {
      FUN_1404210f0(unaff_RBX,param_1,param_2);
      FUN_1404210f0(unaff_RBX + param_2,puVar10,uVar4);
      FUN_1404210f0(lVar14,(longlong)param_1 + param_2 + param_3,lVar12);
      goto LAB_140049856;
    }
    uVar13 = *param_1;
    FUN_1404210f0(unaff_RBX,uVar13,param_2);
    FUN_1404210f0(unaff_RBX + param_2,puVar10,uVar4);
    FUN_1404210f0(lVar14,uVar13 + param_3 + param_2,lVar12);
    if (0xfff < uVar8 + 1) {
      plVar1 = (longlong *)(uVar13 - 8);
      uVar13 = (uVar13 - *plVar1) - 8;
      if (uVar13 < 0x20) {
        thunk_FUN_14028af80(*plVar1,uVar8 + 0x28);
        goto LAB_140049856;
      }
      goto LAB_140049819;
    }
  }
  else {
    uVar7 = 0x8000000000000027;
LAB_140049774:
    lVar14 = FUN_14028af20(uVar7);
    if (lVar14 != 0) {
      unaff_RBX = lVar14 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RBX - 8) = lVar14;
      goto LAB_14004979b;
    }
LAB_140049819:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar9 = auStack_50;
  }
  *(undefined8 *)(puVar9 + -8) = 0x140049828;
  thunk_FUN_14028af80(uVar13);
LAB_140049856:
  *param_1 = unaff_RBX;
  return param_1;
}

