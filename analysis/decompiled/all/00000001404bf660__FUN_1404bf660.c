// Function: FUN_1404bf660
// Addr: 1404bf660
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf660(byte *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  uint *puVar3;
  undefined1 uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *in_RAX;
  byte *pbVar11;
  byte unaff_BL;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  char *in_R11;
  byte bVar12;
  char *pcVar10;
  
  bVar6 = (byte)param_2;
  *in_R11 = *in_R11;
  cVar2 = *in_R11;
  cVar5 = (char)in_RAX;
  *(char *)((longlong)in_RAX * 2 + 0x1e) = cVar5;
  if (cVar2 < '\0') {
    uVar7 = (uint)in_RAX;
    piVar1 = (int *)(CONCAT71(0xa88b00,bRam00000000a88b0031 ^ 0x31) + -0x7784ffcd);
    *piVar1 = *piVar1 + -0x34;
    pcVar10 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x78);
    *pcVar10 = *pcVar10 + (char)((ulonglong)param_2 >> 8);
    (&stack0x0000006f)[CONCAT44(unaff_00000034,unaff_ESI) * 2] =
         (&stack0x0000006f)[CONCAT44(unaff_00000034,unaff_ESI) * 2] + 'r';
    pbVar11 = (byte *)(CONCAT44(unaff_00000034,unaff_ESI) + 100);
    bVar12 = CARRY1(*pbVar11,bVar6);
    *pbVar11 = *pbVar11 + bVar6;
    uVar8 = func_0x00014176f708();
    uVar9 = (uVar8 + 0xe61fe410) - (uint)bVar12;
    bVar6 = *unaff_RDI;
    *unaff_RDI = *unaff_RDI << 1 | (uVar8 < 0x19e01bf0 || uVar8 + 0xe61fe410 < (uint)bVar12);
    bRam00000001419c0b1a = bRam00000001419c0b1a << 1 | (char)bVar6 < '\0';
    uVar9 = uVar9 | *(uint *)(ulonglong)uVar9;
    *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
         *(uint *)CONCAT44(unaff_00000034,unaff_ESI) & unaff_ESI;
    *param_1 = *param_1 + (char)(uVar9 >> 8);
    puVar3 = (uint *)((ulonglong)uVar9 * 2);
    uVar8 = *puVar3;
    *puVar3 = *puVar3 + uVar7;
    uVar8 = uVar9 + 0x11e013f0 + (uint)CARRY4(uVar8,uVar7);
    pbVar11 = (byte *)(ulonglong)uVar8;
    *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
    bVar6 = (byte)uVar8;
    *pbVar11 = *pbVar11 + bVar6;
    *(uint *)CONCAT44(unaff_00000034,unaff_ESI) = *(int *)CONCAT44(unaff_00000034,unaff_ESI) + uVar7
    ;
    *pbVar11 = *pbVar11 | bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar12 = *param_1;
  *param_1 = *param_1 + unaff_BL;
  *in_RAX = 0xfffffffff4140046;
  (&stack0x00000000)
  [CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
            CONCAT11((char)((ulonglong)in_RAX >> 8) + bVar6 + CARRY1(bVar12,unaff_BL),cVar5)) * 8] =
       (&stack0x00000000)
       [CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                 CONCAT11((char)((ulonglong)in_RAX >> 8) + bVar6 + CARRY1(bVar12,unaff_BL),cVar5)) *
        8] + (char)param_1;
  pcVar10 = (char *)((ulonglong)param_1 & 0xffffffff);
  *pcVar10 = *pcVar10 + cVar5;
  if (*pcVar10 != '\0') {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar4 = in(0x2e);
  pcVar10 = (char *)(ulonglong)CONCAT31((int3)((ulonglong)param_1 >> 8),uVar4);
  *pcVar10 = *pcVar10 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

