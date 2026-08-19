// Function: FUN_1404a6fb4
// Addr: 1404a6fb4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a703c) overlaps instruction at (ram,0x0001404a703a)
    */
/* WARNING: Removing unreachable block (ram,0x0001404a705e) */
/* WARNING: Removing unreachable block (ram,0x0001404a704e) */

void FUN_1404a6fb4(longlong param_1,short param_2)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  char cVar7;
  undefined8 in_RAX;
  uint *puVar6;
  char *pcVar9;
  longlong lVar10;
  char *pcVar11;
  char cVar12;
  byte bVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  int *unaff_RDI;
  int *piVar17;
  char in_CF;
  bool bVar18;
  undefined1 auStack_10 [8];
  undefined1 auStack_8 [8];
  uint *puVar5;
  undefined7 uVar8;
  
  cVar7 = (char)((ulonglong)in_RAX >> 8);
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar3 = (char)in_RAX + cVar7 + in_CF;
  puVar5 = (uint *)CONCAT71(uVar8,cVar3);
  uVar4 = (uint)puVar5;
  *puVar5 = *puVar5 | uVar4;
  puVar15 = auStack_8;
  puVar14 = auStack_8;
  pcVar9 = (char *)(param_1 + -1);
  cVar12 = (char)param_2;
  bVar13 = (byte)((ushort)param_2 >> 8);
  if (pcVar9 == (char *)0x0 || *puVar5 == 0) {
    *(byte *)(puVar5 + 0x1b) = (char)puVar5[0x1b] + bVar13;
    *pcVar9 = *pcVar9 + (char)auStack_8;
    *(char *)puVar5 = (char)*puVar5 + cVar3;
    *(char *)puVar5 = (char)*puVar5 + cVar12;
    if (param_1 == 2 || (char)*puVar5 == '\0') {
      *(char *)(puVar5 + -8) = (char)puVar5[-8] + cVar12;
      *puVar5 = *puVar5 | uVar4;
code_r0x0001404a6fce:
      *(char *)(param_1 + -2) = *(char *)(param_1 + -2) + (char)puVar14;
      puVar5 = (uint *)(ulonglong)((int)puVar5 + 0x34050002);
      puVar15 = puVar14;
    }
    else {
      uRam00000001744f6fd8 = uRam00000001744f6fd8 & uVar4;
    }
    uVar2 = *puVar5;
    puVar6 = (uint *)CONCAT71((int7)((ulonglong)puVar5 >> 8),(byte)puVar5 + (char)*puVar5);
    bVar18 = false;
    *puVar6 = *puVar6 | (uint)puVar6;
    uVar4 = *puVar6;
    puVar16 = puVar15 + -8;
    cVar3 = (char)(puVar15 + -8);
    *(uint **)(puVar15 + -8) = puVar6;
    pcVar9 = (char *)(CONCAT71((int7)((ulonglong)(param_1 + -2) >> 8),
                               (char)(param_1 + -2) + (char)((ulonglong)puVar5 >> 8) +
                               CARRY1((byte)puVar5,(byte)uVar2)) + -1);
    if (pcVar9 == (char *)0x0 || uVar4 != 0) {
      *(byte *)(puVar6 + 0x1b) = (byte)puVar6[0x1b] + bVar13;
      goto code_r0x0001404a6fe2;
    }
code_r0x0001404a6fe8:
    lVar10 = CONCAT71((int7)((ulonglong)pcVar9 >> 8),
                      (char)pcVar9 + (char)((ulonglong)puVar6 >> 8) + bVar18);
    *puVar6 = *puVar6 | (uint)puVar6;
    uVar4 = *puVar6;
    cVar7 = (char)(puVar16 + -8);
    cVar12 = (char)(puVar16 + -8);
    cVar3 = (char)(puVar16 + -8);
    *(uint **)(puVar16 + -8) = puVar6;
    pcVar9 = (char *)(lVar10 + -1);
    if (pcVar9 == (char *)0x0 || uVar4 != 0) {
      *(byte *)(puVar6 + 0x1b) = (byte)puVar6[0x1b] + bVar13;
      goto code_r0x0001404a6ff2;
    }
    puVar5 = (uint *)(ulonglong)((uint)puVar6 + 0x40000234);
    pcVar9 = (char *)(lVar10 + -2);
  }
  else {
    puVar5 = (uint *)CONCAT71(uVar8,cVar3 + cVar7);
    *puVar5 = *puVar5 | (uint)puVar5;
    puVar16 = auStack_10;
    cVar3 = (char)auStack_10;
    puVar14 = auStack_10;
    if (param_1 == 2 || *puVar5 == 0) {
      *(byte *)(puVar5 + 0x1b) = (char)puVar5[0x1b] + bVar13;
      goto code_r0x0001404a6fce;
    }
    uVar4 = (uint)puVar5 + 0x10000234;
    puVar6 = (uint *)(ulonglong)uVar4;
    pcVar9 = (char *)(param_1 + -3);
    if (pcVar9 != (char *)0x0 && uVar4 == 0) {
      *puVar6 = *puVar6 & uVar4;
      bVar18 = CARRY1((byte)*puVar6,(byte)uVar4);
      *(byte *)puVar6 = (byte)*puVar6 + (byte)uVar4;
      goto code_r0x0001404a6fe8;
    }
    *(byte *)((longlong)puVar6 + -0x1f) = *(byte *)((longlong)puVar6 + -0x1f) + cVar12;
    *puVar6 = *puVar6 | uVar4;
code_r0x0001404a6fe2:
    *pcVar9 = *pcVar9 + cVar3;
    *(byte *)puVar6 = (byte)*puVar6 + (char)puVar6;
    *(byte *)puVar6 = (byte)*puVar6 + cVar12;
    pcVar9 = pcVar9 + -1;
    if (pcVar9 == (char *)0x0 || (byte)*puVar6 != 0) {
      *(byte *)((longlong)puVar6 + -0x1f) = *(byte *)((longlong)puVar6 + -0x1f) + cVar12;
      *puVar6 = *puVar6 | (uint)puVar6;
code_r0x0001404a6ff2:
      *pcVar9 = *pcVar9 + cVar3;
      puVar6 = (uint *)(ulonglong)((int)puVar6 + 0x34050002);
    }
    else {
      uRam00000001744f6ffc = uRam00000001744f6ffc & (uint)puVar6;
    }
    puVar5 = (uint *)CONCAT71((int7)((ulonglong)puVar6 >> 8),(char)puVar6 + (byte)*puVar6);
    pcVar9 = pcVar9 + -1;
    cVar7 = cVar3;
    cVar12 = cVar3;
  }
  pcVar11 = (char *)0x0;
  cVar3 = (char)puVar5;
  uVar4 = (uint)puVar5;
  piVar17 = unaff_RDI;
  if (pcVar9 != (char *)0x0) {
    *puVar5 = *puVar5 & uVar4;
    *(char *)puVar5 = (char)*puVar5 + cVar3;
    pcVar11 = pcVar9 + -1;
    if (pcVar11 != (char *)0x0) {
      uRam00000001744f7020 = uRam00000001744f7020 & uVar4;
      goto code_r0x0001404a701e;
    }
    *(char *)((longlong)puVar5 + 0x700009e2) = *(char *)((longlong)puVar5 + 0x700009e2) + cVar3;
    piVar17 = (int *)((longlong)unaff_RDI + 1);
    uVar1 = in(param_2);
    *(undefined1 *)unaff_RDI = uVar1;
    cVar7 = cVar12;
  }
  cVar12 = cVar7;
  *(char *)((longlong)puVar5 + 0x700009e2) = *(char *)((longlong)puVar5 + 0x700009e2) + cVar3;
  unaff_RDI = (int *)((longlong)piVar17 + 1);
  uVar1 = in(param_2);
  *(undefined1 *)piVar17 = uVar1;
  *pcVar11 = *pcVar11 + cVar12;
  *(char *)puVar5 = (char)*puVar5 + cVar3;
  *(char *)((longlong)puVar5 + -0x1e) = *(char *)((longlong)puVar5 + -0x1e) + cVar3;
  *puVar5 = *puVar5 | uVar4;
  param_2 = (ushort)bVar13 << 8;
  *(byte *)(puVar5 + 0x1b) = (char)puVar5[0x1b] + bVar13;
  *pcVar11 = *pcVar11 + cVar12;
  puVar5 = (uint *)(ulonglong)(uVar4 + 0x34050002);
code_r0x0001404a701e:
  uVar8 = (undefined7)((ulonglong)puVar5 >> 8);
  cVar3 = (char)puVar5 + (char)*puVar5;
  pcVar9 = (char *)CONCAT71(uVar8,cVar3);
  *pcVar9 = *pcVar9 + cVar3;
  cVar3 = in(9);
  pcVar9 = (char *)CONCAT71(uVar8,cVar3);
  cVar7 = (char)((ushort)param_2 >> 8);
  pcVar9[0x6c] = pcVar9[0x6c] + cVar7;
  *pcVar11 = *pcVar11 + cVar12;
  *pcVar9 = *pcVar9 + cVar3;
  pcVar9 = (char *)CONCAT71(uVar8,cVar3 * '\x02');
  if (pcVar11 == (char *)0x0) {
    *unaff_RDI = *unaff_RDI + (int)pcVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar9 = *pcVar9 + cVar3 * '\x02';
  cVar3 = in(9);
  pcVar9 = (char *)(CONCAT71(uVar8,cVar3) + 0x6c);
  *pcVar9 = *pcVar9 + cVar7;
  *pcVar11 = *pcVar11 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

