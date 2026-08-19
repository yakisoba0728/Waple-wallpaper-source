// Function: FUN_14031b0a0
// Addr: 14031b0a0
// Size: 152 bytes


int * FUN_14031b0a0(int *param_1,int *param_2,longlong param_3)

{
  uint uVar1;
  int **ppiVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *local_res8;
  
  local_res8 = *(int **)(param_1 + 0xb8);
  piVar5 = (int *)0x0;
  iVar4 = 0;
  piVar3 = piVar5;
  if ((local_res8 != (int *)0x0) && (piVar3 = (int *)0x0, *local_res8 != 0)) {
    piVar3 = local_res8;
  }
  if (*(int *)(param_3 + 0x14) == 0xb) {
    (**(code **)(param_3 + 0x18))(param_1,param_2);
    return (int *)(ulonglong)(uint)param_2[6];
  }
  switch(*(undefined4 *)(param_3 + 0x10)) {
  case 3:
    param_1 = param_1 + 0x44;
  case 8:
switchD_14031b118_caseD_8:
    local_res8 = param_1;
    break;
  case 4:
    local_res8 = param_1 + 0x36;
    if (piVar3 != (int *)0x0) {
      iVar4 = *piVar3;
      ppiVar2 = (int **)(piVar3 + 0x46);
      piVar3 = *ppiVar2;
      goto code_r0x00014031b1ab;
    }
    break;
  case 5:
    local_res8 = param_1 + 0x45;
    if (piVar3 != (int *)0x0) {
      iVar4 = *piVar3;
      ppiVar2 = (int **)(piVar3 + 0x68);
      piVar3 = *ppiVar2;
      goto code_r0x00014031b1ab;
    }
    break;
  case 6:
    local_res8 = param_1 + 0x9f;
    if (piVar3 != (int *)0x0) {
      iVar4 = *piVar3;
      ppiVar2 = (int **)(piVar3 + 0x8c);
      piVar3 = *ppiVar2;
      goto code_r0x00014031b1ab;
    }
    break;
  case 7:
    local_res8 = param_2;
    break;
  case 9:
    break;
  default:
    param_1 = param_1 + 0x36;
    goto switchD_14031b118_caseD_8;
  }
  ppiVar2 = &local_res8;
  piVar3 = local_res8;
code_r0x00014031b1ab:
  if (piVar3 != (int *)0x0) {
    if (*(int *)(param_3 + 0x14) - 9U < 2) {
      uVar1 = (**(code **)(param_2 + 0x22))(param_2,param_3,ppiVar2,iVar4,0);
    }
    else {
      uVar1 = (**(code **)(param_2 + 0x20))();
    }
    piVar5 = (int *)(ulonglong)uVar1;
  }
  return piVar5;
}

