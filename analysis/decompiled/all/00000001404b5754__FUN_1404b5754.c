// Function: FUN_1404b5754
// Addr: 1404b5754
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5754(char *param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte bVar11;
  byte *in_RAX;
  undefined6 uVar13;
  char *pcVar7;
  undefined7 uVar12;
  undefined2 uVar14;
  byte unaff_BL;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RSI;
  uint *unaff_RDI;
  bool bVar16;
  char in_AF;
  longlong unaff_retaddr;
  char *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar15;
  
  *param_2 = *param_2 & unaff_EBP;
  bVar3 = (byte)in_RAX;
  *in_RAX = *in_RAX | bVar3;
  uVar14 = CONCAT11((char)((ulonglong)param_2 >> 8) - param_1[CONCAT44(unaff_0000002c,unaff_EBP)],
                    (char)param_2);
  pcVar15 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),uVar14);
  uVar13 = (undefined6)((ulonglong)in_RAX >> 0x10);
  piVar1 = (int *)(CONCAT62(uVar13,CONCAT11((byte)((ulonglong)in_RAX >> 8) &
                                            (&stack0x00000000)[(longlong)param_1],bVar3)) + 3);
  *piVar1 = *piVar1 + unaff_EBP;
  bVar16 = CARRY1(bRam00000000dd4b662d,bVar3);
  bRam00000000dd4b662d = bRam00000000dd4b662d + bVar3;
  pcVar7 = (char *)CONCAT62(uVar13,CONCAT11(((char)bRam00000000dd4b662d < '\0') << 7 |
                                            (bRam00000000dd4b662d == '\0') << 6 | in_AF << 4 |
                                            ((POPCOUNT(bRam00000000dd4b662d) & 1U) == 0) << 2 | 2U |
                                            bVar16,bVar3));
  cVar2 = (bVar3 - *pcVar7) - bVar16;
  uVar6 = (uint)CONCAT71((int7)((ulonglong)pcVar7 >> 8),cVar2);
  bVar16 = uVar6 < *unaff_RDI;
  uVar6 = uVar6 - *unaff_RDI;
  pcVar7 = (char *)CONCAT62(uVar13,CONCAT11(((int)uVar6 < 0) << 7 | (uVar6 == 0) << 6 | in_AF << 4 |
                                            ((POPCOUNT(uVar6 & 0xff) & 1U) == 0) << 2 | 2U | bVar16,
                                            cVar2));
  uVar12 = (undefined7)((ulonglong)pcVar7 >> 8);
  bVar3 = (cVar2 - *pcVar7) - bVar16;
  pcVar8 = (char *)CONCAT71(uVar12,bVar3);
  if (SBORROW1(cVar2,*pcVar7) == SBORROW1(cVar2 - *pcVar7,bVar16)) {
    *param_4 = *param_4;
    *pcVar8 = *pcVar8 + bVar3;
    pbVar9 = (byte *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x50ffe561);
    bVar16 = CARRY1(*pbVar9,unaff_BL);
    *pbVar9 = *pbVar9 + unaff_BL;
    pcVar7 = (char *)CONCAT62(uVar13,CONCAT11(((char)*pbVar9 < '\0') << 7 | (*pbVar9 == 0) << 6 |
                                              in_AF << 4 | ((POPCOUNT(*pbVar9) & 1U) == 0) << 2 | 2U
                                              | bVar16,bVar3));
    bVar4 = (bVar3 - *pcVar7) - bVar16;
    pbVar9 = (byte *)CONCAT71((int7)((ulonglong)pcVar7 >> 8),bVar4);
    if (SBORROW1(bVar3,*pcVar7) == SBORROW1(bVar3 - *pcVar7,bVar16)) {
      *param_4 = *param_4;
      *pbVar9 = *pbVar9 + bVar4;
      pbVar9 = pbVar9 + -0x62ffe561;
      bVar3 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar4;
      bVar11 = ((char)*pbVar9 < '\0') << 7 | (*pbVar9 == 0) << 6 | in_AF << 4 |
               ((POPCOUNT(*pbVar9) & 1U) == 0) << 2 | 2U | CARRY1(bVar3,bVar4);
      pcVar7 = (char *)CONCAT62(uVar13,CONCAT11(bVar11,bVar4));
      bVar5 = (bVar4 - *pcVar7) - CARRY1(bVar3,bVar4);
      pbVar10 = (byte *)CONCAT71((int7)((ulonglong)pcVar7 >> 8),bVar5);
      *(longlong *)(unaff_retaddr + -8) = unaff_RSI;
      *param_4 = *param_4 + (char)unaff_retaddr + -8;
      *pbVar10 = *pbVar10 + bVar5;
      pbVar9 = pbVar10 + -0x61;
      bVar3 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar11;
      bVar4 = *pbVar10;
      *(char *)((longlong)unaff_RDI + 0x5650001e) =
           (*(char *)((longlong)unaff_RDI + 0x5650001e) + -0x4b) -
           (bVar5 < *pbVar10 || (byte)(bVar5 - bVar4) < CARRY1(bVar3,bVar11));
      *param_1 = *param_1 + ((bVar5 - bVar4) - CARRY1(bVar3,bVar11));
      pcVar7 = (char *)(unaff_retaddr + -8 + unaff_RSI);
      *pcVar7 = *pcVar7 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *param_1 = *param_1;
    *pcVar8 = *pcVar8 + bVar3;
    pbVar9 = (byte *)(pcVar8 + -0x57);
    bVar4 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar3;
    pbVar9 = (byte *)CONCAT71(uVar12,(bVar3 - *pcVar8) - CARRY1(bVar4,bVar3));
  }
  *param_1 = *param_1;
  bVar3 = (byte)pbVar9;
  *pcVar15 = *pcVar15 + bVar3;
  *pbVar9 = *pbVar9 + bVar3;
  *pbVar9 = *pbVar9 | bVar3;
  in(uVar14);
  *param_1 = *param_1 + 'J';
  pbVar10 = (byte *)(CONCAT71((int7)((ulonglong)pbVar9 >> 8),bRam00000001468d61fb) | 0x4a);
  *pbVar10 = *pbVar10 << 1 | (char)*pbVar10 < '\0';
  *pbVar10 = *pbVar10 ^ (bRam00000001468d61fb | 0x4a);
  *param_1 = *param_1 + (char)((ulonglong)pbVar9 >> 8);
  *pbVar10 = *pbVar10 - (char)param_1;
  *pbVar10 = *pbVar10 + (char)((ulonglong)param_1 >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

