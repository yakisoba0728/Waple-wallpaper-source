// Function: FUN_1404b0f3c
// Addr: 1404b0f3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0f3c(char *param_1)

{
  int in_EAX;
  uint uVar1;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  byte in_CF;
  
  *unaff_RDI = *unaff_RSI;
  uVar1 = in_EAX + 0x15a4cd00 + (uint)in_CF;
  (&stack0x0000004a)[(ulonglong)uVar1 * 2] =
       (&stack0x0000004a)[(ulonglong)uVar1 * 2] + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + (char)(uVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

