// Function: FUN_1400eb130
// Addr: 1400eb130
// Size: 122 bytes


char * FUN_1400eb130(char *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined2 uVar2;
  size_t sVar3;
  
  uVar2 = s_materials__140487008._8_2_;
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\n';
  uVar1 = s_materials__140487008._0_8_;
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\x0f';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  *(undefined8 *)param_1 = uVar1;
  *(undefined2 *)(param_1 + 8) = uVar2;
  param_1[10] = '\0';
  sVar3 = strlen(param_2);
  FUN_1400532a0(param_1,param_2,sVar3);
  FUN_1400532a0(param_1,&DAT_140486ff8,4);
  return param_1;
}

