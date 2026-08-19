// Function: FUN_1404c1970
// Addr: 1404c1970
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c1970(int param_1)

{
  int *unaff_RDI;
  bool bVar1;
  
  bVar1 = 0xd7 < bRam0000000000700028;
  bRam0000000000700028 = bRam0000000000700028 + 0x28;
  *unaff_RDI = (*unaff_RDI - param_1) - (uint)bVar1;
  sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

