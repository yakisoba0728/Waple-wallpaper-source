// Function: FUN_1403f8e70
// Addr: 1403f8e70
// Size: 276 bytes


void FUN_1403f8e70(longlong param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar10 = *(uint *)(param_1 + 0x60);
  uVar8 = uVar10;
  if (param_2 <= uVar10) {
    uVar8 = param_2;
  }
  if (param_3 <= uVar10) {
    uVar10 = param_3;
  }
  if (uVar8 + 2 <= uVar10) {
    lVar4 = *(longlong *)(param_1 + 0x70);
    uVar9 = (uVar10 - uVar8 >> 1) + uVar8;
    for (; uVar8 < uVar9; uVar8 = uVar8 + 1) {
      uVar10 = uVar10 - 1;
      uVar11 = (ulonglong)uVar10;
      puVar1 = (undefined8 *)(lVar4 + (ulonglong)uVar8 * 0x14);
      uVar3 = *(undefined4 *)(lVar4 + 0x10 + uVar11 * 0x14);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(lVar4 + uVar11 * 0x14);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + uVar11 * 0x14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      *(undefined4 *)(lVar4 + 0x10 + uVar11 * 0x14) = *(undefined4 *)(puVar1 + 2);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      *(undefined4 *)(puVar1 + 2) = uVar3;
    }
  }
  if (*(char *)(param_1 + 0x5a) != '\0') {
    uVar10 = *(uint *)(param_1 + 0x60);
    uVar8 = uVar10;
    if (param_2 <= uVar10) {
      uVar8 = param_2;
    }
    if (param_3 <= uVar10) {
      uVar10 = param_3;
    }
    if (uVar8 + 2 <= uVar10) {
      lVar4 = *(longlong *)(param_1 + 0x80);
      uVar9 = (uVar10 - uVar8 >> 1) + uVar8;
      for (; uVar8 < uVar9; uVar8 = uVar8 + 1) {
        uVar10 = uVar10 - 1;
        uVar11 = (ulonglong)uVar10;
        puVar1 = (undefined8 *)(lVar4 + (ulonglong)uVar8 * 0x14);
        uVar3 = *(undefined4 *)(lVar4 + 0x10 + uVar11 * 0x14);
        uVar5 = puVar1[1];
        puVar2 = (undefined8 *)(lVar4 + uVar11 * 0x14);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        puVar2 = (undefined8 *)(lVar4 + uVar11 * 0x14);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        *(undefined4 *)(lVar4 + 0x10 + uVar11 * 0x14) = *(undefined4 *)(puVar1 + 2);
        *puVar1 = uVar6;
        puVar1[1] = uVar7;
        *(undefined4 *)(puVar1 + 2) = uVar3;
      }
    }
  }
  return;
}

