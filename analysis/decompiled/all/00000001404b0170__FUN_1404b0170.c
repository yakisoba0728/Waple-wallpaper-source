// Function: FUN_1404b0170
// Addr: 1404b0170
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0170(void)

{
  char *pcVar1;
  int in_EAX;
  
  pcVar1 = (char *)((ulonglong)(in_EAX + 0xc0000834U) * 2 + 0x21004b);
  *pcVar1 = *pcVar1 + (char)(in_EAX + 0xc0000834U);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

