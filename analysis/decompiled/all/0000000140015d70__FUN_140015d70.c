// Function: FUN_140015d70
// Addr: 140015d70
// Size: 114 bytes


int * FUN_140015d70(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    *param_2 = 0;
    *(undefined ***)(param_2 + 2) = &PTR_vftable_1404df520;
    return param_2;
  }
  iVar1 = FUN_14028f520(param_3);
  if (iVar1 == 0) {
    *param_2 = param_3;
    *(undefined ***)(param_2 + 2) = &PTR_PTR_1404df530;
    return param_2;
  }
  *param_2 = iVar1;
  *(undefined ***)(param_2 + 2) = &PTR_vftable_1404df520;
  return param_2;
}

