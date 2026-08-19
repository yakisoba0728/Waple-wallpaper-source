// Function: FUN_1404a6438
// Addr: 1404a6438
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6438(undefined8 param_1,uint *param_2)

{
  char *pcVar1;
  int *piVar2;
  byte bVar3;
  uint uVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  char cVar10;
  byte bVar11;
  uint *in_RAX;
  byte bVar12;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_ESP;
  int unaff_EBP;
  uint unaff_ESI;
  char *unaff_RDI;
  bool bVar13;
  byte bVar4;
  uint *puVar9;
  
  bVar12 = (byte)((ulonglong)param_2 >> 8);
  *(char *)in_RAX = (char)*in_RAX + unaff_BH;
  uVar5 = *param_2;
  uVar8 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar8;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) ^ bVar12;
  *in_RAX = *in_RAX | uVar8;
  cVar10 = (char)((ulonglong)in_RAX >> 8);
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar10;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)in_RAX;
  syscall();
  *unaff_RDI = *unaff_RDI + 'W';
  piVar2 = (int *)((longlong)in_RAX * 2 + 8);
  *piVar2 = *piVar2 + unaff_EBP;
  if (*piVar2 == 0) {
    pcVar1 = (char *)((longlong)in_RAX + (longlong)param_2 * 2);
    *pcVar1 = *pcVar1;
    UNK_1404a6456 = UNK_1404a6456 + cVar10;
  }
  uVar8 = uVar8 | *(uint *)((longlong)in_RAX * 2);
  bVar7 = (byte)uVar8 + 0x34;
  uVar5 = CONCAT31((int3)(uVar8 >> 8),bVar7);
  puVar9 = (uint *)(ulonglong)uVar5;
  cRam000000017569647f = cRam000000017569647f + bVar12 + (0xcb < (byte)uVar8);
  *puVar9 = *puVar9 | uVar5;
  bVar11 = (byte)(uVar8 >> 8);
  bVar13 = CARRY1(UNK_1404a6456,bVar11);
  UNK_1404a6456 = UNK_1404a6456 + bVar11;
  pbVar6 = (byte *)((longlong)puVar9 * 2);
  bVar3 = *pbVar6;
  bVar4 = *pbVar6;
  *pbVar6 = bVar4 + bVar7 + bVar13;
  pcVar1 = (char *)((longlong)param_2 + (ulonglong)(unaff_ESI | unaff_ESP) * 2);
  *pcVar1 = *pcVar1 + bVar12 + (CARRY1(bVar3,bVar7) || CARRY1(bVar4 + bVar7,bVar13));
  (&UNK_1404a6456)[(ulonglong)(unaff_ESI | unaff_ESP) * 2] =
       (&UNK_1404a6456)[(ulonglong)(unaff_ESI | unaff_ESP) * 2] | bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

