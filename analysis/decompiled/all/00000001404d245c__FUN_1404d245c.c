// Function: FUN_1404d245c
// Addr: 1404d245c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d245c(void)

{
  longlong in_RAX;
  char unaff_BL;
  uint unaff_EBP;
  
  *(uint *)(in_RAX + 0x1c) = *(uint *)(in_RAX + 0x1c) & unaff_EBP;
  cRam000000014f4d5f66 = cRam000000014f4d5f66 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

