// Function: FUN_14028f780
// Addr: 14028f780
// Size: 41 bytes


ulonglong FUN_14028f780(void)

{
  BOOL BVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_1402d5b50();
  if ((int)uVar2 == 0xfde9) {
    return uVar2;
  }
  BVar1 = AreFileApisANSI();
  return (ulonglong)(BVar1 == 0);
}

