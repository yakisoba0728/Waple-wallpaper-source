// Function: FUN_1401a4930
// Addr: 1401a4930
// Size: 192 bytes


void FUN_1401a4930(undefined8 *param_1,longlong param_2,double *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_2 + 4);
  lVar2 = param_1[1];
  uVar3 = *(uint *)(param_3 + 1) & 0xff;
  if ((uVar3 == 1) || (uVar3 == 2)) {
    iVar4 = *(int *)param_3;
  }
  else {
    if (uVar3 != 3) goto LAB_1401a4970;
    iVar4 = (int)*param_3;
  }
  *(int *)(iVar1 + lVar2) = iVar4;
LAB_1401a4970:
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_140176f70(*param_1,param_1[1],param_2);
    if (*(char *)(param_3 + 1) == '\a') {
      lVar6 = FUN_140087490(param_3,"value","");
      if (lVar6 == 0) {
        lVar6 = FUN_140084ac0();
      }
      if (*(byte *)(lVar6 + 8) - 1 < 3) {
        uVar5 = FUN_140085ee0();
        *(undefined4 *)(iVar1 + lVar2) = uVar5;
      }
      FUN_1401a4db0(param_2,param_1,param_3);
    }
  }
  if (*(code **)(param_2 + 0x28) != (code *)0x0) {
    (**(code **)(param_2 + 0x28))(param_1[1],param_2);
  }
  return;
}

