// Function: FUN_140133c80
// Addr: 140133c80
// Size: 235 bytes


void FUN_140133c80(longlong param_1,longlong param_2,ulonglong param_3,int *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = (longlong)(param_3 - 1) >> 1;
  lVar7 = param_2;
  while (lVar7 < lVar6) {
    lVar1 = (ulonglong)
            (*(int *)(param_1 + 0x14 + lVar7 * 0x28) <= *(int *)(param_1 + 0x28 + lVar7 * 0x28)) + 1
            + lVar7 * 2;
    puVar2 = (undefined8 *)(param_1 + lVar1 * 0x14);
    uVar5 = puVar2[1];
    puVar3 = (undefined8 *)(param_1 + lVar7 * 0x14);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    *(undefined4 *)(param_1 + 0x10 + lVar7 * 0x14) = *(undefined4 *)(param_1 + 0x10 + lVar1 * 0x14);
    lVar7 = lVar1;
  }
  if ((lVar7 == lVar6) && ((param_3 & 1) == 0)) {
    puVar3 = (undefined8 *)(param_1 + -0x14 + param_3 * 0x14);
    uVar5 = puVar3[1];
    puVar2 = (undefined8 *)(param_1 + lVar7 * 0x14);
    *puVar2 = *puVar3;
    puVar2[1] = uVar5;
    *(undefined4 *)(param_1 + 0x10 + lVar7 * 0x14) = *(undefined4 *)(param_1 + -4 + param_3 * 0x14);
    lVar7 = param_3 - 1;
  }
  if (param_2 < lVar7) {
    iVar4 = *param_4;
    do {
      lVar6 = lVar7 + -1 >> 1;
      if (iVar4 <= *(int *)(param_1 + lVar6 * 0x14)) break;
      puVar2 = (undefined8 *)(param_1 + lVar6 * 0x14);
      uVar5 = puVar2[1];
      puVar3 = (undefined8 *)(param_1 + lVar7 * 0x14);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      *(undefined4 *)(param_1 + 0x10 + lVar7 * 0x14) =
           *(undefined4 *)(param_1 + 0x10 + lVar6 * 0x14);
      lVar7 = lVar6;
    } while (param_2 < lVar6);
  }
  uVar5 = *(undefined8 *)(param_4 + 2);
  iVar4 = param_4[4];
  puVar2 = (undefined8 *)(param_1 + lVar7 * 0x14);
  *puVar2 = *(undefined8 *)param_4;
  puVar2[1] = uVar5;
  *(int *)(param_1 + 0x10 + lVar7 * 0x14) = iVar4;
  return;
}

