// Function: FUN_1404be07c
// Addr: 1404be07c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be07c(longlong param_1,char param_2)

{
  char cVar1;
  char *in_RAX;
  undefined1 *puVar3;
  longlong unaff_RBP;
  char in_ZF;
  char *pcVar2;
  
  if (param_1 == 1 || in_ZF != '\0') {
    puVar3 = (undefined1 *)(ulonglong)((uint)in_RAX & 0x25a9e800);
    puVar3[unaff_RBP + 0x2221004b] = puVar3[unaff_RBP + 0x2221004b] + param_2;
    *puVar3 = *puVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX + (char)in_RAX;
  cVar1 = in(4);
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
  *pcVar2 = *pcVar2 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

