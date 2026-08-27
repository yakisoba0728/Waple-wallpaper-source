// Function: FUN_140013a70
// Addr: 140013a70
// Size: 164 bytes


undefined8 * FUN_140013a70(undefined8 param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  size_t sVar5;
  
  if (param_3 == 1) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    pcVar4 = (char *)FUN_14028af20(0x20);
    uVar3 = s_iostream_stream_error_140474068._0_8_;
    uVar1 = CONCAT35(s_iostream_stream_error_140474068._13_3_,
                     s_iostream_stream_error_140474068._8_5_);
    *param_2 = pcVar4;
    uVar2 = CONCAT53(s_iostream_stream_error_140474068._16_5_,
                     s_iostream_stream_error_140474068._13_3_);
    param_2[2] = 0x15;
    param_2[3] = 0x1f;
    *(undefined8 *)pcVar4 = uVar3;
    *(undefined8 *)(pcVar4 + 8) = uVar1;
    *(undefined8 *)(pcVar4 + 0xd) = uVar2;
    pcVar4[0x15] = '\0';
    return param_2;
  }
  pcVar4 = (char *)FUN_14028f4f0(param_3);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  sVar5 = strlen(pcVar4);
  FUN_140017480(param_2,pcVar4,sVar5);
  return param_2;
}

