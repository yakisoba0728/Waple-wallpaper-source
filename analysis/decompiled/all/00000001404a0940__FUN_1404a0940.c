// Function: FUN_1404a0940
// Addr: 1404a0940
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0940(byte param_1,byte *param_2)

{
  uint *unaff_RDI;
  
  *param_2 = *param_2 | param_1;
  *unaff_RDI = *unaff_RDI & (uint)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

