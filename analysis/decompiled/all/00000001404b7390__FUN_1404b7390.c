// Function: FUN_1404b7390
// Addr: 1404b7390
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7390(char *param_1,ulonglong param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  uint in_EAX;
  char *pcVar2;
  char *pcVar3;
  char *pcVar5;
  char cVar6;
  undefined4 unaff_EBX;
  longlong unaff_RSI;
  char cVar4;
  
  pcVar2 = (char *)(param_2 & 0xffffffff);
  pcVar5 = (char *)(ulonglong)in_EAX;
  pcVar3 = (char *)((longlong)pcVar2 * 3 + 0x1d);
  cVar6 = (char)((uint)unaff_EBX >> 8);
  *pcVar3 = *pcVar3 + cVar6;
  pcVar2[0x21004b72] = pcVar2[0x21004b72] + (char)in_EAX;
  cVar1 = (char)pcVar2;
  *pcVar2 = *pcVar2 + cVar1;
  cVar4 = (char)((ulonglong)pcVar2 >> 8) + cVar6;
  pcVar3 = (char *)CONCAT62((int6)((ulonglong)pcVar2 >> 0x10),CONCAT11(cVar4,cVar1));
  pcVar5[unaff_RSI * 2 + 0x4b] = pcVar5[unaff_RSI * 2 + 0x4b] + cVar6;
  *param_1 = *param_1 + cVar4;
  *pcVar5 = *pcVar5 + cVar1;
  *pcVar3 = *pcVar3 + cVar1;
  cVar1 = in(0x1c);
  pcVar3 = (char *)(CONCAT71((int7)((ulonglong)pcVar3 >> 8),cVar1 + cVar4) + 0x72);
  *pcVar3 = *pcVar3 + (char)((ulonglong)param_1 >> 8);
  *param_4 = *param_4 + cVar1 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

