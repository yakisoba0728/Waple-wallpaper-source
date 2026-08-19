// Function: FUN_1404afc70
// Addr: 1404afc70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404afc70(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  byte *in_RAX;
  char cVar8;
  char unaff_BL;
  longlong unaff_RSI;
  char in_CF;
  byte unaff_retaddr;
  char *pcVar7;
  
  cVar8 = (char)((ulonglong)param_2 >> 8);
  *(char *)(param_1 + param_2) = *(char *)(param_1 + param_2) + cVar8 + in_CF;
  *in_RAX = *in_RAX + (char)param_2;
  pbVar1 = in_RAX + unaff_RSI * 2;
  bVar3 = (byte)param_1 & 7;
  *pbVar1 = *pbVar1 >> bVar3 | *pbVar1 << 8 - bVar3;
  *(uint *)(in_RAX + param_2) = *(uint *)(in_RAX + param_2) & (uint)in_RAX;
  bVar4 = (byte)in_RAX;
  bVar3 = *in_RAX;
  bVar2 = *in_RAX;
  *in_RAX = bVar2 + bVar4 + CARRY1(unaff_retaddr,bVar4);
  cVar5 = (CARRY1(bVar3,bVar4) || CARRY1(bVar2 + bVar4,CARRY1(unaff_retaddr,bVar4))) + -0x1b;
  pcVar7 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar5);
  pcVar7[0x21004afb] = pcVar7[0x21004afb] + unaff_BL;
  *pcVar7 = *pcVar7 + cVar5;
  pcVar7[-0x3fffeb1b] = pcVar7[-0x3fffeb1b] + cVar8;
  uVar6 = in(0x14);
  *(char *)((ulonglong)uVar6 + 0x21004afb) = *(char *)((ulonglong)uVar6 + 0x21004afb) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

