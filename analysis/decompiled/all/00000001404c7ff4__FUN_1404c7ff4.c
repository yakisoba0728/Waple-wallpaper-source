// Function: FUN_1404c7ff4
// Addr: 1404c7ff4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7ff4(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  undefined3 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  char cVar10;
  uint *in_RAX;
  char *pcVar9;
  byte *pbVar11;
  char cVar12;
  undefined6 uVar13;
  char *unaff_RBX;
  char *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  byte *pbVar8;
  
  uVar13 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar12 = (char)param_2;
  pbVar8 = (byte *)(param_2 + 4);
  *pbVar8 = *pbVar8 | (byte)in_RAX;
  pbVar11 = (byte *)(param_1 + -1);
  if (pbVar11 == (byte *)0x0 || *pbVar8 == 0) {
    *(byte *)in_RAX = (byte)*in_RAX ^ (byte)in_RAX;
  }
  bVar6 = *pbVar11;
  bVar4 = (byte)((ulonglong)in_RAX >> 8);
  *pbVar11 = *pbVar11 + bVar4;
  *(int *)((longlong)in_RAX * 2) =
       *(int *)((longlong)in_RAX * 2) + (uint)in_RAX + (uint)CARRY1(bVar6,bVar4);
  uVar7 = ((uint)in_RAX | *in_RAX) + 0x10000854;
  pcVar9 = (char *)(ulonglong)uVar7;
  *unaff_RBX = *unaff_RBX + *pcVar9;
  cVar10 = *pcVar9;
  cVar1 = *pcVar9;
  bVar6 = (byte)(uVar7 >> 8);
  *pcVar9 = *pcVar9 + bVar6;
  if (*pcVar9 == '\0' || SCARRY1(cVar1,bVar6) != *pcVar9 < '\0') {
    bVar4 = *pbVar11;
    *pbVar11 = *pbVar11 + bVar6;
    uVar3 = (undefined3)(uVar7 >> 8);
    bVar4 = (char)uVar7 + *unaff_RSI + CARRY1(bVar4,bVar6);
    pbVar8 = (byte *)(ulonglong)CONCAT31(uVar3,bVar4);
    *(char *)CONCAT62(uVar13,CONCAT11(cVar10,cVar12)) =
         *(char *)CONCAT62(uVar13,CONCAT11(cVar10,cVar12)) + cVar12;
    if (*(char *)CONCAT62(uVar13,CONCAT11(cVar10,cVar12)) != '\0') {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    bVar2 = *pbVar8;
    *(char *)(unaff_RDI + -0x76) = *(char *)(unaff_RDI + -0x76) + bVar4;
    *pbVar8 = *pbVar8 ^ bVar4;
    bVar5 = bVar4 + 0x81;
    pbVar8 = (byte *)(ulonglong)CONCAT31(uVar3,bVar5);
    *pbVar11 = *pbVar11 + unaff_R12B;
    *(char *)((longlong)pbVar8 * 2) = *(char *)((longlong)pbVar8 * 2) + bVar5;
    pbVar11[CONCAT62(uVar13,CONCAT11(bVar2,cVar12))] =
         pbVar11[CONCAT62(uVar13,CONCAT11(bVar2,cVar12))] + bVar2;
    *(char *)((longlong)pbVar11 * 2) = *(char *)((longlong)pbVar11 * 2) + bVar6;
    pbVar11 = (byte *)(ulonglong)
                      ((uint)pbVar11 ^
                      *(uint *)(CONCAT62(uVar13,CONCAT11(bVar2,cVar12)) + -0x75b8ffd0));
    *pbVar8 = *pbVar8 ^ bVar5;
    bVar6 = bVar4 + 2;
    pbVar8 = (byte *)(ulonglong)CONCAT31(uVar3,bVar6);
    *pbVar11 = *pbVar11 + unaff_R12B;
    *pbVar8 = *pbVar8 + bVar6;
    *unaff_RBX = *unaff_RBX + bVar2;
    *(char *)(unaff_RDI + -0x76) = *(char *)(unaff_RDI + -0x76) + bVar6;
    *pbVar8 = *pbVar8 ^ bVar6;
    pcVar9 = (char *)(ulonglong)CONCAT31(uVar3,bVar4 + 0x83);
    *pbVar11 = *pbVar11 + unaff_R12B;
    *pcVar9 = *pcVar9 + bVar4 + 0x83;
    *pcVar9 = *pcVar9 + cVar12;
    cVar10 = *pcVar9;
  }
  *unaff_RBX = *unaff_RBX + cVar10;
  cVar1 = *pcVar9;
  cVar12 = *pcVar9;
  cVar10 = (char)((ulonglong)pcVar9 >> 8);
  *pcVar9 = *pcVar9 + cVar10;
  if (*pcVar9 != '\0' && SCARRY1(cVar12,cVar10) == *pcVar9 < '\0') {
    *pbVar11 = *pbVar11 + cVar10;
    *pcVar9 = *pcVar9 + (char)pcVar9;
    *pbVar11 = *pbVar11 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar11 = *pbVar11 + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

