// Function: FUN_140005a40
// Addr: 140005a40
// Size: 266 bytes


void FUN_140005a40(undefined8 *param_1,short param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined2 uVar6;
  
  uVar6 = 0x5c;
  if (param_2 == 0x5c) {
    uVar6 = 0x2f;
  }
  puVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  if ((param_1[2] != 0) &&
     (lVar1 = (longlong)puVar5 + param_1[2] * 2, lVar4 = func_0x00014028f010(puVar5,lVar1,uVar6),
     lVar4 != lVar1)) {
    for (lVar4 = lVar4 - (longlong)puVar5; uVar3 = lVar4 >> 1, uVar3 != 0xffffffffffffffff;
        lVar4 = lVar4 - (longlong)puVar5) {
      puVar5 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar5 = (undefined8 *)*param_1;
      }
      *(short *)((longlong)puVar5 + uVar3 * 2) = param_2;
      puVar5 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar5 = (undefined8 *)*param_1;
      }
      if (((ulonglong)param_1[2] <= uVar3) ||
         (lVar1 = (longlong)puVar5 + param_1[2] * 2,
         lVar4 = func_0x00014028f010((longlong)puVar5 + uVar3 * 2,lVar1,uVar6), lVar4 == lVar1))
      break;
    }
  }
  puVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  if ((param_1[2] != 0) &&
     (lVar1 = (longlong)puVar5 + param_1[2] * 2, lVar4 = func_0x00014028f010(puVar5,lVar1,param_2),
     lVar4 != lVar1)) {
    for (lVar4 = lVar4 - (longlong)puVar5; lVar4 = lVar4 >> 1, lVar4 != -1;
        lVar4 = lVar4 - (longlong)puVar5) {
      if (lVar4 != 0) {
        uVar3 = lVar4 + 1;
        uVar2 = param_1[2];
        if (uVar3 < uVar2) {
          puVar5 = param_1;
          if (7 < (ulonglong)param_1[3]) {
            puVar5 = (undefined8 *)*param_1;
          }
          if (*(short *)((longlong)puVar5 + lVar4 * 2 + 2) == param_2) {
            if (7 < (ulonglong)param_1[3]) {
              param_1 = (undefined8 *)*param_1;
            }
            lVar1 = (longlong)param_1 + uVar3 * 2;
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(lVar1,lVar1 + (ulonglong)(uVar2 != uVar3) * 2,
                          ((uVar2 - (uVar2 != uVar3)) - uVar3) * 2 + 2);
          }
        }
      }
      puVar5 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar5 = (undefined8 *)*param_1;
      }
      if ((ulonglong)param_1[2] <= lVar4 + 1U) {
        return;
      }
      lVar1 = (longlong)puVar5 + param_1[2] * 2;
      lVar4 = func_0x00014028f010((longlong)puVar5 + (lVar4 + 1U) * 2,lVar1,param_2);
      if (lVar4 == lVar1) {
        return;
      }
    }
  }
  return;
}

