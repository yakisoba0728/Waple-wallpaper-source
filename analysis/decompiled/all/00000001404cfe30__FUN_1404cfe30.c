// Function: FUN_1404cfe30
// Addr: 1404cfe30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cfe3f) overlaps instruction at (ram,0x0001404cfe3e)
    */
/* WARNING: Removing unreachable block (ram,0x0001404cfe39) */
/* WARNING: Removing unreachable block (ram,0x0001404cfe3f) */
/* WARNING: Removing unreachable block (ram,0x0001404cfe42) */

void FUN_1404cfe30(undefined8 param_1,longlong param_2)

{
  uint in_EAX;
  
  *(uint *)(param_2 + 5) = *(uint *)(param_2 + 5) | in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

