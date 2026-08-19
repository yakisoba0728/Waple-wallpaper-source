// Function: FUN_1404b5764
// Addr: 1404b5764
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5764(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined3 uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar13;
  uint in_EAX;
  uint uVar9;
  byte unaff_BL;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint *unaff_RDI;
  bool bVar14;
  char in_AF;
  longlong unaff_retaddr;
  char *pcVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  uVar9 = in_EAX + 0x9d000ec4;
  uVar3 = (undefined2)(uVar9 >> 0x10);
  uVar2 = CONCAT22(uVar3,CONCAT11(((int)uVar9 < 0) << 7 | (uVar9 == 0) << 6 | in_AF << 4 |
                                  ((POPCOUNT(uVar9 & 0xff) & 1U) == 0) << 2 | 2U |
                                  0x62fff13b < in_EAX,(char)uVar9));
  cVar5 = ((char)uVar9 - *(char *)(ulonglong)uVar2) - (0x62fff13b < in_EAX);
  uVar2 = CONCAT31((int3)(uVar2 >> 8),cVar5);
  bVar14 = uVar2 < *unaff_RDI;
  uVar2 = uVar2 - *unaff_RDI;
  uVar2 = CONCAT22(uVar3,CONCAT11(((int)uVar2 < 0) << 7 | (uVar2 == 0) << 6 | in_AF << 4 |
                                  ((POPCOUNT(uVar2 & 0xff) & 1U) == 0) << 2 | 2U | bVar14,cVar5));
  cVar1 = cVar5 - *(char *)(ulonglong)uVar2;
  uVar4 = (undefined3)(uVar2 >> 8);
  bVar6 = cVar1 - bVar14;
  pcVar10 = (char *)(ulonglong)CONCAT31(uVar4,bVar6);
  if (SBORROW1(cVar5,*(char *)(ulonglong)uVar2) == SBORROW1(cVar1,bVar14)) {
    *param_4 = *param_4;
    *pcVar10 = *pcVar10 + bVar6;
    pbVar11 = (byte *)(unaff_RBP + -0x50ffe561);
    bVar14 = CARRY1(*pbVar11,unaff_BL);
    *pbVar11 = *pbVar11 + unaff_BL;
    uVar2 = CONCAT22(uVar3,CONCAT11(((char)*pbVar11 < '\0') << 7 | (*pbVar11 == 0) << 6 | in_AF << 4
                                    | ((POPCOUNT(*pbVar11) & 1U) == 0) << 2 | 2U | bVar14,bVar6));
    cVar1 = bVar6 - *(char *)(ulonglong)uVar2;
    bVar7 = cVar1 - bVar14;
    pbVar11 = (byte *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar7);
    if (SBORROW1(bVar6,*(char *)(ulonglong)uVar2) == SBORROW1(cVar1,bVar14)) {
      *param_4 = *param_4;
      *pbVar11 = *pbVar11 + bVar7;
      pbVar11 = pbVar11 + -0x62ffe561;
      bVar6 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar7;
      bVar13 = ((char)*pbVar11 < '\0') << 7 | (*pbVar11 == 0) << 6 | in_AF << 4 |
               ((POPCOUNT(*pbVar11) & 1U) == 0) << 2 | 2U | CARRY1(bVar6,bVar7);
      uVar2 = CONCAT22(uVar3,CONCAT11(bVar13,bVar7));
      bVar8 = (bVar7 - *(char *)(ulonglong)uVar2) - CARRY1(bVar6,bVar7);
      pbVar12 = (byte *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar8);
      *(longlong *)(unaff_retaddr + -8) = unaff_RSI;
      *param_4 = *param_4 + (char)unaff_retaddr + -8;
      *pbVar12 = *pbVar12 + bVar8;
      pbVar11 = pbVar12 + -0x61;
      bVar6 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar13;
      bVar7 = *pbVar12;
      *(char *)((longlong)unaff_RDI + 0x5650001e) =
           (*(char *)((longlong)unaff_RDI + 0x5650001e) + -0x4b) -
           (bVar8 < *pbVar12 || (byte)(bVar8 - bVar7) < CARRY1(bVar6,bVar13));
      *param_1 = *param_1 + ((bVar8 - bVar7) - CARRY1(bVar6,bVar13));
      pcVar10 = (char *)(unaff_retaddr + -8 + unaff_RSI);
      *pcVar10 = *pcVar10 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *param_1 = *param_1;
    *pcVar10 = *pcVar10 + bVar6;
    pbVar11 = (byte *)(pcVar10 + -0x57);
    bVar7 = *pbVar11;
    *pbVar11 = *pbVar11 + bVar6;
    pbVar11 = (byte *)(ulonglong)CONCAT31(uVar4,(bVar6 - *pcVar10) - CARRY1(bVar7,bVar6));
  }
  *param_1 = *param_1;
  bVar6 = (byte)pbVar11;
  *param_2 = *param_2 + bVar6;
  *pbVar11 = *pbVar11 + bVar6;
  *pbVar11 = *pbVar11 | bVar6;
  in((short)param_2);
  *param_1 = *param_1 + 'J';
  pbVar12 = (byte *)(CONCAT71((int7)((ulonglong)pbVar11 >> 8),bRam00000001468d61fb) | 0x4a);
  *pbVar12 = *pbVar12 << 1 | (char)*pbVar12 < '\0';
  *pbVar12 = *pbVar12 ^ (bRam00000001468d61fb | 0x4a);
  *param_1 = *param_1 + (char)((ulonglong)pbVar11 >> 8);
  *pbVar12 = *pbVar12 - (char)param_1;
  *pbVar12 = *pbVar12 + (char)((ulonglong)param_1 >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

