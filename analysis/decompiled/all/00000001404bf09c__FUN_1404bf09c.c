// Function: FUN_1404bf09c
// Addr: 1404bf09c
// Size: 1 bytes


void FUN_1404bf09c(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  char cVar5;
  int in_EAX;
  uint uVar3;
  char unaff_SPL;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char *pcVar4;
  
  uVar3 = in_EAX + 0xb10006c4;
  pcVar4 = (char *)(ulonglong)uVar3;
  cVar5 = (char)(uVar3 >> 8);
  *(char *)(unaff_RBP + -0x58) = *(char *)(unaff_RBP + -0x58) + cVar5;
  pcVar1 = (char *)(unaff_RDI + 0x21004f + unaff_RBP * 8);
  *pcVar1 = *pcVar1 + cVar5;
  cVar2 = (char)uVar3;
  *pcVar4 = *pcVar4 + cVar2;
  *(char *)(unaff_RBP + -0x58) = *(char *)(unaff_RBP + -0x58) + cVar5;
  pcVar1 = (char *)(unaff_RDI + 0x21004f + unaff_RBP * 8);
  *pcVar1 = *pcVar1 + cVar5;
  *pcVar4 = *pcVar4 + cVar2;
  pcVar1 = (char *)(CONCAT71((int7)((ulonglong)param_1 >> 8),0xa7) + -0x67ffd959);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  out((short)param_2,uVar3);
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 + -0x59;
  *pcVar4 = *pcVar4 + cVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

