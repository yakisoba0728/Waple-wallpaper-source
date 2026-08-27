// Function: FUN_1403678c0
// Addr: 1403678c0
// Size: 427 bytes


void FUN_1403678c0(longlong param_1,longlong param_2,ulonglong param_3,undefined2 *param_4,
                  undefined8 *param_5)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_78 [24];
  undefined1 local_60 [32];
  
  lVar8 = (longlong)(param_3 - 1) >> 1;
  lVar7 = param_2;
  while (lVar7 < lVar8) {
    lVar6 = lVar7 * 2 + 2;
    lVar4 = FUN_1403c03e0(*param_5,local_78,*(undefined2 *)(param_1 + -2 + lVar6 * 2));
    lVar5 = FUN_1403c03e0(*param_5,local_60,*(undefined2 *)(param_1 + lVar6 * 2));
    uVar2 = *(uint *)(lVar5 + 0x10);
    if (uVar2 == *(uint *)(lVar4 + 0x10)) {
      if (uVar2 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = memcmp(*(void **)(lVar4 + 8),*(void **)(lVar5 + 8),(ulonglong)uVar2);
      }
    }
    else {
      iVar3 = *(uint *)(lVar4 + 0x10) - uVar2;
    }
    lVar4 = lVar7 * 2 + 1;
    if (iVar3 < 1) {
      lVar4 = lVar6;
    }
    *(undefined2 *)(param_1 + lVar7 * 2) = *(undefined2 *)(param_1 + lVar4 * 2);
    lVar7 = lVar4;
  }
  if ((lVar7 == lVar8) && ((param_3 & 1) == 0)) {
    *(undefined2 *)(param_1 + lVar7 * 2) = *(undefined2 *)(param_1 + -2 + param_3 * 2);
    lVar7 = param_3 - 1;
  }
  if (param_2 < lVar7) {
    do {
      lVar4 = lVar7 + -1 >> 1;
      lVar8 = FUN_1403c03e0(*param_5,local_60,*param_4);
      uVar1 = *(undefined2 *)(param_1 + lVar4 * 2);
      lVar6 = FUN_1403c03e0(*param_5,local_78,uVar1);
      uVar2 = *(uint *)(lVar6 + 0x10);
      if (uVar2 == *(uint *)(lVar8 + 0x10)) {
        if (uVar2 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = memcmp(*(void **)(lVar8 + 8),*(void **)(lVar6 + 8),(ulonglong)uVar2);
        }
      }
      else {
        iVar3 = *(uint *)(lVar8 + 0x10) - uVar2;
      }
      if (iVar3 < 1) goto LAB_140367a50;
      *(undefined2 *)(param_1 + lVar7 * 2) = uVar1;
      lVar7 = lVar4;
    } while (param_2 < lVar4);
    *(undefined2 *)(param_1 + lVar4 * 2) = *param_4;
  }
  else {
LAB_140367a50:
    *(undefined2 *)(param_1 + lVar7 * 2) = *param_4;
  }
  return;
}

