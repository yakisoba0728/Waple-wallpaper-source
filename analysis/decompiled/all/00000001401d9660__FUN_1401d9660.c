// Function: FUN_1401d9660
// Addr: 1401d9660
// Size: 339 bytes


void FUN_1401d9660(longlong *param_1,ulonglong param_2)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = param_1[1];
  lVar3 = *param_1;
  uVar6 = lVar5 - lVar3 >> 6;
  if (param_2 < uVar6) {
    param_1[1] = param_2 * 0x40 + lVar3;
    return;
  }
  if (param_2 <= uVar6) {
    return;
  }
  uVar2 = param_1[2] - lVar3 >> 6;
  if (param_2 <= uVar2) {
    if (param_2 - uVar6 != 0) {
      lVar3 = (param_2 - uVar6) * 0x40;
      FUN_1404217a0(lVar5,0,lVar3);
      lVar5 = lVar5 + lVar3;
    }
    param_1[1] = lVar5;
    return;
  }
  uVar4 = 0x3ffffffffffffff;
  if (0x3ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  if (uVar2 <= 0x3ffffffffffffff - (uVar2 >> 1)) {
    uVar4 = (uVar2 >> 1) + uVar2;
    if (uVar4 < param_2) {
      uVar4 = param_2;
    }
    if (uVar4 == 0) {
      pvVar1 = (void *)0x0;
      goto LAB_1401d96fb;
    }
  }
  pvVar1 = _aligned_malloc(uVar4 << 6,0x10);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_140015110();
  }
LAB_1401d96fb:
  if (param_2 - uVar6 != 0) {
    FUN_1404217a0((lVar5 - lVar3 & 0xffffffffffffffc0U) + (longlong)pvVar1,0,
                  (param_2 - uVar6) * 0x40);
  }
  lVar5 = *param_1;
  FUN_1404210f0(pvVar1,lVar5,param_1[1] - lVar5);
  if (lVar5 != 0) {
    FUN_1402d3dd0(lVar5);
  }
  *param_1 = (longlong)pvVar1;
  param_1[1] = (longlong)(param_2 * 0x40 + (longlong)pvVar1);
  param_1[2] = (longlong)(uVar4 * 0x40 + (longlong)pvVar1);
  return;
}

