// Function: FUN_140015e40
// Addr: 140015e40
// Size: 47 bytes


int * FUN_140015e40(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    *param_2 = 0;
    *(undefined ***)(param_2 + 2) = &PTR_DAT_1404df5f0;
    return param_2;
  }
  iVar1 = func_0x00014028f5f0(param_3);
  if (iVar1 == 0) {
    *param_2 = param_3;
    *(undefined ***)(param_2 + 2) = &PTR_DAT_1404df600;
    return param_2;
  }
  *param_2 = iVar1;
  *(undefined ***)(param_2 + 2) = &PTR_DAT_1404df5f0;
  return param_2;
}

