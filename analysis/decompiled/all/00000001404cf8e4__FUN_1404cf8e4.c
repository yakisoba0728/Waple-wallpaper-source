// Function: FUN_1404cf8e4
// Addr: 1404cf8e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cf92e) overlaps instruction at (ram,0x0001404cf92d)
    */

void FUN_1404cf8e4(undefined8 param_1,char *param_2,byte param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint *in_RAX;
  undefined7 uVar8;
  char *pcVar7;
  byte bVar10;
  char cVar11;
  undefined6 uVar12;
  byte *pbVar9;
  byte bVar13;
  byte bVar14;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *puVar15;
  undefined8 *puVar16;
  longlong unaff_RSI;
  int unaff_EDI;
  undefined4 unaff_0000003c;
  char unaff_R12B;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar17;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong auStack_20 [2];
  undefined1 auStack_10 [16];
  byte *pbVar5;
  char *pcVar6;
  
  bVar14 = (byte)((ulonglong)param_2 >> 8);
  bVar13 = (byte)param_2;
  *in_RAX = *in_RAX & (uint)param_1;
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar2 = (char)in_RAX + (char)*in_RAX;
  pbVar5 = (byte *)CONCAT71(uVar8,bVar2);
  pbVar9 = pbVar5 + 0xe;
  bVar10 = (byte)((ulonglong)param_1 >> 8);
  *pbVar9 = *pbVar9 | bVar10;
  uVar12 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar11 = bVar10 + bVar13;
  pcVar7 = (char *)CONCAT62(uVar12,CONCAT11(cVar11,(char)param_1));
  bVar10 = *pbVar5;
  if (SBORROW1(bVar10,bVar2)) {
    cVar3 = bVar2 + unaff_BH;
    pcVar6 = (char *)CONCAT71(uVar8,cVar3);
    *pcVar7 = *pcVar7 + unaff_R12B;
    *pcVar6 = *pcVar6 + cVar3;
    puVar15 = auStack_10;
    pbVar9 = (byte *)CONCAT62(uVar12,CONCAT11(cVar11 + bVar13,(char)param_1));
    if (SBORROW1(*pcVar6,cVar3)) {
      do {
        pbVar5 = pbVar9;
        uVar8 = (undefined7)((ulonglong)pcVar6 >> 8);
        cVar11 = (char)pcVar6 + unaff_BH;
        pcVar7 = (char *)CONCAT71(uVar8,cVar11);
        *pbVar5 = *pbVar5 + unaff_R12B;
        *pcVar7 = *pcVar7 + cVar11;
        pbVar9 = (byte *)(unaff_RSI + -0x2affc764);
        bVar2 = *pbVar9;
        bVar10 = *pbVar9;
        *pbVar9 = *pbVar9 + bVar14;
        *(ulonglong *)(puVar15 + -8) =
             (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY1(bVar10,bVar14) * 0x800 |
             (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
             (ulonglong)((char)*pbVar9 < '\0') * 0x80 | (ulonglong)(*pbVar9 == 0) * 0x40 |
             (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(*pbVar9) & 1U) == 0) * 4 |
             (ulonglong)CARRY1(bVar2,bVar14) | (ulonglong)(in_ID & 1) * 0x200000 |
             (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
             (ulonglong)(in_AC & 1) * 0x40000;
        cVar11 = in(CONCAT11(bVar14,bVar13));
        pcVar7 = (char *)CONCAT71(uVar8,cVar11);
        bVar14 = 0x9c;
        unaff_BH = unaff_BH << 1;
        bVar10 = *pbVar5;
        *pbVar5 = *pbVar5 + param_3;
        *pcVar7 = (*pcVar7 - (char)pbVar5) - CARRY1(bVar10,param_3);
        *pcVar7 = *pcVar7 + unaff_BL;
        bVar17 = SCARRY4(iRam00000001483d0233,unaff_EDI);
        iRam00000001483d0233 = iRam00000001483d0233 + unaff_EDI;
        pbVar9 = pbVar5 + -1;
        if (pbVar9 != (byte *)0x0 && iRam00000001483d0233 != 0) {
          bVar17 = CARRY1(bVar13,pcVar7[0x21]);
          bVar13 = bVar13 + pcVar7[0x21];
          *pcVar7 = *pcVar7 - bVar17;
          pbVar1 = (byte *)(CONCAT44(unaff_0000003c,unaff_EDI) + -0x18);
          bVar17 = 99 < *pbVar1;
          *pbVar1 = *pbVar1 + 0x9c;
          break;
        }
        if (!bVar17) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar16 = (undefined8 *)(puVar15 + -0x10);
        puVar15 = puVar15 + -0x10;
        *puVar16 = pcVar7;
        *(uint *)(pcVar7 + -0x77fffe8) = *(uint *)(pcVar7 + -0x77fffe8) & (uint)pcVar7;
        bVar17 = false;
        pcVar6 = (char *)CONCAT71(uVar8,cVar11);
      } while (cVar11 != '\0');
      uVar4 = (int)CONCAT71(uVar8,cVar11) + 0x16d86e00 + (uint)bVar17;
      pcVar7 = (char *)(ulonglong)uVar4;
      pcVar7[(longlong)pbVar9 * 8 + 0x17] = pcVar7[(longlong)pbVar9 * 8 + 0x17] + unaff_BL;
      pbVar9 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x48);
      bVar10 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar13;
      cVar11 = (char)uVar4;
      *pcVar7 = (*pcVar7 - cVar11) - CARRY1(bVar10,bVar13);
      pbVar5[-0x69] = pbVar5[-0x69] + cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *param_2 = *param_2 + bVar2 + (bVar10 < bVar2);
    pcVar7 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + 0x1a01004c + unaff_RSI * 8);
    *pcVar7 = *pcVar7 + bVar13;
  }
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + bVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

