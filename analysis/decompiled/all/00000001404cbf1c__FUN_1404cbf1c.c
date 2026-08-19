// Function: FUN_1404cbf1c
// Addr: 1404cbf1c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cbf1c(char *param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  undefined4 uVar1;
  undefined8 in_RAX;
  byte unaff_BH;
  longlong unaff_RSI;
  
  *(byte *)(unaff_RSI + 0x34) = *(byte *)(unaff_RSI + 0x34) ^ unaff_BH;
  param_1[-0x1fffcb82] = param_1[-0x1fffcb82] + (char)((ulonglong)in_RAX >> 8);
  uVar1 = in(param_2);
  *param_4 = *param_4 + (char)uVar1;
  *param_1 = *param_1 + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

