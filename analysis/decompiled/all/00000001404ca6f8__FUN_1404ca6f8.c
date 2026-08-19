// Function: FUN_1404ca6f8
// Addr: 1404ca6f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca6f8(char *param_1,char *param_2,char param_3)

{
  char *pcVar1;
  char *in_RAX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  char unaff_R12B;
  
  *unaff_RDI = *unaff_RSI;
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 + (char)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  pcVar1 = (char *)(((ulonglong)in_RAX ^ 0x1b) - 0xd);
  *pcVar1 = *pcVar1 + (char)((ulonglong)in_RAX ^ 0x1b);
  unaff_RDI[1] = unaff_RSI[1];
  *param_1 = *param_1 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

