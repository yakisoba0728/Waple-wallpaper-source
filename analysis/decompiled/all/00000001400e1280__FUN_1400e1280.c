// Function: FUN_1400e1280
// Addr: 1400e1280
// Size: 150 bytes


undefined8 * FUN_1400e1280(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar2 = (undefined8 *)FUN_14028af20(0xb0);
    FUN_1400d3e70(puVar2 + 4,param_2 + 4);
    *puVar2 = puVar1;
    puVar2[2] = puVar1;
    *(undefined2 *)(puVar2 + 3) = 0;
    puVar2[1] = param_3;
    *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(param_2 + 3);
    uVar3 = FUN_1400e1280(param_1,*param_2,puVar2);
    *puVar2 = uVar3;
    uVar3 = FUN_1400e1280(param_1,param_2[2],puVar2);
    puVar2[2] = uVar3;
    return puVar2;
  }
  return puVar1;
}

