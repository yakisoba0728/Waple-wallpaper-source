// Function: FUN_1404d7100
// Addr: 1404d7100
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d7188) overlaps instruction at (ram,0x0001404d7187)
    */

undefined8 FUN_1404d7100(char *param_1,ulonglong param_2,undefined8 param_3,char *param_4)

{
  undefined2 uVar1;
  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte bVar10;
  char *in_RAX;
  int *piVar7;
  byte bVar11;
  char cVar12;
  char *pcVar9;
  byte *pbVar14;
  char cVar15;
  char cVar16;
  undefined6 uVar17;
  byte unaff_BL;
  byte unaff_BH;
  byte bVar18;
  undefined6 unaff_0000001a;
  undefined8 *puVar19;
  undefined8 *unaff_RBP;
  char *unaff_RSI;
  char unaff_DIL;
  char unaff_R12B;
  undefined8 uStack_10;
  byte *pbVar8;
  undefined7 uVar13;
  
  uVar17 = (undefined6)(param_2 >> 0x10);
  bVar18 = unaff_BH & unaff_BL;
  pcVar9 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(bVar18,unaff_BL)) + -0x21);
  *pcVar9 = *pcVar9 + unaff_DIL;
  cVar15 = *in_RAX;
  *in_RAX = *in_RAX + unaff_BL;
  bVar10 = (byte)((ulonglong)in_RAX >> 8);
  bVar4 = (byte)in_RAX;
  if (!SCARRY1(cVar15,unaff_BL)) {
    *param_1 = *param_1 + bVar10;
    *unaff_RSI = *unaff_RSI - bVar4;
    *in_RAX = *in_RAX + (char)((ulonglong)param_1 >> 8);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(byte *)(param_2 * 2) = *(byte *)(param_2 * 2) | bVar10;
  piVar7 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar4 + 0x54);
  uVar6 = (int)piVar7 + *piVar7 + (uint)(0xab < bVar4);
  pbVar8 = (byte *)(ulonglong)uVar6;
  pbVar14 = (byte *)(param_1 + -1);
  if (pbVar14 == (byte *)0x0 || uVar6 == 0) {
    *pbVar8 = *pbVar8 + 1;
    bVar4 = (byte)uVar6;
    if ((char)bVar4 <= (char)*pbVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar10 = *pbVar14;
    bVar11 = (byte)(uVar6 >> 8);
    *pbVar14 = *pbVar14 + bVar11;
    pbVar3 = (byte *)((longlong)pbVar8 * 2);
    bVar2 = bVar4 + *pbVar3;
    bVar5 = bVar2 + CARRY1(bVar10,bVar11);
    pbVar8 = (byte *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),bVar5);
    cVar15 = (char)param_2 + bVar11 + (CARRY1(bVar4,*pbVar3) || CARRY1(bVar2,CARRY1(bVar10,bVar11)))
    ;
    uVar1 = TaskRegister();
    *(undefined2 *)pbVar8 = uVar1;
    if (cVar15 == '\0') {
      *pbVar8 = *pbVar8 + 1;
      bVar18 = (bVar18 - *(char *)(param_2 & 0xffffffffffffff00)) - (*pbVar8 < bVar5);
      if ((char)(*pbVar8 - bVar5) < '\0') {
        halt_baddata();
      }
    }
    else {
      cVar16 = (char)(param_2 >> 8) + bVar18;
      *(byte *)CONCAT62(uVar17,CONCAT11(cVar16,cVar15)) =
           *(char *)CONCAT62(uVar17,CONCAT11(cVar16,cVar15)) + unaff_BL;
      pbVar8[0x70] = pbVar8[0x70] + bVar18;
      *param_4 = *param_4 + unaff_R12B;
      *pbVar8 = *pbVar8 + bVar5;
      *(byte *)CONCAT62(uVar17,CONCAT11(cVar16 + bVar18,cVar15)) =
           *(char *)CONCAT62(uVar17,CONCAT11(cVar16 + bVar18,cVar15)) + unaff_BL;
      pbVar8[0x70] = pbVar8[0x70] + bVar18;
    }
  }
  else {
    *pbVar8 = *pbVar8 + 1;
  }
  *param_4 = *param_4 + unaff_R12B;
  *pbVar8 = *pbVar8 + (char)pbVar8;
  cVar12 = (char)((ulonglong)pbVar8 >> 8);
  uVar13 = (undefined7)((ulonglong)pbVar8 >> 8);
  cVar15 = (char)pbVar8 + cVar12;
  cVar16 = cVar15 + bVar18;
  pcVar9 = (char *)CONCAT71(uVar13,cVar16);
  if (SCARRY1(cVar15,bVar18) == cVar16 < '\0') {
    if (cVar16 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar19 = (undefined8 *)&stack0xfffffffffffffff8;
    cVar15 = '\x11';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar19 = puVar19 + -1;
      *puVar19 = *unaff_RBP;
      cVar15 = cVar15 + -1;
    } while ('\0' < cVar15);
    return CONCAT71(uVar13,cVar16 + cVar12);
  }
  *pbVar14 = *pbVar14 + cVar12;
  *unaff_RSI = *unaff_RSI + (char)pbVar14;
  *pcVar9 = *pcVar9 + cVar16;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

