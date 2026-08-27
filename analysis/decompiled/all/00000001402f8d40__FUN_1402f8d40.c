// Function: FUN_1402f8d40
// Addr: 1402f8d40
// Size: 260 bytes


undefined8 FUN_1402f8d40(longlong param_1,char *param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == 0) {
    return 0x21;
  }
  if (((param_2 == (char *)0x0) || (param_3 == 0)) || (param_4 == 0)) {
    return 6;
  }
  puVar5 = (undefined8 *)(param_1 + 0x18);
  puVar4 = puVar5 + *(uint *)(param_1 + 0x14);
  for (; puVar5 < puVar4; puVar5 = puVar5 + 1) {
    iVar2 = strcmp(*(char **)(*(longlong *)*puVar5 + 8),param_2);
    if (iVar2 == 0) goto LAB_1402f8df1;
  }
  if (puVar5 == puVar4) {
    uVar3 = 0xb;
  }
  else {
LAB_1402f8df1:
    pcVar1 = *(code **)(*(longlong *)*puVar5 + 0x30);
    if (((pcVar1 == (code *)0x0) ||
        (puVar4 = (undefined8 *)(*pcVar1)((longlong *)*puVar5,"properties"),
        puVar4 == (undefined8 *)0x0)) || ((code *)*puVar4 == (code *)0x0)) {
      uVar3 = 7;
    }
    else {
      uVar3 = (*(code *)*puVar4)(*puVar5,param_3,param_4,1);
    }
  }
  return uVar3;
}

