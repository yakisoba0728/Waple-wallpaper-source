// Function: FUN_1402dc864
// Addr: 1402dc864
// Size: 213 bytes


void FUN_1402dc864(void)

{
  if (DAT_1405160d0 == 0) {
    FUN_1402dbce0(0,"AreFileApisANSI",&DAT_140430058,&DAT_14043005c);
  }
  FUN_1402dbca8();
  if (DAT_1405160e0 == 0) {
    FUN_1402dbce0(2,"EnumSystemLocalesEx",&DAT_140430088,"EnumSystemLocalesEx");
  }
  if (DAT_1405160f8 == 0) {
    FUN_1402dbce0(5,"GetDateFormatEx",&DAT_1404300d8,"GetDateFormatEx");
  }
  if (DAT_140516120 == 0) {
    FUN_1402dbce0(10,"GetLocaleInfoEx",&DAT_140430110,"GetLocaleInfoEx");
  }
  if (DAT_140516138 == 0) {
    FUN_1402dbce0(0xd,"GetTimeFormatEx",&DAT_140430148,"GetTimeFormatEx");
  }
  if (lRam0000000140516140 == 0) {
    FUN_1402dbce0(0xe,"GetUserDefaultLocaleName",&UNK_140430160,"GetUserDefaultLocaleName");
  }
  if (DAT_140516158 == 0) {
    FUN_1402dbce0(0x11,"IsValidLocaleName",&UNK_1404301b0,"IsValidLocaleName");
  }
  if (DAT_140516160 == 0) {
    FUN_1402dbce0(0x12,"LCMapStringEx",&UNK_1404301d0,"LCMapStringEx");
  }
  if (lRam0000000140516168 == 0) {
    FUN_1402dbce0(0x13,"LCIDToLocaleName",&UNK_1404301e8,"LCIDToLocaleName");
  }
  if (lRam0000000140516170 == 0) {
    FUN_1402dbce0(0x14,"LocaleNameToLCID",&UNK_140430208,"LocaleNameToLCID");
  }
  return;
}

