// Function: FUN_1404af470
// Addr: 1404af470
// Size: 1 bytes


void FUN_1404af470(char *param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar5;
  byte bVar8;
  uint in_EAX;
  uint uVar6;
  byte bVar9;
  char unaff_SPL;
  bool bVar10;
  byte bVar4;
  char *pcVar7;
  
  bVar9 = (byte)param_2;
  uVar6 = in_EAX + 0xa0000a64;
  pbVar1 = (byte *)((ulonglong)uVar6 * 2);
  bVar10 = CARRY1(*pbVar1,bVar9) || CARRY1(*pbVar1 + bVar9,0x5ffff59b < in_EAX);
  *pbVar1 = *pbVar1 + bVar9 + (0x5ffff59b < in_EAX);
  cVar5 = (byte)uVar6 + bVar10;
  pcVar7 = (char *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),cVar5);
  bVar8 = (byte)(uVar6 >> 8);
  *param_2 = *param_2 + bVar8 + CARRY1((byte)uVar6,bVar10);
  *param_1 = *param_1 + unaff_SPL;
  *pcVar7 = *pcVar7 + cVar5;
  pbVar1 = (byte *)(pcVar7 + -0x23ffebf0);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar8;
  pbVar1 = (byte *)((longlong)pcVar7 * 2);
  bVar3 = *pbVar1;
  bVar4 = *pbVar1;
  *pbVar1 = bVar4 + bVar9 + CARRY1(bVar2,bVar8);
  *param_2 = *param_2 + bVar8 + (CARRY1(bVar3,bVar9) || CARRY1(bVar4 + bVar9,CARRY1(bVar2,bVar8)));
  *param_1 = *param_1 + unaff_SPL;
  *pcVar7 = *pcVar7 + (char)param_1;
  *pcVar7 = *pcVar7 + cVar5;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

