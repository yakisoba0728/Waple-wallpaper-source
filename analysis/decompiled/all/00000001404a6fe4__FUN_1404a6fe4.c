// Function: FUN_1404a6fe4
// Addr: 1404a6fe4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a703c) overlaps instruction at (ram,0x0001404a703a)
    */

void FUN_1404a6fe4(undefined8 param_1,short param_2)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *in_RAX;
  uint *puVar5;
  undefined7 uVar7;
  longlong lVar8;
  char *pcVar9;
  byte bVar10;
  char cVar11;
  int *unaff_RDI;
  int *piVar12;
  char *pcVar6;
  
  uVar4 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar4;
  uVar2 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + (byte)in_RAX;
  lVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),
                   (char)param_1 + (char)((ulonglong)in_RAX >> 8) + CARRY1((byte)uVar2,(byte)in_RAX)
                  );
  *in_RAX = *in_RAX | uVar4;
  pcVar9 = (char *)(lVar8 + -1);
  bVar10 = (byte)((ushort)param_2 >> 8);
  if (pcVar9 == (char *)0x0 || *in_RAX != 0) {
    *(byte *)(in_RAX + 0x1b) = (byte)in_RAX[0x1b] + bVar10;
    *pcVar9 = *pcVar9 + -8;
    uVar4 = uVar4 + 0x34050002;
    uVar4 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + *(char *)(ulonglong)uVar4);
  }
  else {
    uVar4 = uVar4 + 0x40000234;
  }
  puVar5 = (uint *)(ulonglong)uVar4;
  cVar3 = (char)uVar4;
  pcVar9 = (char *)0x0;
  piVar12 = unaff_RDI;
  if (lVar8 != 2) {
    *puVar5 = *puVar5 & uVar4;
    *(char *)puVar5 = (char)*puVar5 + cVar3;
    pcVar9 = (char *)(lVar8 + -3);
    if (pcVar9 != (char *)0x0) {
      uRam00000001744f7020 = uRam00000001744f7020 & uVar4;
      goto code_r0x0001404a701e;
    }
    *(char *)((longlong)puVar5 + 0x700009e2) = *(char *)((longlong)puVar5 + 0x700009e2) + cVar3;
    piVar12 = (int *)((longlong)unaff_RDI + 1);
    uVar1 = in(param_2);
    *(undefined1 *)unaff_RDI = uVar1;
  }
  *(char *)((longlong)puVar5 + 0x700009e2) = *(char *)((longlong)puVar5 + 0x700009e2) + cVar3;
  unaff_RDI = (int *)((longlong)piVar12 + 1);
  uVar1 = in(param_2);
  *(undefined1 *)piVar12 = uVar1;
  *pcVar9 = *pcVar9 + -8;
  *(char *)puVar5 = (char)*puVar5 + cVar3;
  *(char *)((longlong)puVar5 + -0x1e) = *(char *)((longlong)puVar5 + -0x1e) + cVar3;
  *puVar5 = *puVar5 | uVar4;
  param_2 = (ushort)bVar10 << 8;
  *(byte *)(puVar5 + 0x1b) = (char)puVar5[0x1b] + bVar10;
  *pcVar9 = *pcVar9 + -8;
  puVar5 = (uint *)(ulonglong)(uVar4 + 0x34050002);
code_r0x0001404a701e:
  uVar7 = (undefined7)((ulonglong)puVar5 >> 8);
  cVar3 = (char)puVar5 + (char)*puVar5;
  pcVar6 = (char *)CONCAT71(uVar7,cVar3);
  *pcVar6 = *pcVar6 + cVar3;
  cVar3 = in(9);
  pcVar6 = (char *)CONCAT71(uVar7,cVar3);
  cVar11 = (char)((ushort)param_2 >> 8);
  pcVar6[0x6c] = pcVar6[0x6c] + cVar11;
  *pcVar9 = *pcVar9 + -8;
  *pcVar6 = *pcVar6 + cVar3;
  pcVar6 = (char *)CONCAT71(uVar7,cVar3 * '\x02');
  if (pcVar9 == (char *)0x0) {
    *unaff_RDI = *unaff_RDI + (int)pcVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar6 = *pcVar6 + cVar3 * '\x02';
  cVar3 = in(9);
  pcVar6 = (char *)(CONCAT71(uVar7,cVar3) + 0x6c);
  *pcVar6 = *pcVar6 + cVar11;
  *pcVar9 = *pcVar9 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

