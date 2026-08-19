// Function: FUN_1404d3570
// Addr: 1404d3570
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d35f5) overlaps instruction at (ram,0x0001404d35f4)
    */

void FUN_1404d3570(byte *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint7 uVar4;
  byte bVar5;
  int iVar6;
  byte bVar9;
  byte bVar11;
  byte *in_RAX;
  char cVar10;
  undefined7 uVar12;
  char *pcVar7;
  char cVar13;
  undefined6 uVar14;
  char cVar15;
  byte bVar16;
  char cVar17;
  longlong unaff_RBP;
  byte *unaff_RSI;
  byte *pbVar8;
  
  uVar14 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar15 = (char)param_2 + *in_RAX;
  bVar9 = (byte)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX + bVar9;
  *unaff_RSI = *unaff_RSI >> 1;
  bVar1 = *in_RAX;
  bVar16 = (byte)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX + bVar16;
  bVar5 = (char)in_RAX + *in_RAX + CARRY1(bVar1,bVar16);
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar9;
  pbVar8 = (byte *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar5) * 2);
  bVar11 = *pbVar8;
  bVar2 = *pbVar8;
  *pbVar8 = bVar2 + bVar5 + CARRY1(bVar1,bVar9);
  cVar10 = bVar9 + cVar15 + (CARRY1(bVar11,bVar5) || CARRY1(bVar2 + bVar5,CARRY1(bVar1,bVar9)));
  pcVar7 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar10,bVar5));
  cVar13 = (char)param_1 + *param_3;
  uVar12 = (undefined7)((ulonglong)pcVar7 >> 8);
  if (cVar13 != '\0') {
    cVar17 = bVar16 + *pcVar7;
    pbVar8 = (byte *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar17,cVar15));
    pcVar7[-0x6fffc64b] = pcVar7[-0x6fffc64b] + cVar13;
    pcVar7 = (char *)((ulonglong)pcVar7 ^ 0x4d);
    *(char *)CONCAT62(uVar14,CONCAT11(0x39,cVar13)) =
         *(char *)CONCAT62(uVar14,CONCAT11(0x39,cVar13)) + cVar10;
    *pbVar8 = *pbVar8 | (byte)pcVar7;
    *pcVar7 = *pcVar7 + cVar13;
    cVar15 = in(0x48);
    pcVar7 = (char *)CONCAT71(uVar12,cVar15);
    cVar13 = cVar13 + pcVar7[-0x64ffc64b];
    (&stack0x0021004d)[(longlong)unaff_RSI] = (&stack0x0021004d)[(longlong)unaff_RSI] + '9';
    *pcVar7 = *pcVar7 + cVar15;
    *(char *)(unaff_RBP + -0x4a64ffc7) = cVar17;
    pcVar7 = (char *)(CONCAT71(uVar12,*unaff_RSI) ^ 0x4d);
    *(char *)CONCAT62(uVar14,CONCAT11(0x39,cVar13)) =
         *(char *)CONCAT62(uVar14,CONCAT11(0x39,cVar13)) + cVar10;
    *pcVar7 = *pcVar7 + (byte)pcVar7;
    *pcVar7 = *pcVar7 + cVar17;
    pcVar7[-0x6fffc64b] = pcVar7[-0x6fffc64b] + cVar13;
    *(byte *)CONCAT62(uVar14,CONCAT11(0x39,cVar13)) =
         *(char *)CONCAT62(uVar14,CONCAT11(0x39,cVar13)) + ((byte)pcVar7 ^ 0x4d);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = *(undefined4 *)pcVar7;
  uVar4 = (uint7)((ulonglong)param_1 >> 8);
  *(char *)((ulonglong)uVar4 << 8) = *(char *)((ulonglong)uVar4 << 8) + cVar10;
  iVar6 = (int)CONCAT71(uVar12,bVar5 | *param_3);
  pbVar8 = (byte *)(longlong)iVar6;
  *pbVar8 = *pbVar8 | bVar5 | *param_3;
  *(undefined1 *)((ulonglong)uVar4 << 8) = 0;
  *pbVar8 = *pbVar8 + (bVar16 | (byte)((uint)uVar3 >> 8));
  if ((char)*pbVar8 < '\0') {
    pbVar8 = (byte *)(ulonglong)(iVar6 + 0xcf42ffc1);
  }
  bVar1 = *(byte *)((ulonglong)uVar4 << 8);
  bVar11 = (byte)((ulonglong)pbVar8 >> 8);
  *(byte *)((ulonglong)uVar4 << 8) = *(char *)((ulonglong)uVar4 << 8) + bVar11;
  cRam00000001710a3639 =
       cRam00000001710a3639 + (char)((ulonglong)param_1 >> 8) +
       ((byte)pbVar8 < *pbVar8 || (byte)((byte)pbVar8 - *pbVar8) < CARRY1(bVar1,bVar11));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

