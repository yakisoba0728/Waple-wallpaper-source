// Function: FUN_140015d10
// Addr: 140015d10
// Size: 145 bytes


char * FUN_140015d10(undefined8 param_1,char *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong local_18;
  longlong local_10;
  
  local_18 = 0;
  local_10 = FUN_14028f620(param_3,&local_18);
  uVar1 = s_unknown_error_140474410._0_8_;
  if ((local_18 != 0) && (local_10 != 0)) {
    param_2[0] = '\0';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    param_2[4] = '\0';
    param_2[5] = '\0';
    param_2[6] = '\0';
    param_2[7] = '\0';
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    param_2[0x10] = '\0';
    param_2[0x11] = '\0';
    param_2[0x12] = '\0';
    param_2[0x13] = '\0';
    param_2[0x14] = '\0';
    param_2[0x15] = '\0';
    param_2[0x16] = '\0';
    param_2[0x17] = '\0';
    param_2[0x18] = '\0';
    param_2[0x19] = '\0';
    param_2[0x1a] = '\0';
    param_2[0x1b] = '\0';
    param_2[0x1c] = '\0';
    param_2[0x1d] = '\0';
    param_2[0x1e] = '\0';
    param_2[0x1f] = '\0';
    func_0x000140017550(param_2,local_18,local_10);
    FUN_14028f700(local_18);
    return param_2;
  }
  param_2[0xe] = '\0';
  uVar2 = s_unknown_error_140474410._8_4_;
  param_2[0xf] = '\0';
  param_2[0x10] = '\r';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x18] = '\x0f';
  param_2[0x19] = '\0';
  param_2[0x1a] = '\0';
  param_2[0x1b] = '\0';
  param_2[0x1c] = '\0';
  param_2[0x1d] = '\0';
  param_2[0x1e] = '\0';
  param_2[0x1f] = '\0';
  *(undefined8 *)param_2 = uVar1;
  *(undefined4 *)(param_2 + 8) = uVar2;
  param_2[0xc] = s_unknown_error_140474410[0xc];
  param_2[0xd] = '\0';
  FUN_14028f700();
  return param_2;
}

