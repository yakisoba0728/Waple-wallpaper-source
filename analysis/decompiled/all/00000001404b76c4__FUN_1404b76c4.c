// Function: FUN_1404b76c4
// Addr: 1404b76c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404b76f7) */

void FUN_1404b76c4(byte *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint *in_RAX;
  byte bVar7;
  byte bVar8;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int *piVar6;
  
  bVar8 = (byte)param_2;
  bVar7 = (byte)((ulonglong)param_1 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(byte *)(unaff_RBP + 0x1d) = *(byte *)(unaff_RBP + 0x1d) ^ bVar7;
  pbVar1 = param_1 + 0x6d;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar7;
  uVar5 = ((uint)in_RAX + 0xb48af400) - (uint)CARRY1(bVar2,bVar7);
  piVar6 = (int *)(ulonglong)uVar5;
  bVar2 = *param_1;
  bVar4 = (byte)uVar5;
  *param_1 = *param_1 + bVar4;
  pbVar1 = (byte *)((longlong)piVar6 * 2);
  bVar7 = *pbVar1;
  bVar3 = *pbVar1;
  *pbVar1 = bVar3 + bVar4 + CARRY1(bVar2,bVar4);
  *(char *)(param_2 * 2) =
       *(char *)(param_2 * 2) + (char)((ulonglong)param_2 >> 8) +
       (CARRY1(bVar7,bVar4) || CARRY1(bVar3 + bVar4,CARRY1(bVar2,bVar4)));
  *(byte *)piVar6 = (char)*piVar6 + bVar8;
  pbVar1 = (byte *)((longlong)piVar6 + unaff_RSI * 2);
  bVar2 = (byte)param_1 & 7;
  *pbVar1 = *pbVar1 >> bVar2 | *pbVar1 << 8 - bVar2;
  *(int *)(unaff_RSI + (longlong)piVar6) = *(int *)(unaff_RSI + (longlong)piVar6) + (int)param_2;
  param_1 = param_1 + (longlong)piVar6;
  bVar2 = *param_1;
  *param_1 = *param_1 + bVar8;
  *piVar6 = *piVar6 + uVar5 + (uint)CARRY1(bVar2,bVar8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

