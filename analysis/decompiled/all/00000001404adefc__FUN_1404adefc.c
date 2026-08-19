// Function: FUN_1404adefc
// Addr: 1404adefc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404adf4b) overlaps instruction at (ram,0x0001404adf4a)
    */
/* WARNING: Removing unreachable block (ram,0x0001404adf4a) */

void FUN_1404adefc(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  uint3 uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  longlong in_RAX;
  byte *pbVar8;
  char cVar9;
  char *pcVar11;
  byte *pbVar12;
  char *pcVar13;
  byte bVar14;
  byte bVar15;
  undefined2 uVar16;
  undefined4 uVar17;
  byte *unaff_RBX;
  byte *unaff_RDI;
  longlong lVar10;
  
  uVar17 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar16 = (undefined2)((ulonglong)param_2 >> 0x10);
  bVar14 = (byte)param_2;
  bVar15 = (byte)((ulonglong)param_2 >> 8) | unaff_RDI[in_RAX];
  iVar7 = (int)in_RAX + -0x6ffff99c;
  cVar9 = (char)param_1;
  lVar10 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                    CONCAT11((char)((ulonglong)param_1 >> 8) + cVar9,cVar9));
  uVar3 = (undefined3)((uint)iVar7 >> 8);
  bVar5 = (char)iVar7 + cVar9;
  pcVar13 = (char *)(ulonglong)CONCAT31(uVar3,bVar5);
  pcVar11 = (char *)(lVar10 + -1);
  cVar9 = (char)((uint)iVar7 >> 8);
  if (pcVar11 != (char *)0x0 && bVar5 != 0) {
    pbVar12 = (byte *)(ulonglong)CONCAT31(uVar3,bVar5 + 0x70);
    *pbVar12 = *pbVar12 ^ bVar5 + 0x70;
    *pcVar11 = *pcVar11 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar11 = *pcVar11 + cVar9;
  *pcVar13 = *pcVar13 + bVar5;
  pcVar13[-0x32ffed7c] = pcVar13[-0x32ffed7c] + bVar14;
  bVar6 = bVar5 + (byte)pcVar11;
  pbVar12 = (byte *)(lVar10 + -2);
  if (pbVar12 == (byte *)0x0 || bVar6 == 0) {
    bVar5 = *pbVar12;
    *pbVar12 = *pbVar12 + bVar6;
    bVar6 = bVar6 + 10 + CARRY1(bVar5,bVar6);
    pbVar8 = (byte *)(ulonglong)CONCAT31(uVar3,bVar6);
    pbVar12[(longlong)pbVar8] = pbVar12[(longlong)pbVar8] + bVar14;
    cRam000000014a2aeb1d = cRam000000014a2aeb1d + (char)pbVar12;
    *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
    bVar5 = *pbVar8;
    *(int *)(unaff_RDI + 7) = *(int *)(unaff_RDI + 7) + (int)&stack0x00000000;
    unaff_RDI[0x54] = unaff_RDI[0x54] + cVar9;
    bVar5 = bVar6 | *pbVar8 |
            *(byte *)(CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(bVar15 + bVar5,bVar14))) + 6);
    pcVar13 = (char *)(lVar10 + -3);
    if (pcVar13 == (char *)0x0 || bVar5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)(ulonglong)CONCAT31(uVar3,bVar5) = *(byte *)(ulonglong)CONCAT31(uVar3,bVar5) ^ bVar5;
    *pcVar13 = *pcVar13 + bVar5;
    sysret();
    return;
  }
  uVar4 = CONCAT21((short)((uint)iVar7 >> 0x10),cVar9 + bVar6 + CARRY1(bVar5,(byte)pcVar11));
  *unaff_RBX = *unaff_RBX | bVar14;
  bVar6 = *(byte *)((ulonglong)uVar4 << 8);
  pcVar13 = (char *)(ulonglong)CONCAT31(uVar4,bVar6);
  LOCK();
  uVar1 = *(undefined4 *)(lVar10 + -0x2183fff0);
  *(undefined4 *)(lVar10 + -0x2183fff0) = CONCAT22(uVar16,CONCAT11(bVar15,bVar14));
  UNLOCK();
  *pbVar12 = *pbVar12;
  *pcVar13 = *pcVar13 + bVar6;
  pbVar8 = (byte *)(pcVar13 + -0x70);
  bVar5 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar6;
  bVar5 = bVar6 + *pcVar13 + CARRY1(bVar5,bVar6);
  pcVar13 = (char *)(ulonglong)CONCAT31(uVar4,bVar5);
  LOCK();
  uVar2 = *(undefined4 *)(lVar10 + -0x2183fff0);
  *(undefined4 *)(lVar10 + -0x2183fff0) = uVar1;
  UNLOCK();
  *pbVar12 = *pbVar12;
  *(byte *)CONCAT44(uVar17,uVar2) = *(byte *)CONCAT44(uVar17,uVar2) | bVar5;
  *pcVar13 = *pcVar13 + (char)pbVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

