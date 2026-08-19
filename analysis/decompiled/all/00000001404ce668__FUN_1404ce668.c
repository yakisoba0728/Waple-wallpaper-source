// Function: FUN_1404ce668
// Addr: 1404ce668
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ce686) overlaps instruction at (ram,0x0001404ce684)
    */

void FUN_1404ce668(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char cVar8;
  undefined8 in_RAX;
  uint *puVar4;
  longlong lVar6;
  char *pcVar7;
  char *pcVar10;
  byte *pbVar11;
  char cVar12;
  char unaff_BL;
  char unaff_SPL;
  char unaff_BPL;
  undefined7 unaff_00000029;
  uint unaff_ESI;
  uint unaff_EDI;
  char in_ZF;
  bool bVar13;
  char *pcVar5;
  undefined7 uVar9;
  
  cVar12 = (char)((ulonglong)param_2 >> 8);
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  puVar4 = (uint *)CONCAT71(uVar9,cRam80003d20b1003d20);
  pcVar10 = (char *)(param_1 + -1);
  if (pcVar10 != (char *)0x0 && in_ZF != '\0') {
    cVar1 = cRam80003d20b1003d20 + unaff_BL;
    pcVar5 = (char *)CONCAT71(uVar9,cVar1);
    cVar8 = (char)((ulonglong)in_RAX >> 8);
    pcVar5[CONCAT71(unaff_00000029,unaff_BPL) * 8 + 0x210049] =
         pcVar5[CONCAT71(unaff_00000029,unaff_BPL) * 8 + 0x210049] + cVar8;
    *pcVar5 = *pcVar5 + cVar1;
    pcVar5 = (char *)(CONCAT71(uVar9,cVar1 + unaff_BL) + 0x9210049 +
                     CONCAT71(unaff_00000029,unaff_BPL) * 8);
    *pcVar5 = *pcVar5 + cVar8;
    lVar6 = CONCAT71(uVar9,cVar1 + unaff_BL);
    puVar4 = (uint *)(lVar6 * 2);
    *puVar4 = *puVar4 | unaff_ESI;
    uVar2 = (int)lVar6 + 0x30000234;
    cVar1 = (char)uVar2;
    out((short)param_2,cVar1);
    pcVar5 = (char *)(CONCAT71(unaff_00000029,unaff_BPL) + -0x12);
    *pcVar5 = *pcVar5 + unaff_BPL;
    pcVar5 = (char *)((ulonglong)uVar2 + 0x210049 + CONCAT71(unaff_00000029,unaff_BPL) * 8);
    *pcVar5 = *pcVar5 + unaff_SPL;
    pcVar7 = (char *)(ulonglong)uVar2;
    *(char *)((longlong)pcVar7 * 2) = *(char *)((longlong)pcVar7 * 2) + cVar12;
    pcVar7[param_2] = pcVar7[param_2] + cVar12;
    *pcVar7 = *pcVar7 + cVar12;
    out((short)param_2,cVar1);
    pcVar5 = (char *)(CONCAT71(unaff_00000029,unaff_BPL) + -0x12);
    *pcVar5 = *pcVar5 + unaff_BPL;
    pcVar7[CONCAT71(unaff_00000029,unaff_BPL) * 8 + 0x210049] =
         pcVar7[CONCAT71(unaff_00000029,unaff_BPL) * 8 + 0x210049] + unaff_SPL;
    *pcVar7 = *pcVar7 + cVar1;
    pcVar5 = (char *)(CONCAT71(unaff_00000029,unaff_BPL) + -0x12);
    *pcVar5 = *pcVar5 + unaff_BPL;
    pcVar7[CONCAT71(unaff_00000029,unaff_BPL) * 8 + 0x34010049] =
         pcVar7[CONCAT71(unaff_00000029,unaff_BPL) * 8 + 0x34010049] + unaff_SPL;
    pcVar5 = (char *)(ulonglong)(uVar2 | 0x3983400);
    *pcVar5 = *pcVar5 + (char)((ulonglong)pcVar10 >> 8);
    *(char *)((longlong)pcVar5 * 2) = cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar13 = SCARRY1(*pcVar10,cRam80003d20b1003d20);
  *pcVar10 = *pcVar10 + cRam80003d20b1003d20;
  if (bVar13) {
    iVar3 = (uint)puVar4 + *puVar4;
    puVar4 = (uint *)(ulonglong)
                     CONCAT31((int3)((uint)iVar3 >> 8),
                              ((char)iVar3 + 'x') - CARRY4((uint)puVar4,*puVar4));
  }
  *(char *)(puVar4 + -0xe) = (char)puVar4[-0xe] + cVar12;
  *(char *)puVar4 = (char)*puVar4 + (char)puVar4;
  pcVar10 = (char *)(ulonglong)(unaff_EDI ^ *(uint *)((longlong)puVar4 + -0x57d1ffff));
  uVar2 = (uint)CONCAT71((int7)((ulonglong)puVar4 >> 8),(char)puVar4 + (char)*puVar4) & 0x1c000398;
  *(char *)((ulonglong)uVar2 * 2) = (char)uVar2;
  uVar2 = CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + 'x') + 0x6680c00;
  cVar1 = (char)uVar2;
  *pcVar10 = *pcVar10 + cVar1;
  pbVar11 = (byte *)(param_1 + -2);
  *pbVar11 = *pbVar11 + cVar1;
  *pbVar11 = *pbVar11 ^ (byte)pbVar11;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + cVar12;
  *(char *)(ulonglong)(uint)(int)(short)uVar2 = *(char *)(ulonglong)(uint)(int)(short)uVar2 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

