// Function: FUN_1404aef84
// Addr: 1404aef84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aef84(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char cVar13;
  undefined7 uVar14;
  char cVar15;
  byte bVar16;
  undefined2 uVar17;
  undefined4 uVar18;
  byte unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  char *unaff_RSI;
  ulonglong unaff_RDI;
  longlong in_FS_OFFSET;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  uint *puVar11;
  char *pcVar12;
  
  uVar18 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar17 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar15 = (char)((ulonglong)param_2 >> 8);
  cVar7 = (char)param_2;
  uVar14 = (undefined7)((ulonglong)param_1 >> 8);
  param_1[CONCAT71(unaff_00000019,unaff_BL)] = param_1[CONCAT71(unaff_00000019,unaff_BL)] + cVar15;
  param_1[0x13837000] = param_1[0x13837000] + cVar15;
  *(char *)(unaff_RBP + 0x64001383) = *(char *)(unaff_RBP + 0x64001383) + cVar7;
  uVar9 = in(0x49);
  bVar2 = *param_1;
  *param_1 = *param_1 + (byte)uVar9;
  cVar13 = ((char)param_1 - *param_1) - CARRY1(bVar2,(byte)uVar9);
  bVar2 = *param_2;
  *param_2 = *param_2 + unaff_BL;
  uVar8 = uVar9 - *(uint *)(in_FS_OFFSET + (ulonglong)uVar9);
  uVar10 = uVar8 - CARRY1(bVar2,unaff_BL);
  bVar16 = (cVar15 - param_2[CONCAT71(unaff_00000019,unaff_BL)]) -
           (uVar9 < *(uint *)(in_FS_OFFSET + (ulonglong)uVar9) || uVar8 < CARRY1(bVar2,unaff_BL));
  *(byte *)CONCAT44(uVar18,CONCAT22(uVar17,CONCAT11(bVar16,cVar7))) =
       *(char *)CONCAT44(uVar18,CONCAT22(uVar17,CONCAT11(bVar16,cVar7))) + unaff_BL;
  *(int *)((ulonglong)uVar10 * 2) =
       *(int *)((ulonglong)uVar10 * 2) + CONCAT22(uVar17,CONCAT11(bVar16,cVar7));
  pavgb(in_MM1_Ba,(char)uRam00000001409afc1f);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam00000001409afc1f >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam00000001409afc1f >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam00000001409afc1f >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam00000001409afc1f >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam00000001409afc1f >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam00000001409afc1f >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam00000001409afc1f >> 0x38));
  *(char *)CONCAT71(uVar14,cVar13) = *(char *)CONCAT71(uVar14,cVar13) + (char)(uVar10 >> 8);
  bVar6 = (char)uVar10 + 2;
  uVar5 = CONCAT31((int3)(uVar10 >> 8),bVar6);
  puVar11 = (uint *)(ulonglong)uVar5;
  pbVar1 = (byte *)(CONCAT71(unaff_00000021,unaff_SPL) + (longlong)unaff_RSI * 8);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar6;
  uVar10 = (uint)CARRY1(bVar2,bVar6);
  uVar8 = *puVar11;
  uVar9 = *puVar11;
  uVar4 = *puVar11 - uVar5;
  *puVar11 = uVar4 - uVar10;
  if (SBORROW4(uVar9,uVar5) == SBORROW4(uVar4,uVar10)) {
    uVar9 = *puVar11;
    LOCK();
    uVar18 = *(undefined4 *)CONCAT71(unaff_00000019,unaff_BL);
    *(uint *)CONCAT71(unaff_00000019,unaff_BL) = CONCAT22(uVar17,CONCAT11(bVar16,cVar7));
    UNLOCK();
    cVar7 = (char)(unaff_RDI & 0xffffffff) + cVar13;
    pcVar12 = (char *)CONCAT71((int7)((unaff_RDI & 0xffffffff) >> 8),cVar7);
    out((short)uVar18,cVar7);
    *(char *)CONCAT71(uVar14,cVar13) = *(char *)CONCAT71(uVar14,cVar13) + unaff_SPL;
    *pcVar12 = *pcVar12 + cVar7;
    pcVar12[-0x79] = pcVar12[-0x79] + (char)((uint)uVar18 >> 8);
    LOCK();
    uVar3 = *(undefined4 *)CONCAT71(unaff_00000019,unaff_BL);
    *(undefined4 *)CONCAT71(unaff_00000019,unaff_BL) = uVar18;
    UNLOCK();
    out((short)uVar3,bVar6 + (char)uVar9 + (uVar8 < uVar5 || uVar4 < uVar10) + cVar13);
    *(char *)CONCAT71(uVar14,cVar13) = *(char *)CONCAT71(uVar14,cVar13) + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)puVar11 = (char)*puVar11 + bVar6;
  pbVar1 = (byte *)((longlong)puVar11 + -0x7d);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar16;
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       *(int *)CONCAT71(unaff_00000019,unaff_BL) +
       (uint)(CARRY4(uVar5,*puVar11) || CARRY4(uVar5 + *puVar11,(uint)CARRY1(bVar2,bVar16)));
  uVar8 = in(0x49);
  *(char *)CONCAT71(uVar14,cVar13) = *(char *)CONCAT71(uVar14,cVar13) + (char)(uVar8 >> 8);
  *unaff_RSI = *unaff_RSI + cVar13;
  *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + (char)uVar8;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

