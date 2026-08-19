// Function: FUN_1404af94c
// Addr: 1404af94c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af94c(char *param_1)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte bVar9;
  longlong in_RAX;
  ulonglong uVar7;
  byte bVar10;
  char *pcVar8;
  undefined8 unaff_RBX;
  uint unaff_ESP;
  longlong unaff_RBP;
  byte *unaff_RSI;
  undefined4 *unaff_RDI;
  char in_AF;
  byte *pbVar6;
  
  *(uint *)(param_1 + in_RAX) = *(uint *)(param_1 + in_RAX) & unaff_ESP;
  pcVar8 = (char *)(in_RAX + unaff_RBP * 8);
  *pcVar8 = *pcVar8 + (char)((ulonglong)in_RAX >> 8);
  bVar10 = (byte)in_RAX;
  bVar1 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + bVar10;
  bVar3 = CARRY1(bVar1,bVar10) + 7;
  pbVar6 = (byte *)CONCAT71(0x9f4200,bVar3);
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar3;
  bVar9 = ((char)*pbVar6 < '\0') << 7 | (*pbVar6 == 0) << 6 | in_AF << 4 |
          ((POPCOUNT(*pbVar6) & 1U) == 0) << 2 | 2U | CARRY1(bVar1,bVar3);
  bVar4 = bVar3 + CARRY1(bVar1,bVar3);
  pbRam0021004af8640014 =
       (byte *)CONCAT71((int7)(CONCAT62(0x9f42,CONCAT11(bVar9,bVar3)) >> 8),bVar4);
  bVar1 = *pbRam0021004af8640014;
  *pbRam0021004af8640014 = *pbRam0021004af8640014 + bVar4;
  *unaff_RDI = *(undefined4 *)unaff_RSI;
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)unaff_RBX - bVar10) & 0xffffffff;
  bVar10 = (byte)uVar7;
  bVar2 = CARRY1(bVar10,CARRY1(bVar1,bVar4));
  cVar5 = bVar10 + CARRY1(bVar1,bVar4);
  bVar10 = (cVar5 < '\0') << 7 | (cVar5 == '\0') << 6 | in_AF << 4 |
           ((POPCOUNT(cVar5) & 1U) == 0) << 2 | 2U | bVar2;
  bVar9 = cVar5 + bVar2 ^ bVar9;
  pcVar8 = (char *)CONCAT71((int7)(CONCAT62((int6)(uVar7 >> 0x10),CONCAT11(bVar10,cVar5)) >> 8),
                            bVar9);
  *param_1 = *param_1 + (char)unaff_ESP;
  *pcVar8 = *pcVar8 + bVar9;
  pbVar6 = (byte *)(pcVar8 + -0x6d);
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar10;
  unaff_RDI[1] = *(undefined4 *)(unaff_RSI + 4);
  *param_1 = *param_1 + (bVar4 + CARRY1(bVar9,CARRY1(bVar1,bVar10)) & 0xf8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

