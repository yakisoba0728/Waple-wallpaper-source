// Function: FUN_1404d7154
// Addr: 1404d7154
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d7188) overlaps instruction at (ram,0x0001404d7187)
    */

undefined8 FUN_1404d7154(longlong param_1,ulonglong param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  undefined2 uVar2;
  byte bVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte bVar11;
  char cVar12;
  ulonglong in_RAX;
  char *pcVar8;
  int *piVar9;
  byte *pbVar14;
  char cVar15;
  char cVar16;
  undefined6 uVar17;
  char unaff_BL;
  char unaff_BH;
  undefined8 *puVar18;
  undefined8 *unaff_RBP;
  char *unaff_RSI;
  char unaff_R12B;
  undefined8 uStack_10;
  byte *pbVar10;
  undefined7 uVar13;
  
  uVar17 = (undefined6)(param_2 >> 0x10);
  pcVar8 = (char *)(in_RAX | 0xc4);
  bVar5 = (byte)pcVar8;
  *pcVar8 = *pcVar8 + bVar5;
  *(byte *)(param_2 * 2) = *(byte *)(param_2 * 2) | (byte)(in_RAX >> 8);
  piVar9 = (int *)CONCAT71((int7)(in_RAX >> 8),bVar5 + 0x54);
  uVar7 = (int)piVar9 + *piVar9 + (uint)(0xab < bVar5);
  pbVar10 = (byte *)(ulonglong)uVar7;
  pbVar14 = (byte *)(param_1 + -1);
  if (pbVar14 == (byte *)0x0 || uVar7 == 0) {
    *pbVar10 = *pbVar10 + 1;
    bVar5 = (byte)uVar7;
    if ((char)bVar5 <= (char)*pbVar10) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar1 = *pbVar14;
    bVar11 = (byte)(uVar7 >> 8);
    *pbVar14 = *pbVar14 + bVar11;
    pbVar4 = (byte *)((longlong)pbVar10 * 2);
    bVar3 = bVar5 + *pbVar4;
    bVar6 = bVar3 + CARRY1(bVar1,bVar11);
    pbVar10 = (byte *)(ulonglong)CONCAT31((int3)(uVar7 >> 8),bVar6);
    cVar15 = (char)param_2 + bVar11 + (CARRY1(bVar5,*pbVar4) || CARRY1(bVar3,CARRY1(bVar1,bVar11)));
    uVar2 = TaskRegister();
    *(undefined2 *)pbVar10 = uVar2;
    if (cVar15 == '\0') {
      *pbVar10 = *pbVar10 + 1;
      unaff_BH = (unaff_BH - *(char *)(param_2 & 0xffffffffffffff00)) - (*pbVar10 < bVar6);
      if ((char)(*pbVar10 - bVar6) < '\0') {
        halt_baddata();
      }
    }
    else {
      cVar16 = (char)(param_2 >> 8) + unaff_BH;
      *(char *)CONCAT62(uVar17,CONCAT11(cVar16,cVar15)) =
           *(char *)CONCAT62(uVar17,CONCAT11(cVar16,cVar15)) + unaff_BL;
      pbVar10[0x70] = pbVar10[0x70] + unaff_BH;
      *param_4 = *param_4 + unaff_R12B;
      *pbVar10 = *pbVar10 + bVar6;
      *(char *)CONCAT62(uVar17,CONCAT11(cVar16 + unaff_BH,cVar15)) =
           *(char *)CONCAT62(uVar17,CONCAT11(cVar16 + unaff_BH,cVar15)) + unaff_BL;
      pbVar10[0x70] = pbVar10[0x70] + unaff_BH;
    }
  }
  else {
    *pbVar10 = *pbVar10 + 1;
  }
  *param_4 = *param_4 + unaff_R12B;
  *pbVar10 = *pbVar10 + (char)pbVar10;
  cVar12 = (char)((ulonglong)pbVar10 >> 8);
  uVar13 = (undefined7)((ulonglong)pbVar10 >> 8);
  cVar15 = (char)pbVar10 + cVar12;
  cVar16 = cVar15 + unaff_BH;
  pcVar8 = (char *)CONCAT71(uVar13,cVar16);
  if (SCARRY1(cVar15,unaff_BH) == cVar16 < '\0') {
    if (cVar16 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar18 = (undefined8 *)&stack0xfffffffffffffff8;
    cVar15 = '\x11';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar18 = puVar18 + -1;
      *puVar18 = *unaff_RBP;
      cVar15 = cVar15 + -1;
    } while ('\0' < cVar15);
    return CONCAT71(uVar13,cVar16 + cVar12);
  }
  *pbVar14 = *pbVar14 + cVar12;
  *unaff_RSI = *unaff_RSI + (char)pbVar14;
  *pcVar8 = *pcVar8 + cVar16;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

