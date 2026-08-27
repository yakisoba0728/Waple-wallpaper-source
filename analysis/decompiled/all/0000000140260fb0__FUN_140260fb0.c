// Function: FUN_140260fb0
// Addr: 140260fb0
// Size: 124 bytes


undefined8 FUN_140260fb0(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  iVar1 = strcmp(PTR_s_remap_140484f20,param_1);
  if (iVar1 != 0) {
    uVar2 = 1;
    iVar1 = strcmp(PTR_s_multiply_140484f28,param_1);
    if (iVar1 != 0) {
      uVar2 = 2;
      iVar1 = strcmp(PTR_DAT_140484f30,param_1);
      if (iVar1 != 0) {
        uVar2 = 3;
        iVar1 = strcmp(PTR_s_subtract_140484f38,param_1);
        if (iVar1 != 0) {
          return 5;
        }
      }
    }
  }
  return uVar2;
}

