// Function: FUN_1402d638c
// Addr: 1402d638c
// Size: 55 bytes


undefined8 FUN_1402d638c(void)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_1404e4918;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    (*DAT_140426568)(&DAT_1404e46c0 + uVar1 * 0x28);
    DAT_1404e4918 = DAT_1404e4918 - 1;
  }
  return 1;
}

