// Function: FUN_1404b34d0
// Addr: 1404b34d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b34d0(longlong param_1)

{
  char *pcVar1;
  longlong in_RAX;
  char *pcVar2;
  char unaff_BL;
  longlong unaff_RBP;
  char in_ZF;
  longlong unaff_retaddr;
  
  pcVar2 = (char *)(param_1 + -1);
  if (pcVar2 == (char *)0x0 || in_ZF != '\0') {
    pcVar1 = (char *)(unaff_RBP + 0x21004a + in_RAX * 8);
    *pcVar1 = *pcVar1 + (char)pcVar2;
    *(char *)(unaff_retaddr + -0x20) = *(char *)(unaff_retaddr + -0x20) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar2 = *pcVar2 + '\b';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

