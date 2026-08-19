// Function: FUN_1404a46d4
// Addr: 1404a46d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a46d4(undefined8 param_1)

{
  uint *in_RAX;
  char *pcVar1;
  uint unaff_EDI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pcVar1 = (char *)(ulonglong)unaff_EDI;
  (&stack0x00210042)[(longlong)pcVar1 * 2] =
       (&stack0x00210042)[(longlong)pcVar1 * 2] + (char)((ulonglong)param_1 >> 8);
  *pcVar1 = *pcVar1 + (char)unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

