// Function: FUN_1404aaaf8
// Addr: 1404aaaf8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aaaf8(longlong param_1,undefined8 param_2)

{
  char *in_RAX;
  
  *(undefined1 *)(param_1 + 0x21004a) = *(undefined1 *)(param_1 + 0x21004a);
  *in_RAX = *in_RAX + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

