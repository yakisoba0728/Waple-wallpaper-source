// Function: FUN_1404ba8a4
// Addr: 1404ba8a4
// Size: 1 bytes


void FUN_1404ba8a4(undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined2 uVar3;
  byte bVar4;
  int in_EAX;
  uint uVar5;
  byte *pbVar6;
  char unaff_BH;
  longlong unaff_RSI;
  
  uVar5 = in_EAX + 0x7e000964;
  bVar4 = (byte)uVar5;
  *(byte *)(ulonglong)uVar5 = *(byte *)(ulonglong)uVar5 & bVar4;
  uVar3 = (undefined2)(uVar5 >> 0x10);
  pbVar6 = (byte *)(ulonglong)CONCAT22(uVar3,CONCAT11(0xf2,bVar4));
  *pbVar6 = *pbVar6 & bVar4;
  pbVar6 = (byte *)(ulonglong)CONCAT22(uVar3,CONCAT11(0xa7,bVar4));
  *param_4 = *param_4;
  *pbVar6 = *pbVar6 + bVar4;
  *(char *)(unaff_RSI + -0xe) = *(char *)(unaff_RSI + -0xe) + unaff_BH;
  *pbVar6 = *pbVar6 & bVar4;
  pbVar6 = (byte *)(ulonglong)CONCAT22(uVar3,CONCAT11(0xf2,bVar4));
  *pbVar6 = *pbVar6 & bVar4;
  pbVar6 = (byte *)(ulonglong)CONCAT22(uVar3,CONCAT11(0xa7,bVar4));
  *param_4 = *param_4;
  *pbVar6 = *pbVar6 + bVar4;
  pcVar1 = (char *)(param_2 + 0x20 + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *(char *)(unaff_RSI + -0xe) = *(char *)(unaff_RSI + -0xe) + unaff_BH;
  *pbVar6 = *pbVar6 & bVar4;
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}

