// Function: FUN_140368150
// Addr: 140368150
// Size: 273 bytes


void FUN_140368150(longlong param_1,longlong param_2,ulonglong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = (longlong)(param_3 - 1) >> 1;
  lVar1 = param_2;
  while (lVar1 < lVar6) {
    lVar7 = lVar1 * 2 + 2;
    if (*(uint *)(lVar7 * 0x24 + param_1) < *(uint *)(lVar7 * 0x24 + -0x24 + param_1)) {
      lVar7 = lVar1 * 2 + 1;
    }
    puVar2 = (undefined8 *)(param_1 + lVar1 * 0x24);
    puVar3 = (undefined8 *)(param_1 + lVar7 * 0x24);
    uVar5 = puVar3[1];
    *puVar2 = *puVar3;
    puVar2[1] = uVar5;
    puVar3 = (undefined8 *)(param_1 + 0x10 + lVar7 * 0x24);
    uVar5 = puVar3[1];
    puVar2[2] = *puVar3;
    puVar2[3] = uVar5;
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20 + lVar7 * 0x24);
    lVar1 = lVar7;
  }
  if ((lVar1 == lVar6) && ((param_3 & 1) == 0)) {
    puVar3 = (undefined8 *)(param_1 + -0x24 + param_3 * 0x24);
    uVar5 = puVar3[1];
    puVar2 = (undefined8 *)(param_1 + lVar1 * 0x24);
    *puVar2 = *puVar3;
    puVar2[1] = uVar5;
    puVar3 = (undefined8 *)(param_1 + -0x14 + param_3 * 0x24);
    uVar5 = puVar3[1];
    puVar2[2] = *puVar3;
    puVar2[3] = uVar5;
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + -4 + param_3 * 0x24);
    lVar1 = param_3 - 1;
  }
  while (param_2 < lVar1) {
    lVar6 = lVar1 + -1 >> 1;
    puVar4 = (uint *)(param_1 + lVar6 * 0x24);
    if (*param_4 <= *puVar4) break;
    puVar2 = (undefined8 *)(param_1 + lVar1 * 0x24);
    uVar5 = *(undefined8 *)(puVar4 + 2);
    *puVar2 = *(undefined8 *)puVar4;
    puVar2[1] = uVar5;
    uVar5 = *(undefined8 *)(puVar4 + 6);
    puVar2[2] = *(undefined8 *)(puVar4 + 4);
    puVar2[3] = uVar5;
    *(uint *)(puVar2 + 4) = puVar4[8];
    lVar1 = lVar6;
  }
  uVar5 = *(undefined8 *)(param_4 + 2);
  puVar2 = (undefined8 *)(param_1 + lVar1 * 0x24);
  *puVar2 = *(undefined8 *)param_4;
  puVar2[1] = uVar5;
  uVar5 = *(undefined8 *)(param_4 + 6);
  puVar2[2] = *(undefined8 *)(param_4 + 4);
  puVar2[3] = uVar5;
  *(uint *)(puVar2 + 4) = param_4[8];
  return;
}

