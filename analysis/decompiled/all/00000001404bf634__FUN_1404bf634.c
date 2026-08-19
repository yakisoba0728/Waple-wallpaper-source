// Function: FUN_1404bf634
// Addr: 1404bf634
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bf658) overlaps instruction at (ram,0x0001404bf657)
    */

void FUN_1404bf634(undefined8 param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  int *piVar2;
  char cVar3;
  uint *puVar4;
  undefined1 uVar5;
  byte bVar6;
  uint in_EAX;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar10;
  byte *pbVar11;
  char cVar12;
  char *unaff_RBX;
  char *pcVar13;
  undefined8 *unaff_RBP;
  undefined8 *puVar15;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  char *in_R11;
  byte bVar16;
  char *pcVar9;
  undefined8 *puVar14;
  
  cVar12 = (char)((ulonglong)param_2 >> 8);
  bVar6 = (byte)param_2;
  *param_4 = *param_4 + (char)in_EAX;
  puVar10 = (undefined1 *)((ulonglong)&stack0x00000000 & 0xffffffff);
  pcVar13 = (char *)(ulonglong)(in_EAX & 0x1250005);
  *unaff_RDI = *unaff_RDI + bVar6;
  pbVar11 = (byte *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                              CONCAT11((char)((ulonglong)param_1 >> 8) + cVar12,(char)param_1)) + -1
                    );
  if (pbVar11 == (byte *)0x0 || *unaff_RDI == 0) {
    puVar10[param_2 * 2] = puVar10[param_2 * 2] ^ bVar6;
    *puVar10 = *puVar10;
    *(uint *)((longlong)unaff_RBP + 0x1e) = *(uint *)((longlong)unaff_RBP + 0x1e) & (uint)unaff_RBP;
    *(char *)(unaff_RBP + -1) = *(char *)(unaff_RBP + -1) + (char)((ulonglong)pbVar11 >> 8);
    puVar10[(longlong)unaff_RBX * 8 + 0x3f] = puVar10[(longlong)unaff_RBX * 8 + 0x3f] + bVar6;
    puVar10[(longlong)pbVar11 * 8 + 0x40] = puVar10[(longlong)pbVar11 * 8 + 0x40] + (char)pbVar11;
    *unaff_RBX = *unaff_RBX + (char)((ulonglong)unaff_RBX >> 8);
    puVar15 = unaff_RBP;
  }
  else {
    puVar14 = (undefined8 *)(pcVar13 + -8);
    puVar15 = (undefined8 *)(pcVar13 + -8);
    *(undefined8 **)(pcVar13 + -8) = unaff_RBP;
    cVar3 = '\x1a';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar14 = puVar14 + -1;
      *puVar14 = *unaff_RBP;
      cVar3 = cVar3 + -1;
    } while ('\0' < cVar3);
    *(char **)(pcVar13 + -0xe0) = pcVar13 + -8;
    pcVar13 = pcVar13 + -0x120;
  }
  *unaff_RBX = *unaff_RBX + (char)puVar15;
  *in_R11 = *in_R11 + (char)pcVar13;
  uRam00000000000000a0 = 0x41;
  if (*in_R11 < '\0') {
    piVar2 = (int *)(CONCAT71(0xa88b00,bRam00000000a88b0031 ^ 0x31) + -0x7784ffcd);
    *piVar2 = *piVar2 + -0x34;
    pcVar9 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x78);
    *pcVar9 = *pcVar9 + cVar12;
    pcVar13[CONCAT44(unaff_00000034,unaff_ESI) * 2 + 0x6f] =
         pcVar13[CONCAT44(unaff_00000034,unaff_ESI) * 2 + 0x6f] + 'r';
    pbVar1 = (byte *)(CONCAT44(unaff_00000034,unaff_ESI) + 100);
    bVar16 = CARRY1(*pbVar1,bVar6);
    *pbVar1 = *pbVar1 + bVar6;
    *(undefined **)(pcVar13 + -8) = &UNK_1404bf6da;
    uVar7 = func_0x00014176f708();
    uVar8 = (uVar7 + 0xe61fe410) - (uint)bVar16;
    bVar6 = *unaff_RDI;
    *unaff_RDI = *unaff_RDI << 1 | (uVar7 < 0x19e01bf0 || uVar7 + 0xe61fe410 < (uint)bVar16);
    bRam00000001419c0b1a = bRam00000001419c0b1a << 1 | (char)bVar6 < '\0';
    uVar8 = uVar8 | *(uint *)(ulonglong)uVar8;
    *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
         *(uint *)CONCAT44(unaff_00000034,unaff_ESI) & unaff_ESI;
    *pbVar11 = *pbVar11 + (char)(uVar8 >> 8);
    puVar4 = (uint *)((ulonglong)uVar8 * 2);
    uVar7 = *puVar4;
    *puVar4 = *puVar4 + 0x41;
    uVar7 = uVar8 + 0x11e013f0 + (uint)(0xffffffbe < uVar7);
    pbVar11 = (byte *)(ulonglong)uVar7;
    *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
    bVar6 = (byte)uVar7;
    *pbVar11 = *pbVar11 + bVar6;
    *(int *)CONCAT44(unaff_00000034,unaff_ESI) = *(int *)CONCAT44(unaff_00000034,unaff_ESI) + 0x41;
    *pbVar11 = *pbVar11 | bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar16 = *pbVar11;
  *pbVar11 = *pbVar11 + (byte)unaff_RBX;
  pcVar13[-8] = 'F';
  pcVar13[-7] = '\0';
  pcVar13[-6] = '\x14';
  pcVar13[-5] = -0xc;
  pcVar13[-4] = -1;
  pcVar13[-3] = -1;
  pcVar13[-2] = -1;
  pcVar13[-1] = -1;
  uRam0000000000000041 = *(undefined8 *)(pcVar13 + -8);
  pcVar13[(ulonglong)CONCAT11(bVar6 + CARRY1(bVar16,(byte)unaff_RBX),0x41) * 8] =
       pcVar13[(ulonglong)CONCAT11(bVar6 + CARRY1(bVar16,(byte)unaff_RBX),0x41) * 8] + (char)pbVar11
  ;
  pcVar9 = (char *)((ulonglong)pbVar11 & 0xffffffff);
  *pcVar9 = *pcVar9 + 'A';
  if (*pcVar9 == '\0') {
    uVar5 = in(0x2e);
    pcVar9 = (char *)(ulonglong)CONCAT31((int3)((ulonglong)pbVar11 >> 8),uVar5);
    *pcVar9 = *pcVar9 + 'A';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar13 = *pcVar13 + (char)pcVar9;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

