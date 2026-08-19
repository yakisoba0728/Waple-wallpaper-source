// Function: FUN_14028fd30
// Addr: 14028fd30
// Size: 11 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14028fd30(undefined8 param_1)

{
  int iVar1;
  uint uStackX_10;
  undefined1 auStack_28 [16];
  byte bStack_18;
  
  iVar1 = (*_UNK_1404266d8)(param_1,0);
  if (iVar1 != 0) {
    uStackX_10 = CONCAT31(uStackX_10._1_3_,1);
    return (ulonglong)uStackX_10;
  }
  iVar1 = (*DAT_1404266a8)();
  if (iVar1 == 0xb7) {
    iVar1 = FUN_140290300(param_1,auStack_28,3,0xffffffff);
    if ((iVar1 == 0) && ((bStack_18 & 0x10) == 0)) {
      iVar1 = 0xb7;
    }
  }
  return (ulonglong)CONCAT43(iVar1,uStackX_10._1_3_) << 8;
}

