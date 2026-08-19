// Function: FUN_1404bd5f0
// Addr: 1404bd5f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd5f0(char param_1)

{
  int in_EAX;
  char *unaff_RBX;
  longlong unaff_RDI;
  
  *(int *)(unaff_RDI + 10) = *(int *)(unaff_RDI + 10) + in_EAX;
  *(char *)(unaff_RDI + 0x78) = *(char *)(unaff_RDI + 0x78) + (char)in_EAX;
  *unaff_RBX = *unaff_RBX + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

