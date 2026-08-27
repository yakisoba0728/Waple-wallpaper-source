// Function: FUN_1400e8140
// Addr: 1400e8140
// Size: 157 bytes


void FUN_1400e8140(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14028af20(0x28);
  *(uint *)(puVar1 + 1) = param_2 & 0xff | 10;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_140486c08;
  puVar1[4] = 0;
  puVar2 = (undefined8 *)FUN_14028af20(0x20);
  *puVar2 = &PTR_FUN_140486c30;
  puVar2[1] = 1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  FUN_1400e5e40(param_1 + 0x38,puVar1);
  puVar1[4] = puVar2;
  puVar2[3] = puVar1;
  *(undefined8 **)(param_1 + 0x40) = puVar2;
  FUN_1400e1650(param_1);
  FUN_1400e1a50(param_1 + 0x38,puVar1);
  *(undefined8 **)(param_1 + 0x40) = puVar1;
  return;
}

