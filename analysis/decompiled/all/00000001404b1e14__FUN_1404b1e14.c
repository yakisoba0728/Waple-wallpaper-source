// Function: FUN_1404b1e14
// Addr: 1404b1e14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1e14(undefined1 *param_1)

{
  byte *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX | (byte)param_1;
  *param_1 = *param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

