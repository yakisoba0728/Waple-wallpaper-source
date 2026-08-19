// Function: FUN_1404c4b6c
// Addr: 1404c4b6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4b6c(byte *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  int in_EAX;
  uint uVar3;
  char *pcVar4;
  char unaff_BL;
  char unaff_BH;
  longlong unaff_RSI;
  byte in_CF;
  
  pcVar4 = (char *)((ulonglong)(in_EAX + 0x15000a64 + (uint)in_CF) ^ 9);
  cRam00000000e12c5ccb = cRam00000000e12c5ccb + (char)param_2;
  *param_1 = *param_1 + (char)pcVar4;
  *pcVar4 = *pcVar4 + (char)pcVar4;
  *(char *)(unaff_RSI + 0x68) = *(char *)(unaff_RSI + 0x68) + unaff_BH;
  uVar3 = (int)pcVar4 + 0xd2976c00;
  pcVar4 = (char *)(ulonglong)uVar3;
  *(char *)(unaff_RSI + 0x36) = *(char *)(unaff_RSI + 0x36) + unaff_BH;
  bVar2 = (byte)uVar3;
  *pcVar4 = *pcVar4 + bVar2;
  *pcVar4 = *pcVar4 + bVar2;
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar2;
  *param_2 = (*param_2 - (int)param_1) - (uint)CARRY1(bVar1,bVar2);
  *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

