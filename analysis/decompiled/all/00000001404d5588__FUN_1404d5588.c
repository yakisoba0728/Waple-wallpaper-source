// Function: FUN_1404d5588
// Addr: 1404d5588
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5588(char *param_1,undefined8 param_2)

{
  byte in_AL;
  uint *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint unaff_EDI;
  char acStack_8 [8];
  
  *unaff_RBX = *unaff_RBX & unaff_EDI;
  *param_1 = *param_1 + (char)((ulonglong)param_2 >> 8);
  acStack_8[0] = '\x05';
  acStack_8[1] = '\0';
  acStack_8[2] = '\x10';
  acStack_8[3] = 't';
  acStack_8[4] = '\0';
  acStack_8[5] = '\0';
  acStack_8[6] = '\0';
  acStack_8[7] = '\0';
  acStack_8[unaff_RSI] = acStack_8[unaff_RSI] + (in_AL | 100);
  *(char *)(unaff_RBP + 0x75) = *(char *)(unaff_RBP + 0x75) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

