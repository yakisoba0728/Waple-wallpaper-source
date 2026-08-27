// Function: FUN_140286280
// Addr: 140286280
// Size: 65 bytes


void FUN_140286280(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)FUN_14028af20(0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_1 + 8);
  *puVar7 = &PTR_FUN_1404923e0;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  puVar7[4] = uVar3;
  puVar7[5] = uVar4;
  puVar7[6] = uVar1;
  puVar7[7] = uVar2;
  return;
}

