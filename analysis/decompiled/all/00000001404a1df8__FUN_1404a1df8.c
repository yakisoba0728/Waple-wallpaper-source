// Function: FUN_1404a1df8
// Addr: 1404a1df8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  longlong in_RAX;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  char *unaff_RSI;
  byte in_CF;
  
  pbVar1 = (byte *)(CONCAT44(unaff_00000024,unaff_ESP) + 0x494e900 + in_RAX);
  *pbVar1 = *pbVar1 << 1 | in_CF;
  *unaff_RSI = *unaff_RSI + (char)((ulonglong)param_2 >> 8);
  *param_4 = *param_4 + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

