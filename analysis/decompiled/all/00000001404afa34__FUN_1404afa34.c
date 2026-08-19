// Function: FUN_1404afa34
// Addr: 1404afa34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404afa34(char *param_1,undefined8 param_2)

{
  int in_EAX;
  uint uVar1;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  uVar1 = in_EAX + 0x24000664;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)((ulonglong)param_2 >> 8);
  param_1[unaff_RDI * 8 + 0x4a] = param_1[unaff_RDI * 8 + 0x4a] + (char)param_1;
  *param_1 = *param_1 + (char)(uVar1 >> 8);
  *(char *)(unaff_RBP + -0x4d) = *(char *)(unaff_RBP + -0x4d) + (char)in_EAX + 'f';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

