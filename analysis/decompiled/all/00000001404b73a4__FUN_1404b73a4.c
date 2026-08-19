// Function: FUN_1404b73a4
// Addr: 1404b73a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b73a4(char *param_1,ulonglong param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  char cVar3;
  uint in_EAX;
  char *pcVar2;
  char *pcVar4;
  char unaff_BH;
  longlong unaff_RSI;
  
  pcVar2 = (char *)(param_2 & 0xffffffff);
  pcVar4 = (char *)(ulonglong)in_EAX;
  pcVar4[unaff_RSI * 2 + 0x4b] = pcVar4[unaff_RSI * 2 + 0x4b] + unaff_BH;
  cVar3 = (char)((ulonglong)pcVar2 >> 8);
  *param_1 = *param_1 + cVar3;
  *pcVar4 = *pcVar4 + (char)pcVar2;
  *pcVar2 = *pcVar2 + (char)pcVar2;
  cVar1 = in(0x1c);
  cVar1 = cVar1 + cVar3;
  pcVar2 = (char *)(CONCAT71((int7)((ulonglong)pcVar2 >> 8),cVar1) + 0x72);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_1 >> 8);
  *param_4 = *param_4 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

