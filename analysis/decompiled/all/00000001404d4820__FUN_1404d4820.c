// Function: FUN_1404d4820
// Addr: 1404d4820
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4820(char param_1)

{
  uint in_EAX;
  uint uVar1;
  char unaff_BH;
  char *unaff_RDI;
  
  uVar1 = in_EAX | 0x21700bc0;
  uVar1 = CONCAT22((short)(uVar1 >> 0x10),
                   CONCAT11((char)(uVar1 >> 8),(byte)uVar1 | *(byte *)((ulonglong)uVar1 * 2)));
  *unaff_RDI = (*unaff_RDI - unaff_BH) - (0x1ffff5cb < (uVar1 | *(uint *)(ulonglong)uVar1));
  cRam00000001804d8752 = cRam00000001804d8752 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

