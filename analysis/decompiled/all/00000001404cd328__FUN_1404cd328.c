// Function: FUN_1404cd328
// Addr: 1404cd328
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404cd331) */

void FUN_1404cd328(undefined8 param_1,longlong param_2)

{
  uint in_EAX;
  
  *(uint *)(param_2 + 5) = *(uint *)(param_2 + 5) | in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

