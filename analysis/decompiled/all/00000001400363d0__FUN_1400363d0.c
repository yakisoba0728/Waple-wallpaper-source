// Function: FUN_1400363d0
// Addr: 1400363d0
// Size: 221 bytes


void FUN_1400363d0(void)

{
  undefined8 *puVar1;
  char local_28 [8];
  undefined8 local_20;
  ulonglong local_18;
  undefined8 local_10;
  
  local_18 = 0xd;
  local_10 = 0xf;
  local_28 = (char  [8])s__nowallpapers_140474028._0_8_;
  local_20 = (ulonglong)CONCAT14(s__nowallpapers_140474028[0xc],s__nowallpapers_140474028._8_4_);
  FUN_140031b30(s__nowallpapers_140474028._0_8_,local_28);
  if (DAT_1404e6868 != (longlong *)0x0) {
    (**(code **)(*DAT_1404e6868 + 0x20))
              (DAT_1404e6868,CONCAT71(0x1404e68,DAT_1404e6868 != (longlong *)&DAT_1404e6830));
    DAT_1404e6868 = (longlong *)0x0;
  }
  if (DAT_1404df630 != 0) {
    local_28[0] = '\x02';
    local_28[1] = '\0';
    local_28[2] = '\0';
    local_28[3] = '\0';
    local_28[4] = '\0';
    local_28[5] = '\0';
    local_28[6] = '\0';
    local_28[7] = '\0';
    local_20 = 0;
    local_10 = 0;
    local_18 = CONCAT44(local_18._4_4_,(int)DAT_1404df630);
    local_10 = FUN_14028b190(DAT_1404df630 & 0xffffffff);
    puVar1 = &DAT_1404df620;
    if (0xf < DAT_1404df638) {
      puVar1 = DAT_1404df620;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(local_10,puVar1,local_18 & 0xffffffff);
  }
  return;
}

