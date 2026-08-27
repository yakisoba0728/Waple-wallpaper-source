// Function: FUN_1400ea190
// Addr: 1400ea190
// Size: 481 bytes


ulonglong *
FUN_1400ea190(ulonglong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  undefined8 uStack_70;
  undefined1 auStack_68 [40];
  
  puVar14 = auStack_68;
  uVar12 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar3 = param_3[2];
  uVar4 = param_4[2];
  uVar2 = uVar4 + uVar3;
  if ((param_3[3] - uVar3 < uVar4) || ((ulonglong)param_3[3] < (ulonglong)param_4[3])) {
    if (param_4[3] - uVar4 < uVar3) {
      if (0x7fffffffffffffff - uVar3 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_1400172e0();
      }
      uVar10 = uVar2 | 0xf;
      if (uVar10 < 0x8000000000000000) goto LAB_1400ea2d1;
      uVar13 = 0x8000000000000027;
      puVar14 = auStack_68;
      uVar10 = 0x7fffffffffffffff;
      while( true ) {
        *(undefined8 *)(puVar14 + -8) = 0x1400ea2c5;
        lVar11 = FUN_14028af20(uVar13);
        if (lVar11 != 0) break;
        pcVar5 = (code *)swi(0x29);
        uVar10 = (*pcVar5)(5);
        puVar14 = puVar14 + 8;
LAB_1400ea2d1:
        if (uVar10 < 0x16) {
          uVar10 = 0x16;
        }
        uVar1 = uVar10 + 1;
        if (uVar1 == 0) goto LAB_1400ea315;
        if (uVar1 < 0x1000) {
          *(undefined8 *)(puVar14 + -8) = 0x1400ea312;
          uVar12 = FUN_14028af20(uVar1);
          goto LAB_1400ea315;
        }
        uVar13 = uVar10 + 0x28;
        if (uVar13 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar14 + -8) = &UNK_1400ea372;
          FUN_140017370();
        }
      }
      uVar12 = lVar11 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar12 - 8) = lVar11;
LAB_1400ea315:
      *param_1 = uVar12;
      param_1[2] = uVar2;
      param_1[3] = uVar10;
      if (0xf < (ulonglong)param_3[3]) {
        param_3 = (undefined8 *)*param_3;
      }
      *(undefined8 *)(puVar14 + -8) = 0x1400ea338;
      FUN_1404210f0(uVar12,param_3,uVar3);
      if (0xf < (ulonglong)param_4[3]) {
        param_4 = (undefined8 *)*param_4;
      }
      *(undefined8 *)(puVar14 + -8) = 0x1400ea353;
      FUN_1404210f0(uVar12 + uVar3,param_4,uVar4 + 1);
    }
    else {
      uVar6 = *(undefined4 *)((longlong)param_4 + 4);
      uVar7 = *(undefined4 *)(param_4 + 1);
      uVar8 = *(undefined4 *)((longlong)param_4 + 0xc);
      *(undefined4 *)param_1 = *(undefined4 *)param_4;
      *(undefined4 *)((longlong)param_1 + 4) = uVar6;
      *(undefined4 *)(param_1 + 1) = uVar7;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar8;
      uVar6 = *(undefined4 *)((longlong)param_4 + 0x14);
      uVar7 = *(undefined4 *)(param_4 + 3);
      uVar8 = *(undefined4 *)((longlong)param_4 + 0x1c);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_4 + 2);
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
      *(undefined4 *)(param_1 + 3) = uVar7;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar8;
      param_4[2] = 0;
      param_4[3] = 0xf;
      *(undefined1 *)param_4 = 0;
      uVar12 = *param_1;
      FUN_1404210f0(uVar12 + uVar3,uVar12,uVar4 + 1);
      if (0xf < (ulonglong)param_3[3]) {
        param_3 = (undefined8 *)*param_3;
      }
      FUN_1404210f0(uVar12,param_3,uVar3);
      param_1[2] = uVar2;
    }
  }
  else {
    uVar6 = *(undefined4 *)((longlong)param_3 + 4);
    uVar7 = *(undefined4 *)(param_3 + 1);
    uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)param_3;
    *(undefined4 *)((longlong)param_1 + 4) = uVar6;
    *(undefined4 *)(param_1 + 1) = uVar7;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar8;
    uVar6 = *(undefined4 *)((longlong)param_3 + 0x14);
    uVar7 = *(undefined4 *)(param_3 + 3);
    uVar8 = *(undefined4 *)((longlong)param_3 + 0x1c);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
    *(undefined4 *)(param_1 + 3) = uVar7;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar8;
    param_3[2] = 0;
    param_3[3] = 0xf;
    *(undefined1 *)param_3 = 0;
    puVar9 = param_1;
    if (0xf < param_1[3]) {
      puVar9 = (ulonglong *)*param_1;
    }
    if (0xf < (ulonglong)param_4[3]) {
      param_4 = (undefined8 *)*param_4;
    }
    FUN_1404210f0((longlong)puVar9 + uVar3,param_4,uVar4 + 1);
    param_1[2] = uVar2;
  }
  return param_1;
}

