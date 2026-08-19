// Function: FUN_1403ed5a0
// Addr: 1403ed5a0
// Size: 134 bytes


undefined8 FUN_1403ed5a0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  uVar7 = func_0x0001403eb040(param_1,0,1);
  if ((char)uVar7 == '\0') {
    return uVar7;
  }
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x5c);
  if (*(uint *)(param_1 + 0x5c) < *(uint *)(param_1 + 0x60)) {
    lVar9 = *(longlong *)(param_1 + 0x70);
  }
  else {
    uVar8 = (ulonglong)(*(int *)(param_1 + 100) - 1);
    if (*(int *)(param_1 + 100) == 0) {
      uVar8 = 0;
    }
    lVar9 = *(longlong *)(param_1 + 0x78);
  }
  puVar1 = (undefined8 *)(lVar9 + uVar8 * 0x14);
  uVar7 = puVar1[1];
  uVar4 = *(uint *)(param_1 + 100);
  lVar6 = *(longlong *)(param_1 + 0x78);
  puVar2 = (undefined8 *)(lVar6 + (ulonglong)uVar4 * 0x14);
  *puVar2 = *puVar1;
  puVar2[1] = uVar7;
  puVar3 = (undefined4 *)(lVar6 + (ulonglong)uVar4 * 0x14);
  uVar5 = *(undefined4 *)(lVar9 + uVar8 * 0x14 + 0x10);
  puVar3[4] = uVar5;
  *puVar3 = param_2;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  return CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),1);
}

