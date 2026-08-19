// Function: FUN_1404bb668
// Addr: 1404bb668
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb668(void)

{
  uint uVar1;
  char *in_RAX;
  longlong unaff_RDI;
  char *in_R9;
  
  *(undefined1 *)(unaff_RDI + 0x21) = *(undefined1 *)(unaff_RDI + 0x21);
  *in_R9 = *in_R9 + -0x10;
  *in_RAX = *in_RAX + (char)in_RAX;
  uVar1 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX * '\x02');
  *(uint *)(longlong)(int)uVar1 = *(uint *)(longlong)(int)uVar1 & uVar1;
  *in_R9 = *in_R9 + -0x20;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

