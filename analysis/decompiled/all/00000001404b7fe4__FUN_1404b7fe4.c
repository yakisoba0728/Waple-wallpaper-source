// Function: FUN_1404b7fe4
// Addr: 1404b7fe4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7fe4(void)

{
  char *pcVar1;
  uint in_EAX;
  
  pcVar1 = (char *)((ulonglong)(in_EAX | 0x7f40434) - 0x59ffe232);
  *pcVar1 = *pcVar1 + (char)(in_EAX | 0x7f40434);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

