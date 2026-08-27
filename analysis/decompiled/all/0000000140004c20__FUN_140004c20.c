// Function: FUN_140004c20
// Addr: 140004c20
// Size: 170 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140004c20(void)

{
  undefined **local_res10 [3];
  
  local_res10[0] = &PTR_vftable_1404dc298;
  PTR_vftable_1404dc298 = (undefined *)std::bad_exception::vftable;
  _DAT_1404dc200 = 0xe06d7363;
  _DAT_1404dc204 = 1;
  _DAT_1404dc208 = 0;
  _DAT_1404dc210 = 0;
  _DAT_1404dc218 = 4;
  _DAT_1404dc220 = 0x19930520;
  _DAT_1404dc228 = &PTR_vftable_1404dc298;
  _DAT_1404dc230 = &DAT_1404d85d0;
  _DAT_1404dc238 = RtlPcToFileHeader(&DAT_1404d85d0,local_res10);
  if (_DAT_1404dc238 == (PVOID)0x0) {
    _DAT_1404dc220 = 0x1994000;
  }
  FUN_14028b410(&DAT_140425890);
  return;
}

