// Function: FUN_1404bf730
// Addr: 1404bf730
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf730(undefined8 param_1,int param_2)

{
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

