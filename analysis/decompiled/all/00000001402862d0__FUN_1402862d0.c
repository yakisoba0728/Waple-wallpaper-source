// Function: FUN_1402862d0
// Addr: 1402862d0
// Size: 93 bytes


void FUN_1402862d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)FUN_14028af20(0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(param_1 + 8);
  *puVar9 = &PTR_FUN_140492548;
  puVar9[8] = uVar1;
  puVar9[9] = uVar2;
  puVar9[2] = uVar7;
  puVar9[3] = uVar8;
  puVar9[4] = uVar5;
  puVar9[5] = uVar6;
  puVar9[6] = uVar3;
  puVar9[7] = uVar4;
  return;
}

