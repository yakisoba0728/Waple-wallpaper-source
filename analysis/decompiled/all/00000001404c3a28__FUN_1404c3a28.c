// Function: FUN_1404c3a28
// Addr: 1404c3a28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3a28(char *param_1)

{
  byte bVar1;
  byte *in_RAX;
  
  bVar1 = (byte)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX | bVar1;
  *param_1 = *param_1 + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

