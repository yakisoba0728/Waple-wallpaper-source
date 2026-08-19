// Function: FUN_1404b34d8
// Addr: 1404b34d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b34d8(undefined8 param_1,longlong param_2)

{
  uint *in_RAX;
  char unaff_BL;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)(param_2 + -0x20) = *(char *)(param_2 + -0x20) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

