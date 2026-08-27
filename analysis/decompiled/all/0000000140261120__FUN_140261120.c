// Function: FUN_140261120
// Addr: 140261120
// Size: 200 bytes


undefined8 FUN_140261120(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  iVar1 = strcmp(PTR_DAT_140484e00,param_1);
  if (iVar1 != 0) {
    uVar2 = 1;
    iVar1 = strcmp(PTR_DAT_140484e08,param_1);
    if (iVar1 != 0) {
      uVar2 = 2;
      iVar1 = strcmp(PTR_s_square_140484e10,param_1);
      if (iVar1 != 0) {
        uVar2 = 3;
        iVar1 = strcmp(PTR_DAT_140484e18,param_1);
        if (iVar1 != 0) {
          uVar2 = 4;
          iVar1 = strcmp(PTR_s_triangle_140484e20,param_1);
          if (iVar1 != 0) {
            uVar2 = 5;
            iVar1 = strcmp(PTR_s_simplexnoise_140484e28,param_1);
            if (iVar1 != 0) {
              uVar2 = 6;
              iVar1 = strcmp(PTR_s_fbmnoise_140484e30,param_1);
              if (iVar1 != 0) {
                return 8;
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}

