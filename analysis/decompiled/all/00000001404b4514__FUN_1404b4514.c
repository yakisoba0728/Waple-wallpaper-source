// Function: FUN_1404b4514
// Addr: 1404b4514
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4514(char *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  char cVar11;
  uint *in_RAX;
  char *pcVar9;
  byte bVar12;
  int *piVar10;
  char cVar14;
  byte *pbVar13;
  longlong unaff_RBX;
  byte *unaff_RDI;
  byte in_CF;
  undefined2 unaff_retaddr;
  
  uVar8 = *in_RAX;
  uVar7 = (uint)in_RAX;
  uVar2 = *in_RAX;
  *in_RAX = (uVar2 - uVar7) - (uint)in_CF;
  cVar14 = (char)((ulonglong)param_1 >> 8);
  *(char *)(unaff_RBX + 0x4a) =
       (*(char *)(unaff_RBX + 0x4a) - cVar14) - (uVar8 < uVar7 || uVar2 - uVar7 < (uint)in_CF);
  cVar11 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar11;
  bVar5 = (byte)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + bVar5;
  puVar1 = in_RAX + 0x1a;
  uVar8 = *puVar1;
  *(byte *)puVar1 = (byte)*puVar1 + bVar5;
  uVar4 = (uint)CARRY1((byte)uVar8,bVar5);
  uVar8 = *in_RAX;
  uVar2 = *in_RAX;
  *in_RAX = (uVar2 - uVar7) - uVar4;
  if ((POPCOUNT(*in_RAX & 0xff) & 1U) != 0) {
    bVar6 = (byte)param_1;
    cRam00000001444ba30d = cRam00000001444ba30d + bVar6;
    piVar10 = (int *)((ulonglong)in_RAX ^ 99);
    bVar5 = *unaff_RDI;
    *unaff_RDI = *unaff_RDI + bVar6;
    uVar3 = in((short)param_2);
    *(undefined4 *)unaff_RDI = uVar3;
    *piVar10 = (*piVar10 - (int)piVar10) - (uint)CARRY1(bVar5,bVar6);
    piVar10 = (int *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)piVar10) & 0xffffffffffffff6d);
    *piVar10 = *piVar10 - (int)piVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = (uint)(uVar8 < uVar7 || uVar2 - uVar7 < uVar4);
  uVar8 = *in_RAX;
  uVar2 = *in_RAX;
  *in_RAX = (uVar2 - uVar7) - uVar4;
  *(char *)(unaff_RBX + 0x4a) =
       (*(char *)(unaff_RBX + 0x4a) - cVar14) - (uVar8 < uVar7 || uVar2 - uVar7 < uVar4);
  *param_1 = *param_1 + cVar11;
  *(uint *)((longlong)in_RAX * 2) = *(uint *)((longlong)in_RAX * 2) & uVar7;
  *(uint *)(unaff_RBX + (longlong)in_RAX) = *(uint *)(unaff_RBX + (longlong)in_RAX) & (uint)param_2;
  pcVar9 = (char *)(ulonglong)(uVar7 + 0x80000234);
  *pcVar9 = *pcVar9;
  pbVar13 = (byte *)(ulonglong)(uint)(*param_2 * 0x21);
  bVar6 = (byte)(uVar7 + 0x80000234);
  *pcVar9 = *pcVar9 + bVar6;
  pcVar9[-0x52ffe697] = pcVar9[-0x52ffe697] + bVar6;
  bVar5 = *pbVar13;
  *pbVar13 = *pbVar13 + bVar6;
  uVar8 = uVar7 + 0x81150239 + (uint)CARRY1(bVar5,bVar6);
  bVar5 = (byte)uVar8;
  *unaff_RDI = *unaff_RDI + bVar5;
  if (pbVar13 == (byte *)0x1 || *unaff_RDI == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)((longlong)param_2 + (ulonglong)uVar8) =
       *(uint *)((longlong)param_2 + (ulonglong)uVar8) & uVar8;
  bVar12 = (byte)(uVar8 >> 8);
  uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar5 + bVar12);
  bVar6 = in(unaff_retaddr);
  *unaff_RDI = bVar6;
  *(int *)(ulonglong)uVar8 = (*(int *)(ulonglong)uVar8 - uVar8) - (uint)CARRY1(bVar5,bVar12);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

