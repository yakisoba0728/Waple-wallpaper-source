// Function: FUN_1404b5784
// Addr: 1404b5784
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5784(char *param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  uint *in_RAX;
  char unaff_BL;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar5 = *in_RAX;
  bVar6 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar6;
  *(char *)(unaff_RDI + -0x6062ffe6) =
       (*(char *)(unaff_RDI + -0x6062ffe6) + -0x1a) - CARRY1((byte)uVar5,bVar6);
  pcVar2 = (char *)(unaff_RSI + 0x4b + param_2 * 2);
  *pcVar2 = *pcVar2 + unaff_BL;
  bVar7 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + bVar7;
  *(byte *)in_RAX = (byte)*in_RAX + bVar6;
  pbVar1 = (byte *)((longlong)in_RAX + -0x61);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar7;
  bVar4 = bVar6 - (byte)*in_RAX;
  *(char *)(unaff_RDI + 0x5650001a) =
       (*(char *)(unaff_RDI + 0x5650001a) + -0x4b) -
       (bVar6 < (byte)*in_RAX || bVar4 < CARRY1(bVar3,bVar7));
  *param_1 = *param_1 + (bVar4 - CARRY1(bVar3,bVar7));
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

