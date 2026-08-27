// Function: FUN_140261030
// Addr: 140261030
// Size: 228 bytes


undefined8 FUN_140261030(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  iVar1 = strcmp(PTR_DAT_140484e40,param_1);
  if (iVar1 != 0) {
    uVar2 = 1;
    iVar1 = strcmp(PTR_DAT_140484e48,param_1);
    if (iVar1 != 0) {
      uVar2 = 2;
      iVar1 = strcmp(PTR_DAT_140484e50,param_1);
      if (iVar1 != 0) {
        uVar2 = 3;
        iVar1 = strcmp(PTR_DAT_140484e58,param_1);
        if (iVar1 != 0) {
          uVar2 = 4;
          iVar1 = strcmp(PTR_DAT_140484e60,param_1);
          if (iVar1 != 0) {
            uVar2 = 5;
            iVar1 = strcmp(PTR_s_average_140484e68,param_1);
            if (iVar1 != 0) {
              uVar2 = 6;
              iVar1 = strcmp(PTR_DAT_140484e70,param_1);
              if (iVar1 != 0) {
                uVar2 = 7;
                iVar1 = strcmp(PTR_DAT_140484e78,param_1);
                if (iVar1 != 0) {
                  return 9;
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}

