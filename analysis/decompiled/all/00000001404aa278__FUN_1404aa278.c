// Function: FUN_1404aa278
// Addr: 1404aa278
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404aa310) overlaps instruction at (ram,0x0001404aa30e)
    */
/* WARNING: Removing unreachable block (ram,0x0001404aa2f2) */
/* WARNING: Removing unreachable block (ram,0x0001404aa30c) */
/* WARNING: Removing unreachable block (ram,0x0001404aa2ef) */
/* WARNING: Removing unreachable block (ram,0x0001404aa2f3) */
/* WARNING: Removing unreachable block (ram,0x0001404aa300) */
/* WARNING: Removing unreachable block (ram,0x0001404aa31c) */
/* WARNING: Removing unreachable block (ram,0x0001404aa30f) */
/* WARNING: Removing unreachable block (ram,0x0001404aa320) */
/* WARNING: Removing unreachable block (ram,0x0001404aa2ff) */
/* WARNING: Removing unreachable block (ram,0x0001404aa310) */
/* WARNING: Removing unreachable block (ram,0x0001404aa303) */
/* WARNING: Removing unreachable block (ram,0x0001404aa30e) */
/* WARNING: Removing unreachable block (ram,0x0001404aa313) */
/* WARNING: Removing unreachable block (ram,0x0001404aa31f) */

void FUN_1404aa278(void)

{
  uint *in_RAX;
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
    *in_RAX = *in_RAX | (uint)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

