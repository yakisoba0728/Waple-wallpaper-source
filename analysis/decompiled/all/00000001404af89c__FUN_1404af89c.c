// Function: FUN_1404af89c
// Addr: 1404af89c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404af8ec) overlaps instruction at (ram,0x0001404af8eb)
    */

void FUN_1404af89c(undefined1 *param_1,char *param_2,undefined8 param_3,undefined1 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int3 iVar4;
  uint uVar5;
  undefined3 uVar6;
  byte bVar7;
  char cVar8;
  undefined2 in_AX;
  uint uVar9;
  uint *puVar10;
  byte *pbVar11;
  byte bVar12;
  char cVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  char cVar16;
  byte bVar17;
  byte unaff_BL;
  char cVar18;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  int unaff_ESI;
  char *pcVar19;
  longlong unaff_RDI;
  bool bVar20;
  bool bVar21;
  
  bVar17 = (byte)((ulonglong)param_2 >> 8);
  cVar16 = (char)param_2;
  uVar15 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar14 = (undefined2)((ulonglong)param_1 >> 0x10);
  cVar13 = (char)((ulonglong)param_1 >> 8);
  iVar4 = (int3)(char)((ushort)in_AX >> 8);
  uVar5 = CONCAT31(iVar4,0x74);
  puVar10 = (uint *)(ulonglong)uVar5;
  pcVar19 = (char *)(ulonglong)(uint)(unaff_ESI + *(int *)(unaff_RBP + 0x14));
  *(char *)((longlong)puVar10 + -9) = *(char *)((longlong)puVar10 + -9) + cVar13;
  *param_1 = *param_1;
  bVar12 = (byte)param_1 ^ (byte)*puVar10;
  *param_2 = *param_2 + bVar17;
  uVar1 = *puVar10;
  *puVar10 = *puVar10 + uVar5;
  uVar2 = (uint)unaff_RBP - uVar5;
  bVar20 = (uint)unaff_RBP < uVar5 || uVar2 < CARRY4(uVar1,uVar5);
  bVar7 = (char)*puVar10 + 0x74;
  bVar21 = 0x8b < (byte)*puVar10 || CARRY1(bVar7,bVar20);
  bVar7 = bVar7 + bVar20;
  uVar9 = CONCAT31(iVar4,bVar7);
  cVar18 = unaff_BL + bVar7 + bVar21;
  uVar9 = uVar9 + *(int *)(ulonglong)uVar9 +
          (uint)(CARRY1(unaff_BL,bVar7) || CARRY1(unaff_BL + bVar7,bVar21)) |
          CONCAT22(uVar14,CONCAT11(cVar13,bVar12));
  cVar8 = (char)uVar9;
  uVar6 = (undefined3)(uVar9 >> 8);
  if (cVar8 == '\0') {
    pbVar11 = (byte *)(unaff_RDI + -0x7c);
    bVar21 = CARRY1(*pbVar11,bVar17);
    *pbVar11 = *pbVar11 + bVar17;
    *(undefined1 *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,bVar12))) =
         *(undefined1 *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,bVar12)));
    *(char *)(ulonglong)CONCAT31(uVar6,bVar21) = *(char *)(ulonglong)CONCAT31(uVar6,bVar21) + bVar21
    ;
    pbVar11 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH << 1,cVar18)) + 0x77);
    bVar7 = *pbVar11;
    *pbVar11 = *pbVar11 + bVar12;
    bVar20 = CARRY1(bVar21,CARRY1(bVar7,bVar12));
    cVar8 = bVar21 + CARRY1(bVar7,bVar12);
    if (!bVar20 && cVar8 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar7 = cVar8 + bVar20;
    pbVar11 = (byte *)(ulonglong)CONCAT31(uVar6,bVar7);
    unaff_BH = unaff_BH << 2;
    *(byte *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,bVar12))) =
         *(char *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,bVar12))) + bVar7;
    *pbVar11 = *pbVar11 | bVar7;
  }
  else {
    pbVar11 = (byte *)(ulonglong)CONCAT31(uVar6,cVar8 + cVar16);
  }
  *pbVar11 = (byte)pbVar11;
  *(char *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,bVar12))) =
       *(char *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,bVar12))) + cVar13;
  if (-1 < *(char *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,bVar12)))) {
    *pcVar19 = *pcVar19 + cVar16;
    bVar7 = *pbVar11;
    *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar18)) =
         *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar18)) +
         CONCAT22(uVar14,CONCAT11(cVar13,bVar12));
    iVar3 = ((uint)pbVar11 | *(uint *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,bVar12)))) +
            0xfd0ffc00;
    *(byte *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,bVar12))) =
         *(byte *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,bVar12))) ^
         (byte)((uint)iVar3 >> 8);
    *(undefined1 *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(bVar17 + bVar7,cVar16)) =
         param_4;
    pcVar19 = (char *)((ulonglong)(uVar2 - CARRY4(uVar1,uVar5)) + 0x78);
    *pcVar19 = *pcVar19 + (char)iVar3;
    in(0x1a);
    cRam00000001654b14ed = cRam00000001654b14ed + cVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

