// Function: FUN_1404c2018
// Addr: 1404c2018
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c201f) overlaps instruction at (ram,0x0001404c201d)
    */

void FUN_1404c2018(longlong param_1,undefined8 param_2)

{
  longlong in_RAX;
  
  *(char *)(in_RAX + 0x12) = *(char *)(in_RAX + 0x12) + (char)((ulonglong)param_2 >> 8);
  if (param_1 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

