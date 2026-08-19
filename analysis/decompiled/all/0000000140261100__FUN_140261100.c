// Function: FUN_140261100
// Addr: 140261100
// Size: 16 bytes


undefined8 FUN_140261100(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_140421e50(PTR_s_larspeed_140491f38_4_140484f10,param_1);
  if (iVar1 != 0) {
    uVar2 = 1;
    iVar1 = FUN_140421e50(PTR_DAT_140484f18,param_1);
    if (iVar1 != 0) {
      uVar2 = 2;
      iVar1 = FUN_140421e50(PTR_DAT_140484f20,param_1);
      if (iVar1 != 0) {
        uVar2 = 3;
        iVar1 = FUN_140421e50(PTR_s_peed_140491f38_8_140484f28,param_1);
        if (iVar1 != 0) {
          uVar2 = 4;
          iVar1 = FUN_140421e50(PTR_s_ancetocontrolpoint_140491fb0_4_140484f30,param_1);
          if (iVar1 != 0) {
            uVar2 = 5;
            iVar1 = FUN_140421e50(PTR_s_tocontrolpoint_140491fb0_8_140484f38,param_1);
            if (iVar1 != 0) {
              uVar2 = 6;
              iVar1 = FUN_140421e50(PTR_PTR_140484f40,param_1);
              if (iVar1 != 0) {
                uVar2 = 7;
                iVar1 = FUN_140421e50(PTR_PTR_140484f48,param_1);
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

