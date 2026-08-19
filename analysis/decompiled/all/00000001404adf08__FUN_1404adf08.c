// Function: FUN_1404adf08
// Addr: 1404adf08
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404adf4b) overlaps instruction at (ram,0x0001404adf4a)
    */
/* WARNING: Removing unreachable block (ram,0x0001404adf4a) */

void FUN_1404adf08(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  char cVar10;
  char *pcVar7;
  undefined7 uVar11;
  byte *pbVar9;
  byte bVar12;
  byte *pbVar14;
  byte bVar15;
  char cVar16;
  undefined2 uVar17;
  undefined4 uVar18;
  byte *unaff_RBX;
  byte *unaff_RDI;
  char in_CF;
  undefined1 auStack_49e0 [18912];
  uint *puVar8;
  longlong lVar13;
  
  uVar18 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar17 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar16 = (char)((ulonglong)param_2 >> 8);
  bVar15 = (byte)param_2;
  pcVar3 = (code *)swi(0x84);
  pcVar7 = (char *)(*pcVar3)();
  uVar11 = (undefined7)((ulonglong)pcVar7 >> 8);
  bVar5 = (char)pcVar7 + *pcVar7 + in_CF;
  puVar8 = (uint *)CONCAT71(uVar11,bVar5);
  *puVar8 = *puVar8 & (uint)puVar8;
  *(byte *)puVar8 = (char)*puVar8 + bVar5;
  bVar12 = (byte)param_1;
  lVar13 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                    CONCAT11((char)((ulonglong)param_1 >> 8) + bVar12,bVar12));
  bVar6 = bVar5 + bVar12;
  pbVar14 = (byte *)(lVar13 + -1);
  cVar10 = (char)((ulonglong)pcVar7 >> 8);
  if (pbVar14 != (byte *)0x0 && bVar6 != 0) {
    *unaff_RBX = *unaff_RBX | bVar15;
    uVar4 = (ulonglong)
            CONCAT61((int6)((ulonglong)pcVar7 >> 0x10),cVar10 + bVar6 + CARRY1(bVar5,bVar12)) &
            0xffffff;
    bVar6 = *(byte *)(uVar4 << 8);
    uVar11 = (undefined7)uVar4;
    pcVar7 = (char *)CONCAT71(uVar11,bVar6);
    LOCK();
    uVar1 = *(undefined4 *)(lVar13 + -0x2183ffef);
    *(undefined4 *)(lVar13 + -0x2183ffef) = CONCAT22(uVar17,CONCAT11(cVar16,bVar15));
    UNLOCK();
    *pbVar14 = *pbVar14 + (char)auStack_49e0;
    *pcVar7 = *pcVar7 + bVar6;
    pbVar9 = (byte *)(pcVar7 + -0x70);
    bVar5 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar6;
    bVar5 = bVar6 + *pcVar7 + CARRY1(bVar5,bVar6);
    pcVar7 = (char *)CONCAT71(uVar11,bVar5);
    LOCK();
    uVar2 = *(undefined4 *)(lVar13 + -0x2183ffef);
    *(undefined4 *)(lVar13 + -0x2183ffef) = uVar1;
    UNLOCK();
    *pbVar14 = *pbVar14 + (char)auStack_49e0;
    *(byte *)CONCAT44(uVar18,uVar2) = *(byte *)CONCAT44(uVar18,uVar2) | bVar5;
    *pcVar7 = *pcVar7 + (char)pbVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar5 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar6;
  bVar6 = bVar6 + 10 + CARRY1(bVar5,bVar6);
  pbVar9 = (byte *)CONCAT71(uVar11,bVar6);
  pbVar14[(longlong)pbVar9] = pbVar14[(longlong)pbVar9] + bVar15;
  cRam000000014a2aeb1d = cRam000000014a2aeb1d + (char)pbVar14;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  bVar5 = *pbVar9;
  *(int *)(unaff_RDI + 7) = *(int *)(unaff_RDI + 7) + (int)auStack_49e0;
  unaff_RDI[0x54] = unaff_RDI[0x54] + cVar10;
  bVar5 = bVar6 | *pbVar9 |
          *(byte *)(CONCAT44(uVar18,CONCAT22(uVar17,CONCAT11(cVar16 + bVar5,bVar15))) + 6);
  pcVar7 = (char *)(lVar13 + -2);
  if (pcVar7 != (char *)0x0 && bVar5 != 0) {
    *(byte *)CONCAT71(uVar11,bVar5) = *(byte *)CONCAT71(uVar11,bVar5) ^ bVar5;
    *pcVar7 = *pcVar7 + bVar5;
    sysret();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

