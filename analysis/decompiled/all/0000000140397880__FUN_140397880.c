// Function: FUN_140397880
// Addr: 140397880
// Size: 134 bytes


char * FUN_140397880(char *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((*param_1 != '\0') && (*param_2 != '\0')) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_2 + 4) = uVar1;
    uVar1 = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_2 + 8) = uVar1;
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_2 + 0x10) = uVar1;
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = uVar2;
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x20) = uVar1;
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_2 + 0x24) = uVar1;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = uVar2;
  }
  return param_1;
}

