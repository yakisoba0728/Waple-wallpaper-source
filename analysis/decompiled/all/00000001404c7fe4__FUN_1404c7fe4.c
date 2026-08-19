// Function: FUN_1404c7fe4
// Addr: 1404c7fe4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7fe4(uint *param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  undefined3 uVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  char cVar14;
  byte *in_RAX;
  undefined7 uVar15;
  uint *puVar11;
  undefined2 uVar16;
  undefined4 uVar17;
  byte *unaff_RBX;
  char *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  char *pcVar10;
  byte *pbVar12;
  byte *pbVar13;
  
  uVar17 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar16 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar14 = (char)param_2;
  bVar8 = (byte)in_RAX;
  unaff_RSI[-0x7963ffd0] = unaff_RSI[-0x7963ffd0] & bVar8;
  *in_RAX = *in_RAX ^ bVar8;
  *unaff_RBX = *unaff_RBX | bVar8;
  *in_RAX = *in_RAX + (char)param_1;
  uVar15 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar5 = bVar8 - 0x20;
  pcVar10 = (char *)CONCAT71(uVar15,cVar5);
  cVar1 = *pcVar10;
  *pcVar10 = *pcVar10 + cVar5;
  *param_1 = *param_1 & CONCAT22(uVar16,CONCAT11((char)((ulonglong)param_2 >> 8) + cVar1,cVar14));
  puVar11 = (uint *)CONCAT71(uVar15,cVar5);
  uVar9 = ((uint)puVar11 | *puVar11) + 0x10000854;
  pcVar10 = (char *)(ulonglong)uVar9;
  *unaff_RBX = *unaff_RBX + *pcVar10;
  cVar5 = *pcVar10;
  cVar1 = *pcVar10;
  bVar8 = (byte)(uVar9 >> 8);
  *pcVar10 = *pcVar10 + bVar8;
  if (*pcVar10 == '\0' || SCARRY1(cVar1,bVar8) != *pcVar10 < '\0') {
    uVar4 = *param_1;
    *(byte *)param_1 = (byte)*param_1 + bVar8;
    uVar3 = (undefined3)(uVar9 >> 8);
    bVar6 = (char)uVar9 + *unaff_RSI + CARRY1((byte)uVar4,bVar8);
    pbVar12 = (byte *)(ulonglong)CONCAT31(uVar3,bVar6);
    *(char *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(cVar5,cVar14))) =
         *(char *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(cVar5,cVar14))) + cVar14;
    if (*(char *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(cVar5,cVar14))) != '\0') {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    bVar2 = *pbVar12;
    *(char *)(unaff_RDI + -0x76) = *(char *)(unaff_RDI + -0x76) + bVar6;
    *pbVar12 = *pbVar12 ^ bVar6;
    bVar7 = bVar6 + 0x81;
    pbVar13 = (byte *)(ulonglong)CONCAT31(uVar3,bVar7);
    *(byte *)param_1 = (byte)*param_1 + unaff_R12B;
    *(char *)((longlong)pbVar13 * 2) = *(char *)((longlong)pbVar13 * 2) + bVar7;
    pbVar12 = (byte *)(CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(bVar2,cVar14))) + (longlong)param_1)
    ;
    *pbVar12 = *pbVar12 + bVar2;
    *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + bVar8;
    param_1 = (uint *)(ulonglong)
                      ((uint)param_1 ^
                      *(uint *)(CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(bVar2,cVar14))) +
                               -0x75b8ffd0));
    *pbVar13 = *pbVar13 ^ bVar7;
    bVar8 = bVar6 + 2;
    pbVar12 = (byte *)(ulonglong)CONCAT31(uVar3,bVar8);
    *(byte *)param_1 = (byte)*param_1 + unaff_R12B;
    *pbVar12 = *pbVar12 + bVar8;
    *unaff_RBX = *unaff_RBX + bVar2;
    *(char *)(unaff_RDI + -0x76) = *(char *)(unaff_RDI + -0x76) + bVar8;
    *pbVar12 = *pbVar12 ^ bVar8;
    pcVar10 = (char *)(ulonglong)CONCAT31(uVar3,bVar6 + 0x83);
    *(byte *)param_1 = (byte)*param_1 + unaff_R12B;
    *pcVar10 = *pcVar10 + bVar6 + 0x83;
    *pcVar10 = *pcVar10 + cVar14;
    cVar5 = *pcVar10;
  }
  *unaff_RBX = *unaff_RBX + cVar5;
  cVar5 = *pcVar10;
  cVar1 = *pcVar10;
  cVar14 = (char)((ulonglong)pcVar10 >> 8);
  *pcVar10 = *pcVar10 + cVar14;
  if (*pcVar10 != '\0' && SCARRY1(cVar1,cVar14) == *pcVar10 < '\0') {
    *(byte *)param_1 = (byte)*param_1 + cVar14;
    *pcVar10 = *pcVar10 + (char)pcVar10;
    *(byte *)param_1 = (byte)*param_1 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)param_1 = (byte)*param_1 + cVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

