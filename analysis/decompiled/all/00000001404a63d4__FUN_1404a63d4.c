// Function: FUN_1404a63d4
// Addr: 1404a63d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a63d4(undefined8 param_1,longlong param_2,undefined8 param_3,byte *param_4)

{
  int *piVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  char cVar10;
  byte bVar11;
  uint *in_RAX;
  uint *puVar12;
  byte bVar13;
  byte *unaff_RBX;
  uint unaff_ESP;
  int unaff_EBP;
  uint unaff_ESI;
  char *unaff_RDI;
  bool bVar14;
  
  bVar13 = (byte)((ulonglong)param_2 >> 8);
  uVar9 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar9;
  cVar7 = (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar7;
  bVar4 = *param_4;
  *(char *)((longlong)in_RAX + 0x32) =
       *(char *)((longlong)in_RAX + 0x32) + (char)((ulonglong)param_1 >> 8);
  *in_RAX = *in_RAX | uVar9;
  puVar12 = (uint *)(CONCAT71((int7)((ulonglong)param_1 >> 8),(byte)param_1 ^ bVar4) + -1);
  if (puVar12 != (uint *)0x0 && *in_RAX != 0) {
    *in_RAX = *in_RAX & uVar9;
    *(char *)in_RAX = (char)*in_RAX + cVar7;
    *unaff_RBX = *unaff_RBX ^ bVar13;
    *in_RAX = *in_RAX | uVar9;
    cVar10 = (char)((ulonglong)in_RAX >> 8);
    *unaff_RBX = *unaff_RBX + cVar10;
    *(char *)puVar12 = *(char *)puVar12 + cVar7;
    syscall();
    *unaff_RDI = *unaff_RDI + 'W';
    piVar1 = (int *)((longlong)in_RAX * 2 + 8);
    *piVar1 = *piVar1 + unaff_EBP;
    if (*piVar1 == 0) {
      pcVar2 = (char *)((longlong)in_RAX + param_2 * 2);
      *pcVar2 = *pcVar2;
      UNK_1404a6456 = UNK_1404a6456 + cVar10;
    }
    uVar9 = uVar9 | *(uint *)((longlong)in_RAX * 2);
    bVar8 = (byte)uVar9 + 0x34;
    uVar5 = CONCAT31((int3)(uVar9 >> 8),bVar8);
    puVar12 = (uint *)(ulonglong)uVar5;
    cRam000000017569647f = cRam000000017569647f + bVar13 + (0xcb < (byte)uVar9);
    *puVar12 = *puVar12 | uVar5;
    bVar11 = (byte)(uVar9 >> 8);
    bVar14 = CARRY1(UNK_1404a6456,bVar11);
    UNK_1404a6456 = UNK_1404a6456 + bVar11;
    pbVar6 = (byte *)((longlong)puVar12 * 2);
    bVar4 = *pbVar6;
    bVar3 = *pbVar6;
    *pbVar6 = bVar3 + bVar8 + bVar14;
    pcVar2 = (char *)(param_2 + (ulonglong)(unaff_ESI | unaff_ESP) * 2);
    *pcVar2 = *pcVar2 + bVar13 + (CARRY1(bVar4,bVar8) || CARRY1(bVar3 + bVar8,bVar14));
    (&UNK_1404a6456)[(ulonglong)(unaff_ESI | unaff_ESP) * 2] =
         (&UNK_1404a6456)[(ulonglong)(unaff_ESI | unaff_ESP) * 2] | bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)puVar12 = *(char *)puVar12 + (char)unaff_ESP;
  *(char *)in_RAX = (char)*in_RAX + cVar7;
  *puVar12 = *puVar12 ^ (uint)puVar12;
  *puVar12 = *puVar12 ^ (uint)puVar12;
  pcVar2 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                             CONCAT11(bVar13 + (char)param_2,(char)param_2)) + 0x1e01004a);
  *pcVar2 = *pcVar2 + (char)((ulonglong)puVar12 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

