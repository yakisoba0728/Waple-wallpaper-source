// Function: FUN_1404b39e8
// Addr: 1404b39e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b39e8(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint in_EAX;
  uint uVar5;
  byte *pbVar6;
  byte unaff_BH;
  char unaff_SPL;
  longlong unaff_RDI;
  bool bVar7;
  bool bVar8;
  
  uRam00000001b45039f0 = uRam00000001b45039f0 & in_EAX;
  uVar5 = in_EAX | 0x18402000;
  pbVar1 = (byte *)(unaff_RDI + 0x40);
  bVar2 = *pbVar1;
  bVar3 = (byte)in_EAX;
  *pbVar1 = *pbVar1 + bVar3;
  *(char *)(ulonglong)uVar5 = (*(char *)(ulonglong)uVar5 - bVar3) - CARRY1(bVar2,bVar3);
  pbVar6 = (byte *)((ulonglong)uVar5 | 0x17);
  *param_1 = *param_1 + unaff_SPL;
  bVar4 = (byte)pbVar6;
  *(byte *)((longlong)pbVar6 * 2) = *(byte *)((longlong)pbVar6 * 2) & bVar4;
  pbVar6[3] = pbVar6[3] & unaff_BH;
  bVar7 = CARRY1(bRam00000001874b3e71,bVar4);
  bRam00000001874b3e71 = bRam00000001874b3e71 + bVar4;
  bVar8 = *pbVar6 < bVar4 || (byte)(*pbVar6 - bVar4) < bVar7;
  *pbVar6 = (*pbVar6 - bVar4) - bVar7;
  bVar2 = *pbVar6;
  bVar3 = *pbVar6;
  *pbVar6 = (bVar3 - bVar4) - bVar8;
  *param_1 = (*param_1 - unaff_BH) - (bVar2 < bVar4 || (byte)(bVar3 - bVar4) < bVar8);
  *param_4 = *param_4 + unaff_SPL;
  *pbVar6 = *pbVar6 + bVar4;
  pbVar1 = (byte *)(unaff_RDI + 0x40);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar4;
  bVar7 = *pbVar6 < bVar4 || (byte)(*pbVar6 - bVar4) < CARRY1(bVar2,bVar4);
  *pbVar6 = (*pbVar6 - bVar4) - CARRY1(bVar2,bVar4);
  bVar2 = *pbVar6;
  bVar3 = *pbVar6;
  *pbVar6 = (bVar3 - bVar4) - bVar7;
  *param_1 = (*param_1 - unaff_BH) - (bVar2 < bVar4 || (byte)(bVar3 - bVar4) < bVar7);
  *param_4 = *param_4 + unaff_SPL;
  *pbVar6 = *pbVar6 + bVar4;
  bVar2 = *pbVar6;
  bVar3 = (byte)(uVar5 >> 8);
  *pbVar6 = *pbVar6 + bVar3;
  *pbVar6 = (*pbVar6 - bVar4) - CARRY1(bVar2,bVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

