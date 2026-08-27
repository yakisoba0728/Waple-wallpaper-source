// Function: FUN_140089830
// Addr: 140089830
// Size: 163 bytes


undefined8 * FUN_140089830(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar2 = (undefined8 *)FUN_14028af20(0x58);
    FUN_140084bf0(puVar2 + 4,param_2 + 4);
    FUN_140085090(puVar2 + 6,param_2 + 6);
    *puVar2 = puVar1;
    puVar2[2] = puVar1;
    *(undefined2 *)(puVar2 + 3) = 0;
    puVar2[1] = param_3;
    *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(param_2 + 3);
    uVar3 = FUN_140089830(param_1,*param_2,puVar2);
    *puVar2 = uVar3;
    uVar3 = FUN_140089830(param_1,param_2[2],puVar2);
    puVar2[2] = uVar3;
    return puVar2;
  }
  return puVar1;
}

