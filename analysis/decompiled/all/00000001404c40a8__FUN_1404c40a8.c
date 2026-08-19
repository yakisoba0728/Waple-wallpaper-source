// Function: FUN_1404c40a8
// Addr: 1404c40a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c40a8(longlong param_1,char *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int in_EAX;
  uint uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  byte bVar8;
  byte unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  byte in_CF;
  bool bVar9;
  
  uVar5 = in_EAX + 0x15000764 + (uint)in_CF;
  pbVar6 = (byte *)((ulonglong)uVar5 ^ 6);
  bVar8 = (byte)param_2;
  bVar9 = CARRY1(bRam00000001422c51e7,bVar8);
  bRam00000001422c51e7 = bRam00000001422c51e7 + bVar8;
  *param_2 = (*param_2 - (char)param_1) - bVar9;
  bVar3 = *pbVar6;
  *pbVar6 = *pbVar6 + unaff_BL;
  pbVar2 = pbVar6 + in_FS_OFFSET;
  bVar4 = *pbVar2 + (byte)pbVar6;
  bVar9 = CARRY1(*pbVar2,(byte)pbVar6) || CARRY1(bVar4,CARRY1(bVar3,unaff_BL));
  *pbVar2 = bVar4 + CARRY1(bVar3,unaff_BL);
  pbVar2 = (byte *)(unaff_RDI + param_1);
  bVar3 = *pbVar2;
  bVar4 = *pbVar2;
  *pbVar2 = (bVar4 - bVar8) - bVar9;
  *(char *)(unaff_RSI + param_1) =
       (*(char *)(unaff_RSI + param_1) - (char)((ulonglong)param_2 >> 8)) -
       (bVar3 < bVar8 || (byte)(bVar4 - bVar8) < bVar9);
  bVar3 = *pbVar6;
  *pbVar6 = *pbVar6 + unaff_BL;
  uVar7 = (ulonglong)param_2 & 0xffffffff;
  bVar4 = (byte)uVar7 - 0x20;
  bVar9 = 0x1f < (byte)uVar7 || CARRY1(bVar4,CARRY1(bVar3,unaff_BL));
  bVar4 = bVar4 + CARRY1(bVar3,unaff_BL);
  pcVar1 = (char *)(CONCAT71((int7)(uVar7 >> 8),bVar4 * '\x02' + bVar9) + 1);
  *pcVar1 = *pcVar1 + (char)(uVar5 >> 8) + (CARRY1(bVar4,bVar4) || CARRY1(bVar4 * '\x02',bVar9));
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)(uVar7 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

