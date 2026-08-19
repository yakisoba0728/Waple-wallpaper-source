// Function: FUN_1404cfbd8
// Addr: 1404cfbd8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cfbd8(int *param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  undefined1 in_AL;
  char extraout_AL;
  byte extraout_AL_00;
  undefined1 in_AH;
  char extraout_AH;
  byte extraout_AH_00;
  undefined6 in_register_00000002;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  uint uVar3;
  char cVar4;
  byte bVar5;
  char unaff_BL;
  longlong unaff_RSI;
  char in_R11B;
  
  bVar5 = (byte)((ulonglong)param_2 >> 8);
  cVar4 = (char)param_2;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x29);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_1 >> 8);
  *(int *)(unaff_RSI + -0x7affc37c) = *(int *)(unaff_RSI + -0x7affc37c) + (int)&stack0x00000000;
  func_0x0001614d48e3();
  *(char *)CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) =
       *(char *)CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) + extraout_AL;
  *(char *)(unaff_RSI + -0x7affc37c) = *(char *)(unaff_RSI + -0x7affc37c) + extraout_AH;
  func_0x0001614d48f3();
  *(byte *)CONCAT62(extraout_var_00,CONCAT11(extraout_AH_00,extraout_AL_00)) =
       *(char *)CONCAT62(extraout_var_00,CONCAT11(extraout_AH_00,extraout_AL_00)) + extraout_AL_00;
  pcVar2 = (char *)(CONCAT62(extraout_var_00,CONCAT11(extraout_AH_00,extraout_AL_00)) + -0x7c);
  *pcVar2 = *pcVar2 + cVar4;
  *(char *)param_1 = (char)*param_1 + in_R11B;
  uVar3 = (int)param_1 - *param_1;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + unaff_BL;
  *(int *)(unaff_RSI + 3) = *(int *)(unaff_RSI + 3) + uVar3;
  pbVar1 = (byte *)((CONCAT62(extraout_var_00,
                              CONCAT11(extraout_AH_00 | extraout_AL_00 ^ 0x55 | 0xf0,extraout_AL_00)
                             ) ^ 0x55 | 0xf0) + 7);
  *pbVar1 = *pbVar1 | bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

