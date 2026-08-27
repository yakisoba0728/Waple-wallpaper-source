// Function: FUN_140004b70
// Addr: 140004b70
// Size: 170 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140004b70(void)

{
  undefined **local_res10 [3];
  
  local_res10[0] = &PTR_vftable_1404dc358;
  PTR_vftable_1404dc358 = (undefined *)std::bad_alloc::vftable;
  _DAT_1404dc2c0 = 0xe06d7363;
  _DAT_1404dc2c4 = 1;
  _DAT_1404dc2c8 = 0;
  _DAT_1404dc2d0 = 0;
  _DAT_1404dc2d8 = 4;
  _DAT_1404dc2e0 = 0x19930520;
  _DAT_1404dc2e8 = &PTR_vftable_1404dc358;
  _DAT_1404dc2f0 = &DAT_1404d8150;
  _DAT_1404dc2f8 = RtlPcToFileHeader(&DAT_1404d8150,local_res10);
  if (_DAT_1404dc2f8 == (PVOID)0x0) {
    _DAT_1404dc2e0 = 0x1994000;
  }
  FUN_14028b410(&DAT_140425880);
  return;
}

