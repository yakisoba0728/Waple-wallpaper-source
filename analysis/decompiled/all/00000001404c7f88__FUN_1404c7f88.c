// Function: FUN_1404c7f88
// Addr: 1404c7f88
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c802b) overlaps instruction at (ram,0x0001404c802a)
    */

void FUN_1404c7f88(uint *param_1,char *param_2,char param_3)

{
  byte *pbVar1;
  undefined3 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  char cVar10;
  char *in_RAX;
  char cVar11;
  undefined6 uVar13;
  char *pcVar7;
  uint *puVar8;
  char cVar14;
  byte bVar15;
  undefined2 uVar16;
  undefined4 uVar17;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RSI;
  uint *unaff_RDI;
  char unaff_R12B;
  bool in_ZF;
  char in_SF;
  char in_OF;
  byte *pbVar9;
  undefined7 uVar12;
  
  uVar17 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar16 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar14 = (char)param_2;
  bVar4 = (byte)in_RAX;
  if (!in_ZF && in_OF == in_SF) {
    uVar6 = *param_1;
    *(byte *)param_1 = (byte)*param_1 + bVar4;
    *param_2 = *param_2 + bVar4 + CARRY1((byte)uVar6,bVar4);
    *in_RAX = *in_RAX + cVar14;
    LOCK();
    *unaff_RDI = *unaff_RDI & (uint)param_1;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar13 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar10 = (char)((ulonglong)in_RAX >> 8) + cVar14;
  pbVar9 = (byte *)CONCAT62(uVar13,CONCAT11(cVar10,bVar4));
  LOCK();
  bVar15 = *pbVar9;
  *pbVar9 = (byte)((ulonglong)param_2 >> 8);
  UNLOCK();
  cVar11 = cVar10 + bVar4;
  pbVar9 = (byte *)CONCAT62(uVar13,CONCAT11(cVar11,bVar4));
  if (cVar11 == '\0' || SCARRY1(cVar10,bVar4) != cVar11 < '\0') {
    *(char *)((longlong)unaff_RDI * 3) =
         *(char *)((longlong)unaff_RDI * 3) + (char)((ulonglong)param_1 >> 8);
  }
  else {
    *(byte *)param_1 = (byte)*param_1 + cVar11;
    *pbVar9 = *pbVar9 + bVar4;
    *pbVar9 = *pbVar9 + cVar11;
    LOCK();
    bVar5 = *pbVar9;
    *pbVar9 = bVar15;
    UNLOCK();
    unaff_RSI[(longlong)pbVar9 * 4 + 0x7ebc0030] =
         unaff_RSI[(longlong)pbVar9 * 4 + 0x7ebc0030] + unaff_BL;
    *(byte *)param_1 = (byte)*param_1 + param_3;
    *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(byte *)CONCAT71(unaff_00000019,unaff_BL) | bVar4;
    *pbVar9 = *pbVar9 + (char)param_1;
    uVar12 = (undefined7)((ulonglong)pbVar9 >> 8);
    cVar11 = bVar4 - 0x20;
    pcVar7 = (char *)CONCAT71(uVar12,cVar11);
    cVar10 = *pcVar7;
    *pcVar7 = *pcVar7 + cVar11;
    *param_1 = *param_1 & CONCAT22(uVar16,CONCAT11(bVar5 + cVar10,cVar14));
    puVar8 = (uint *)CONCAT71(uVar12,cVar11);
    uVar6 = ((uint)puVar8 | *puVar8) + 0x10000854;
    pcVar7 = (char *)(ulonglong)uVar6;
    *(char *)CONCAT71(unaff_00000019,unaff_BL) =
         *(char *)CONCAT71(unaff_00000019,unaff_BL) + *pcVar7;
    cVar11 = *pcVar7;
    cVar10 = *pcVar7;
    bVar4 = (byte)(uVar6 >> 8);
    *pcVar7 = *pcVar7 + bVar4;
    if (*pcVar7 != '\0' && SCARRY1(cVar10,bVar4) == *pcVar7 < '\0') goto code_r0x0001404c805f;
    uVar3 = *param_1;
    *(byte *)param_1 = (byte)*param_1 + bVar4;
    uVar2 = (undefined3)(uVar6 >> 8);
    bVar4 = (char)uVar6 + *unaff_RSI + CARRY1((byte)uVar3,bVar4);
    pbVar9 = (byte *)(ulonglong)CONCAT31(uVar2,bVar4);
    *(char *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(cVar11,cVar14))) =
         *(char *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(cVar11,cVar14))) + cVar14;
    if (*(char *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(cVar11,cVar14))) != '\0') {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    bVar15 = *pbVar9;
    *(char *)((longlong)unaff_RDI + -0x76) = *(char *)((longlong)unaff_RDI + -0x76) + bVar4;
    *pbVar9 = *pbVar9 ^ bVar4;
    pbVar9 = (byte *)(ulonglong)CONCAT31(uVar2,bVar4 + 0x81);
  }
  *(byte *)param_1 = (byte)*param_1 + unaff_R12B;
  bVar4 = (byte)pbVar9;
  *(char *)((longlong)pbVar9 * 2) = *(char *)((longlong)pbVar9 * 2) + bVar4;
  pbVar1 = (byte *)(CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(bVar15,cVar14))) + (longlong)param_1);
  *pbVar1 = *pbVar1 + bVar15;
  *(char *)((longlong)param_1 * 2) =
       *(char *)((longlong)param_1 * 2) + (char)((ulonglong)pbVar9 >> 8);
  param_1 = (uint *)(ulonglong)
                    ((uint)param_1 ^
                    *(uint *)(CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(bVar15,cVar14))) +
                             -0x75b8ffd0));
  *pbVar9 = *pbVar9 ^ bVar4;
  uVar12 = (undefined7)((ulonglong)pbVar9 >> 8);
  bVar5 = bVar4 + 0x81;
  pbVar9 = (byte *)CONCAT71(uVar12,bVar5);
  *(byte *)param_1 = (byte)*param_1 + unaff_R12B;
  *pbVar9 = *pbVar9 + bVar5;
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + bVar15;
  *(char *)((longlong)unaff_RDI + -0x76) = *(char *)((longlong)unaff_RDI + -0x76) + bVar5;
  *pbVar9 = *pbVar9 ^ bVar5;
  pcVar7 = (char *)CONCAT71(uVar12,bVar4 + 2);
  *(byte *)param_1 = (byte)*param_1 + unaff_R12B;
  *pcVar7 = *pcVar7 + bVar4 + 2;
  *pcVar7 = *pcVar7 + cVar14;
  cVar11 = *pcVar7;
code_r0x0001404c805f:
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar11;
  cVar10 = *pcVar7;
  cVar14 = *pcVar7;
  cVar11 = (char)((ulonglong)pcVar7 >> 8);
  *pcVar7 = *pcVar7 + cVar11;
  if (*pcVar7 != '\0' && SCARRY1(cVar14,cVar11) == *pcVar7 < '\0') {
    *(byte *)param_1 = (byte)*param_1 + cVar11;
    *pcVar7 = *pcVar7 + (char)pcVar7;
    *(byte *)param_1 = (byte)*param_1 + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)param_1 = (byte)*param_1 + cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

