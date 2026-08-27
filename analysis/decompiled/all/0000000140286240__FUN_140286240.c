// Function: FUN_140286240
// Addr: 140286240
// Size: 57 bytes


void FUN_140286240(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_14028af20(0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_1 + 8);
  *puVar5 = &PTR_FUN_1404924d0;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  puVar5[4] = uVar1;
  puVar5[5] = uVar2;
  return;
}

