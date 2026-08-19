// Function: FUN_1404a0910
// Addr: 1404a0910
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0910(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint *in_RAX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char *pcVar2;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  cVar1 = (char)in_RAX + (char)*in_RAX;
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
  *(char *)(unaff_RDI + param_1) = *(char *)(unaff_RDI + param_1) + (char)((ulonglong)param_2 >> 8);
  *pcVar2 = *pcVar2 + cVar1;
  *(char *)(unaff_RBP + -0x23fffc9d) = *(char *)(unaff_RBP + -0x23fffc9d) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

