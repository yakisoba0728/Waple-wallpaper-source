// Function: FUN_140018880
// Addr: 140018880
// Size: 11 bytes


void FUN_140018880(undefined8 *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  
  puVar5 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  if ((param_1[2] != 0) &&
     (lVar1 = param_1[2] + (longlong)puVar5, lVar3 = thunk_FUN_14028d040(puVar5,lVar1,0x5c),
     lVar3 != lVar1)) {
    uVar4 = lVar3 - (longlong)puVar5;
    while (uVar4 != 0xffffffffffffffff) {
      puVar5 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar5 = (undefined8 *)*param_1;
      }
      *(undefined1 *)((longlong)puVar5 + uVar4) = 0x2f;
      puVar5 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar5 = (undefined8 *)*param_1;
      }
      if (((ulonglong)param_1[2] <= uVar4) ||
         (lVar1 = param_1[2] + (longlong)puVar5,
         lVar3 = thunk_FUN_14028d040((longlong)puVar5 + uVar4,lVar1,0x5c), lVar3 == lVar1)) break;
      uVar4 = lVar3 - (longlong)puVar5;
    }
  }
  puVar5 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  if ((param_1[2] != 0) &&
     (lVar1 = param_1[2] + (longlong)puVar5, lVar3 = thunk_FUN_14028d040(puVar5,lVar1,0x2f),
     lVar3 != lVar1)) {
    for (lVar3 = lVar3 - (longlong)puVar5; lVar3 != -1; lVar3 = lVar3 - (longlong)puVar5) {
      if (lVar3 != 0) {
        uVar4 = lVar3 + 1;
        uVar2 = param_1[2];
        if (uVar4 < uVar2) {
          puVar5 = param_1;
          if (0xf < (ulonglong)param_1[3]) {
            puVar5 = (undefined8 *)*param_1;
          }
          if (*(char *)((longlong)puVar5 + lVar3 + 1) == '/') {
            if (0xf < (ulonglong)param_1[3]) {
              param_1 = (undefined8 *)*param_1;
            }
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0((longlong)param_1 + uVar4,
                          (ulonglong)(uVar2 != uVar4) + (longlong)param_1 + uVar4,
                          ((uVar2 - (uVar2 != uVar4)) - uVar4) + 1);
          }
        }
      }
      puVar5 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar5 = (undefined8 *)*param_1;
      }
      if ((ulonglong)param_1[2] <= lVar3 + 1U) {
        return;
      }
      lVar1 = param_1[2] + (longlong)puVar5;
      lVar3 = thunk_FUN_14028d040((longlong)puVar5 + lVar3 + 1U,lVar1,0x2f);
      if (lVar3 == lVar1) {
        return;
      }
    }
  }
  return;
}

