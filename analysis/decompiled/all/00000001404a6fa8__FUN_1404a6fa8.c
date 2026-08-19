// Function: FUN_1404a6fa8
// Addr: 1404a6fa8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a703c) overlaps instruction at (ram,0x0001404a703a)
    */
/* WARNING: Removing unreachable block (ram,0x0001404a705e) */
/* WARNING: Removing unreachable block (ram,0x0001404a704e) */

void FUN_1404a6fa8(char *param_1,short param_2)

{
  undefined1 uVar1;
  undefined3 uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  char cVar8;
  uint *in_RAX;
  uint *puVar7;
  undefined7 uVar9;
  char *pcVar10;
  longlong lVar11;
  byte bVar12;
  char cVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  int *unaff_RDI;
  int *piVar18;
  bool bVar19;
  bool in_OF;
  undefined1 auStack_10 [8];
  undefined1 auStack_8 [8];
  uint *puVar6;
  
  piVar18 = unaff_RDI;
  if (!in_OF) {
    *param_1 = *param_1;
    uVar5 = (int)in_RAX + 0x34050002;
    uVar2 = (undefined3)(uVar5 >> 8);
    cVar8 = (char)(uVar5 >> 8);
    cVar4 = (byte)uVar5 + *(byte *)(ulonglong)uVar5 + cVar8 +
            CARRY1((byte)uVar5,*(byte *)(ulonglong)uVar5);
    uVar5 = CONCAT31(uVar2,cVar4);
    puVar6 = (uint *)(ulonglong)uVar5;
    *puVar6 = *puVar6 | uVar5;
    puVar15 = auStack_8;
    puVar14 = auStack_8;
    pcVar10 = param_1 + -1;
    cVar13 = (char)param_2;
    bVar12 = (byte)((ushort)param_2 >> 8);
    if (pcVar10 == (char *)0x0 || *puVar6 == 0) {
      *(byte *)(puVar6 + 0x1b) = (char)puVar6[0x1b] + bVar12;
      *pcVar10 = *pcVar10 + (char)auStack_8;
      *(char *)puVar6 = (char)*puVar6 + cVar4;
      *(char *)puVar6 = (char)*puVar6 + cVar13;
      if (param_1 == (char *)0x2 || (char)*puVar6 == '\0') {
        *(char *)(puVar6 + -8) = (char)puVar6[-8] + cVar13;
        *puVar6 = *puVar6 | uVar5;
        goto code_r0x0001404a6fce;
      }
      uRam00000001744f6fd8 = uRam00000001744f6fd8 & uVar5;
code_r0x0001404a6fd6:
      uVar3 = *puVar6;
      puVar7 = (uint *)CONCAT71((int7)((ulonglong)puVar6 >> 8),(byte)puVar6 + (char)*puVar6);
      bVar19 = false;
      *puVar7 = *puVar7 | (uint)puVar7;
      uVar5 = *puVar7;
      puVar16 = puVar15 + -8;
      puVar17 = puVar15 + -8;
      *(uint **)(puVar15 + -8) = puVar7;
      param_1 = (char *)(CONCAT71((int7)((ulonglong)(param_1 + -2) >> 8),
                                  (char)(param_1 + -2) + (char)((ulonglong)puVar6 >> 8) +
                                  CARRY1((byte)puVar6,(byte)uVar3)) + -1);
      if (param_1 == (char *)0x0 || uVar5 != 0) {
        *(byte *)(puVar7 + 0x1b) = (byte)puVar7[0x1b] + bVar12;
        goto code_r0x0001404a6fe2;
      }
code_r0x0001404a6fe8:
      lVar11 = CONCAT71((int7)((ulonglong)param_1 >> 8),
                        (char)param_1 + (char)((ulonglong)puVar7 >> 8) + bVar19);
      *puVar7 = *puVar7 | (uint)puVar7;
      uVar5 = *puVar7;
      puVar17 = puVar16 + -8;
      *(uint **)(puVar16 + -8) = puVar7;
      param_1 = (char *)(lVar11 + -1);
      if (param_1 == (char *)0x0 || uVar5 != 0) {
        *(byte *)(puVar7 + 0x1b) = (byte)puVar7[0x1b] + bVar12;
        goto code_r0x0001404a6ff2;
      }
      in_RAX = (uint *)(ulonglong)((uint)puVar7 + 0x40000234);
      param_1 = (char *)(lVar11 + -2);
      register0x00000020 = (BADSPACEBASE *)(puVar16 + -8);
    }
    else {
      uVar5 = CONCAT31(uVar2,cVar4 + cVar8);
      puVar6 = (uint *)(ulonglong)uVar5;
      *puVar6 = *puVar6 | uVar5;
      puVar16 = auStack_10;
      puVar17 = auStack_10;
      puVar14 = auStack_10;
      if (param_1 == (char *)0x2 || *puVar6 == 0) {
        *(byte *)(puVar6 + 0x1b) = (char)puVar6[0x1b] + bVar12;
code_r0x0001404a6fce:
        param_1[-2] = param_1[-2] + (char)puVar14;
        puVar6 = (uint *)(ulonglong)(uVar5 + 0x34050002);
        puVar15 = puVar14;
        goto code_r0x0001404a6fd6;
      }
      uVar5 = uVar5 + 0x10000234;
      puVar7 = (uint *)(ulonglong)uVar5;
      param_1 = param_1 + -3;
      if (param_1 != (char *)0x0 && uVar5 == 0) {
        *puVar7 = *puVar7 & uVar5;
        bVar19 = CARRY1((byte)*puVar7,(byte)uVar5);
        *(byte *)puVar7 = (byte)*puVar7 + (byte)uVar5;
        goto code_r0x0001404a6fe8;
      }
      *(byte *)((longlong)puVar7 + -0x1f) = *(byte *)((longlong)puVar7 + -0x1f) + cVar13;
      *puVar7 = *puVar7 | uVar5;
code_r0x0001404a6fe2:
      *param_1 = *param_1 + (char)puVar17;
      *(byte *)puVar7 = (byte)*puVar7 + (char)puVar7;
      *(byte *)puVar7 = (byte)*puVar7 + cVar13;
      param_1 = param_1 + -1;
      if (param_1 == (char *)0x0 || (byte)*puVar7 != 0) {
        *(byte *)((longlong)puVar7 + -0x1f) = *(byte *)((longlong)puVar7 + -0x1f) + cVar13;
        *puVar7 = *puVar7 | (uint)puVar7;
code_r0x0001404a6ff2:
        *param_1 = *param_1 + (char)puVar17;
        puVar7 = (uint *)(ulonglong)((int)puVar7 + 0x34050002);
      }
      else {
        uRam00000001744f6ffc = uRam00000001744f6ffc & (uint)puVar7;
      }
      in_RAX = (uint *)CONCAT71((int7)((ulonglong)puVar7 >> 8),(char)puVar7 + (byte)*puVar7);
      param_1 = param_1 + -1;
      register0x00000020 = (BADSPACEBASE *)puVar17;
    }
    cVar4 = (char)in_RAX;
    uVar5 = (uint)in_RAX;
    cVar8 = (char)register0x00000020;
    if (param_1 == (char *)0x0) {
      param_1 = (char *)0x0;
      *(char *)((longlong)in_RAX + 0x700009e2) = *(char *)((longlong)in_RAX + 0x700009e2) + cVar4;
      piVar18 = (int *)((longlong)unaff_RDI + 1);
      uVar1 = in(param_2);
      *(undefined1 *)unaff_RDI = uVar1;
      cRam0000000000000000 = cRam0000000000000000 + cVar8;
      *(char *)in_RAX = (char)*in_RAX + cVar4;
      *(char *)((longlong)in_RAX + -0x1e) = *(char *)((longlong)in_RAX + -0x1e) + cVar4;
      *in_RAX = *in_RAX | uVar5;
      param_2 = (ushort)bVar12 << 8;
      *(byte *)(in_RAX + 0x1b) = (char)in_RAX[0x1b] + bVar12;
    }
    else {
      *in_RAX = *in_RAX & uVar5;
      *(char *)in_RAX = (char)*in_RAX + cVar4;
      param_1 = param_1 + -1;
      if (param_1 != (char *)0x0) {
        uRam00000001744f7020 = uRam00000001744f7020 & uVar5;
        goto code_r0x0001404a701e;
      }
      *(char *)((longlong)in_RAX + 0x700009e2) = *(char *)((longlong)in_RAX + 0x700009e2) + cVar4;
      piVar18 = (int *)((longlong)unaff_RDI + 1);
      uVar1 = in(param_2);
      *(undefined1 *)unaff_RDI = uVar1;
    }
  }
  cVar8 = (char)register0x00000020;
  *param_1 = *param_1 + cVar8;
  in_RAX = (uint *)(ulonglong)((int)in_RAX + 0x34050002);
  unaff_RDI = piVar18;
code_r0x0001404a701e:
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar4 = (char)in_RAX + (char)*in_RAX;
  pcVar10 = (char *)CONCAT71(uVar9,cVar4);
  *pcVar10 = *pcVar10 + cVar4;
  cVar4 = in(9);
  pcVar10 = (char *)CONCAT71(uVar9,cVar4);
  cVar13 = (char)((ushort)param_2 >> 8);
  pcVar10[0x6c] = pcVar10[0x6c] + cVar13;
  *param_1 = *param_1 + cVar8;
  *pcVar10 = *pcVar10 + cVar4;
  pcVar10 = (char *)CONCAT71(uVar9,cVar4 * '\x02');
  if (param_1 == (char *)0x0) {
    *unaff_RDI = *unaff_RDI + (int)pcVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar10 = *pcVar10 + cVar4 * '\x02';
  cVar4 = in(9);
  pcVar10 = (char *)(CONCAT71(uVar9,cVar4) + 0x6c);
  *pcVar10 = *pcVar10 + cVar13;
  *param_1 = *param_1 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

