// Function: FUN_140367b40
// Addr: 140367b40
// Size: 41 bytes


void FUN_140367b40(longlong param_1,longlong param_2,ulonglong param_3,uint *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  lVar7 = (longlong)(param_3 - 1) >> 1;
  lVar4 = param_2;
  while (lVar4 < lVar7) {
    uVar5 = *(uint *)(param_1 + 0x20 + lVar4 * 0x20);
    uVar9 = *(uint *)(param_1 + 0x10 + lVar4 * 0x20);
    uVar8 = (uVar5 >> 0x10 & 0xff) * 0x100 + (uVar5 >> 8 & 0xff) * 0x10000 + uVar5 * 0x1000000 +
            (uVar5 >> 0x18);
    uVar5 = (uVar9 >> 8 & 0xff) * 0x10000 + (uVar9 >> 0x10 & 0xff) * 0x100 + uVar9 * 0x1000000 +
            (uVar9 >> 0x18);
    lVar6 = (ulonglong)(~((uint)(uVar5 < uVar8) - (uint)(uVar8 < uVar5)) >> 0x1f) + 1 + lVar4 * 2;
    puVar1 = (undefined8 *)(param_1 + lVar6 * 0x10);
    uVar3 = puVar1[1];
    puVar2 = (undefined8 *)(param_1 + lVar4 * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    lVar4 = lVar6;
  }
  if ((lVar4 == lVar7) && ((param_3 & 1) == 0)) {
    puVar2 = (undefined8 *)(param_1 + -0x10 + param_3 * 0x10);
    uVar3 = puVar2[1];
    puVar1 = (undefined8 *)(param_1 + lVar4 * 0x10);
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    lVar4 = param_3 - 1;
  }
  while (param_2 < lVar4) {
    uVar5 = *param_4;
    lVar7 = lVar4 + -1 >> 1;
    uVar9 = *(uint *)(param_1 + lVar7 * 0x10);
    uVar9 = (uVar9 >> 0x10 & 0xff) * 0x100 + (uVar9 >> 8 & 0xff) * 0x10000 + uVar9 * 0x1000000 +
            (uVar9 >> 0x18);
    uVar5 = (uVar5 >> 8 & 0xff) * 0x10000 + (uVar5 >> 0x10 & 0xff) * 0x100 + uVar5 * 0x1000000 +
            (uVar5 >> 0x18);
    if (-1 < (int)((uint)(uVar5 < uVar9) - (uint)(uVar9 < uVar5))) break;
    puVar1 = (undefined8 *)(param_1 + lVar7 * 0x10);
    uVar3 = puVar1[1];
    puVar2 = (undefined8 *)(param_1 + lVar4 * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    lVar4 = lVar7;
  }
  uVar3 = *(undefined8 *)(param_4 + 2);
  puVar1 = (undefined8 *)(param_1 + lVar4 * 0x10);
  *puVar1 = *(undefined8 *)param_4;
  puVar1[1] = uVar3;
  return;
}

