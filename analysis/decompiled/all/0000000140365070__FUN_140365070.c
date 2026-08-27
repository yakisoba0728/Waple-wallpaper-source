// Function: FUN_140365070
// Addr: 140365070
// Size: 178 bytes


void FUN_140365070(uint *param_1,uint *param_2,uint *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((*param_2 < *param_1) ||
     ((*param_2 == *param_1 &&
      ((param_2[2] < param_1[2] || ((param_2[2] == param_1[2] && (param_2[1] < param_1[1])))))))) {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = param_2[2];
    *(undefined8 *)param_2 = *(undefined8 *)param_1;
    param_2[2] = param_1[2];
    *(undefined8 *)param_1 = uVar1;
    param_1[2] = uVar2;
  }
  if (*param_2 <= *param_3) {
    if (*param_3 != *param_2) {
      return;
    }
    if (param_2[2] <= param_3[2]) {
      if (param_3[2] != param_2[2]) {
        return;
      }
      if (param_2[1] <= param_3[1]) {
        return;
      }
    }
  }
  uVar1 = *(undefined8 *)param_3;
  uVar2 = param_3[2];
  *(undefined8 *)param_3 = *(undefined8 *)param_2;
  param_3[2] = param_2[2];
  *(undefined8 *)param_2 = uVar1;
  param_2[2] = uVar2;
  if (*param_1 <= *param_2) {
    if (*param_2 != *param_1) {
      return;
    }
    if (param_1[2] <= uVar2) {
      if (uVar2 != param_1[2]) {
        return;
      }
      if (param_1[1] <= param_2[1]) {
        return;
      }
    }
  }
  *(undefined8 *)param_2 = *(undefined8 *)param_1;
  param_2[2] = param_1[2];
  *(undefined8 *)param_1 = uVar1;
  param_1[2] = uVar2;
  return;
}

