// Function: FUN_1404d1654
// Addr: 1404d1654
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1654(byte param_1)

{
  byte bVar1;
  longlong in_RAX;
  uint unaff_ESI;
  byte *unaff_RDI;
  
  *(uint *)(unaff_RDI + in_RAX) = *(uint *)(unaff_RDI + in_RAX) ^ unaff_ESI;
  bVar1 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + param_1;
  if (!CARRY1(bVar1,param_1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

