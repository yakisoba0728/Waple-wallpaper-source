// Function: FUN_1404c815c
// Addr: 1404c815c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c815c(void)

{
  byte *pbVar1;
  longlong in_RAX;
  
  pbVar1 = (byte *)(in_RAX * 2 + 0x19);
  *pbVar1 = *pbVar1 | 0x25;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

