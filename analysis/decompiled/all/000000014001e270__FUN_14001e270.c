// Function: FUN_14001e270
// Addr: 14001e270
// Size: 73 bytes


undefined8 FUN_14001e270(void)

{
  int iVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  wchar_t *pwStack_18;
  
  if ((DAT_1404e5348 != 0) && (iVar1 = (*DAT_140426af0)(), iVar1 != 0)) {
    (*DAT_140426808)(DAT_1404e5348);
  }
  DAT_1404e5348 = 0;
  if (((byte)DAT_1404df610 & 1) == 0) {
    if (DAT_1404e8fec == 0) {
      uStack_58 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      pwStack_18 = L"WPETrayWindow";
      uStack_28 = 0;
      uStack_20 = 0;
      uStack_50 = 0x14001fdf0;
      uStack_38 = 0;
      uStack_30 = 0;
      DAT_1404e8fec = (*DAT_140426800)(&uStack_58);
    }
    DAT_1404e5348 = (*DAT_1404267d0)(0,DAT_1404e8fec,&DAT_140474608,0,0,0,0,0,0,0,DAT_1404e8c50,0);
    iVar1 = (*DAT_140426af0)(DAT_1404e5348);
    if (iVar1 != 0) {
      FUN_14003da00(DAT_1404df61c);
      return 1;
    }
  }
  DAT_1404e5348 = 0;
  return 0;
}

