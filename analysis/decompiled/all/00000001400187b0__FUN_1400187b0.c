// Function: FUN_1400187b0
// Addr: 1400187b0
// Size: 423 bytes


void FUN_1400187b0(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  puVar4 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  if ((param_1[2] != 0) &&
     (lVar5 = param_1[2] + (longlong)puVar4, lVar2 = thunk_FUN_14028cf70(puVar4,lVar5,0x5c),
     lVar2 != lVar5)) {
    uVar3 = lVar2 - (longlong)puVar4;
    while (uVar3 != 0xffffffffffffffff) {
      puVar4 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar4 = (undefined8 *)*param_1;
      }
      *(undefined1 *)((longlong)puVar4 + uVar3) = 0x2f;
      puVar4 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar4 = (undefined8 *)*param_1;
      }
      if (((ulonglong)param_1[2] <= uVar3) ||
         (lVar5 = param_1[2] + (longlong)puVar4,
         lVar2 = thunk_FUN_14028cf70((longlong)puVar4 + uVar3,lVar5,0x5c), lVar2 == lVar5)) break;
      uVar3 = lVar2 - (longlong)puVar4;
    }
  }
  puVar4 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  if ((param_1[2] != 0) &&
     (lVar5 = param_1[2] + (longlong)puVar4, lVar2 = thunk_FUN_14028cf70(puVar4,lVar5,0x2f),
     lVar2 != lVar5)) {
    for (lVar2 = lVar2 - (longlong)puVar4; lVar2 != -1; lVar2 = lVar2 - (longlong)puVar4) {
      if (lVar2 != 0) {
        uVar3 = lVar2 + 1;
        while (uVar1 = param_1[2], uVar3 < uVar1) {
          puVar4 = param_1;
          if (0xf < (ulonglong)param_1[3]) {
            puVar4 = (undefined8 *)*param_1;
          }
          if (*(char *)((longlong)puVar4 + lVar2 + 1) != '/') break;
          puVar4 = param_1;
          if (0xf < (ulonglong)param_1[3]) {
            puVar4 = (undefined8 *)*param_1;
          }
          lVar5 = uVar1 - (uVar1 != uVar3);
          FUN_1404210f0((longlong)puVar4 + uVar3,
                        (ulonglong)(uVar1 != uVar3) + (longlong)puVar4 + uVar3,(lVar5 - uVar3) + 1);
          param_1[2] = lVar5;
        }
      }
      puVar4 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar4 = (undefined8 *)*param_1;
      }
      if ((ulonglong)param_1[2] <= lVar2 + 1U) {
        return;
      }
      lVar5 = param_1[2] + (longlong)puVar4;
      lVar2 = thunk_FUN_14028cf70((longlong)puVar4 + lVar2 + 1U,lVar5,0x2f);
      if (lVar2 == lVar5) {
        return;
      }
    }
  }
  return;
}

