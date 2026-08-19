// Function: FUN_1404b3294
// Addr: 1404b3294
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3294(void)

{
  char *pcVar1;
  uint in_EAX;
  
  pcVar1 = (char *)((ulonglong)(in_EAX | 0x8e40434) - 0x41);
  *pcVar1 = *pcVar1 + (char)(in_EAX | 0x8e40434);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

