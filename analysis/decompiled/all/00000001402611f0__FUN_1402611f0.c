// Function: FUN_1402611f0
// Addr: 1402611f0
// Size: 93 bytes


undefined8 FUN_1402611f0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_140421e50(PTR_s_ity_140477090_0xc_140484ed0,param_1);
  if (iVar1 != 0) {
    uVar2 = 1;
    iVar1 = FUN_140421e50(PTR_s_lpoint_140491fb0_0x10_140484ed8,param_1);
    if (iVar1 != 0) {
      uVar2 = 2;
      iVar1 = FUN_140421e50(PTR_s_positionbetweentwocontrolpoints_140484ee0,param_1);
      if (iVar1 != 0) {
        uVar2 = 3;
        iVar1 = FUN_140421e50(PTR_DAT_140484ee8,param_1);
        if (iVar1 != 0) {
          uVar2 = 4;
          iVar1 = FUN_140421e50(PTR_s_velocity_140484ef0,param_1);
          if (iVar1 != 0) {
            uVar2 = 5;
            iVar1 = FUN_140421e50(PTR_s_deltatocontrolpoint_140484ef8,param_1);
            if (iVar1 != 0) {
              uVar2 = 6;
              iVar1 = FUN_140421e50(PTR_s_int_140491f98_0x10_140484f00,param_1);
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

