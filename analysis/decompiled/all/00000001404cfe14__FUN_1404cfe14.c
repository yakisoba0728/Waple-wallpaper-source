// Function: FUN_1404cfe14
// Addr: 1404cfe14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cfe14(undefined8 param_1)

{
  char *pcVar1;
  longlong in_RAX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  pcVar1 = (char *)(unaff_RBP + 0x4c + unaff_RDI * 8);
  *pcVar1 = *pcVar1 + (char)param_1;
  *(char *)(in_RAX + 0x31) = *(char *)(in_RAX + 0x31) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

