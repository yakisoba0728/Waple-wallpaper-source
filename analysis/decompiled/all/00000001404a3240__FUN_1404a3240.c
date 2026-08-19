// Function: FUN_1404a3240
// Addr: 1404a3240
// Size: 1 bytes


void FUN_1404a3240(undefined8 param_1,byte param_2,char param_3)

{
  byte *pbVar1;
  char *pcVar2;
  char in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  byte unaff_BL;
  byte in_CF;
  
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x77eeffe7);
  pcVar2 = (char *)(CONCAT62(in_register_00000002,
                             CONCAT11(in_AH | param_2,
                                      (in_AL - *(char *)CONCAT62(in_register_00000002,
                                                                 CONCAT11(in_AH,in_AL))) -
                                      (unaff_BL < *pbVar1 || (byte)(unaff_BL - *pbVar1) < in_CF))) +
                   0x240005cd);
  *pcVar2 = *pcVar2 + param_3;
  return;
}

