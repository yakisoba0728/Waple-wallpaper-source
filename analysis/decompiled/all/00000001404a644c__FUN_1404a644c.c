// Function: FUN_1404a644c
// Addr: 1404a644c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a644c(char *param_1,longlong param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar6;
  byte *pbVar7;
  byte bVar8;
  uint uVar9;
  char cVar11;
  byte bVar12;
  longlong in_RAX;
  char cVar13;
  char *unaff_RBX;
  uint unaff_ESP;
  int unaff_EBP;
  uint unaff_ESI;
  char *unaff_RDI;
  bool bVar14;
  byte bVar5;
  uint *puVar10;
  
  cVar13 = (char)((ulonglong)param_2 >> 8);
  cVar11 = (char)((ulonglong)in_RAX >> 8);
  *unaff_RBX = *unaff_RBX + cVar11;
  *param_1 = *param_1 + (char)in_RAX;
  syscall();
  *unaff_RDI = *unaff_RDI + 'W';
  piVar2 = (int *)(in_RAX * 2 + 8);
  *piVar2 = *piVar2 + unaff_EBP;
  if (*piVar2 == 0) {
    puVar1 = (undefined1 *)(in_RAX + param_2 * 2);
    *puVar1 = *puVar1;
    UNK_1404a6456 = UNK_1404a6456 + cVar11;
  }
  uVar9 = (uint)in_RAX | *(uint *)(in_RAX * 2);
  bVar8 = (byte)uVar9 + 0x34;
  uVar6 = CONCAT31((int3)(uVar9 >> 8),bVar8);
  puVar10 = (uint *)(ulonglong)uVar6;
  cRam000000017569647f = cRam000000017569647f + cVar13 + (0xcb < (byte)uVar9);
  *puVar10 = *puVar10 | uVar6;
  bVar12 = (byte)(uVar9 >> 8);
  bVar14 = CARRY1(UNK_1404a6456,bVar12);
  UNK_1404a6456 = UNK_1404a6456 + bVar12;
  pbVar7 = (byte *)((longlong)puVar10 * 2);
  bVar4 = *pbVar7;
  bVar5 = *pbVar7;
  *pbVar7 = bVar5 + bVar8 + bVar14;
  pcVar3 = (char *)(param_2 + (ulonglong)(unaff_ESI | unaff_ESP) * 2);
  *pcVar3 = *pcVar3 + cVar13 + (CARRY1(bVar4,bVar8) || CARRY1(bVar5 + bVar8,bVar14));
  (&UNK_1404a6456)[(ulonglong)(unaff_ESI | unaff_ESP) * 2] =
       (&UNK_1404a6456)[(ulonglong)(unaff_ESI | unaff_ESP) * 2] | bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

