// Function: FUN_1404ca0f0
// Addr: 1404ca0f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca0f0(char *param_1,longlong param_2,char param_3)

{
  byte *pbVar1;
  char *in_RAX;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  
  pbVar1 = (byte *)(param_2 + 0x4c9ffc00 + unaff_RSI);
  *pbVar1 = ~*pbVar1;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX + (char)in_RAX;
  in_RAX[-0x9ffcd6c] = in_RAX[-0x9ffcd6c] + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + param_3;
  *(undefined8 *)(((ulonglong)in_RAX & 0xffffffff) - 8) = unaff_RBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

