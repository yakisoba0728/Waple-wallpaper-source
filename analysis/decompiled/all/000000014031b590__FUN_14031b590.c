// Function: FUN_14031b590
// Addr: 14031b590
// Size: 68 bytes


bool FUN_14031b590(char *param_1,int param_2,uint param_3,void *param_4)

{
  int iVar1;
  
  if (((*param_1 != '\0') && (*(int *)(param_1 + 0x10) == param_2)) &&
     (*(uint *)(param_1 + 0x14) == param_3)) {
    if (param_3 != 0) {
      iVar1 = memcmp(param_4,*(void **)(param_1 + 0x18),(ulonglong)param_3 << 2);
      return iVar1 != 0;
    }
    return false;
  }
  return true;
}

