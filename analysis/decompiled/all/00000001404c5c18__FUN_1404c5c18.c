// Function: FUN_1404c5c18
// Addr: 1404c5c18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5c18(longlong param_1)

{
  char *pcVar1;
  uint *in_RAX;
  char *pcVar2;
  char unaff_BH;
  longlong unaff_RDI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pcVar1 = (char *)(unaff_RDI + -0x37ffd106);
  *pcVar1 = *pcVar1 + unaff_BH;
  pcVar2 = (char *)(param_1 + -1);
  if (pcVar2 == (char *)0x0 || *pcVar1 == '\0') {
    *pcVar2 = *pcVar2 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

