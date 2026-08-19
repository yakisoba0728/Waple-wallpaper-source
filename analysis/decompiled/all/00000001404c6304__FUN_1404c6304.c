// Function: FUN_1404c6304
// Addr: 1404c6304
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6304(void)

{
  int in_EAX;
  char *pcVar1;
  longlong unaff_RDI;
  
  pcVar1 = (char *)((ulonglong)(in_EAX + 0x854U) ^ 0xd);
  *pcVar1 = *pcVar1 + (char)(in_EAX + 0x854U >> 8);
  *(char *)(unaff_RDI + 0x22) = *(char *)(unaff_RDI + 0x22) + (char)pcVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

