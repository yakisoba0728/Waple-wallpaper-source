// Function: FUN_1404a1370
// Addr: 1404a1370
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a13b4) overlaps instruction at (ram,0x0001404a13b0)
    */

void FUN_1404a1370(uint param_1,char *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  char unaff_00089100;
  undefined1 *unaff_0008f000;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint *in_RAX;
  uint *puVar10;
  undefined3 uVar11;
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
  int *piVar9;
  undefined8 *puVar16;
  
  uVar13 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar12 = (byte)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & param_1;
  cVar6 = (char)in_RAX + (char)*in_RAX;
  piVar9 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar6);
  param_2[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] =
       param_2[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] | bVar12;
  *(char *)(piVar9 + -0xe) = (char)piVar9[-0xe] + cVar6;
  uVar7 = (int)piVar9 + *piVar9;
  abStack_8[0] = 200;
  abStack_8[1] = 0xff;
  abStack_8[2] = 0xff;
  abStack_8[3] = 0xff;
  abStack_8[4] = 0xff;
  abStack_8[5] = 0xff;
  abStack_8[6] = 0xff;
  abStack_8[7] = 0xff;
  iVar8 = uVar7 + *(uint *)(ulonglong)uVar7;
  puVar10 = (uint *)(ulonglong)(uint)(int)(short)iVar8;
  uVar11 = (undefined3)(param_1 >> 8);
  cVar6 = (char)param_1 + *param_2 + CARRY4(uVar7,*(uint *)(ulonglong)uVar7);
  *puVar10 = *puVar10 & CONCAT31(uVar11,cVar6);
  bVar4 = (byte)((uint)iVar8 >> 8);
  uVar7 = CONCAT31((int3)(char)bVar4,(char)iVar8 + (char)*puVar10);
  abStack_8[(longlong)param_2] = abStack_8[(longlong)param_2] | bVar4;
  puVar15 = auStack_10;
  uVar7 = uVar7 + *(int *)(ulonglong)uVar7;
  if ((POPCOUNT(uVar7 & 0xff) & 1U) == 0) {
    uVar5 = CONCAT31((int3)(uVar7 + *(int *)(ulonglong)uVar7 >> 8),uRam0800020821004a12);
    puVar10 = (uint *)(ulonglong)uVar5;
    if (uVar7 + *(int *)(ulonglong)uVar7 == 0) {
      bVar17 = CARRY1(bVar12,(byte)*puVar10);
      bVar12 = bVar12 + (byte)*puVar10;
    }
    else {
      pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x38);
      *pcVar1 = *pcVar1 + unaff_BH;
      bVar17 = CARRY4(uVar5,*puVar10);
      uVar7 = *puVar10;
      puVar10 = (uint *)((ulonglong)auStack_10 & 0xffffffff);
      uVar14 = (ulonglong)(uVar5 + uVar7);
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
    }
    *(undefined1 **)(puVar15 + (ulonglong)(byte)(unaff_00089100 - 1) * -8 + -8) = unaff_0008f000;
    *puVar10 = *puVar10 +
               CONCAT31(uVar11,cVar6 + *(char *)CONCAT62(uVar13,CONCAT11(bVar12,(char)param_2)) +
                               bVar17);
    uVar7 = (int)puVar10 + *puVar10;
    pbVar2 = (byte *)(CONCAT62(uVar13,CONCAT11(bVar12,(char)param_2)) + 0x3002d004);
    *pbVar2 = *pbVar2 | (byte)(uVar7 >> 8);
    *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + (char)uVar7;
    *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

