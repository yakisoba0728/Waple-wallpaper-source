// Function: FUN_1404abb98
// Addr: 1404abb98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abb98(void)

{
  short in_AX;
  
  *(char *)(ulonglong)(uint)(int)in_AX = *(char *)(ulonglong)(uint)(int)in_AX + (char)in_AX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

