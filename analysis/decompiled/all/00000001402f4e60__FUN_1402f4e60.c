// Function: FUN_1402f4e60
// Addr: 1402f4e60
// Size: 141 bytes


void FUN_1402f4e60(longlong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 0xd0);
    uVar4 = 0;
    piVar1[6] = 0;
    if (param_2 == (int *)0x0) {
      piVar1[0] = 0x10000;
      piVar1[1] = 0;
      piVar1[2] = 0;
      piVar1[3] = 0x10000;
      param_2 = piVar1;
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)piVar1 = *(undefined8 *)param_2;
      *(undefined8 *)(piVar1 + 2) = uVar2;
    }
    if (((param_2[2] != 0 || param_2[1] != 0) || (*param_2 != 0x10000)) || (param_2[3] != 0x10000))
    {
      uVar4 = 1;
      piVar1[6] = 1;
    }
    if (param_3 == (int *)0x0) {
      piVar1[4] = 0;
      piVar1[5] = 0;
      param_3 = piVar1 + 4;
      iVar3 = 0;
    }
    else {
      *(undefined8 *)(piVar1 + 4) = *(undefined8 *)param_3;
      iVar3 = *param_3;
    }
    if (iVar3 != 0 || param_3[1] != 0) {
      piVar1[6] = uVar4 | 2;
    }
  }
  return;
}

