// Function: FUN_1404a30f8
// Addr: 1404a30f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a30f8(undefined8 param_1,int param_2)

{
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

