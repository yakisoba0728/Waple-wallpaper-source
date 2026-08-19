// Function: FUN_1404b05b4
// Addr: 1404b05b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b05b4(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  int in_EAX;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char in_CF;
  
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(unaff_RSI + param_1 * 2);
  *pcVar1 = *pcVar1 + bVar6 + in_CF;
  pbVar5 = (byte *)(unaff_RDI + param_1 * 2);
  *pbVar5 = *pbVar5 | (byte)((uint)in_EAX >> 8);
  pbVar5 = (byte *)(ulonglong)(in_EAX + 0x15578500U);
  (&stack0x00210043)[(longlong)pbVar5] = (&stack0x00210043)[(longlong)pbVar5] + unaff_BH;
  bVar2 = *pbVar5;
  bVar3 = (byte)(in_EAX + 0x15578500U);
  *pbVar5 = *pbVar5 + bVar3;
  uVar4 = in_EAX + 0x2aaf0a00 + (uint)CARRY1(bVar2,bVar3);
  pbVar5 = (byte *)(ulonglong)uVar4;
  (&stack0x0021003b)[(longlong)pbVar5] = (&stack0x0021003b)[(longlong)pbVar5] + unaff_BH;
  bVar2 = *pbVar5;
  *pbVar5 = *pbVar5 + (byte)uVar4;
  if (param_1 + -1 == 0 || *pbVar5 == 0) {
    (&stack0x0021003b)[uVar4 + 0x15574500 + (uint)CARRY1(bVar2,(byte)uVar4)] =
         (&stack0x0021003b)[uVar4 + 0x15574500 + (uint)CARRY1(bVar2,(byte)uVar4)] +
         (char)((ulonglong)(param_1 + -1) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar5 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x15);
  *pbVar5 = *pbVar5 ^ bVar6;
  *(char *)(unaff_RSI + -0x6bffea8d) = *(char *)(unaff_RSI + -0x6bffea8d) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

