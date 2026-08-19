// Function: FUN_1404ce620
// Addr: 1404ce620
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ce686) overlaps instruction at (ram,0x0001404ce684)
    */
/* WARNING: Removing unreachable block (ram,0x0001404ce629) */
/* WARNING: Removing unreachable block (ram,0x0001404ce686) */
/* WARNING: Removing unreachable block (ram,0x0001404ce677) */
/* WARNING: Removing unreachable block (ram,0x0001404ce697) */

void FUN_1404ce620(undefined8 param_1,longlong param_2)

{
  uint unaff_ESP;
  
  *(uint *)(param_2 + 5) = *(uint *)(param_2 + 5) | unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

