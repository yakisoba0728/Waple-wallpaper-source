// Function: FUN_1404ceb1c
// Addr: 1404ceb1c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ceb1c(char *param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  int in_EAX;
  char *unaff_RSI;
  char *unaff_RDI;
  longlong lStack_30;
  longlong lStack_28;
  char *pcStack_20;
  char *pcStack_18;
  char *pcStack_10;
  char *pcStack_8;
  byte *pbVar4;
  
  pcStack_8 = param_1;
  pcStack_10 = param_1;
  *param_1 = *param_1 + (char)&pcStack_10;
  cVar2 = (char)unaff_RDI;
  *unaff_RSI = *unaff_RSI + cVar2;
  *unaff_RDI = *unaff_RDI + cVar2;
  if (*unaff_RDI != '\0') {
    *unaff_RDI = *unaff_RDI + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RDI + (char)((ulonglong)unaff_RDI >> 8);
  pcStack_18 = param_1;
  pcStack_20 = param_1;
  *param_1 = *param_1 + (char)(in_EAX + 0x20000634);
  lStack_28 = param_2;
  lStack_30 = param_2;
  bVar3 = in(9);
  pbVar4 = (byte *)(ulonglong)CONCAT31((int3)((uint)(in_EAX + 0x20000634) >> 8),bVar3);
  pcVar1 = (char *)((longlong)&lStack_30 + param_2 * 2);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *pbVar4 = *pbVar4 | bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

