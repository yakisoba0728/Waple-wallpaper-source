// Function: FUN_1404c73e4
// Addr: 1404c73e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c7429) overlaps instruction at (ram,0x0001404c7428)
    */

void FUN_1404c73e4(char *param_1,longlong param_2,char param_3)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  byte bVar9;
  char *in_RAX;
  byte *pbVar7;
  char *pcVar8;
  char *pcVar10;
  char cVar11;
  byte bVar13;
  longlong unaff_RBX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  char unaff_BPL;
  byte *unaff_RSI;
  char *unaff_RDI;
  char in_R10B;
  undefined7 in_register_00000091;
  char in_R11B;
  char unaff_R12B;
  undefined7 unaff_000000a1;
  longlong in_FS_OFFSET;
  bool bVar15;
  longlong lVar12;
  byte bVar14;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  pbVar7 = (byte *)((ulonglong)in_RAX & 0xffffffffffffff08);
  pbVar2 = (byte *)(CONCAT71(unaff_00000021,unaff_SPL) + param_2 * 2);
  bVar5 = *pbVar2;
  bVar9 = (byte)((ulonglong)pbVar7 >> 8);
  *pbVar2 = *pbVar2 + bVar9;
  bVar13 = (byte)pbVar7 + *pbVar7;
  bVar15 = CARRY1((byte)pbVar7,*pbVar7) || CARRY1(bVar13,CARRY1(bVar5,bVar9));
  cVar4 = bVar13 + CARRY1(bVar5,bVar9);
  bVar14 = (byte)((ulonglong)param_2 >> 8);
  bVar5 = bVar14 - param_1[param_2];
  cVar11 = (char)param_2;
  bVar13 = bVar5 - bVar15;
  lVar12 = CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(bVar13,cVar11));
  pcVar8 = (char *)CONCAT62((int6)((ulonglong)pbVar7 >> 0x10),
                            CONCAT11(bVar9 + param_1[unaff_RBX] +
                                     (bVar14 < (byte)param_1[param_2] || bVar5 < bVar15),cVar4));
  param_1[lVar12] = param_1[lVar12] | bVar13;
  pcVar1 = pcVar8 + -0x22ffd020;
  *pcVar1 = *pcVar1 + cVar11;
  pcVar10 = param_1 + -1;
  if (pcVar10 != (char *)0x0 && *pcVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(unaff_RBX + (longlong)unaff_RSI * 2);
  *pcVar1 = *pcVar1 + cVar4;
  *pcVar10 = *pcVar10 + unaff_R12B;
  *pcVar8 = *pcVar8 + cVar4;
  pcVar1 = pcVar8 + -0x22ffd020;
  *pcVar1 = *pcVar1 + cVar11;
  pcVar10 = param_1 + -2;
  if (pcVar10 == (char *)0x0 || *pcVar1 == '\0') {
    pcVar1 = (char *)(unaff_RBX + (longlong)unaff_RSI * 2);
    *pcVar1 = *pcVar1 + cVar4;
    *pcVar10 = *pcVar10 + unaff_R12B;
    *pcVar8 = *pcVar8 + (char)pcVar10;
    *pcVar8 = *pcVar8 + cVar4;
    if (*pcVar8 == '\0') {
      pcVar8 = (char *)(CONCAT71((int7)((ulonglong)pcVar8 >> 8),cVar4) ^ 0x11);
    }
    *pcVar8 = *pcVar8 + (char)pcVar8;
    uVar6 = (uint)pcVar8 | *(uint *)(pcVar8 + in_FS_OFFSET);
    pbVar7 = (byte *)(ulonglong)uVar6;
    *(char *)(lVar12 * 2) = *(char *)(lVar12 * 2) + cVar11;
    pcVar10[lVar12] = pcVar10[lVar12] + bVar13;
    pbVar2 = pbVar7 + -0x22ffd020;
    *pbVar2 = *pbVar2 + cVar11;
    param_1 = param_1 + -3;
    cVar4 = (char)(uVar6 >> 8);
    bVar5 = (byte)uVar6;
    if (param_1 == (char *)0x0 || *pbVar2 == 0) {
      pcVar1 = (char *)(unaff_RBX + (longlong)unaff_RSI * 2);
      *pcVar1 = *pcVar1 + bVar5;
      *param_1 = *param_1 + in_R11B;
      *unaff_RDI = *unaff_RDI + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar7[CONCAT71(unaff_000000a1,unaff_R12B) * 2] =
         pbVar7[CONCAT71(unaff_000000a1,unaff_R12B) * 2] + param_3;
    iVar3 = *(int *)(pbVar7 + 2);
    *pbVar7 = *pbVar7 ^ bVar5;
    *pbVar7 = *pbVar7 + cVar4;
    *unaff_RSI = *unaff_RSI >> 1;
    *pbVar7 = *pbVar7 + bVar5;
    *param_1 = *param_1 + cVar4;
    pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + (longlong)unaff_RSI * 8);
    *pcVar1 = *pcVar1 + (char)((uint)((int)lVar12 + iVar3) >> 8);
    pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + CONCAT71(unaff_000000a1,unaff_R12B) * 8);
    *pcVar1 = *pcVar1 + unaff_BPL;
    pcVar1 = (char *)(CONCAT71(unaff_000000a1,unaff_R12B) +
                     CONCAT71(in_register_00000091,in_R10B) * 8);
    *pcVar1 = *pcVar1 + unaff_SPL;
    *unaff_RDI = *unaff_RDI + in_R10B;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

