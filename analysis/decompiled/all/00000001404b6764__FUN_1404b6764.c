// Function: FUN_1404b6764
// Addr: 1404b6764
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6764(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int *in_RAX;
  byte bVar6;
  longlong unaff_RBP;
  char *unaff_RSI;
  bool in_PF;
  char *pcVar5;
  
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  if (!in_PF) {
    pbVar1 = (byte *)(unaff_RBP + 0x7a);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar6;
    iVar4 = ((int)in_RAX - *in_RAX) - (uint)CARRY1(bVar2,bVar6);
    cVar3 = (char)iVar4;
    pcVar5 = (char *)(ulonglong)CONCAT22((short)((uint)iVar4 >> 0x10),CONCAT11(0x24,cVar3));
    *param_1 = *param_1 + -8;
    *unaff_RSI = *unaff_RSI + (char)param_1;
    *pcVar5 = *pcVar5 + cVar3;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

