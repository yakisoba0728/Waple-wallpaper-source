// Function: FUN_1404b44ec
// Addr: 1404b44ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b44ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar9;
  char cVar15;
  uint *in_RAX;
  longlong lVar10;
  char *pcVar12;
  byte bVar16;
  int *piVar13;
  int *piVar14;
  char *pcVar17;
  byte *pbVar18;
  longlong unaff_RBX;
  byte *unaff_RDI;
  byte in_CF;
  undefined2 unaff_retaddr;
  uint uVar8;
  uint *puVar11;
  
  uVar9 = *in_RAX;
  uVar6 = (uint)in_RAX;
  uVar2 = *in_RAX;
  *in_RAX = (uVar2 - uVar6) - (uint)in_CF;
  pcVar17 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),0xc0c);
  *in_RAX = (*in_RAX - uVar6) - (uint)(uVar9 < uVar6 || uVar2 - uVar6 < (uint)in_CF);
  *param_4 = *param_4;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(char *)(in_RAX + -0x13bff9bd) = (char)in_RAX[-0x13bff9bd] + (char)in_RAX;
  pcVar12 = (char *)(unaff_RBX + 0x1a21004b + ((ulonglong)in_RAX | 0x19) * 2);
  *pcVar12 = *pcVar12 + (char)unaff_RBX;
  lVar10 = CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)((ulonglong)in_RAX | 0x19));
  piVar14 = (int *)CONCAT71((int7)((ulonglong)param_2 >> 8),
                            (char)param_2 - *(char *)(unaff_RBX + lVar10));
  uVar8 = (uint)lVar10;
  uVar7 = uVar8 + 0x40000234;
  puVar11 = (uint *)(ulonglong)uVar7;
  uVar9 = *puVar11;
  uVar2 = *puVar11;
  *puVar11 = (uVar2 - uVar7) - (uint)(0xbffffdcb < uVar8);
  *(char *)(unaff_RBX + 0x4a) =
       (*(char *)(unaff_RBX + 0x4a) + -0xc) -
       (uVar9 < uVar7 || uVar2 - uVar7 < (uint)(0xbffffdcb < uVar8));
  cVar15 = (char)(uVar7 >> 8);
  *pcVar17 = *pcVar17 + cVar15;
  bVar4 = (byte)uVar7;
  *(byte *)puVar11 = (char)*puVar11 + bVar4;
  puVar1 = puVar11 + 0x1a;
  uVar9 = *puVar1;
  *(byte *)puVar1 = (byte)*puVar1 + bVar4;
  uVar6 = (uint)CARRY1((byte)uVar9,bVar4);
  uVar9 = *puVar11;
  uVar2 = *puVar11;
  *puVar11 = (uVar2 - uVar7) - uVar6;
  if ((POPCOUNT(*puVar11 & 0xff) & 1U) != 0) {
    cRam00000001444ba30d = cRam00000001444ba30d + '\f';
    piVar13 = (int *)((ulonglong)uVar7 ^ 99);
    bVar4 = *unaff_RDI;
    *unaff_RDI = *unaff_RDI + 0xc;
    uVar3 = in((short)piVar14);
    *(undefined4 *)unaff_RDI = uVar3;
    *piVar13 = (*piVar13 - (int)piVar13) - (uint)(0xf3 < bVar4);
    piVar14 = (int *)((ulonglong)CONCAT31((int3)(uVar7 >> 8),(char)piVar13) & 0xffffffffffffff6d);
    *piVar14 = *piVar14 - (int)piVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = (uint)(uVar9 < uVar7 || uVar2 - uVar7 < uVar6);
  uVar9 = *puVar11;
  uVar2 = *puVar11;
  *puVar11 = (uVar2 - uVar7) - uVar6;
  *(char *)(unaff_RBX + 0x4a) =
       (*(char *)(unaff_RBX + 0x4a) + -0xc) - (uVar9 < uVar7 || uVar2 - uVar7 < uVar6);
  *pcVar17 = *pcVar17 + cVar15;
  *(uint *)((longlong)puVar11 * 2) = *(uint *)((longlong)puVar11 * 2) & uVar7;
  *(uint *)(unaff_RBX + (longlong)puVar11) =
       *(uint *)(unaff_RBX + (longlong)puVar11) & (uint)piVar14;
  pcVar12 = (char *)(ulonglong)(uVar8 + 0xc0000468);
  *pcVar12 = *pcVar12;
  pbVar18 = (byte *)(ulonglong)(uint)(*piVar14 * 0x21);
  bVar5 = (byte)(uVar8 + 0xc0000468);
  *pcVar12 = *pcVar12 + bVar5;
  pcVar12[-0x52ffe697] = pcVar12[-0x52ffe697] + bVar5;
  bVar4 = *pbVar18;
  *pbVar18 = *pbVar18 + bVar5;
  uVar9 = uVar8 + 0xc115046d + (uint)CARRY1(bVar4,bVar5);
  bVar4 = (byte)uVar9;
  *unaff_RDI = *unaff_RDI + bVar4;
  if (pbVar18 == (byte *)0x1 || *unaff_RDI == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)((longlong)piVar14 + (ulonglong)uVar9) =
       *(uint *)((longlong)piVar14 + (ulonglong)uVar9) & uVar9;
  bVar16 = (byte)(uVar9 >> 8);
  uVar9 = CONCAT31((int3)(uVar9 >> 8),bVar4 + bVar16);
  bVar5 = in(unaff_retaddr);
  *unaff_RDI = bVar5;
  *(int *)(ulonglong)uVar9 = (*(int *)(ulonglong)uVar9 - uVar9) - (uint)CARRY1(bVar4,bVar16);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

