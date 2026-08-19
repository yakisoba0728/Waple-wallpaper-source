// Function: FUN_1404cd6e8
// Addr: 1404cd6e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd6e8(undefined8 param_1,uint param_2)

{
  uint *in_RAX;
  
  *in_RAX = *in_RAX & param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

