// Function: FUN_1404cd590
// Addr: 1404cd590
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd590(undefined8 param_1,uint param_2)

{
  uint *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI & param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

