// Function: FUN_1404af974
// Addr: 1404af974
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af974(char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  byte bVar7;
  byte *in_RAX;
  ulonglong unaff_RBX;
  char unaff_SPL;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  char in_AF;
  char *pcVar6;
  
  bVar2 = *in_RAX;
  bVar5 = (byte)in_RAX;
  pbRam0021004af8640014 = in_RAX;
  *in_RAX = *in_RAX + bVar5;
  *unaff_RDI = *unaff_RSI;
  bVar7 = (byte)(unaff_RBX & 0xffffffff);
  bVar3 = CARRY1(bVar7,CARRY1(bVar2,bVar5));
  cVar4 = bVar7 + CARRY1(bVar2,bVar5);
  bVar7 = (cVar4 < '\0') << 7 | (cVar4 == '\0') << 6 | in_AF << 4 |
          ((POPCOUNT(cVar4) & 1U) == 0) << 2 | 2U | bVar3;
  bVar5 = cVar4 + bVar3 ^ (byte)(((ulonglong)in_RAX & 0xffffffff) >> 8);
  pcVar6 = (char *)CONCAT71((int7)(CONCAT62((int6)((unaff_RBX & 0xffffffff) >> 0x10),
                                            CONCAT11(bVar7,cVar4)) >> 8),bVar5);
  *param_1 = *param_1 + unaff_SPL;
  *pcVar6 = *pcVar6 + bVar5;
  pbVar1 = (byte *)(pcVar6 + -0x6d);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar7;
  unaff_RDI[1] = unaff_RSI[1];
  *param_1 = *param_1 +
             ((char)((ulonglong)in_RAX & 0xffffffff) + CARRY1(bVar5,CARRY1(bVar2,bVar7)) & 0xf8U);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

