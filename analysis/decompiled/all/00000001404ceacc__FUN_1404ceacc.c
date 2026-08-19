// Function: FUN_1404ceacc
// Addr: 1404ceacc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ceacc(char *param_1,char *param_2,undefined8 param_3,undefined1 *param_4)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  char *in_RAX;
  char cVar7;
  char *unaff_RSI;
  char *unaff_RDI;
  char *pcStack_30;
  char *pcStack_28;
  char *pcStack_20;
  char *pcStack_18;
  char *pcStack_10;
  
  cVar7 = (char)param_1;
  *param_4 = *param_4;
  *unaff_RDI = *unaff_RDI + cVar7;
  if (*unaff_RDI != '\0') {
    *param_2 = *param_2 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar5 = (char)((ulonglong)in_RAX >> 8);
  in_RAX[-0x41ffc5ba] = in_RAX[-0x41ffc5ba] + cVar5;
  *param_1 = *param_1;
  cVar3 = (char)unaff_RDI;
  *unaff_RSI = *unaff_RSI + cVar3;
  *unaff_RDI = *unaff_RDI + cVar3;
  if (*unaff_RDI != '\0') {
    *unaff_RDI = *unaff_RDI + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar6 = (char)((ulonglong)unaff_RDI >> 8);
  unaff_RDI[-0x41ffc5ba] = unaff_RDI[-0x41ffc5ba] + cVar6;
  *param_1 = *param_1;
  *unaff_RDI = *unaff_RDI + cVar7;
  if (*unaff_RDI != '\0') {
    *param_2 = *param_2 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX + cVar5;
  pcStack_10 = param_1;
  *param_1 = *param_1 + (char)&pcStack_10;
  *unaff_RSI = *unaff_RSI + cVar3;
  *unaff_RDI = *unaff_RDI + cVar3;
  if (*unaff_RDI != '\0') {
    *unaff_RDI = *unaff_RDI + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RDI + cVar6;
  pcStack_18 = param_1;
  pcStack_20 = param_1;
  *param_1 = *param_1 + (char)in_RAX;
  pcStack_28 = param_2;
  pcStack_30 = param_2;
  bVar4 = in(9);
  pbVar2 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar4);
  pcVar1 = (char *)((longlong)&pcStack_30 + (longlong)param_2 * 2);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *pbVar2 = *pbVar2 | bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

