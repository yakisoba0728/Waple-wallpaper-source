// Function: FUN_1404b16dc
// Addr: 1404b16dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b16dc(byte param_1)

{
  byte *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

