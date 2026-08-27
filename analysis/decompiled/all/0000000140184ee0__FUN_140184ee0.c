// Function: FUN_140184ee0
// Addr: 140184ee0
// Size: 31 bytes


int FUN_140184ee0(char *param_1)

{
  int iVar1;
  
  if (*param_1 != '\0') {
    iVar1 = FUN_140184ee0(param_1 + 1);
    return iVar1 + 1;
  }
  return 0;
}

