// Function: FUN_1404a053c
// Addr: 1404a053c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a053c(char *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  char cVar4;
  char *in_RAX;
  char unaff_BH;
  char unaff_SPL;
  char *unaff_RSI;
  char in_CF;
  char *pcVar3;
  
  *(char *)(param_2 + 0x521700c) =
       *(char *)(param_2 + 0x521700c) + (char)((ulonglong)param_2 >> 8) + in_CF;
  uVar2 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + *in_RAX) + 0xe54;
  pcVar3 = (char *)(ulonglong)uVar2;
  *unaff_RSI = *unaff_RSI + unaff_BH;
  cVar4 = (char)(uVar2 >> 8);
  pcVar3[4] = pcVar3[4] + cVar4;
  *param_1 = *param_1 + unaff_SPL;
  cVar1 = (char)uVar2;
  *pcVar3 = *pcVar3 + cVar1;
  *pcVar3 = *pcVar3 + cVar1;
  *unaff_RSI = *unaff_RSI + unaff_BH;
  pcVar3[4] = pcVar3[4] + cVar4;
  *param_1 = *param_1 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

