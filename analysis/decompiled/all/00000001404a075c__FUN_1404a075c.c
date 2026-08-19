// Function: FUN_1404a075c
// Addr: 1404a075c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a075c(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  int *in_RAX;
  char *pcVar4;
  int *unaff_RSI;
  bool bVar5;
  int *piVar3;
  
  uVar2 = (int)in_RAX + *in_RAX;
  piVar3 = (int *)(ulonglong)uVar2;
  bVar5 = (uVar2 & 0xc8000352) == 0;
  pcVar4 = (char *)(param_1 + -1);
  if (pcVar4 == (char *)0x0 || bVar5) {
    *pcVar4 = *pcVar4 + (char)(uVar2 >> 8);
    *(char *)piVar3 = (char)*piVar3 + (char)uVar2;
    *(char *)((longlong)piVar3 + -0x56fffcae) =
         *(char *)((longlong)piVar3 + -0x56fffcae) + (char)param_2;
    *unaff_RSI = *unaff_RSI + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1 = param_1 + -2;
  if (param_1 == 0 || bVar5) {
    iVar1 = *piVar3;
    *(byte *)(param_2 + 3) = ~*(byte *)(param_2 + 3);
    pcVar4 = (char *)((ulonglong)(uVar2 + iVar1) + 0x21004a06);
    *pcVar4 = *pcVar4 + (char)((ulonglong)param_1 >> 8);
    pcVar4 = (char *)((ulonglong)(uVar2 + iVar1) * 2);
    *pcVar4 = *pcVar4 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam00000001b44f0810 = uRam00000001b44f0810 & uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

