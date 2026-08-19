// Function: FUN_1404c532c
// Addr: 1404c532c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c532c(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  uint in_EAX;
  uint uVar5;
  ulonglong uVar7;
  longlong unaff_RSI;
  byte in_CF;
  char *pcVar6;
  
  cVar4 = cRam000000014bac5fa7;
  uVar5 = (uint)&stack0x00000000 + in_EAX;
  uVar7 = (ulonglong)(uVar5 + in_CF);
  uVar5 = in_EAX + (int)param_2 +
          (uint)(CARRY4((uint)&stack0x00000000,in_EAX) || CARRY4(uVar5,(uint)in_CF));
  pcVar6 = (char *)(ulonglong)uVar5;
  cRam000000014bac5fa7 = cRam000000014bac5fa7 + (char)param_1;
  *(char **)(uVar7 - 8) = pcVar6;
  piVar1 = (int *)(param_2 + CONCAT71((int7)((ulonglong)param_1 >> 8),cVar4));
  *piVar1 = *piVar1 + (int)param_2;
  pbVar2 = (byte *)((uVar7 - 8) + unaff_RSI);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + (byte)param_2;
  *pcVar6 = *pcVar6 + (char)uVar5 + CARRY1(bVar3,(byte)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

