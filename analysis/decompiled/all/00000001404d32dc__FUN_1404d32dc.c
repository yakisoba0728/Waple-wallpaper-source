// Function: FUN_1404d32dc
// Addr: 1404d32dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d32dc(undefined8 param_1,uint param_2)

{
  uint *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX & param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

