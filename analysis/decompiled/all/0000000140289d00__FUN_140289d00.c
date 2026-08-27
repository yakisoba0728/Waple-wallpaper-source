// Function: FUN_140289d00
// Addr: 140289d00
// Size: 228 bytes


void FUN_140289d00(double *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  iVar3 = *param_2;
  if (iVar3 == 3) {
    if (((param_1[2] == *param_1) && (param_1[3] == param_1[1])) ||
       ((param_1[2] == param_1[6] && (param_1[3] == param_1[7])))) {
      if (((param_1[4] != *param_1) || (param_1[5] != param_1[1])) &&
         ((param_1[4] != param_1[6] || (param_1[5] != param_1[7])))) goto LAB_140289da2;
      dVar1 = param_1[6];
      dVar2 = param_1[7];
      iVar3 = 1;
      *param_2 = 1;
      param_1[2] = dVar1;
      param_1[3] = dVar2;
    }
  }
  else {
LAB_140289da2:
    if (iVar3 == 2) {
      if ((param_1[2] != *param_1) || (param_1[3] != param_1[1])) {
        if (param_1[2] != param_1[4]) {
          return;
        }
        if (param_1[3] != param_1[5]) {
          return;
        }
      }
      dVar1 = param_1[4];
      dVar2 = param_1[5];
      *param_2 = 1;
      param_1[2] = dVar1;
      param_1[3] = dVar2;
      goto LAB_140289d80;
    }
  }
  if (iVar3 != 1) {
    return;
  }
LAB_140289d80:
  if ((*param_1 == param_1[2]) && (param_1[1] == param_1[3])) {
    *param_2 = 0;
  }
  return;
}

