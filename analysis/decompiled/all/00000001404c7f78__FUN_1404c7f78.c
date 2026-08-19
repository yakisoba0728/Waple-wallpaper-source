// Function: FUN_1404c7f78
// Addr: 1404c7f78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7f78(uint *param_1,char *param_2)

{
  byte bVar1;
  undefined3 uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  char cVar12;
  uint *in_RAX;
  char cVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  char *unaff_RBX;
  char *unaff_RSI;
  uint *unaff_RDI;
  char unaff_R12B;
  bool in_ZF;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  uVar15 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar14 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar13 = (char)param_2;
  cVar4 = (char)in_RAX;
  if (!in_ZF) {
    *(byte *)param_1 = (byte)*param_1 + unaff_R12B;
    *(char *)in_RAX = (char)*in_RAX + cVar4;
    bVar5 = cVar4 + (char)((ulonglong)in_RAX >> 8);
    pcVar9 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar5);
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar9;
    (pcVar9 + 0x4c7e6400)[(longlong)unaff_RSI] = (pcVar9 + 0x4c7e6400)[(longlong)unaff_RSI] - bVar5;
    uVar8 = *param_1;
    *(byte *)param_1 = (byte)*param_1 + bVar5;
    *param_2 = *param_2 + bVar5 + CARRY1((byte)uVar8,bVar5);
    *pcVar9 = *pcVar9 + cVar13;
    LOCK();
    *unaff_RDI = *unaff_RDI & (uint)param_1;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar8 = *in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar4;
  *param_1 = *param_1 &
             CONCAT22(uVar14,CONCAT11((char)((ulonglong)param_2 >> 8) + (char)uVar8,cVar13));
  uVar8 = ((uint)in_RAX | *in_RAX) + 0x10000854;
  pcVar9 = (char *)(ulonglong)uVar8;
  *unaff_RBX = *unaff_RBX + *pcVar9;
  cVar12 = *pcVar9;
  cVar4 = *pcVar9;
  bVar5 = (byte)(uVar8 >> 8);
  *pcVar9 = *pcVar9 + bVar5;
  if (*pcVar9 == '\0' || SCARRY1(cVar4,bVar5) != *pcVar9 < '\0') {
    uVar3 = *param_1;
    *(byte *)param_1 = (byte)*param_1 + bVar5;
    uVar2 = (undefined3)(uVar8 >> 8);
    bVar6 = (char)uVar8 + *unaff_RSI + CARRY1((byte)uVar3,bVar5);
    pbVar10 = (byte *)(ulonglong)CONCAT31(uVar2,bVar6);
    *(char *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar12,cVar13))) =
         *(char *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar12,cVar13))) + cVar13;
    if (*(char *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar12,cVar13))) != '\0') {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    bVar1 = *pbVar10;
    *(char *)((longlong)unaff_RDI + -0x76) = *(char *)((longlong)unaff_RDI + -0x76) + bVar6;
    *pbVar10 = *pbVar10 ^ bVar6;
    bVar7 = bVar6 + 0x81;
    pbVar11 = (byte *)(ulonglong)CONCAT31(uVar2,bVar7);
    *(byte *)param_1 = (byte)*param_1 + unaff_R12B;
    *(char *)((longlong)pbVar11 * 2) = *(char *)((longlong)pbVar11 * 2) + bVar7;
    pbVar10 = (byte *)(CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(bVar1,cVar13))) + (longlong)param_1)
    ;
    *pbVar10 = *pbVar10 + bVar1;
    *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + bVar5;
    param_1 = (uint *)(ulonglong)
                      ((uint)param_1 ^
                      *(uint *)(CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(bVar1,cVar13))) +
                               -0x75b8ffd0));
    *pbVar11 = *pbVar11 ^ bVar7;
    bVar5 = bVar6 + 2;
    pbVar10 = (byte *)(ulonglong)CONCAT31(uVar2,bVar5);
    *(byte *)param_1 = (byte)*param_1 + unaff_R12B;
    *pbVar10 = *pbVar10 + bVar5;
    *unaff_RBX = *unaff_RBX + bVar1;
    *(char *)((longlong)unaff_RDI + -0x76) = *(char *)((longlong)unaff_RDI + -0x76) + bVar5;
    *pbVar10 = *pbVar10 ^ bVar5;
    pcVar9 = (char *)(ulonglong)CONCAT31(uVar2,bVar6 + 0x83);
    *(byte *)param_1 = (byte)*param_1 + unaff_R12B;
    *pcVar9 = *pcVar9 + bVar6 + 0x83;
    *pcVar9 = *pcVar9 + cVar13;
    cVar12 = *pcVar9;
  }
  *unaff_RBX = *unaff_RBX + cVar12;
  cVar13 = *pcVar9;
  cVar4 = *pcVar9;
  cVar12 = (char)((ulonglong)pcVar9 >> 8);
  *pcVar9 = *pcVar9 + cVar12;
  if (*pcVar9 != '\0' && SCARRY1(cVar4,cVar12) == *pcVar9 < '\0') {
    *(byte *)param_1 = (byte)*param_1 + cVar12;
    *pcVar9 = *pcVar9 + (char)pcVar9;
    *(byte *)param_1 = (byte)*param_1 + cVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)param_1 = (byte)*param_1 + cVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

