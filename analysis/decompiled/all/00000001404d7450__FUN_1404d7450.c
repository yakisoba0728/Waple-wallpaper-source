// Function: FUN_1404d7450
// Addr: 1404d7450
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7450(undefined4 param_1)

{
  byte *in_RAX;
  
  sysenter();
  *in_RAX = *in_RAX | (byte)in_RAX;
  rdmsr(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

