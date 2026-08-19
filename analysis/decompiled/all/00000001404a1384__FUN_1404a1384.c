// Function: FUN_1404a1384
// Addr: 1404a1384
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a13b4) overlaps instruction at (ram,0x0001404a13b0)
    */

void FUN_1404a1384(uint param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  char unaff_00089100;
  undefined1 *unaff_0008f000;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint *in_RAX;
  int *piVar6;
  uint *puVar7;
  byte bVar8;
  undefined6 uVar9;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined8 *unaff_RBP;
  uint unaff_ESI;
  bool bVar13;
  undefined1 auStack_8 [8];
  undefined8 *puVar12;
  
  uVar9 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar8 = (byte)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & param_1;
  piVar6 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + (char)*in_RAX);
  (&stack0x00000000)[param_2] = (&stack0x00000000)[param_2] | (byte)((ulonglong)in_RAX >> 8);
  puVar11 = auStack_8;
  uVar5 = (int)piVar6 + *piVar6;
  if ((POPCOUNT(uVar5 & 0xff) & 1U) == 0) {
    uVar4 = CONCAT31((int3)(uVar5 + *(int *)(ulonglong)uVar5 >> 8),uRam0800020821004a12);
    puVar7 = (uint *)(ulonglong)uVar4;
    if (uVar5 + *(int *)(ulonglong)uVar5 == 0) {
      bVar13 = CARRY1(bVar8,(byte)*puVar7);
      bVar8 = bVar8 + (byte)*puVar7;
    }
    else {
      pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x38);
      *pcVar1 = *pcVar1 + unaff_BH;
      bVar13 = CARRY4(uVar4,*puVar7);
      uVar5 = *puVar7;
      puVar7 = (uint *)((ulonglong)auStack_8 & 0xffffffff);
      uVar10 = (ulonglong)(uVar4 + uVar5);
      unaff_00089100 = '\x14';
      puVar11 = (undefined1 *)(uVar10 - 8);
      unaff_0008f000 = (undefined1 *)(uVar10 - 8);
      puVar12 = (undefined8 *)(uVar10 - 8);
      *(undefined8 **)(uVar10 - 8) = unaff_RBP;
      cVar3 = '\x13';
      do {
        unaff_RBP = unaff_RBP + -1;
        puVar12 = puVar12 + -1;
        *puVar12 = *unaff_RBP;
        cVar3 = cVar3 + -1;
      } while ('\0' < cVar3);
    }
    *(undefined1 **)(puVar11 + (ulonglong)(byte)(unaff_00089100 - 1) * -8 + -8) = unaff_0008f000;
    *puVar7 = *puVar7 + CONCAT31((int3)(param_1 >> 8),
                                 (char)param_1 +
                                 *(char *)CONCAT62(uVar9,CONCAT11(bVar8,(char)param_2)) + bVar13);
    uVar5 = (int)puVar7 + *puVar7;
    pbVar2 = (byte *)(CONCAT62(uVar9,CONCAT11(bVar8,(char)param_2)) + 0x3002d004);
    *pbVar2 = *pbVar2 | (byte)(uVar5 >> 8);
    *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
    *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

