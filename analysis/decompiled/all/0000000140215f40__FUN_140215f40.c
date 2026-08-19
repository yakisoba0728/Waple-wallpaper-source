// Function: FUN_140215f40
// Addr: 140215f40
// Size: 109 bytes


void FUN_140215f40(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  puVar7 = (undefined8 *)param_1[1];
  lVar9 = *param_1;
  uVar11 = (longlong)puVar7 - lVar9 >> 6;
  if (param_2 < uVar11) {
    param_1[1] = param_2 * 0x40 + lVar9;
    return;
  }
  if (param_2 <= uVar11) {
    return;
  }
  uVar8 = param_1[2] - lVar9 >> 6;
  if (param_2 <= uVar8) {
    for (lVar9 = param_2 - uVar11; lVar9 != 0; lVar9 = lVar9 + -1) {
      uVar4 = param_3[1];
      *puVar7 = *param_3;
      puVar7[1] = uVar4;
      uVar4 = param_3[3];
      puVar7[2] = param_3[2];
      puVar7[3] = uVar4;
      uVar4 = param_3[5];
      puVar7[4] = param_3[4];
      puVar7[5] = uVar4;
      uVar4 = param_3[7];
      puVar7[6] = param_3[6];
      puVar7[7] = uVar4;
      puVar7 = puVar7 + 8;
    }
    param_1[1] = (longlong)puVar7;
    return;
  }
  uVar10 = 0x3ffffffffffffff;
  if (0x3ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  if (uVar8 <= 0x3ffffffffffffff - (uVar8 >> 1)) {
    uVar10 = (uVar8 >> 1) + uVar8;
    if (uVar10 < param_2) {
      uVar10 = param_2;
    }
    if (uVar10 == 0) {
      lVar6 = 0;
      goto code_r0x000140215fe8;
    }
  }
  lVar6 = FUN_1402d3ed0(uVar10 << 6,0x10);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400151e0();
  }
code_r0x000140215fe8:
  puVar7 = (undefined8 *)(((longlong)puVar7 - lVar9 & 0xffffffffffffffc0U) + lVar6);
  for (lVar5 = param_2 - uVar11; lVar5 != 0; lVar5 = lVar5 + -1) {
    uVar4 = param_3[1];
    *puVar7 = *param_3;
    puVar7[1] = uVar4;
    uVar4 = param_3[3];
    puVar7[2] = param_3[2];
    puVar7[3] = uVar4;
    uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
    uVar2 = *(undefined4 *)(param_3 + 5);
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x2c);
    *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)((longlong)puVar7 + 0x24) = uVar1;
    *(undefined4 *)(puVar7 + 5) = uVar2;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    uVar4 = param_3[7];
    puVar7[6] = param_3[6];
    puVar7[7] = uVar4;
    puVar7 = puVar7 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(lVar6,*param_1,param_1[1] - *param_1);
}

