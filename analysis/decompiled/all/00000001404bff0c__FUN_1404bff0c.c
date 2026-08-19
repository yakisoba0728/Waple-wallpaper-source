// Function: FUN_1404bff0c
// Addr: 1404bff0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bff0c(undefined1 *param_1,undefined1 param_2)

{
  short in_AX;
  char *pcVar1;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char in_CF;
  
  pcVar1 = (char *)(ulonglong)(uint)(int)in_AX;
  *pcVar1 = *pcVar1 + (char)in_AX + in_CF;
  *param_1 = param_2;
  pcVar1[unaff_RDI * 2 + 0x12] = pcVar1[unaff_RDI * 2 + 0x12] + (char)param_1;
  *(char *)(unaff_RBP + 0x68) = *(char *)(unaff_RBP + 0x68) + (char)in_AX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

