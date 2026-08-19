// Function: FUN_140097a70
// Addr: 140097a70
// Size: 264 bytes


undefined8 FUN_140097a70(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  char local_218;
  undefined6 uStack_217;
  char cStack_211;
  char acStack_210 [488];
  
  uVar2 = (ulonglong)param_2;
  if (*(char *)(param_1 + 0x10 + (uVar2 + (longlong)param_3 * 0x24) * 0x28) == '\a') {
    return 1;
  }
  acStack_210[0x10] = '\x0f';
  acStack_210[0x11] = '\0';
  acStack_210[0x12] = '\0';
  acStack_210[0x13] = '\0';
  acStack_210[0x14] = '\0';
  acStack_210[0x15] = '\0';
  acStack_210[0x16] = '\0';
  acStack_210[0x17] = '\0';
  acStack_210[8] = '\0';
  acStack_210[9] = '\0';
  acStack_210[10] = '\0';
  acStack_210[0xb] = '\0';
  acStack_210[0xc] = '\0';
  acStack_210[0xd] = '\0';
  acStack_210[0xe] = '\0';
  acStack_210[0xf] = '\0';
  uStack_217 = 0;
  cStack_211 = '\0';
  acStack_210[0] = '\0';
  acStack_210[1] = '\0';
  acStack_210[2] = '\0';
  acStack_210[3] = 0;
  acStack_210[4] = '\0';
  acStack_210[5] = '\0';
  acStack_210[6] = '\0';
  acStack_210[7] = '\0';
  local_218 = '\0';
  if (param_3 != 0) {
    if (param_3 == 1) {
      acStack_210._0_2_ = s_locale_ui__140485708._8_2_;
      acStack_210[8] = '\n';
      acStack_210[9] = '\0';
      acStack_210[10] = '\0';
      acStack_210[0xb] = '\0';
      acStack_210[0xc] = '\0';
      acStack_210[0xd] = '\0';
      acStack_210[0xe] = '\0';
      acStack_210[0xf] = '\0';
      local_218 = (char)s_locale_ui__140485708._0_8_;
      uStack_217 = SUB86(s_locale_ui__140485708._0_8_,1);
      cStack_211 = SUB81(s_locale_ui__140485708._0_8_,7);
      acStack_210[2] = '\0';
    }
    else if (param_3 == 2) {
      local_218 = (char)s_locale_var__1404856f8._0_7_;
      uStack_217 = SUB76(s_locale_var__1404856f8._0_7_,1);
      cStack_211 = (char)s_locale_var__1404856f8._7_4_;
      acStack_210._0_2_ = SUB42(s_locale_var__1404856f8._7_4_,1);
      acStack_210[2] = SUB41(s_locale_var__1404856f8._7_4_,3);
      acStack_210[8] = '\v';
      acStack_210[9] = '\0';
      acStack_210[10] = '\0';
      acStack_210[0xb] = '\0';
      acStack_210[0xc] = '\0';
      acStack_210[0xd] = '\0';
      acStack_210[0xe] = '\0';
      acStack_210[0xf] = '\0';
    }
    acStack_210[3] = 0;
    if ((param_2 < 0) || (0x23 < param_2)) {
      uVar2 = 0;
    }
    uVar1 = func_0x000140421ed0((&PTR_PTR_140478e40)[(uVar2 & 0xffffffff) * 4]);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14000f950(&local_218,"locale/core_",0xc);
}

