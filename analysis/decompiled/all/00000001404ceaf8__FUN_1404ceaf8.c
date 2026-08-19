// Function: FUN_1404ceaf8
// Addr: 1404ceaf8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ceaf8(char *param_1,char *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  char *in_RAX;
  char cVar6;
  char *unaff_RSI;
  char *unaff_RDI;
  char *pcStack_30;
  char *pcStack_28;
  char *pcStack_20;
  char *pcStack_18;
  char *pcStack_10;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  in_RAX[(longlong)param_1] = in_RAX[(longlong)param_1] + cVar6;
  unaff_RDI[(longlong)in_RAX] = unaff_RDI[(longlong)in_RAX] + (char)param_2;
  unaff_RSI[(longlong)in_RAX] = unaff_RSI[(longlong)in_RAX] + cVar6;
  cVar5 = (char)((ulonglong)in_RAX >> 8);
  in_RAX[-0x41ffc5ba] = in_RAX[-0x41ffc5ba] + cVar5;
  *param_1 = *param_1;
  *in_RAX = *in_RAX + (char)param_1;
  if (*in_RAX != '\0') {
    *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RDI + (char)((ulonglong)unaff_RDI >> 8);
  pcStack_10 = param_1;
  *param_1 = *param_1 + (char)&pcStack_10;
  cVar3 = (char)in_RAX;
  *unaff_RSI = *unaff_RSI + cVar3;
  *in_RAX = *in_RAX + cVar3;
  if (*in_RAX != '\0') {
    *in_RAX = *in_RAX + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX + cVar5;
  pcStack_18 = param_1;
  pcStack_20 = param_1;
  *param_1 = *param_1 + (char)unaff_RDI;
  pcStack_28 = param_2;
  pcStack_30 = param_2;
  bVar4 = in(9);
  pbVar2 = (byte *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar4);
  pcVar1 = (char *)((longlong)&pcStack_30 + (longlong)param_2 * 2);
  *pcVar1 = *pcVar1 + cVar6;
  *pbVar2 = *pbVar2 | bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

