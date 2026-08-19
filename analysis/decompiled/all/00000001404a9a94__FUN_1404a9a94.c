// Function: FUN_1404a9a94
// Addr: 1404a9a94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9a94(undefined8 param_1,byte param_2)

{
  uint *in_RAX;
  uint unaff_ESI;
  
  *in_RAX = *in_RAX | unaff_ESI;
  *(byte *)((longlong)in_RAX + 0x21) = *(byte *)((longlong)in_RAX + 0x21) | param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

