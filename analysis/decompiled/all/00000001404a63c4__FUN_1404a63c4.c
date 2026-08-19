// Function: FUN_1404a63c4
// Addr: 1404a63c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a63c4(undefined8 param_1,uint *param_2,undefined8 param_3,byte *param_4)

{
  char *pcVar1;
  int *piVar2;
  byte bVar3;
  uint uVar5;
  byte *pbVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  char cVar11;
  byte bVar12;
  uint *in_RAX;
  longlong lVar13;
  undefined1 *puVar14;
  byte bVar15;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  int unaff_EBP;
  uint unaff_ESI;
  ulonglong uVar16;
  char *unaff_RDI;
  bool bVar17;
  byte bVar4;
  uint *puVar10;
  
  bVar15 = (byte)((ulonglong)param_2 >> 8);
  *(byte *)((longlong)in_RAX + (longlong)param_2) =
       *(byte *)((longlong)in_RAX + (longlong)param_2) | (byte)param_2;
  lVar13 = CONCAT71((int7)((ulonglong)param_1 >> 8),(byte)param_1 ^ *param_4);
  *(char *)((longlong)in_RAX + 0x32) =
       *(char *)((longlong)in_RAX + 0x32) + (char)((ulonglong)param_1 >> 8);
  uVar9 = (uint)in_RAX;
  *in_RAX = *in_RAX | uVar9;
  puVar14 = (undefined1 *)(lVar13 + -1);
  cVar7 = (char)in_RAX;
  if (puVar14 != (undefined1 *)0x0 && *in_RAX != 0) {
    *in_RAX = *in_RAX & uVar9;
    *(char *)in_RAX = (char)*in_RAX + cVar7;
    *(char *)in_RAX = (char)*in_RAX + unaff_BH;
    uVar5 = *param_2;
    *in_RAX = *in_RAX & uVar9;
    *(char *)in_RAX = (char)*in_RAX + cVar7;
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) ^ bVar15;
    *in_RAX = *in_RAX | uVar9;
    cVar11 = (char)((ulonglong)in_RAX >> 8);
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar11;
    *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + cVar7;
    syscall();
    *unaff_RDI = *unaff_RDI + 'W';
    piVar2 = (int *)((longlong)in_RAX * 2 + 8);
    *piVar2 = *piVar2 + unaff_EBP;
    if (*piVar2 == 0) {
      pcVar1 = (char *)((longlong)in_RAX + (longlong)param_2 * 2);
      *pcVar1 = *pcVar1;
      UNK_1404a6456 = UNK_1404a6456 + cVar11;
    }
    uVar9 = uVar9 | *(uint *)((longlong)in_RAX * 2);
    uVar16 = (ulonglong)(unaff_ESI | (uint)&stack0x00000000);
    bVar8 = (byte)uVar9 + 0x34;
    uVar5 = CONCAT31((int3)(uVar9 >> 8),bVar8);
    puVar10 = (uint *)(ulonglong)uVar5;
    cRam000000017569647f = cRam000000017569647f + bVar15 + (0xcb < (byte)uVar9);
    *puVar10 = *puVar10 | uVar5;
    bVar12 = (byte)(uVar9 >> 8);
    bVar17 = CARRY1(UNK_1404a6456,bVar12);
    UNK_1404a6456 = UNK_1404a6456 + bVar12;
    pbVar6 = (byte *)((longlong)puVar10 * 2);
    bVar3 = *pbVar6;
    bVar4 = *pbVar6;
    *pbVar6 = bVar4 + bVar8 + bVar17;
    pcVar1 = (char *)((longlong)param_2 + uVar16 * 2);
    *pcVar1 = *pcVar1 + bVar15 + (CARRY1(bVar3,bVar8) || CARRY1(bVar4 + bVar8,bVar17));
    (&UNK_1404a6456)[uVar16 * 2] = (&UNK_1404a6456)[uVar16 * 2] | bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar14 = *puVar14;
  *(char *)in_RAX = (char)*in_RAX + cVar7;
  pcVar1 = (char *)(lVar13 + 0x31);
  *pcVar1 = *pcVar1 + (char)puVar14;
  *in_RAX = *in_RAX | uVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

