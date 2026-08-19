// Function: FUN_1404a4654
// Addr: 1404a4654
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4654(char *param_1)

{
  undefined3 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar5;
  char *unaff_RSI;
  char *pcVar4;
  
  uVar3 = in(0x49);
  *param_1 = *param_1 + (char)(uVar3 >> 8);
  *unaff_RSI = *unaff_RSI + (char)uVar3;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  uVar1 = (undefined3)(uVar3 >> 8);
  cVar2 = in(8);
  pcVar4 = (char *)(ulonglong)CONCAT31(uVar1,cVar2);
  *pcVar4 = *pcVar4 + cVar2;
  if (*pcVar4 != '\0') {
    *pcVar4 = *pcVar4 + cVar2;
    uVar5 = (ulonglong)CONCAT31(uVar1,cVar2) ^ 0xd;
    pcVar4 = (char *)(uVar5 - 0x76);
    *pcVar4 = *pcVar4 + (char)uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

