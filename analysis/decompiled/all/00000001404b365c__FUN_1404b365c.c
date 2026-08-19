// Function: FUN_1404b365c
// Addr: 1404b365c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b365c(void)

{
  byte bVar1;
  uint uVar2;
  ulonglong in_RAX;
  byte *pbVar3;
  int unaff_EDI;
  char *pcVar4;
  
  pbVar3 = (byte *)(in_RAX ^ 0x21004b);
  bVar1 = *pbVar3;
  *pbVar3 = *pbVar3 + (byte)pbVar3;
  uVar2 = ((int)pbVar3 + -0x47342000) - (uint)CARRY1(bVar1,(byte)pbVar3);
  pcVar4 = (char *)(ulonglong)uVar2;
  *pcVar4 = *pcVar4 + (char)(uVar2 >> 8);
  *(int *)((longlong)pcVar4 * 2) = *(int *)((longlong)pcVar4 * 2) + unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

