// Function: FUN_1404b4068
// Addr: 1404b4068
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4068(void)

{
  char *pcVar1;
  char cVar2;
  int in_EAX;
  uint uVar3;
  char unaff_SPL;
  longlong unaff_RBP;
  char *in_R9;
  int *piVar4;
  
  *(char *)(unaff_RBP + 0x3f780018) = *(char *)(unaff_RBP + 0x3f780018) << 1;
  *in_R9 = *in_R9 + unaff_SPL;
  uVar3 = in_EAX + 0x64050002;
  piVar4 = (int *)(ulonglong)uVar3;
  *piVar4 = *piVar4 + uVar3;
  pcVar1 = (char *)(unaff_RBP + -0x4a16ffe8);
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 << 1;
  *(char *)piVar4 = ((char)*piVar4 - (char)uVar3) - (cVar2 < '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

