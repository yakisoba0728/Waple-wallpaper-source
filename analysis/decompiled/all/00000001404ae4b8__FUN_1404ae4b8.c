// Function: FUN_1404ae4b8
// Addr: 1404ae4b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae4b8(uint *param_1)

{
  uint unaff_ESP;
  
  *param_1 = *param_1 & unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

