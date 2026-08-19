// Function: FUN_1404d67fc
// Addr: 1404d67fc
// Size: 1 bytes


void FUN_1404d67fc(char *param_1,char param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  char cVar2;
  int in_EAX;
  uint uVar3;
  char unaff_BH;
  char unaff_SPL;
  char *unaff_RSI;
  char *unaff_RDI;
  char unaff_R12B;
  char *pcVar4;
  
  uVar3 = in_EAX + 0xbe4;
  pcVar4 = (char *)(ulonglong)uVar3;
  *unaff_RSI = *unaff_RSI + '\x01';
  unaff_RSI[(longlong)unaff_RDI * 8 + 0x36] = unaff_RSI[(longlong)unaff_RDI * 8 + 0x36] + param_2;
  *unaff_RDI = *unaff_RDI + param_2;
  *param_4 = *param_4 + unaff_R12B;
  cVar1 = (char)uVar3;
  *pcVar4 = *pcVar4 + cVar1;
  *pcVar4 = *pcVar4 + cVar1;
  *unaff_RSI = *unaff_RSI + '\x01';
  unaff_RSI[(longlong)unaff_RDI * 8 + 0x36] = unaff_RSI[(longlong)unaff_RDI * 8 + 0x36] + param_2;
  *unaff_RDI = *unaff_RDI + param_2;
  *param_4 = *param_4 + unaff_R12B;
  *pcVar4 = *pcVar4 + cVar1;
  *pcVar4 = *pcVar4 + cVar1;
  *unaff_RSI = *unaff_RSI + '\x01';
  cVar2 = cVar1 + unaff_BH;
  pcVar4 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),cVar2);
  *param_4 = *param_4 + unaff_R12B;
  *pcVar4 = *pcVar4 + cVar2;
  pcVar4[-0x3dffc904] = pcVar4[-0x3dffc904] + (char)(uVar3 >> 8);
  pcVar4[0x15] = pcVar4[0x15] + param_2 + cVar1;
  *param_1 = *param_1 + unaff_SPL;
  *unaff_RSI = *unaff_RSI + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

