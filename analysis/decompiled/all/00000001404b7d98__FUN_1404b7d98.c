// Function: FUN_1404b7d98
// Addr: 1404b7d98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7d98(char *param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int in_EAX;
  uint uVar4;
  byte bVar7;
  longlong unaff_RBX;
  char *unaff_RSI;
  byte in_CF;
  byte *pbVar5;
  char *pcVar6;
  
  pbVar5 = (byte *)(unaff_RBX + -0x44a8ffe3);
  bVar1 = *pbVar5;
  bVar7 = (byte)((ulonglong)unaff_RBX >> 8);
  bVar2 = *pbVar5 + bVar7;
  *pbVar5 = bVar2 + in_CF;
  uVar4 = (in_EAX + -0x4b7ca400) - (uint)(CARRY1(bVar1,bVar7) || CARRY1(bVar2,in_CF));
  pbVar5 = (byte *)(ulonglong)uVar4;
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  *pbVar5 = *pbVar5 + (char)uVar4;
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + param_2;
  uVar4 = (uVar4 + 0xb4835c00) - (uint)CARRY1(bVar1,param_2);
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  *unaff_RSI = *unaff_RSI + (char)uVar4;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  cVar3 = in(0xb);
  pcVar6 = (char *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),cVar3);
  *pcVar6 = *pcVar6 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

