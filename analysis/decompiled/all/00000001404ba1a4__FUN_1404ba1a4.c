// Function: FUN_1404ba1a4
// Addr: 1404ba1a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ba203) overlaps instruction at (ram,0x0001404ba201)
    */

void FUN_1404ba1a4(char *param_1,byte *param_2)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  char cVar8;
  undefined8 in_RAX;
  undefined7 uVar9;
  byte *pbVar7;
  undefined1 uVar10;
  byte bVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  byte bVar14;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RSI;
  undefined1 *puVar15;
  longlong unaff_RDI;
  bool bVar16;
  char *pcVar6;
  
  bVar14 = (byte)param_2;
  uVar13 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar12 = (undefined2)((ulonglong)param_1 >> 0x10);
  uVar10 = SUB81(param_1,0);
  bVar3 = (byte)((ulonglong)in_RAX >> 8);
  cVar2 = (char)in_RAX;
  cVar8 = bVar3 + bVar14;
  pcVar6 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar8,cVar2));
  *pcVar6 = (*pcVar6 - cVar2) - CARRY1(bVar3,bVar14);
  param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] =
       param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] + cVar8;
  *param_1 = *param_1 + (char)((ulonglong)param_2 >> 8);
  uVar9 = (undefined7)((ulonglong)pcVar6 >> 8);
  bVar3 = cVar2 + cVar8;
  *param_2 = *param_2 + unaff_BH;
  pbVar7 = (byte *)CONCAT71(uVar9,bVar3);
  bVar11 = (byte)((ulonglong)param_1 >> 8) | pbVar7[4];
  bVar16 = CARRY1(bRam00000001804badfd,bVar3);
  bRam00000001804badfd = bRam00000001804badfd + bVar3;
  puVar15 = unaff_RSI;
  if (bVar16 || bRam00000001804badfd == '\0') {
    unaff_RSI[0x77] = unaff_RSI[0x77] + bVar11;
    *pbVar7 = *pbVar7 & bVar3;
    param_2[CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,uVar10))) * 2 + 0x2002100] =
         param_2[CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,uVar10))) * 2 + 0x2002100];
    pbVar7[4] = pbVar7[4] + bVar11;
    pbVar7[0x77] = pbVar7[0x77] + bVar3;
    *pbVar7 = *pbVar7 & bVar3;
    puVar15 = unaff_RSI + 1;
    out(*unaff_RSI,(short)param_2);
    if (*pbVar7 == 0) {
      pbVar7[0x21004ab4] = pbVar7[0x21004ab4] + bVar3;
      *pbVar7 = *pbVar7 + bVar3;
      goto code_r0x0001404ba1eb;
    }
    *(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,uVar10))) =
         *(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,uVar10))) + cVar8;
  }
  else {
code_r0x0001404ba1eb:
    pbVar7[0x77] = pbVar7[0x77] + bVar3;
    *pbVar7 = *pbVar7 & bVar3;
    out(*puVar15,(short)param_2);
    if (*pbVar7 != 0) goto code_r0x0001404ba213;
    pbVar7[0x1004ab4] = pbVar7[0x1004ab4] + bVar3;
    unaff_BH = unaff_BH + bVar11;
    uRamfffffffffffffff8 = 0xffffffffd8210013;
  }
  uVar5 = (uint)CONCAT71(uVar9,bVar3) |
          *(uint *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,uVar10)));
  bVar3 = ((char)uVar5 - *(char *)(ulonglong)uVar5) + 0x70;
  pbVar7 = (byte *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),bVar3);
  *pbVar7 = *pbVar7 ^ bVar3;
code_r0x0001404ba213:
  *(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,uVar10))) =
       *(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,uVar10))) +
       (char)((ulonglong)pbVar7 >> 8);
  uVar1 = (short)pbVar7 - 10;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BL;
  bVar3 = *param_2;
  *param_2 = *param_2 + bVar14;
  pbVar7 = (byte *)(ulonglong)(uint)(int)(short)(uVar1 | 0x2400);
  bVar4 = (byte)uVar1;
  *pbVar7 = *pbVar7 + bVar4 + CARRY1(bVar3,bVar14);
  *(uint *)(pbVar7 + 0x7b500011) =
       *(uint *)(pbVar7 + 0x7b500011) | CONCAT22(uVar12,CONCAT11(bVar11,uVar10));
  *pbVar7 = *pbVar7 & bVar4;
  if (-1 < (char)*pbVar7) {
    *pbVar7 = *pbVar7 + bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RDI + 0x7c) = *(char *)(unaff_RDI + 0x7c) + bVar4;
  *pbVar7 = *pbVar7 & bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

