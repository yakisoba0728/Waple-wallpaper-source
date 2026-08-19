// Function: FUN_1404bb5ec
// Addr: 1404bb5ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb5ec(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  uint in_EAX;
  longlong unaff_RBX;
  int unaff_EBP;
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + unaff_EBP;
  *param_2 = *param_2 + (char)((ulonglong)param_1 >> 8);
  pcVar1 = (char *)((ulonglong)(in_EAX | 0xb82f00) + unaff_RBX * 4);
  *pcVar1 = *pcVar1 + (char)((in_EAX | 0xb82f00) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

