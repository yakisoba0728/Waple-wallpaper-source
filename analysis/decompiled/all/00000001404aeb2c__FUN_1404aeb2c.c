// Function: FUN_1404aeb2c
// Addr: 1404aeb2c
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404aeb6e) overlaps instruction at (ram,0x0001404aeb6d)
    */
/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aeb2c(longlong param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined3 uVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *in_RAX;
  byte *pbVar13;
  char *pcVar14;
  byte bVar16;
  char cVar18;
  char cVar19;
  byte unaff_BL;
  undefined7 unaff_00000019;
  uint unaff_EBP;
  char *unaff_RSI;
  bool bVar20;
  uint *puVar12;
  char cVar15;
  char *pcVar17;
  
  uVar11 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar11;
  uVar10 = *in_RAX;
  bVar7 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar7;
  pcVar17 = (char *)(param_1 + -1);
  cVar19 = (char)((ulonglong)param_2 >> 8);
  bVar16 = (byte)pcVar17;
  if (pcVar17 == (char *)0x0 || (byte)*in_RAX == 0) {
    uVar3 = (uint)CARRY1((byte)uVar10,bVar7);
    uVar10 = *in_RAX;
    uVar1 = *in_RAX;
    iVar9 = uVar11 + uVar1 + uVar3;
    iVar2 = *(int *)(param_1 + 0x12);
    bVar7 = (byte)iVar9 + bVar16;
    uVar4 = CONCAT31((int3)((uint)iVar9 >> 8),bVar7);
    puVar12 = (uint *)(ulonglong)uVar4;
    *(byte *)param_2 = (char)*param_2 + bVar16 + CARRY1((byte)iVar9,bVar16);
    *puVar12 = *puVar12 & uVar4;
    bVar7 = bVar7 | (byte)*puVar12;
    uVar5 = (undefined2)((uint)iVar9 >> 0x10);
    cVar18 = (char)param_2;
    cVar15 = (char)((uint)iVar9 >> 8) + cVar18;
    pbVar13 = (byte *)(ulonglong)CONCAT22(uVar5,CONCAT11(cVar15,bVar7));
    *pbVar13 = *pbVar13 | bVar7;
    cVar15 = cVar15 + bVar7;
    uVar4 = CONCAT22(uVar5,CONCAT11(cVar15,bVar7));
    puVar12 = (uint *)(ulonglong)uVar4;
    *puVar12 = *puVar12 | uVar4;
    *(char *)((longlong)param_2 + (longlong)pcVar17) =
         *(char *)((longlong)param_2 + (longlong)pcVar17) + cVar19;
    pcVar17[CONCAT71(unaff_00000019,unaff_BL)] = pcVar17[CONCAT71(unaff_00000019,unaff_BL)] + cVar15
    ;
    *(char *)((longlong)puVar12 + (longlong)param_2) =
         *(char *)((longlong)puVar12 + (longlong)param_2) + cVar19;
    uVar6 = (undefined3)(uVar4 >> 8);
    bVar8 = bVar7 + cVar15;
    puVar12 = (uint *)(ulonglong)CONCAT31(uVar6,bVar8);
    if (!SCARRY1(bVar7,cVar15)) {
      cVar19 = *(char *)CONCAT71(unaff_00000019,unaff_BL);
      *(char *)CONCAT71(unaff_00000019,unaff_BL) =
           *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar18;
      if (!SCARRY1(cVar19,cVar18)) {
        *(byte *)puVar12 = (byte)*puVar12 + bVar8;
        *puVar12 = *puVar12 & unaff_EBP;
        *(byte *)puVar12 = (byte)*puVar12 | bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(byte *)param_2 = (char)*param_2 + bVar16 + CARRY1(bVar8,bVar16);
      *param_2 = *param_2 + (int)pcVar17;
      puVar12 = (uint *)(ulonglong)(CONCAT31(uVar6,bVar8 + bVar16) + 0x6420a00);
      pbVar13 = (byte *)((longlong)puVar12 +
                        (ulonglong)
                        ((int)unaff_RSI + iVar2 +
                        (uint)(CARRY4(uVar11,uVar10) || CARRY4(uVar11 + uVar1,uVar3))) * 2);
      *pbVar13 = *pbVar13 << 1 | (char)*pbVar13 < '\0';
    }
    *(byte *)puVar12 = (byte)*puVar12 ^ (byte)puVar12;
    *pcVar17 = *pcVar17 + (char)((ulonglong)puVar12 >> 8);
    *(byte *)puVar12 = (byte)*puVar12 - bVar16;
    *(byte *)puVar12 = (byte)*puVar12 + (char)((ulonglong)pcVar17 >> 8);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(byte *)in_RAX = (byte)*in_RAX | bVar7;
  puVar12 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                             CONCAT11(((char)((ulonglong)in_RAX >> 8) + cVar19) * '\x02' + bVar7,
                                      bVar7));
  uVar10 = (uint)puVar12 | *puVar12;
  pbVar13 = (byte *)((longlong)param_2 + (longlong)pcVar17);
  bVar7 = *pbVar13;
  bVar8 = (byte)(uVar10 >> 8);
  *pbVar13 = *pbVar13 + bVar8;
  if (CARRY1(bVar7,bVar8)) {
    *(char *)(param_1 + -0x6fffec8e) = *(char *)(param_1 + -0x6fffec8e) + bVar16;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar11 = uVar10 | 0xc541200;
  bVar20 = CARRY1(bRam00000001b04af609,(byte)uVar10);
  bRam00000001b04af609 = bRam00000001b04af609 + (byte)uVar10;
  if (!bVar20 && bRam00000001b04af609 != '\0') {
    *(char *)((ulonglong)uVar11 + 0x3c001376) = *(char *)((ulonglong)uVar11 + 0x3c001376) + unaff_BL
    ;
    *pcVar17 = *pcVar17 + -8;
    *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
         *(char *)CONCAT71(unaff_00000019,unaff_BL) +
         ((byte)(uVar11 >> 8) & (byte)((uint)*(undefined4 *)unaff_RSI >> 8));
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  pcVar14 = (char *)(ulonglong)(uVar11 + 0x7740500);
  pbVar13 = (byte *)(pcVar14 + -0x6ffec8a);
  bVar7 = *pbVar13;
  *pbVar13 = *pbVar13 + unaff_BL;
  if (!CARRY1(bVar7,unaff_BL) && *pbVar13 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar17 = *pcVar17;
  *unaff_RSI = *unaff_RSI + bVar16;
  *pcVar14 = *pcVar14 + (char)(uVar11 + 0x7740500);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

