// Function: FUN_1404c73d8
// Addr: 1404c73d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c7429) overlaps instruction at (ram,0x0001404c7428)
    */

void FUN_1404c73d8(longlong param_1,longlong param_2,char param_3)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  byte bVar9;
  undefined8 in_RAX;
  char *pcVar8;
  char *pcVar10;
  char *pcVar11;
  byte bVar12;
  byte bVar14;
  undefined6 uVar15;
  longlong unaff_RBX;
  uint unaff_ESP;
  undefined4 unaff_00000024;
  char unaff_BPL;
  byte *unaff_RSI;
  char *unaff_RDI;
  char in_R10B;
  undefined7 in_register_00000091;
  char in_R11B;
  char unaff_R12B;
  undefined7 unaff_000000a1;
  longlong in_FS_OFFSET;
  bool bVar16;
  byte *pbVar7;
  longlong lVar13;
  
  uVar15 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar12 = (byte)param_2;
  bVar14 = (byte)((ulonglong)param_2 >> 8) | *(byte *)(param_2 + -0x1ffb0ffa);
  lVar13 = CONCAT62(uVar15,CONCAT11(bVar14,bVar12));
  bVar3 = (char)in_RAX * '\x02' & bVar12;
  pbVar7 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3);
  *pbVar7 = *pbVar7 + bVar3;
  *pbVar7 = *pbVar7 + bVar3;
  *(uint *)(pbVar7 + param_1) = *(uint *)(pbVar7 + param_1) & unaff_ESP;
  pbVar1 = (byte *)(CONCAT44(unaff_00000024,unaff_ESP) + lVar13 * 2);
  bVar5 = *pbVar1;
  bVar9 = (byte)((ulonglong)in_RAX >> 8);
  *pbVar1 = *pbVar1 + bVar9;
  bVar16 = CARRY1(bVar3,*pbVar7) || CARRY1(bVar3 + *pbVar7,CARRY1(bVar5,bVar9));
  cVar4 = bVar3 + *pbVar7 + CARRY1(bVar5,bVar9);
  pbVar1 = (byte *)(lVar13 + param_1);
  bVar5 = bVar14 - *pbVar1;
  bVar3 = bVar5 - bVar16;
  lVar13 = CONCAT62(uVar15,CONCAT11(bVar3,bVar12));
  pcVar8 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11(bVar9 + *(char *)(unaff_RBX + param_1) +
                                     (bVar14 < *pbVar1 || bVar5 < bVar16),cVar4));
  *(byte *)(param_1 + lVar13) = *(byte *)(param_1 + lVar13) | bVar3;
  pcVar11 = pcVar8 + -0x22ffd020;
  *pcVar11 = *pcVar11 + bVar12;
  pcVar10 = (char *)(param_1 + -1);
  if (pcVar10 != (char *)0x0 && *pcVar11 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar11 = (char *)(unaff_RBX + (longlong)unaff_RSI * 2);
  *pcVar11 = *pcVar11 + cVar4;
  *pcVar10 = *pcVar10 + unaff_R12B;
  *pcVar8 = *pcVar8 + cVar4;
  pcVar11 = pcVar8 + -0x22ffd020;
  *pcVar11 = *pcVar11 + bVar12;
  pcVar10 = (char *)(param_1 + -2);
  if (pcVar10 == (char *)0x0 || *pcVar11 == '\0') {
    pcVar11 = (char *)(unaff_RBX + (longlong)unaff_RSI * 2);
    *pcVar11 = *pcVar11 + cVar4;
    *pcVar10 = *pcVar10 + unaff_R12B;
    *pcVar8 = *pcVar8 + (char)pcVar10;
    *pcVar8 = *pcVar8 + cVar4;
    if (*pcVar8 == '\0') {
      pcVar8 = (char *)(CONCAT71((int7)((ulonglong)pcVar8 >> 8),cVar4) ^ 0x11);
    }
    *pcVar8 = *pcVar8 + (char)pcVar8;
    uVar6 = (uint)pcVar8 | *(uint *)(pcVar8 + in_FS_OFFSET);
    pbVar7 = (byte *)(ulonglong)uVar6;
    *(char *)(lVar13 * 2) = *(char *)(lVar13 * 2) + bVar12;
    pcVar10[lVar13] = pcVar10[lVar13] + bVar3;
    pbVar1 = pbVar7 + -0x22ffd020;
    *pbVar1 = *pbVar1 + bVar12;
    pcVar11 = (char *)(param_1 + -3);
    cVar4 = (char)(uVar6 >> 8);
    bVar5 = (byte)uVar6;
    if (pcVar11 == (char *)0x0 || *pbVar1 == 0) {
      pcVar8 = (char *)(unaff_RBX + (longlong)unaff_RSI * 2);
      *pcVar8 = *pcVar8 + bVar5;
      *pcVar11 = *pcVar11 + in_R11B;
      *unaff_RDI = *unaff_RDI + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar7[CONCAT71(unaff_000000a1,unaff_R12B) * 2] =
         pbVar7[CONCAT71(unaff_000000a1,unaff_R12B) * 2] + param_3;
    iVar2 = *(int *)(pbVar7 + 2);
    *pbVar7 = *pbVar7 ^ bVar5;
    *pbVar7 = *pbVar7 + cVar4;
    *unaff_RSI = *unaff_RSI >> 1;
    *pbVar7 = *pbVar7 + bVar5;
    *pcVar11 = *pcVar11 + cVar4;
    pcVar11 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + (longlong)unaff_RSI * 8);
    *pcVar11 = *pcVar11 + (char)((uint)((int)lVar13 + iVar2) >> 8);
    pcVar11 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + CONCAT71(unaff_000000a1,unaff_R12B) * 8)
    ;
    *pcVar11 = *pcVar11 + unaff_BPL;
    pcVar11 = (char *)(CONCAT71(unaff_000000a1,unaff_R12B) +
                      CONCAT71(in_register_00000091,in_R10B) * 8);
    *pcVar11 = *pcVar11 + (char)unaff_ESP;
    *unaff_RDI = *unaff_RDI + in_R10B;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

