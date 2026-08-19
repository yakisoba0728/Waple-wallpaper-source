// Function: FUN_1404cf8d0
// Addr: 1404cf8d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cf92e) overlaps instruction at (ram,0x0001404cf92d)
    */

void FUN_1404cf8d0(char *param_1,char *param_2,byte param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint *in_RAX;
  undefined7 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte bVar10;
  byte bVar11;
  char unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *puVar12;
  undefined8 *puVar13;
  longlong unaff_RSI;
  int unaff_EDI;
  undefined4 unaff_0000003c;
  char unaff_R12B;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar14;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong auStack_28 [2];
  undefined1 auStack_18 [24];
  char *pcVar6;
  
  bVar11 = (byte)((ulonglong)param_2 >> 8);
  bVar10 = (byte)param_2;
  *in_RAX = *in_RAX & (uint)param_1;
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  pbVar9 = (byte *)(CONCAT71(uVar7,(char)in_RAX + (char)*in_RAX) + 0xd);
  *pbVar9 = *pbVar9 | unaff_BH;
  *(char *)(unaff_RSI + -0x2affc764) = *(char *)(unaff_RSI + -0x2affc764) + bVar11;
  bVar3 = in((short)param_2);
  if (SBORROW1(*(byte *)CONCAT71(uVar7,bVar3),bVar3)) {
    cVar4 = bVar3 + unaff_BH;
    pcVar6 = (char *)CONCAT71(uVar7,cVar4);
    *param_1 = *param_1 + unaff_R12B;
    *pcVar6 = *pcVar6 + cVar4;
    puVar12 = auStack_18;
    pbVar9 = (byte *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                              CONCAT11((char)((ulonglong)param_1 >> 8) + bVar10,(char)param_1));
    if (SBORROW1(*pcVar6,cVar4)) {
      do {
        pbVar8 = pbVar9;
        uVar7 = (undefined7)((ulonglong)pcVar6 >> 8);
        cVar4 = (char)pcVar6 + unaff_BH;
        pcVar6 = (char *)CONCAT71(uVar7,cVar4);
        *pbVar8 = *pbVar8 + unaff_R12B;
        *pcVar6 = *pcVar6 + cVar4;
        pbVar9 = (byte *)(unaff_RSI + -0x2affc764);
        bVar2 = *pbVar9;
        bVar3 = *pbVar9;
        *pbVar9 = *pbVar9 + bVar11;
        *(ulonglong *)(puVar12 + -8) =
             (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY1(bVar3,bVar11) * 0x800 |
             (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
             (ulonglong)((char)*pbVar9 < '\0') * 0x80 | (ulonglong)(*pbVar9 == 0) * 0x40 |
             (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(*pbVar9) & 1U) == 0) * 4 |
             (ulonglong)CARRY1(bVar2,bVar11) | (ulonglong)(in_ID & 1) * 0x200000 |
             (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
             (ulonglong)(in_AC & 1) * 0x40000;
        cVar4 = in(CONCAT11(bVar11,bVar10));
        pcVar6 = (char *)CONCAT71(uVar7,cVar4);
        bVar11 = 0x9c;
        unaff_BH = unaff_BH << 1;
        bVar3 = *pbVar8;
        *pbVar8 = *pbVar8 + param_3;
        *pcVar6 = (*pcVar6 - (char)pbVar8) - CARRY1(bVar3,param_3);
        *pcVar6 = *pcVar6 + unaff_BL;
        bVar14 = SCARRY4(iRam00000001483d0233,unaff_EDI);
        iRam00000001483d0233 = iRam00000001483d0233 + unaff_EDI;
        pbVar9 = pbVar8 + -1;
        if (pbVar9 != (byte *)0x0 && iRam00000001483d0233 != 0) {
          bVar14 = CARRY1(bVar10,pcVar6[0x21]);
          bVar10 = bVar10 + pcVar6[0x21];
          *pcVar6 = *pcVar6 - bVar14;
          pbVar1 = (byte *)(CONCAT44(unaff_0000003c,unaff_EDI) + -0x18);
          bVar14 = 99 < *pbVar1;
          *pbVar1 = *pbVar1 + 0x9c;
          break;
        }
        if (!bVar14) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar13 = (undefined8 *)(puVar12 + -0x10);
        puVar12 = puVar12 + -0x10;
        *puVar13 = pcVar6;
        *(uint *)(pcVar6 + -0x77fffe8) = *(uint *)(pcVar6 + -0x77fffe8) & (uint)pcVar6;
        bVar14 = false;
        pcVar6 = (char *)CONCAT71(uVar7,cVar4);
      } while (cVar4 != '\0');
      uVar5 = (int)CONCAT71(uVar7,cVar4) + 0x16d86e00 + (uint)bVar14;
      pcVar6 = (char *)(ulonglong)uVar5;
      pcVar6[(longlong)pbVar9 * 8 + 0x17] = pcVar6[(longlong)pbVar9 * 8 + 0x17] + unaff_BL;
      pbVar9 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x48);
      bVar3 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar10;
      cVar4 = (char)uVar5;
      *pcVar6 = (*pcVar6 - cVar4) - CARRY1(bVar3,bVar10);
      pbVar8[-0x69] = pbVar8[-0x69] + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *param_2 = *param_2 + bVar3 + (*(byte *)CONCAT71(uVar7,bVar3) < bVar3);
    pcVar6 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + 0x1a01004c + unaff_RSI * 8);
    *pcVar6 = *pcVar6 + bVar10;
  }
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + bVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

