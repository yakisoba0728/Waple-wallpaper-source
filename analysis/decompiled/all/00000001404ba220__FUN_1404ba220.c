// Function: FUN_1404ba220
// Addr: 1404ba220
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba220(uint param_1)

{
  byte bVar1;
  byte *in_RAX;
  uint unaff_EBP;
  longlong unaff_RDI;
  byte in_CF;
  
  bVar1 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar1 +
            (unaff_EBP < *(uint *)(in_RAX + -0x67edfff1) ||
            unaff_EBP - *(uint *)(in_RAX + -0x67edfff1) < (uint)in_CF);
  *(uint *)(in_RAX + 0x7b500011) = *(uint *)(in_RAX + 0x7b500011) | param_1;
  *in_RAX = *in_RAX & bVar1;
  if (-1 < (char)*in_RAX) {
    *in_RAX = *in_RAX + (char)(param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RDI + 0x7c) = *(char *)(unaff_RDI + 0x7c) + bVar1;
  *in_RAX = *in_RAX & bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

