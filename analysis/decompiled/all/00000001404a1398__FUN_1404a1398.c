// Function: FUN_1404a1398
// Addr: 1404a1398
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a139d) overlaps instruction at (ram,0x0001404a139c)
    */

void FUN_1404a1398(uint param_1,longlong param_2)

{
  byte *pbVar1;
  char unaff_00089100;
  undefined1 *unaff_0008f000;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  uint *puVar9;
  uint *in_RAX;
  undefined7 uVar10;
  char cVar11;
  byte bVar12;
  undefined6 uVar13;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  ulonglong uVar14;
  undefined1 *puVar15;
  undefined8 *unaff_RBP;
  uint unaff_ESI;
  bool bVar17;
  undefined1 auStack_10 [8];
  byte abStack_8 [8];
  undefined8 *puVar16;
  
  uVar13 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar12 = (byte)((ulonglong)param_2 >> 8);
  cVar11 = (char)param_2;
  *in_RAX = *in_RAX & param_1;
  uVar10 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar3 = (char)in_RAX + (char)*in_RAX;
  puVar9 = (uint *)CONCAT71(uVar10,cVar3);
  pbVar1 = (byte *)((longlong)unaff_RBP + param_2);
  *pbVar1 = *pbVar1 | bVar12;
  if ((POPCOUNT(*pbVar1) & 1U) != 0) {
    pcVar7 = (char *)(CONCAT71(uVar10,cVar3 + (byte)*puVar9) | 0xf2);
    cVar11 = cVar11 + pcVar7[0x21];
    *(byte *)CONCAT62(uVar13,CONCAT11(bVar12,cVar11)) =
         *(byte *)CONCAT62(uVar13,CONCAT11(bVar12,cVar11)) | (byte)pcVar7;
    *pcVar7 = *pcVar7 + (char)param_1;
    piVar8 = (int *)(CONCAT71(uVar10,(byte)pcVar7) ^ 0x13);
    *(char *)(piVar8 + -0xe) = (char)piVar8[-0xe] + (char)piVar8;
    uVar6 = (int)piVar8 + *piVar8;
    abStack_8[0] = 200;
    abStack_8[1] = 0xff;
    abStack_8[2] = 0xff;
    abStack_8[3] = 0xff;
    abStack_8[4] = 0xff;
    abStack_8[5] = 0xff;
    abStack_8[6] = 0xff;
    abStack_8[7] = 0xff;
    iVar4 = uVar6 + *(uint *)(ulonglong)uVar6;
    puVar9 = (uint *)(ulonglong)(uint)(int)(short)iVar4;
    param_1 = CONCAT31((int3)(param_1 >> 8),
                       (char)param_1 + *(char *)CONCAT62(uVar13,CONCAT11(bVar12,cVar11)) +
                       CARRY4(uVar6,*(uint *)(ulonglong)uVar6));
    *puVar9 = *puVar9 & param_1;
    bVar2 = (byte)((uint)iVar4 >> 8);
    uVar6 = CONCAT31((int3)(char)bVar2,(char)iVar4 + (char)*puVar9);
    abStack_8[CONCAT62(uVar13,CONCAT11(bVar12,cVar11))] =
         abStack_8[CONCAT62(uVar13,CONCAT11(bVar12,cVar11))] | bVar2;
    puVar15 = auStack_10;
    register0x00000020 = (BADSPACEBASE *)auStack_10;
    uVar6 = uVar6 + *(int *)(ulonglong)uVar6;
    if ((POPCOUNT(uVar6 & 0xff) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar9 = (uint *)(ulonglong)
                     CONCAT31((int3)(uVar6 + *(int *)(ulonglong)uVar6 >> 8),uRam0800020821004a12);
    if (uVar6 + *(int *)(ulonglong)uVar6 == 0) {
      bVar17 = CARRY1(bVar12,(byte)*puVar9);
      bVar12 = bVar12 + (byte)*puVar9;
      goto code_r0x0001404a13a5;
    }
    pcVar7 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x38);
    *pcVar7 = *pcVar7 + unaff_BH;
  }
  uVar5 = (uint)puVar9;
  bVar17 = CARRY4(uVar5,*puVar9);
  uVar6 = *puVar9;
  puVar9 = (uint *)((ulonglong)register0x00000020 & 0xffffffff);
  uVar14 = (ulonglong)(uVar5 + uVar6);
  unaff_00089100 = '\x14';
  puVar15 = (undefined1 *)(uVar14 - 8);
  unaff_0008f000 = (undefined1 *)(uVar14 - 8);
  puVar16 = (undefined8 *)(uVar14 - 8);
  *(undefined8 **)(uVar14 - 8) = unaff_RBP;
  cVar3 = '\x13';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar16 = puVar16 + -1;
    *puVar16 = *unaff_RBP;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
code_r0x0001404a13a5:
  *(undefined1 **)(puVar15 + (ulonglong)(byte)(unaff_00089100 - 1) * -8 + -8) = unaff_0008f000;
  *puVar9 = *puVar9 + CONCAT31((int3)(param_1 >> 8),
                               (char)param_1 + *(char *)CONCAT62(uVar13,CONCAT11(bVar12,cVar11)) +
                               bVar17);
  uVar6 = (int)puVar9 + *puVar9;
  pbVar1 = (byte *)(CONCAT62(uVar13,CONCAT11(bVar12,cVar11)) + 0x3002d004);
  *pbVar1 = *pbVar1 | (byte)(uVar6 >> 8);
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

