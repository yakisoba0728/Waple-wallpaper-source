// Function: FUN_1404b4054
// Addr: 1404b4054
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4054(void)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  char *in_RAX;
  int *piVar6;
  longlong unaff_RBP;
  char *in_R9;
  char in_CF;
  byte *pbVar5;
  
  *in_RAX = (*in_RAX - (char)in_RAX) - in_CF;
  uVar4 = (int)in_RAX + 0x34050002;
  pbVar5 = (byte *)(ulonglong)uVar4;
  bVar3 = (byte)uVar4;
  *pbVar5 = *pbVar5 | bVar3;
  *pbVar5 = *pbVar5 - bVar3;
  *(char *)(unaff_RBP + 0x3f780018) = *(char *)(unaff_RBP + 0x3f780018) << 1;
  *in_R9 = *in_R9 + -8;
  uVar4 = (int)in_RAX + 0x980a0004;
  piVar6 = (int *)(ulonglong)uVar4;
  *piVar6 = *piVar6 + uVar4;
  pcVar1 = (char *)(unaff_RBP + -0x4a16ffe8);
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 << 1;
  *(char *)piVar6 = ((char)*piVar6 - (char)uVar4) - (cVar2 < '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

