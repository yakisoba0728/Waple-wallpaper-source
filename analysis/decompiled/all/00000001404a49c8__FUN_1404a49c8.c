// Function: FUN_1404a49c8
// Addr: 1404a49c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a49c8(longlong param_1)

{
  uint uVar1;
  char *in_RAX;
  char *pcVar2;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  longlong unaff_RDI;
  
  pcVar2 = (char *)(param_1 + -1);
  if (pcVar2 == (char *)0x0 || in_RAX[unaff_RDI + 0x7bd1b00] == '\0') {
    *pcVar2 = *pcVar2 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX + (char)in_RAX;
  uVar1 = (uint)in_RAX & 0x3d0007bd;
  *pcVar2 = *pcVar2 + unaff_SPL;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

