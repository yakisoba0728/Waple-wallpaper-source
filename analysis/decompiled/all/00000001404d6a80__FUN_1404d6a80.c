// Function: FUN_1404d6a80
// Addr: 1404d6a80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6a80(void)

{
  longlong in_RAX;
  char *in_R9;
  char in_R11B;
  
  *(char *)(in_RAX + 0x69) = *(char *)(in_RAX + 0x69) + (char)((ulonglong)in_RAX >> 8);
  *in_R9 = *in_R9 + in_R11B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

