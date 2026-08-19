// Function: FUN_1404d0044
// Addr: 1404d0044
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404d004d) */

void FUN_1404d0044(undefined8 param_1,longlong param_2)

{
  uint in_EAX;
  
  *(uint *)(param_2 + 5) = *(uint *)(param_2 + 5) | in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

