// Function: FUN_1404b2550
// Addr: 1404b2550
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2550(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *unaff_RSI;
  char *pcVar3;
  
  uVar2 = in(0x49);
  *param_1 = *param_1 + (char)(uVar2 >> 8);
  *unaff_RSI = *unaff_RSI + (char)uVar2;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  cVar1 = in(8);
  pcVar3 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),cVar1);
  *pcVar3 = *pcVar3 + cVar1;
  if (*pcVar3 != '\0') {
    *pcVar3 = *pcVar3 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

