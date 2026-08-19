// Function: FUN_1404c7fd0
// Addr: 1404c7fd0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c802b) overlaps instruction at (ram,0x0001404c802a)
    */

void FUN_1404c7fd0(uint *param_1,undefined8 param_2,char param_3)

{
  byte *pbVar1;
  undefined3 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  char cVar10;
  byte bVar12;
  char cVar13;
  uint *in_RAX;
  char cVar11;
  undefined6 uVar15;
  char *pcVar7;
  uint *puVar8;
  undefined2 uVar16;
  undefined4 uVar17;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  byte *pbVar9;
  undefined7 uVar14;
  
  uVar17 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar16 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar13 = (char)param_2;
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar4 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar4;
  LOCK();
  uVar6 = *in_RAX;
  *(byte *)in_RAX = (byte)((ulonglong)param_2 >> 8);
  UNLOCK();
  uVar15 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar10 = (char)((ulonglong)in_RAX >> 8) + cVar13;
  pbVar9 = (byte *)CONCAT62(uVar15,CONCAT11(cVar10,bVar4));
  LOCK();
  bVar12 = *pbVar9;
  *pbVar9 = (byte)uVar6;
  UNLOCK();
  cVar11 = cVar10 + bVar4;
  pbVar9 = (byte *)CONCAT62(uVar15,CONCAT11(cVar11,bVar4));
  if (cVar11 == '\0' || SCARRY1(cVar10,bVar4) != cVar11 < '\0') {
    *(char *)(unaff_RDI * 3) = *(char *)(unaff_RDI * 3) + (char)((ulonglong)param_1 >> 8);
  }
  else {
    *(byte *)param_1 = (byte)*param_1 + cVar11;
    *pbVar9 = *pbVar9 + bVar4;
    *pbVar9 = *pbVar9 + cVar11;
    LOCK();
    bVar5 = *pbVar9;
    *pbVar9 = bVar12;
    UNLOCK();
    unaff_RSI[(longlong)pbVar9 * 4 + 0x7ebc0030] =
         unaff_RSI[(longlong)pbVar9 * 4 + 0x7ebc0030] + unaff_BL;
    *(byte *)param_1 = (byte)*param_1 + param_3;
    *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(byte *)CONCAT71(unaff_00000019,unaff_BL) | bVar4;
    *pbVar9 = *pbVar9 + (char)param_1;
    uVar14 = (undefined7)((ulonglong)pbVar9 >> 8);
    cVar11 = bVar4 - 0x20;
    pcVar7 = (char *)CONCAT71(uVar14,cVar11);
    cVar10 = *pcVar7;
    *pcVar7 = *pcVar7 + cVar11;
    *param_1 = *param_1 & CONCAT22(uVar16,CONCAT11(bVar5 + cVar10,cVar13));
    puVar8 = (uint *)CONCAT71(uVar14,cVar11);
    uVar6 = ((uint)puVar8 | *puVar8) + 0x10000854;
    pcVar7 = (char *)(ulonglong)uVar6;
    *(char *)CONCAT71(unaff_00000019,unaff_BL) =
         *(char *)CONCAT71(unaff_00000019,unaff_BL) + *pcVar7;
    cVar11 = *pcVar7;
    cVar10 = *pcVar7;
    bVar12 = (byte)(uVar6 >> 8);
    *pcVar7 = *pcVar7 + bVar12;
    if (*pcVar7 != '\0' && SCARRY1(cVar10,bVar12) == *pcVar7 < '\0') goto code_r0x0001404c805f;
    uVar3 = *param_1;
    *(byte *)param_1 = (byte)*param_1 + bVar12;
    uVar2 = (undefined3)(uVar6 >> 8);
    bVar4 = (char)uVar6 + *unaff_RSI + CARRY1((byte)uVar3,bVar12);
    pbVar9 = (byte *)(ulonglong)CONCAT31(uVar2,bVar4);
    *(char *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(cVar11,cVar13))) =
         *(char *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(cVar11,cVar13))) + cVar13;
    if (*(char *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(cVar11,cVar13))) != '\0') {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    bVar12 = *pbVar9;
    *(char *)(unaff_RDI + -0x76) = *(char *)(unaff_RDI + -0x76) + bVar4;
    *pbVar9 = *pbVar9 ^ bVar4;
    pbVar9 = (byte *)(ulonglong)CONCAT31(uVar2,bVar4 + 0x81);
  }
  *(byte *)param_1 = (byte)*param_1 + unaff_R12B;
  bVar4 = (byte)pbVar9;
  *(char *)((longlong)pbVar9 * 2) = *(char *)((longlong)pbVar9 * 2) + bVar4;
  pbVar1 = (byte *)(CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(bVar12,cVar13))) + (longlong)param_1);
  *pbVar1 = *pbVar1 + bVar12;
  *(char *)((longlong)param_1 * 2) =
       *(char *)((longlong)param_1 * 2) + (char)((ulonglong)pbVar9 >> 8);
  param_1 = (uint *)(ulonglong)
                    ((uint)param_1 ^
                    *(uint *)(CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(bVar12,cVar13))) +
                             -0x75b8ffd0));
  *pbVar9 = *pbVar9 ^ bVar4;
  uVar14 = (undefined7)((ulonglong)pbVar9 >> 8);
  bVar5 = bVar4 + 0x81;
  pbVar9 = (byte *)CONCAT71(uVar14,bVar5);
  *(byte *)param_1 = (byte)*param_1 + unaff_R12B;
  *pbVar9 = *pbVar9 + bVar5;
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + bVar12;
  *(char *)(unaff_RDI + -0x76) = *(char *)(unaff_RDI + -0x76) + bVar5;
  *pbVar9 = *pbVar9 ^ bVar5;
  pcVar7 = (char *)CONCAT71(uVar14,bVar4 + 2);
  *(byte *)param_1 = (byte)*param_1 + unaff_R12B;
  *pcVar7 = *pcVar7 + bVar4 + 2;
  *pcVar7 = *pcVar7 + cVar13;
  cVar11 = *pcVar7;
code_r0x0001404c805f:
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar11;
  cVar11 = *pcVar7;
  cVar10 = *pcVar7;
  cVar13 = (char)((ulonglong)pcVar7 >> 8);
  *pcVar7 = *pcVar7 + cVar13;
  if (*pcVar7 != '\0' && SCARRY1(cVar10,cVar13) == *pcVar7 < '\0') {
    *(byte *)param_1 = (byte)*param_1 + cVar13;
    *pcVar7 = *pcVar7 + (char)pcVar7;
    *(byte *)param_1 = (byte)*param_1 + cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)param_1 = (byte)*param_1 + cVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

