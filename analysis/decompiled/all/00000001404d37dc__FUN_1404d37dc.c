// Function: FUN_1404d37dc
// Addr: 1404d37dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d37dc(char param_1)

{
  int *in_RAX;
  
  *(char *)((longlong)in_RAX + 0x68000001) = *(char *)((longlong)in_RAX + 0x68000001) + param_1;
  if (!SCARRY4((int)in_RAX,*in_RAX)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

