// Function: FUN_140139550
// Addr: 140139550
// Size: 75 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140139550(void)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 auStackX_8 [2];
  int aiStackX_10 [2];
  undefined8 local_res18 [2];
  
  uVar2 = FUN_140015250(10,0,0);
  if ((char)uVar2 != '\0') {
    uVar2 = (*DAT_1404260e8)(0xffffffff80000001,
                             L"Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",0,
                             0xf003f,local_res18);
    if ((int)uVar2 == 0) {
      auStackX_8[0] = 4;
      iVar1 = (*_UNK_140426110)(local_res18[0],L"SystemUsesLightTheme",0,0,aiStackX_10,auStackX_8);
      if ((iVar1 == 0) && (aiStackX_10[0] != 0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      (*DAT_1404260d8)(local_res18[0]);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffffffffff00;
}

