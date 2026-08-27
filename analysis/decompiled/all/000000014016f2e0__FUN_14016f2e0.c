// Function: FUN_14016f2e0
// Addr: 14016f2e0
// Size: 227 bytes


void FUN_14016f2e0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(param_3 - 1) >> 1;
  lVar5 = param_2;
  while (lVar5 < lVar6) {
    cVar4 = FUN_140038c30(*(undefined8 *)(param_1 + 0x10 + lVar5 * 0x10),
                          *(undefined8 *)(param_1 + 8 + lVar5 * 0x10));
    lVar1 = ((longlong)cVar4 >> 0x3f) + (lVar5 + 1) * 2;
    *(undefined8 *)(param_1 + lVar5 * 8) = *(undefined8 *)(param_1 + lVar1 * 8);
    lVar5 = lVar1;
  }
  if ((lVar5 == lVar6) && ((param_3 & 1) == 0)) {
    *(undefined8 *)(param_1 + lVar5 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
    lVar5 = param_3 - 1;
  }
  if (param_2 < lVar5) {
    uVar2 = *param_4;
    do {
      lVar6 = lVar5 + -1 >> 1;
      uVar3 = *(undefined8 *)(param_1 + lVar6 * 8);
      cVar4 = FUN_140038c30(uVar3,uVar2);
      if (-1 < cVar4) break;
      *(undefined8 *)(param_1 + lVar5 * 8) = uVar3;
      lVar5 = lVar6;
    } while (param_2 < lVar6);
    *(undefined8 *)(param_1 + lVar5 * 8) = uVar2;
  }
  else {
    *(undefined8 *)(param_1 + lVar5 * 8) = *param_4;
  }
  return;
}

