// Function: FUN_1404b5294
// Addr: 1404b5294
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b52da) overlaps instruction at (ram,0x0001404b52d9)
    */

void FUN_1404b5294(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined8 in_RAX;
  uint *puVar8;
  byte bVar12;
  char unaff_BL;
  char unaff_BH;
  uint *unaff_RSI;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  bool bVar13;
  char *pcVar9;
  byte *pbVar10;
  undefined7 uVar11;
  
  bVar12 = (byte)((ulonglong)param_2 >> 8);
  uVar11 = (undefined7)((ulonglong)in_RAX >> 8);
  puVar8 = (uint *)CONCAT71(uVar11,(byte)in_RAX + 0x34);
  uVar7 = (uint)(0xcb < (byte)in_RAX);
  uVar2 = *puVar8 + (uint)puVar8;
  bVar13 = CARRY4(*puVar8,(uint)puVar8) || CARRY4(uVar2,uVar7);
  *puVar8 = uVar2 + uVar7;
  bVar3 = 0x7b - *(byte *)CONCAT71(uVar11,0x7b);
  cVar4 = bVar3 - bVar13;
  pcVar9 = (char *)CONCAT71(uVar11,cVar4);
  if (param_1 == 1) {
    bVar5 = (cVar4 - *pcVar9) - (0x7b < *(byte *)CONCAT71(uVar11,0x7b) || bVar3 < bVar13);
    pbVar10 = (byte *)CONCAT71(uVar11,bVar5);
    *param_4 = *param_4 + -0x10;
    *pbVar10 = *pbVar10 + bVar5;
    pbVar1 = pbVar10 + -0x1dffe585;
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar12;
    if ((POPCOUNT(*pbVar1) & 1U) == 0) {
      pcVar9 = (char *)((longlong)param_2 * 2 + 0x21004b);
      *pcVar9 = *pcVar9 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*pbVar1 == 0) {
      *param_4 = *param_4 + ((bVar5 - *pbVar10) - CARRY1(bVar3,bVar12));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar3 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar5;
    pbVar10[in_FS_OFFSET] = pbVar10[in_FS_OFFSET] + bVar5 + CARRY1(bVar3,bVar5);
    *param_2 = *param_2 + bVar12;
    pbVar1 = pbVar10 + -0x1dffe585;
    *pbVar1 = *pbVar1 + bVar12;
    if ((POPCOUNT(*pbVar1) & 1U) == 0) {
      pcVar9 = (char *)((longlong)param_2 * 2 + 0xd01004b);
      *pcVar9 = *pcVar9 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar7 = (int)pbVar10 + 0xf4050002;
    pcVar9 = (char *)(ulonglong)uVar7;
    *(char *)(unaff_RDI + 0x1a) = *(char *)(unaff_RDI + 0x1a) + unaff_BH;
    cVar6 = (char)uVar7;
    *(char *)((longlong)unaff_RSI + 0x10001a7f) =
         *(char *)((longlong)unaff_RSI + 0x10001a7f) + cVar6;
    *param_4 = *param_4 + -0x18;
    *pcVar9 = *pcVar9 + cVar6;
    cVar4 = *pcVar9;
    *pcVar9 = *pcVar9 + (char)param_2;
    if (*pcVar9 != '\0' && SCARRY1(cVar4,(char)param_2) == *pcVar9 < '\0') {
      *param_4 = *param_4 + -0x20;
      *unaff_RSI = *unaff_RSI & uVar7;
      cRam0000000000000000 = cRam0000000000000000 + (char)(uVar7 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)((longlong)unaff_RSI + 0x10001a7f) =
         *(char *)((longlong)unaff_RSI + 0x10001a7f) + cVar6;
    *param_4 = *param_4 + -0x20;
  }
  *param_2 = *param_2 + (char)pcVar9;
  *pcVar9 = *pcVar9 + (char)pcVar9;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

