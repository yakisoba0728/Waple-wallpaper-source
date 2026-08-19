// Function: FUN_1404b38f8
// Addr: 1404b38f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b38f8(char param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  longlong in_RAX;
  byte bVar8;
  char unaff_BH;
  longlong unaff_RBP;
  byte *unaff_RSI;
  char in_CF;
  bool bVar9;
  uint *puVar7;
  
  bVar8 = (byte)((ulonglong)param_2 >> 8);
  *(char *)(in_RAX + 4) = (*(char *)(in_RAX + 4) - unaff_BH) - in_CF;
  pcVar1 = (char *)(in_RAX + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + param_1;
  uVar6 = (int)in_RAX + 0x12740800;
  puVar7 = (uint *)(ulonglong)uVar6;
  pbVar2 = &stack0x00000000 + param_2 * 2;
  bVar3 = *pbVar2;
  bVar5 = (byte)uVar6;
  *pbVar2 = *pbVar2 + bVar5;
  bVar9 = CARRY4(*puVar7,uVar6) || CARRY4(*puVar7 + uVar6,(uint)CARRY1(bVar3,bVar5));
  *puVar7 = *puVar7 + uVar6 + (uint)CARRY1(bVar3,bVar5);
  bVar3 = *unaff_RSI;
  bVar4 = *unaff_RSI + bVar8;
  *unaff_RSI = bVar4 + bVar9;
  *(byte *)puVar7 = ((char)*puVar7 - bVar5) - (CARRY1(bVar3,bVar8) || CARRY1(bVar4,bVar9));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

