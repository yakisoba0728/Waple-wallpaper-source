// Function: FUN_14007d400
// Addr: 14007d400
// Size: 546 bytes


void FUN_14007d400(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = (longlong)(param_3 - 1) >> 1;
  lVar1 = param_2;
  while (lVar1 < lVar2) {
    lVar3 = lVar1 * 0x60;
    lVar4 = lVar3 + param_1;
    lVar1 = (2 - (ulonglong)
                 (*(uint *)(param_1 + 0x100 + lVar1 * 0xc0) <
                 *(uint *)(param_1 + 0xa0 + lVar1 * 0xc0))) + lVar1 * 2;
    lVar5 = lVar1 * 0x60 + param_1;
    FUN_14000de40(lVar4,lVar5);
    FUN_14000de40(param_1 + 0x20 + lVar3,param_1 + 0x20 + lVar1 * 0x60);
    *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)(lVar5 + 0x40);
    *(undefined4 *)(lVar4 + 0x44) = *(undefined4 *)(lVar5 + 0x44);
    *(undefined4 *)(lVar4 + 0x48) = *(undefined4 *)(lVar5 + 0x48);
    *(undefined4 *)(lVar4 + 0x4c) = *(undefined4 *)(lVar5 + 0x4c);
    *(undefined4 *)(lVar4 + 0x50) = *(undefined4 *)(lVar5 + 0x50);
    *(undefined4 *)(lVar4 + 0x54) = *(undefined4 *)(lVar5 + 0x54);
    *(undefined4 *)(lVar4 + 0x58) = *(undefined4 *)(lVar5 + 0x58);
  }
  if ((lVar1 == lVar2) && ((param_3 & 1) == 0)) {
    FUN_14007c5c0(lVar1 * 0x60 + param_1,param_3 * 0x60 + -0x60 + param_1);
    lVar1 = param_3 - 1;
  }
  while (param_2 < lVar1) {
    lVar5 = lVar1 + -1 >> 1;
    lVar4 = lVar5 * 0x60;
    lVar2 = param_1 + lVar4;
    if (*(uint *)(param_4 + 0x40) <= *(uint *)(param_1 + 0x40 + lVar4)) break;
    lVar3 = lVar1 * 0x60 + param_1;
    FUN_14000de40(lVar3,lVar2);
    FUN_14000de40(param_1 + 0x20 + lVar1 * 0x60,param_1 + 0x20 + lVar4);
    *(undefined4 *)(lVar3 + 0x40) = *(undefined4 *)(lVar2 + 0x40);
    *(undefined4 *)(lVar3 + 0x44) = *(undefined4 *)(lVar2 + 0x44);
    *(undefined4 *)(lVar3 + 0x48) = *(undefined4 *)(lVar2 + 0x48);
    *(undefined4 *)(lVar3 + 0x4c) = *(undefined4 *)(lVar2 + 0x4c);
    *(undefined4 *)(lVar3 + 0x50) = *(undefined4 *)(lVar2 + 0x50);
    *(undefined4 *)(lVar3 + 0x54) = *(undefined4 *)(lVar2 + 0x54);
    *(undefined4 *)(lVar3 + 0x58) = *(undefined4 *)(lVar2 + 0x58);
    lVar1 = lVar5;
  }
  param_1 = lVar1 * 0x60 + param_1;
  FUN_14000de40(param_1,param_4);
  FUN_14000de40(param_1 + 0x20,param_4 + 0x20);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_4 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_4 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_4 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_4 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_4 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_4 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_4 + 0x58);
  return;
}

