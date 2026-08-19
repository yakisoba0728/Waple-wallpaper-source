// Function: FUN_1404b64ec
// Addr: 1404b64ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b64ec(char *param_1)

{
  uint uVar1;
  char unaff_SPL;
  int unaff_EDI;
  
  *param_1 = *param_1 + unaff_SPL;
  uVar1 = unaff_EDI + 0x74050002;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 | (byte)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

