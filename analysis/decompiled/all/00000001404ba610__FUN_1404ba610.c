// Function: FUN_1404ba610
// Addr: 1404ba610
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba610(void)

{
  int in_EAX;
  uint uVar1;
  byte *unaff_RDI;
  byte in_CF;
  
  uVar1 = in_EAX + 0x11e013f0 + (uint)in_CF;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  uRam000000019450a628 = uRam000000019450a628 & uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

