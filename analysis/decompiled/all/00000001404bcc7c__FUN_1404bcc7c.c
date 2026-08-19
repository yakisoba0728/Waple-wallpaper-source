// Function: FUN_1404bcc7c
// Addr: 1404bcc7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bcc7c(uint param_1)

{
  longlong in_RAX;
  
  *(uint *)(in_RAX + 0x78180081) = *(uint *)(in_RAX + 0x78180081) & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

