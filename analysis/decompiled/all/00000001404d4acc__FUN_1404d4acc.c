// Function: FUN_1404d4acc
// Addr: 1404d4acc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4acc(uint param_1)

{
  uint *in_RAX;
  
  uRam00000001245a4ad6 = uRam00000001245a4ad6 & param_1;
  *in_RAX = *in_RAX | (uint)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

