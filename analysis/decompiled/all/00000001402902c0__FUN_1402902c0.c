// Function: FUN_1402902c0
// Addr: 1402902c0
// Size: 59 bytes


ulonglong FUN_1402902c0(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_140426620)();
  if (uVar1 == 0) {
    uVar1 = (*DAT_1404266a8)();
    return (ulonglong)uVar1 << 0x20;
  }
  return (ulonglong)uVar1;
}

