// Function: FUN_140215e70
// Addr: 140215e70
// Size: 428 bytes


void FUN_140215e70(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  puVar4 = (undefined8 *)param_1[1];
  lVar6 = *param_1;
  uVar8 = (longlong)puVar4 - lVar6 >> 6;
  if (param_2 < uVar8) {
    param_1[1] = param_2 * 0x40 + lVar6;
    return;
  }
  if (param_2 <= uVar8) {
    return;
  }
  uVar5 = param_1[2] - lVar6 >> 6;
  if (param_2 <= uVar5) {
    for (lVar6 = param_2 - uVar8; lVar6 != 0; lVar6 = lVar6 + -1) {
      uVar1 = param_3[1];
      *puVar4 = *param_3;
      puVar4[1] = uVar1;
      uVar1 = param_3[3];
      puVar4[2] = param_3[2];
      puVar4[3] = uVar1;
      uVar1 = param_3[5];
      puVar4[4] = param_3[4];
      puVar4[5] = uVar1;
      uVar1 = param_3[7];
      puVar4[6] = param_3[6];
      puVar4[7] = uVar1;
      puVar4 = puVar4 + 8;
    }
    param_1[1] = (longlong)puVar4;
    return;
  }
  uVar7 = 0x3ffffffffffffff;
  if (0x3ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  if (uVar5 <= 0x3ffffffffffffff - (uVar5 >> 1)) {
    uVar7 = (uVar5 >> 1) + uVar5;
    if (uVar7 < param_2) {
      uVar7 = param_2;
    }
    if (uVar7 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_140215f18;
    }
  }
  pvVar3 = _aligned_malloc(uVar7 << 6,0x10);
  if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_140015110();
  }
LAB_140215f18:
  puVar4 = (undefined8 *)(((longlong)puVar4 - lVar6 & 0xffffffffffffffc0U) + (longlong)pvVar3);
  for (lVar2 = param_2 - uVar8; lVar2 != 0; lVar2 = lVar2 + -1) {
    uVar1 = param_3[1];
    *puVar4 = *param_3;
    puVar4[1] = uVar1;
    uVar1 = param_3[3];
    puVar4[2] = param_3[2];
    puVar4[3] = uVar1;
    uVar1 = param_3[5];
    puVar4[4] = param_3[4];
    puVar4[5] = uVar1;
    uVar1 = param_3[7];
    puVar4[6] = param_3[6];
    puVar4[7] = uVar1;
    puVar4 = puVar4 + 8;
  }
  lVar6 = *param_1;
  FUN_1404210f0(pvVar3,lVar6,param_1[1] - lVar6);
  if (lVar6 != 0) {
    FUN_1402d3dd0(lVar6);
  }
  *param_1 = (longlong)pvVar3;
  param_1[1] = (longlong)(param_2 * 0x40 + (longlong)pvVar3);
  param_1[2] = (longlong)(uVar7 * 0x40 + (longlong)pvVar3);
  return;
}

