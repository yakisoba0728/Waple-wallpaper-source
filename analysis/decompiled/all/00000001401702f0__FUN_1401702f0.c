// Function: FUN_1401702f0
// Addr: 1401702f0
// Size: 378 bytes


void FUN_1401702f0(longlong param_1,uint *param_2,uint *param_3,float param_4,longlong *param_5)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_2;
  uVar4 = *param_3;
  if (param_4 == 0.0) {
    lVar3 = thunk_FUN_14028af20(uVar4 * uVar1 * 4);
    uVar1 = *param_2;
    uVar4 = *param_3;
    *param_5 = lVar3;
    FUN_1404210f0(lVar3,param_1,uVar1 * uVar4 * 4);
    return;
  }
  if ((float)uVar1 / (float)uVar4 <= param_4) {
    uVar5 = (uint)(longlong)((float)uVar1 / param_4);
    lVar3 = thunk_FUN_14028af20(uVar1 * uVar5 * 4);
    uVar1 = *param_3;
    uVar4 = 0;
    *param_5 = lVar3;
    if (uVar5 != 0) {
      do {
        uVar2 = *param_2;
        FUN_1404210f0((ulonglong)(uVar2 * uVar4 * 4) + lVar3,
                      (ulonglong)((uVar4 + (uVar1 - uVar5 >> 1)) * uVar2 * 4) + param_1,uVar2 * 4);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    *param_3 = uVar5;
  }
  else {
    uVar5 = (uint)(longlong)((float)uVar4 * param_4);
    lVar3 = thunk_FUN_14028af20(uVar4 * uVar5 * 4);
    uVar4 = 0;
    *param_5 = lVar3;
    uVar1 = *param_2;
    if (*param_3 != 0) {
      do {
        FUN_1404210f0((ulonglong)(uVar4 * uVar5 * 4) + lVar3,
                      (ulonglong)(uVar4 * *param_2 * 4) + param_1 + (int)((uVar1 - uVar5 >> 1) << 2)
                      ,uVar5 * 4);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *param_3);
    }
    *param_2 = uVar5;
  }
  return;
}

