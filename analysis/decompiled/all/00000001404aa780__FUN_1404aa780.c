// Function: FUN_1404aa780
// Addr: 1404aa780
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa780(void)

{
  byte *pbVar1;
  char in_AL;
  char *unaff_RBX;
  longlong unaff_RDI;
  
  pbVar1 = (byte *)(unaff_RDI + 0xe);
  *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
  *unaff_RBX = *unaff_RBX + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

