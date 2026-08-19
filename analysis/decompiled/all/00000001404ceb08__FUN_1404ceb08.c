// Function: FUN_1404ceb08
// Addr: 1404ceb08
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ceb08(char *param_1,char *param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  uint in_EAX;
  char *pcVar4;
  ulonglong unaff_RDI;
  char *pcVar5;
  char *pcStack_30;
  char *pcStack_28;
  char *pcStack_20;
  char *pcStack_18;
  char *pcStack_10;
  
  pcVar4 = (char *)(unaff_RDI & 0xffffffff);
  pcVar5 = (char *)(ulonglong)in_EAX;
  *param_1 = *param_1;
  *pcVar5 = *pcVar5 + (char)param_1;
  if (*pcVar5 != '\0') {
    *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar4 = *pcVar4 + (char)((ulonglong)pcVar4 >> 8);
  pcStack_10 = param_1;
  *param_1 = *param_1 + (char)&pcStack_10;
  cVar2 = (char)in_EAX;
  cRam000000004c003a46 = cRam000000004c003a46 + cVar2;
  *pcVar5 = *pcVar5 + cVar2;
  if (*pcVar5 != '\0') {
    *pcVar5 = *pcVar5 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar5 = *pcVar5 + (char)(in_EAX >> 8);
  pcStack_18 = param_1;
  pcStack_20 = param_1;
  *param_1 = *param_1 + (char)pcVar4;
  pcStack_28 = param_2;
  pcStack_30 = param_2;
  bVar3 = in(9);
  pbVar1 = (byte *)CONCAT71((int7)((ulonglong)pcVar4 >> 8),bVar3);
  pcVar4 = (char *)((longlong)&pcStack_30 + (longlong)param_2 * 2);
  *pcVar4 = *pcVar4 + (char)((ulonglong)param_2 >> 8);
  *pbVar1 = *pbVar1 | bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

