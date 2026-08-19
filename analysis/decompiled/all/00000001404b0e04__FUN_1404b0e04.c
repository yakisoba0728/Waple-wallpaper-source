// Function: FUN_1404b0e04
// Addr: 1404b0e04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0e04(int param_1)

{
  byte *in_RAX;
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + param_1;
  *in_RAX = *in_RAX | (byte)in_RAX;
  rdmsr(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

