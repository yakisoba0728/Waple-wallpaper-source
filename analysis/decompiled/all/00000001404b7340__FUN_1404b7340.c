// Function: FUN_1404b7340
// Addr: 1404b7340
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b7390) overlaps instruction at (ram,0x0001404b738f)
    */

void FUN_1404b7340(undefined8 param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  byte bVar9;
  char cVar11;
  int in_EAX;
  uint uVar4;
  byte *pbVar6;
  byte bVar10;
  char *pcVar7;
  char *pcVar8;
  longlong lVar12;
  char *pcVar13;
  byte bVar15;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  longlong unaff_RSI;
  byte in_CF;
  bool bVar16;
  uint *puVar5;
  char cVar14;
  
  uVar4 = in_EAX + (int)param_2 + (uint)in_CF;
  puVar5 = (uint *)(ulonglong)uVar4;
  lVar12 = CONCAT71((int7)((ulonglong)param_1 >> 8),cRam000000014b7b7fb9);
  cRam000000014b7b7fb9 = cRam000000014b7b7fb9 + (char)param_1;
  *(char *)puVar5 = (char)*puVar5 + (char)uVar4;
  *puVar5 = *puVar5 & (uint)lVar12;
  cVar2 = (char)uVar4 + (char)*puVar5;
  uVar4 = CONCAT31((int3)(CONCAT22((short)(uVar4 >> 0x10),CONCAT11((char)(uVar4 >> 8),cVar2)) >> 8),
                   cVar2);
  pcVar13 = (char *)(lVar12 + -1);
  cVar14 = (char)((ulonglong)pcVar13 >> 8);
  if (pcVar13 == (char *)0x0 || cVar2 == '\0') {
    uVar4 = uVar4 + 0xe2c40400;
    pcVar7 = (char *)((ulonglong)uVar4 + 0x72);
    *pcVar7 = *pcVar7 + cVar14;
    bVar10 = *param_4;
    *param_4 = *param_4 - 8;
    pbVar1 = (byte *)((ulonglong)uVar4 * 2);
    bVar3 = (byte)uVar4;
    bVar16 = CARRY1(*pbVar1,bVar3) || CARRY1(*pbVar1 + bVar3,7 < bVar10);
    *pbVar1 = *pbVar1 + bVar3 + (7 < bVar10);
    bVar9 = (byte)(uVar4 >> 8);
    bVar15 = (byte)((ulonglong)param_2 >> 8);
    bVar10 = bVar9 + bVar15;
    uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(bVar10 + bVar16,bVar3));
    uVar4 = (uVar4 - *(int *)(ulonglong)uVar4) -
            (uint)(CARRY1(bVar9,bVar15) || CARRY1(bVar10,bVar16));
    pbVar6 = (byte *)(ulonglong)uVar4;
    pbVar1 = (byte *)(unaff_RBP +
                     CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))));
    bVar10 = (byte)(uVar4 >> 8);
    *pbVar1 = *pbVar1 | bVar10;
    param_2[unaff_RSI * 2 + 0x4b] = param_2[unaff_RSI * 2 + 0x4b] + unaff_BH;
    *pcVar13 = *pcVar13 + bVar10;
    *param_2 = *param_2 | (byte)uVar4;
    bVar10 = *pbVar6;
    *pbVar6 = *pbVar6 + (byte)pcVar13;
    uVar4 = (uVar4 + 0xe2bf8400) - (uint)CARRY1(bVar10,(byte)pcVar13);
    pcVar7 = (char *)(ulonglong)uVar4;
    bVar3 = (byte)param_2;
    pcVar7[0x21004b72] = pcVar7[0x21004b72] + bVar3;
    *pcVar7 = *pcVar7 + (char)uVar4;
    pbVar1 = param_2 + 0x7c001d3c;
    bVar10 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar3;
    uVar4 = (uVar4 + 0xb48d7000) - (uint)CARRY1(bVar10,bVar3);
    pcVar8 = (char *)(ulonglong)uVar4;
    *pcVar13 = *pcVar13 + (char)(uVar4 >> 8);
  }
  else {
    pcVar8 = (char *)((ulonglong)param_2 & 0xffffffff);
    param_2 = (byte *)(ulonglong)uVar4;
    pcVar7 = (char *)((longlong)pcVar8 * 3 + 0x1d);
    *pcVar7 = *pcVar7 + unaff_BH;
    pcVar8[0x21004b72] = pcVar8[0x21004b72] + cVar2;
  }
  cVar2 = (char)pcVar8;
  *pcVar8 = *pcVar8 + cVar2;
  cVar11 = (char)((ulonglong)pcVar8 >> 8) + unaff_BH;
  pcVar7 = (char *)CONCAT62((int6)((ulonglong)pcVar8 >> 0x10),CONCAT11(cVar11,cVar2));
  param_2[unaff_RSI * 2 + 0x4b] = param_2[unaff_RSI * 2 + 0x4b] + unaff_BH;
  *pcVar13 = *pcVar13 + cVar11;
  *param_2 = *param_2 + cVar2;
  *pcVar7 = *pcVar7 + cVar2;
  cVar2 = in(0x1c);
  pcVar13 = (char *)(CONCAT71((int7)((ulonglong)pcVar7 >> 8),cVar2 + cVar11) + 0x72);
  *pcVar13 = *pcVar13 + cVar14;
  *param_4 = *param_4 + cVar2 + cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

