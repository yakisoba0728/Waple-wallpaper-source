// Function: FUN_140367ff0
// Addr: 140367ff0
// Size: 350 bytes


void FUN_140367ff0(longlong param_1,longlong param_2,ulonglong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  
  lVar10 = (longlong)(param_3 - 1) >> 1;
  lVar1 = param_2;
  while (lVar1 < lVar10) {
    lVar4 = lVar1 * 2 + 2;
    lVar8 = lVar4 * 0x1c;
    uVar7 = *(uint *)(lVar8 + -0x1c + param_1);
    puVar9 = (uint *)(lVar8 + param_1);
    if (*puVar9 == uVar7) {
      if (puVar9[1] < puVar9[-6]) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (uint)(puVar9[-6] < puVar9[1]);
      }
    }
    else {
      uVar6 = 1;
      if (*puVar9 < uVar7) {
        uVar6 = 0xffffffff;
      }
    }
    lVar8 = lVar1 * 2 + 1;
    if (-1 < (int)uVar6) {
      lVar8 = lVar4;
    }
    puVar2 = (undefined8 *)(lVar8 * 0x1c + param_1);
    uVar5 = puVar2[1];
    puVar3 = (undefined8 *)(lVar1 * 0x1c + param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar2 = (undefined8 *)(lVar8 * 0x1c + 0xc + param_1);
    uVar5 = puVar2[1];
    puVar3 = (undefined8 *)(lVar1 * 0x1c + 0xc + param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    lVar1 = lVar8;
  }
  if ((lVar1 == lVar10) && ((param_3 & 1) == 0)) {
    lVar10 = lVar1 * 0x1c;
    puVar3 = (undefined8 *)(param_3 * 0x1c + -0x1c + param_1);
    uVar5 = puVar3[1];
    lVar1 = param_3 - 1;
    puVar2 = (undefined8 *)(lVar10 + param_1);
    *puVar2 = *puVar3;
    puVar2[1] = uVar5;
    puVar2 = (undefined8 *)(param_3 * 0x1c + -0x10 + param_1);
    uVar5 = puVar2[1];
    puVar3 = (undefined8 *)(lVar10 + 0xc + param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
  }
  while (param_2 < lVar1) {
    lVar10 = lVar1 + -1 >> 1;
    puVar9 = (uint *)(lVar10 * 0x1c + param_1);
    if (*puVar9 == *param_4) {
      if (puVar9[1] < param_4[1]) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = (uint)(param_4[1] < puVar9[1]);
      }
    }
    else {
      uVar7 = 1;
      if (*puVar9 < *param_4) {
        uVar7 = 0xffffffff;
      }
    }
    if (-1 < (int)uVar7) break;
    uVar5 = *(undefined8 *)(puVar9 + 2);
    puVar2 = (undefined8 *)(lVar1 * 0x1c + param_1);
    *puVar2 = *(undefined8 *)puVar9;
    puVar2[1] = uVar5;
    uVar5 = *(undefined8 *)(puVar9 + 5);
    puVar2 = (undefined8 *)(lVar1 * 0x1c + 0xc + param_1);
    *puVar2 = *(undefined8 *)(puVar9 + 3);
    puVar2[1] = uVar5;
    lVar1 = lVar10;
  }
  uVar5 = *(undefined8 *)(param_4 + 2);
  puVar2 = (undefined8 *)(lVar1 * 0x1c + param_1);
  *puVar2 = *(undefined8 *)param_4;
  puVar2[1] = uVar5;
  uVar5 = *(undefined8 *)(param_4 + 5);
  puVar2 = (undefined8 *)(lVar1 * 0x1c + 0xc + param_1);
  *puVar2 = *(undefined8 *)(param_4 + 3);
  puVar2[1] = uVar5;
  return;
}

