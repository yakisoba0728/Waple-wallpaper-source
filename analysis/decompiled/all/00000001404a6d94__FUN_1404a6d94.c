// Function: FUN_1404a6d94
// Addr: 1404a6d94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6d94(byte *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined3 uVar4;
  char cVar5;
  byte bVar6;
  char cVar11;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  uint *puVar10;
  uint uVar12;
  uint *puVar14;
  char cVar15;
  byte bVar16;
  undefined6 uVar17;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  uint *unaff_RSI;
  undefined1 *unaff_RDI;
  longlong unaff_retaddr;
  undefined1 auStackX_8 [32];
  char acStack_8 [8];
  byte *pbVar13;
  
  uVar17 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar15 = (char)param_2;
  *param_1 = *param_1 >> 1 | *param_1 << 7;
  pcVar9 = (char *)(unaff_retaddr + 0xa210049 + unaff_RBP * 8);
  *pcVar9 = *pcVar9 + (char)((ulonglong)unaff_retaddr >> 8);
  bVar16 = (byte)((ulonglong)param_2 >> 8) |
           *(byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_retaddr);
  iVar7 = (int)unaff_retaddr + -0x3ffffdcc;
  *param_1 = *param_1 >> 1 | *param_1 << 7;
  uVar3 = (undefined2)((uint)iVar7 >> 0x10);
  cVar5 = (char)iVar7;
  cVar11 = (char)((uint)iVar7 >> 8) + bVar16;
  pcVar9 = (char *)(ulonglong)CONCAT22(uVar3,CONCAT11(cVar11,cVar5));
  *param_1 = *param_1 >> 1 | *param_1 << 7;
  *pcVar9 = *pcVar9 + unaff_BH;
  uVar1 = in(CONCAT11(bVar16,cVar15));
  *unaff_RDI = uVar1;
  *param_1 = *param_1 + (char)auStackX_8;
  *pcVar9 = *pcVar9 + cVar5;
  *param_1 = *param_1 >> 1 | *param_1 << 7;
  uVar8 = CONCAT22(uVar3,CONCAT11(cVar11 + bVar16,cVar5 * '\x02'));
  *param_1 = *param_1 >> 1 | *param_1 << 7;
  *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + unaff_BH;
  uVar1 = in(CONCAT11(bVar16,cVar15));
  unaff_RDI[1] = uVar1;
  *param_1 = *param_1 + (char)auStackX_8;
  uVar8 = uVar8 + 0x74050002;
  uVar8 = CONCAT31((int3)(uVar8 >> 8),(char)uVar8 + *(char *)(ulonglong)uVar8);
  cVar15 = cVar15 * '\x02';
  *(uint *)(ulonglong)uVar8 = *(uint *)(ulonglong)uVar8 | uVar8;
  uVar8 = uVar8 ^ 0x9d2;
  pcVar9 = (char *)(ulonglong)uVar8;
  bVar6 = (byte)(uVar8 >> 8);
  *param_1 = *param_1 + bVar6;
  *pcVar9 = *pcVar9 + (char)uVar8;
  *pcVar9 = *pcVar9 + (char)uVar8;
  bVar2 = (byte)param_1 & 7;
  *param_1 = *param_1 >> bVar2 | *param_1 << 8 - bVar2;
  UNK_1404a77b7 = UNK_1404a77b7 + bVar16;
  acStack_8[0] = 'J';
  acStack_8[1] = '\0';
  acStack_8[2] = '\0';
  acStack_8[3] = '\0';
  acStack_8[4] = '\0';
  acStack_8[5] = '\0';
  acStack_8[6] = '\0';
  acStack_8[7] = '\0';
  bVar2 = *param_1;
  *param_1 = *param_1 + bVar6;
  uVar8 = uVar8 + CARRY1(bVar2,bVar6) + 0xf8f90a06;
  pcVar9 = (char *)(ulonglong)uVar8;
  cVar5 = (char)uVar8;
  cRam00000000d04a712d = cRam00000000d04a712d + cVar5;
  bVar2 = (byte)param_1 & 7;
  *param_1 = *param_1 >> bVar2 | *param_1 << 8 - bVar2;
  unaff_RDI[-0x37fff62c] = unaff_RDI[-0x37fff62c] + unaff_BH;
  uVar12 = *(int *)CONCAT62(uVar17,CONCAT11(bVar16,cVar15)) * 0x21;
  pbVar13 = (byte *)(ulonglong)uVar12;
  *pcVar9 = *pcVar9 + cVar5;
  pcVar9[-0x40fff62e] = pcVar9[-0x40fff62e] + cVar15;
  bVar6 = (byte)uVar12;
  bVar2 = bVar6 & 7;
  *pbVar13 = *pbVar13 >> bVar2 | *pbVar13 << 8 - bVar2;
  uVar4 = (undefined3)(uVar8 >> 8);
  bVar6 = cVar5 + bVar6;
  uVar12 = *(int *)CONCAT62(uVar17,CONCAT11(bVar16,cVar15)) * 0x21;
  puVar14 = (uint *)(ulonglong)uVar12;
  uVar8 = CONCAT31(uVar4,bVar6 | *(byte *)((ulonglong)CONCAT31(uVar4,bVar6) * 2));
  bVar2 = *(byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (ulonglong)uVar8);
  uVar8 = uVar8 + 0xd0000234;
  puVar10 = (uint *)(ulonglong)uVar8;
  bVar6 = (byte)uVar12 & 0x1f;
  *puVar14 = *puVar14 >> bVar6 | *puVar14 << 0x20 - bVar6;
  cVar5 = (char)uVar8;
  acStack_8[CONCAT62(uVar17,CONCAT11(bVar16 | bVar2,cVar15)) * 8] =
       acStack_8[CONCAT62(uVar17,CONCAT11(bVar16 | bVar2,cVar15)) * 8] + cVar5;
  *puVar10 = *puVar10 | uVar8;
  *puVar10 = *puVar10 & uVar8;
  *(char *)puVar10 = (char)*puVar10 + cVar5;
  *puVar10 = *puVar10 | uVar8;
  uVar8 = CONCAT31((int3)(uVar8 >> 8),cVar5 + -0x2c);
  *(uint *)(ulonglong)uVar8 = *(uint *)(ulonglong)uVar8 | uVar8;
  *unaff_RSI = *unaff_RSI & uVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

