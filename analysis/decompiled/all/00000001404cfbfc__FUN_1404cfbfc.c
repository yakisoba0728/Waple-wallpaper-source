// Function: FUN_1404cfbfc
// Addr: 1404cfbfc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cfbfc(int *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  uint uVar2;
  char unaff_BL;
  longlong unaff_RSI;
  char in_R11B;
  
  *(char *)param_1 = (char)*param_1 + in_R11B;
  uVar2 = (int)param_1 - *param_1;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + unaff_BL;
  *(int *)(unaff_RSI + 3) = *(int *)(unaff_RSI + 3) + uVar2;
  pbVar1 = (byte *)((CONCAT62(in_register_00000002,CONCAT11(in_AH | in_AL ^ 0x55 | 0xf0,in_AL)) ^
                     0x55 | 0xf0) + 7);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

