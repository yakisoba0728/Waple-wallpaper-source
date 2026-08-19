// Function: FUN_1403b38b0
// Addr: 1403b38b0
// Size: 97 bytes


uint FUN_1403b38b0(int *param_1,int *param_2)

{
  uint uVar1;
  
  if (*param_1 != *param_2) {
    uVar1 = 1;
    if (*param_1 < *param_2) {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  if ((char)param_1[2] == '\0') {
    if (((param_1[1] ^ param_2[1]) & 0xfffffffeU) != 0) {
      uVar1 = 1;
      if (param_1[1] < param_2[1]) {
        uVar1 = 0xffffffff;
      }
      return uVar1;
    }
  }
  if ((uint)param_1[3] < (uint)param_2[3]) {
    return 0xffffffff;
  }
  return (uint)((uint)param_2[3] < (uint)param_1[3]);
}

