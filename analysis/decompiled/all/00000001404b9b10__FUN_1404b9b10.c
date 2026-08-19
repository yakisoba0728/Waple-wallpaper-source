// Function: FUN_1404b9b10
// Addr: 1404b9b10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b9b66) overlaps instruction at (ram,0x0001404b9b64)
    */

void FUN_1404b9b10(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined3 uVar5;
  byte bVar6;
  char cVar7;
  byte bVar16;
  uint uVar8;
  int iVar9;
  uint uVar10;
  char cVar15;
  undefined8 in_RAX;
  undefined6 uVar18;
  int *piVar11;
  char cVar17;
  ulonglong uVar14;
  byte bVar19;
  char cVar20;
  char unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RSI;
  char *unaff_RDI;
  uint *puVar12;
  char *pcVar13;
  
  uVar10 = (uint)param_1;
  pcVar13 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x1f);
  *pcVar13 = *pcVar13 + unaff_BH;
  cVar15 = *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  cVar20 = (char)param_2;
  *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
       cVar20;
  if (SCARRY1(cVar15,cVar20) ==
      *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) < '\0')
  {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar18 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar15 = (char)((ulonglong)in_RAX >> 8) + cVar20;
  bVar19 = (byte)param_1;
  *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
       bVar19;
  *(uint *)(param_2 + param_1) = *(uint *)(param_2 + param_1) & (uint)param_2;
  pcVar13 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + unaff_RSI * 8);
  *pcVar13 = *pcVar13 + cVar20;
  puVar12 = (uint *)CONCAT62(uVar18,CONCAT11(cVar15 * '\x02',
                                             (byte)in_RAX |
                                             *(byte *)CONCAT62(uVar18,CONCAT11(cVar15,(byte)in_RAX))
                                            ));
  piVar11 = (int *)((ulonglong)((uint)puVar12 | *puVar12) | 0x74);
  iVar9 = (int)piVar11 + *piVar11;
  bVar16 = (byte)((uint)iVar9 >> 8);
  *(byte *)(param_2 * 2) = *(byte *)(param_2 * 2) | bVar16;
  bVar6 = (byte)iVar9 + 0x54;
  uVar4 = CONCAT31((int3)((uint)iVar9 >> 8),bVar6);
  puVar12 = (uint *)(ulonglong)uVar4;
  uVar3 = (uint)(0xab < (byte)iVar9);
  uVar8 = *puVar12;
  uVar2 = *puVar12;
  *puVar12 = uVar2 + uVar4 + uVar3;
  cVar15 = (char)((ulonglong)param_2 >> 8);
  if (*puVar12 != 0 && (SCARRY4(uVar8,uVar4) != SCARRY4(uVar2 + uVar4,uVar3)) == (int)*puVar12 < 0)
  {
    *(char *)(param_1 + 0x60001f7e) = *(char *)(param_1 + 0x60001f7e) + unaff_BH;
    *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
         uVar10;
    *puVar12 = *puVar12 & uVar4;
    uVar8 = *puVar12;
    uVar2 = *puVar12;
    *(byte *)puVar12 = (byte)*puVar12 + bVar6;
    if ((byte)*puVar12 == 0 || SCARRY1((byte)uVar2,bVar6) != (char)(byte)*puVar12 < '\0') {
      *puVar12 = *puVar12 + uVar4 + (uint)CARRY1((byte)uVar8,bVar6);
    }
    else {
      *(char *)(param_1 + 0x60001f7e) = *(char *)(param_1 + 0x60001f7e) + unaff_BH;
      *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
           *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
           uVar10;
      *puVar12 = *puVar12 & uVar4;
      puVar12 = (uint *)(ulonglong)
                        CONCAT22((short)((uint)iVar9 >> 0x10),
                                 CONCAT11(bVar16 + cVar15,bVar6 | (byte)*puVar12));
    }
  }
  puVar12 = (uint *)CONCAT62((int6)((ulonglong)puVar12 >> 0x10),
                             CONCAT11((char)((ulonglong)puVar12 >> 8) * '\x02',
                                      (byte)puVar12 | (byte)*puVar12));
  uVar8 = (uint)puVar12 | *puVar12;
  pcVar13 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                    param_2);
  *pcVar13 = *pcVar13 + cVar15;
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + (char)(uVar8 >> 8);
  pcVar13 = (char *)(param_1 + param_2);
  cVar1 = *pcVar13;
  *pcVar13 = *pcVar13 + cVar20;
  if (*pcVar13 != '\0' && SCARRY1(cVar1,cVar20) == *pcVar13 < '\0') {
    *(char *)(param_1 + 0x60001f7e) = *(char *)(param_1 + 0x60001f7e) + unaff_BH;
    *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
         uVar10;
    *(uint *)(ulonglong)uVar8 = *(uint *)(ulonglong)uVar8 & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar9 = uVar8 + 0xdc40500;
  uVar5 = (undefined3)((uint)iVar9 >> 8);
  cVar7 = (char)iVar9 + cVar20;
  pcVar13 = (char *)(ulonglong)CONCAT31(uVar5,cVar7);
  *unaff_RDI = *unaff_RDI + bVar19;
  LOCK();
  cVar1 = *unaff_RDI;
  *unaff_RDI = unaff_BL;
  UNLOCK();
  cVar17 = (char)((uint)iVar9 >> 8);
  pcVar13[0xd] = pcVar13[0xd] + cVar17;
  *param_4 = *param_4 + (char)unaff_ESP;
  *pcVar13 = *pcVar13 + cVar7;
  uVar14 = (ulonglong)CONCAT31(uVar5,cVar7 + cVar20);
  *unaff_RDI = *unaff_RDI + bVar19;
  LOCK();
  *unaff_RDI = cVar1;
  UNLOCK();
  pcVar13 = (char *)(uVar14 + 0xd);
  *pcVar13 = *pcVar13 + cVar17;
  *param_4 = *param_4 + (char)unaff_ESP;
  pcVar13 = (char *)(uVar14 * 2);
  *pcVar13 = *pcVar13 + bVar19;
  uVar10 = CONCAT22((short)((uint)iVar9 >> 0x10),CONCAT11((cVar17 + cVar15) * '\x02',cVar7 + cVar20)
                   ) + 0x6d40000;
  *(char *)(ulonglong)uVar10 = *(char *)(ulonglong)uVar10 + (char)uVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

