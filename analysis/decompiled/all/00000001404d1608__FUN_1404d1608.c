// Function: FUN_1404d1608
// Addr: 1404d1608
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1608(longlong param_1,char param_2,char param_3)

{
  char *in_RAX;
  char *pcVar1;
  undefined4 *unaff_RDI;
  char unaff_R12B;
  longlong *unaff_R15;
  char in_ZF;
  
  pcVar1 = (char *)(param_1 + -1);
  if (pcVar1 != (char *)0x0 && in_ZF == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar1 = *pcVar1 + unaff_R12B;
  *in_RAX = *in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX + param_2;
  *unaff_RDI = *unaff_RDI;
  *unaff_R15 = *unaff_R15;
  pcVar1 = (char *)(param_1 + -2);
  if (pcVar1 == (char *)0x0 || *unaff_R15 == 0) {
    *pcVar1 = *pcVar1 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam00000001345215ac = uRam00000001345215ac & (uint)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

