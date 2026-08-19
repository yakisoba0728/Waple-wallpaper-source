// Function: FUN_1404b7ce4
// Addr: 1404b7ce4
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404b7d53) overlaps instruction at (ram,0x0001404b7d52)
    */

void FUN_1404b7ce4(char *param_1,byte param_2)

{
  char cVar1;
  byte bVar7;
  int in_EAX;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  byte bVar8;
  char cVar9;
  char *pcVar6;
  char unaff_BH;
  char unaff_SPL;
  char *unaff_RSI;
  byte in_CF;
  byte *pbVar5;
  
  uVar2 = in_EAX + 0x5000b74 + (uint)in_CF;
  uVar4 = (ulonglong)uVar2 ^ 10;
  pbVar5 = (byte *)(uVar4 - 0x49);
  bVar8 = *pbVar5;
  bVar7 = (byte)(uVar2 >> 8);
  *pbVar5 = *pbVar5 + bVar7;
  iVar3 = ((int)uVar4 + -0x1db7af00) - (uint)CARRY1(bVar8,bVar7);
  cVar1 = (char)iVar3;
  bVar8 = (char)((uint)iVar3 >> 8) + unaff_BH;
  uVar2 = CONCAT22((short)((uint)iVar3 >> 0x10),CONCAT11(bVar8,cVar1));
  pbVar5 = (byte *)(ulonglong)uVar2;
  if ((POPCOUNT(bVar8) & 1U) == 0) {
    *param_1 = *param_1 + bVar8;
    *pbVar5 = *pbVar5 + cVar1;
    pbVar5 = pbVar5 + -0x49;
    bVar7 = *pbVar5;
    *pbVar5 = *pbVar5 + bVar8;
    iVar3 = (uVar2 + 0xe2485100) - (uint)CARRY1(bVar7,bVar8);
    cVar1 = (char)iVar3;
    cVar9 = (char)((uint)iVar3 >> 8) + unaff_BH;
    pcVar6 = (char *)(ulonglong)CONCAT22((short)((uint)iVar3 >> 0x10),CONCAT11(cVar9,cVar1));
    if ((POPCOUNT(cVar9) & 1U) == 0) {
      *param_1 = *param_1 + cVar9;
      *unaff_RSI = *unaff_RSI + cVar1;
      *pcVar6 = *pcVar6 + cVar1;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  else {
    *param_1 = *param_1 + unaff_SPL;
    *pbVar5 = *pbVar5 + cVar1;
    bVar8 = *pbVar5;
    *pbVar5 = *pbVar5 + param_2;
    param_1 = (char *)0xb959001d;
    pcVar6 = (char *)(ulonglong)((uVar2 + 0xb5ddf000) - (uint)CARRY1(bVar8,param_2));
  }
  *param_1 = *param_1 + unaff_SPL;
  *pcVar6 = *pcVar6 + (char)param_1;
  *pcVar6 = *pcVar6 + (char)pcVar6;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

