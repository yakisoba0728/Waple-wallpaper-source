// Function: FUN_1404c8b0c
// Addr: 1404c8b0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8b0c(void)

{
  int in_EAX;
  uint uVar1;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  uVar1 = in_EAX + 0x10000cc4;
  *unaff_RDI = *unaff_RSI;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 ^ uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

