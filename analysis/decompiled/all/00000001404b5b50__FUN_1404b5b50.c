// Function: FUN_1404b5b50
// Addr: 1404b5b50
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5b50(void)

{
  uint in_EAX;
  
  *(undefined1 *)(ulonglong)(in_EAX & 0x26d40000) = *(undefined1 *)(ulonglong)(in_EAX & 0x26d40000);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

