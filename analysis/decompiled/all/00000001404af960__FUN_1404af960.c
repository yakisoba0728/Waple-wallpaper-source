// Function: FUN_1404af960
// Addr: 1404af960
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af960(char *param_1)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined8 in_RAX;
  undefined6 uVar9;
  char *pcVar8;
  ulonglong unaff_RBX;
  char unaff_SPL;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  byte *pbVar6;
  byte *pbVar7;
  
  uVar9 = (undefined6)((ulonglong)in_RAX >> 0x10);
  bVar3 = (char)in_RAX + in_CF;
  pbVar6 = (byte *)CONCAT71((int7)(CONCAT62(uVar9,CONCAT11(in_SF << 7 | in_ZF << 6 | in_AF << 4 |
                                                           in_PF << 2 | 2U | in_CF,(char)in_RAX)) >>
                                  8),bVar3);
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar3;
  bVar4 = bVar3 + CARRY1(bVar1,bVar3);
  pbVar7 = (byte *)CONCAT71((int7)(CONCAT62(uVar9,CONCAT11(((char)*pbVar6 < '\0') << 7 |
                                                           (*pbVar6 == 0) << 6 | in_AF << 4 |
                                                           ((POPCOUNT(*pbVar6) & 1U) == 0) << 2 | 2U
                                                           | CARRY1(bVar1,bVar3),bVar3)) >> 8),bVar4
                           );
  bVar1 = *pbVar7;
  pbRam0021004af8640014 = pbVar7;
  *pbVar7 = *pbVar7 + bVar4;
  *unaff_RDI = *unaff_RSI;
  bVar3 = (byte)(unaff_RBX & 0xffffffff);
  bVar2 = CARRY1(bVar3,CARRY1(bVar1,bVar4));
  cVar5 = bVar3 + CARRY1(bVar1,bVar4);
  bVar4 = (cVar5 < '\0') << 7 | (cVar5 == '\0') << 6 | in_AF << 4 |
          ((POPCOUNT(cVar5) & 1U) == 0) << 2 | 2U | bVar2;
  bVar3 = cVar5 + bVar2 ^ (byte)(((ulonglong)pbVar7 & 0xffffffff) >> 8);
  pcVar8 = (char *)CONCAT71((int7)(CONCAT62((int6)((unaff_RBX & 0xffffffff) >> 0x10),
                                            CONCAT11(bVar4,cVar5)) >> 8),bVar3);
  *param_1 = *param_1 + unaff_SPL;
  *pcVar8 = *pcVar8 + bVar3;
  pbVar6 = (byte *)(pcVar8 + -0x6d);
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar4;
  unaff_RDI[1] = unaff_RSI[1];
  *param_1 = *param_1 +
             ((char)((ulonglong)pbVar7 & 0xffffffff) + CARRY1(bVar3,CARRY1(bVar1,bVar4)) & 0xf8U);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

