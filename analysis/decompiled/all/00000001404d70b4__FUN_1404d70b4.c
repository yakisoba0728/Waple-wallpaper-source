// Function: FUN_1404d70b4
// Addr: 1404d70b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d7188) overlaps instruction at (ram,0x0001404d7187)
    */

undefined8 FUN_1404d70b4(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  undefined2 uVar2;
  byte bVar3;
  undefined3 uVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  byte bVar11;
  byte bVar12;
  char cVar13;
  uint in_EAX;
  uint uVar8;
  char *pcVar15;
  byte *pbVar16;
  byte bVar17;
  char cVar18;
  char cVar19;
  undefined6 uVar20;
  byte unaff_BL;
  byte unaff_BH;
  byte bVar21;
  undefined6 unaff_0000001a;
  undefined8 *puVar22;
  undefined8 *unaff_RBP;
  char *unaff_RSI;
  char unaff_DIL;
  char unaff_R12B;
  undefined8 uStack_10;
  char *pcVar9;
  byte *pbVar10;
  undefined7 uVar14;
  
  uVar20 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar17 = (byte)param_2;
  uRam00000001145270bc = uRam00000001145270bc & in_EAX;
  uVar8 = in_EAX | 0x37e07000;
  cVar18 = (char)in_EAX;
  cVar19 = (char)((ulonglong)param_2 >> 8) + cVar18;
  pcVar15 = (char *)(param_1 + -1);
  uVar4 = (undefined3)(uVar8 >> 8);
  if (pcVar15 == (char *)0x0 || cVar19 != '\0') {
    pcVar15 = (char *)(ulonglong)CONCAT31(uVar4,cVar18 * '\x02');
    out(*(undefined4 *)unaff_RSI,CONCAT11(cVar19,bVar17));
    *param_4 = *param_4 + unaff_R12B;
    *pcVar15 = *pcVar15 + cVar18 * '\x02';
    pcVar15[-0x20] = pcVar15[-0x20] + cVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar6 = cVar18 + *(char *)(ulonglong)uVar8;
  pcVar9 = (char *)(ulonglong)CONCAT31(uVar4,bVar6);
  unaff_RSI[CONCAT62(uVar20,CONCAT11(cVar19,bVar17))] =
       unaff_RSI[CONCAT62(uVar20,CONCAT11(cVar19,bVar17))] | bVar17;
  bVar21 = unaff_BH & unaff_BL;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(bVar21,unaff_BL)) + -0x21);
  *pcVar1 = *pcVar1 + unaff_DIL;
  cVar18 = *pcVar9;
  *pcVar9 = *pcVar9 + unaff_BL;
  bVar11 = (byte)(uVar8 >> 8);
  if (!SCARRY1(cVar18,unaff_BL)) {
    *pcVar15 = *pcVar15 + bVar11;
    *unaff_RSI = *unaff_RSI - bVar6;
    *pcVar9 = *pcVar9 + (char)((ulonglong)pcVar15 >> 8);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  pbVar10 = (byte *)(CONCAT62(uVar20,CONCAT11(cVar19,bVar17)) +
                    CONCAT62(uVar20,CONCAT11(cVar19,bVar17)));
  *pbVar10 = *pbVar10 | bVar11;
  uVar8 = CONCAT31(uVar4,bVar6 + 0x54);
  uVar8 = uVar8 + *(int *)(ulonglong)uVar8 + (uint)(0xab < bVar6);
  pbVar10 = (byte *)(ulonglong)uVar8;
  pbVar16 = (byte *)(param_1 + -2);
  if (pbVar16 == (byte *)0x0 || uVar8 == 0) {
    *pbVar10 = *pbVar10 + 1;
    bVar6 = (byte)uVar8;
    if ((char)bVar6 <= (char)*pbVar10) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar11 = *pbVar16;
    bVar12 = (byte)(uVar8 >> 8);
    *pbVar16 = *pbVar16 + bVar12;
    pbVar5 = (byte *)((longlong)pbVar10 * 2);
    bVar3 = bVar6 + *pbVar5;
    bVar7 = bVar3 + CARRY1(bVar11,bVar12);
    pbVar10 = (byte *)(ulonglong)CONCAT31((int3)(uVar8 >> 8),bVar7);
    cVar18 = bVar17 + bVar12 + (CARRY1(bVar6,*pbVar5) || CARRY1(bVar3,CARRY1(bVar11,bVar12)));
    uVar2 = TaskRegister();
    *(undefined2 *)pbVar10 = uVar2;
    if (cVar18 == '\0') {
      *pbVar10 = *pbVar10 + 1;
      bVar21 = (bVar21 - *(char *)((ulonglong)CONCAT61(uVar20,cVar19) << 8)) - (*pbVar10 < bVar7);
      if ((char)(*pbVar10 - bVar7) < '\0') {
        halt_baddata();
      }
    }
    else {
      cVar19 = cVar19 + bVar21;
      *(byte *)CONCAT62(uVar20,CONCAT11(cVar19,cVar18)) =
           *(char *)CONCAT62(uVar20,CONCAT11(cVar19,cVar18)) + unaff_BL;
      pbVar10[0x70] = pbVar10[0x70] + bVar21;
      *param_4 = *param_4 + unaff_R12B;
      *pbVar10 = *pbVar10 + bVar7;
      *(byte *)CONCAT62(uVar20,CONCAT11(cVar19 + bVar21,cVar18)) =
           *(char *)CONCAT62(uVar20,CONCAT11(cVar19 + bVar21,cVar18)) + unaff_BL;
      pbVar10[0x70] = pbVar10[0x70] + bVar21;
    }
  }
  else {
    *pbVar10 = *pbVar10 + 1;
  }
  *param_4 = *param_4 + unaff_R12B;
  *pbVar10 = *pbVar10 + (char)pbVar10;
  cVar13 = (char)((ulonglong)pbVar10 >> 8);
  uVar14 = (undefined7)((ulonglong)pbVar10 >> 8);
  cVar18 = (char)pbVar10 + cVar13;
  cVar19 = cVar18 + bVar21;
  pcVar15 = (char *)CONCAT71(uVar14,cVar19);
  if (SCARRY1(cVar18,bVar21) == cVar19 < '\0') {
    if (cVar19 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar22 = (undefined8 *)&stack0xfffffffffffffff8;
    cVar18 = '\x11';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar22 = puVar22 + -1;
      *puVar22 = *unaff_RBP;
      cVar18 = cVar18 + -1;
    } while ('\0' < cVar18);
    return CONCAT71(uVar14,cVar19 + cVar13);
  }
  *pbVar16 = *pbVar16 + cVar13;
  *unaff_RSI = *unaff_RSI + (char)pbVar16;
  *pcVar15 = *pcVar15 + cVar19;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

