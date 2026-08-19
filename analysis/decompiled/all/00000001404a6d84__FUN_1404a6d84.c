// Function: FUN_1404a6d84
// Addr: 1404a6d84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6d84(byte *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined3 uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  char cVar10;
  uint *puVar8;
  char *pcVar9;
  uint uVar11;
  uint *puVar13;
  byte bVar14;
  byte bVar15;
  undefined6 uVar16;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  uint *unaff_RSI;
  undefined1 *unaff_RDI;
  char *unaff_retaddr;
  longlong lStackX_8;
  undefined1 auStackX_10 [24];
  byte *pbVar12;
  
  uVar16 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar14 = (byte)param_2;
  *param_1 = *param_1 >> 1 | *param_1 << 7;
  unaff_retaddr[unaff_RBP * 8 + 0x210049] =
       unaff_retaddr[unaff_RBP * 8 + 0x210049] + (char)((ulonglong)unaff_retaddr >> 8);
  *unaff_retaddr = *unaff_retaddr + (byte)unaff_retaddr;
  puVar8 = (uint *)CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),(byte)unaff_retaddr ^ bVar14);
  *puVar8 = *puVar8 | (uint)puVar8;
  *param_1 = *param_1 >> 1 | *param_1 << 7;
  pcVar9 = (char *)(lStackX_8 + 0xa210049 + unaff_RBP * 8);
  *pcVar9 = *pcVar9 + (char)((ulonglong)lStackX_8 >> 8);
  bVar15 = (byte)((ulonglong)param_2 >> 8) |
           *(byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + lStackX_8);
  iVar6 = (int)lStackX_8 + -0x3ffffdcc;
  *param_1 = *param_1 >> 1 | *param_1 << 7;
  uVar2 = (undefined2)((uint)iVar6 >> 0x10);
  cVar4 = (char)iVar6;
  cVar10 = (char)((uint)iVar6 >> 8) + bVar15;
  pcVar9 = (char *)(ulonglong)CONCAT22(uVar2,CONCAT11(cVar10,cVar4));
  *param_1 = *param_1 >> 1 | *param_1 << 7;
  *pcVar9 = *pcVar9 + unaff_BH;
  uVar1 = in(CONCAT11(bVar15,bVar14));
  *unaff_RDI = uVar1;
  *param_1 = *param_1 + (char)auStackX_10;
  *pcVar9 = *pcVar9 + cVar4;
  *param_1 = *param_1 >> 1 | *param_1 << 7;
  uVar7 = CONCAT22(uVar2,CONCAT11(cVar10 + bVar15,cVar4 * '\x02'));
  *param_1 = *param_1 >> 1 | *param_1 << 7;
  *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + unaff_BH;
  uVar1 = in(CONCAT11(bVar15,bVar14));
  unaff_RDI[1] = uVar1;
  *param_1 = *param_1 + (char)auStackX_10;
  uVar7 = uVar7 + 0x74050002;
  uVar7 = CONCAT31((int3)(uVar7 >> 8),(char)uVar7 + *(char *)(ulonglong)uVar7);
  cVar4 = bVar14 * '\x02';
  *(uint *)(ulonglong)uVar7 = *(uint *)(ulonglong)uVar7 | uVar7;
  uVar7 = uVar7 ^ 0x9d2;
  pcVar9 = (char *)(ulonglong)uVar7;
  bVar5 = (byte)(uVar7 >> 8);
  *param_1 = *param_1 + bVar5;
  *pcVar9 = *pcVar9 + (char)uVar7;
  *pcVar9 = *pcVar9 + (char)uVar7;
  bVar14 = (byte)param_1 & 7;
  *param_1 = *param_1 >> bVar14 | *param_1 << 8 - bVar14;
  UNK_1404a77b7 = UNK_1404a77b7 + bVar15;
  bVar14 = *param_1;
  *param_1 = *param_1 + bVar5;
  uVar7 = uVar7 + CARRY1(bVar14,bVar5) + 0xf8f90a06;
  pcVar9 = (char *)(ulonglong)uVar7;
  cVar10 = (char)uVar7;
  cRam00000000d04a712d = cRam00000000d04a712d + cVar10;
  bVar14 = (byte)param_1 & 7;
  *param_1 = *param_1 >> bVar14 | *param_1 << 8 - bVar14;
  unaff_RDI[-0x37fff62c] = unaff_RDI[-0x37fff62c] + unaff_BH;
  uVar11 = *(int *)CONCAT62(uVar16,CONCAT11(bVar15,cVar4)) * 0x21;
  pbVar12 = (byte *)(ulonglong)uVar11;
  *pcVar9 = *pcVar9 + cVar10;
  pcVar9[-0x40fff62e] = pcVar9[-0x40fff62e] + cVar4;
  bVar5 = (byte)uVar11;
  bVar14 = bVar5 & 7;
  *pbVar12 = *pbVar12 >> bVar14 | *pbVar12 << 8 - bVar14;
  uVar3 = (undefined3)(uVar7 >> 8);
  bVar5 = cVar10 + bVar5;
  uVar11 = *(int *)CONCAT62(uVar16,CONCAT11(bVar15,cVar4)) * 0x21;
  puVar13 = (uint *)(ulonglong)uVar11;
  uVar7 = CONCAT31(uVar3,bVar5 | *(byte *)((ulonglong)CONCAT31(uVar3,bVar5) * 2));
  bVar14 = *(byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (ulonglong)uVar7);
  uVar7 = uVar7 + 0xd0000234;
  puVar8 = (uint *)(ulonglong)uVar7;
  bVar5 = (byte)uVar11 & 0x1f;
  *puVar13 = *puVar13 >> bVar5 | *puVar13 << 0x20 - bVar5;
  cVar10 = (char)uVar7;
  auStackX_10[CONCAT62(uVar16,CONCAT11(bVar15 | bVar14,cVar4)) * 8 + -0x10] =
       auStackX_10[CONCAT62(uVar16,CONCAT11(bVar15 | bVar14,cVar4)) * 8 + -0x10] + cVar10;
  *puVar8 = *puVar8 | uVar7;
  *puVar8 = *puVar8 & uVar7;
  *(char *)puVar8 = (char)*puVar8 + cVar10;
  *puVar8 = *puVar8 | uVar7;
  uVar7 = CONCAT31((int3)(uVar7 >> 8),cVar10 + -0x2c);
  *(uint *)(ulonglong)uVar7 = *(uint *)(ulonglong)uVar7 | uVar7;
  *unaff_RSI = *unaff_RSI & uVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

