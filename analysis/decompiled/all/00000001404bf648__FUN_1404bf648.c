// Function: FUN_1404bf648
// Addr: 1404bf648
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf648(byte *param_1,undefined8 param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  longlong in_RAX;
  byte *pbVar8;
  char *unaff_RBX;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  char *in_R11;
  byte bVar9;
  char *pcVar7;
  
  bVar4 = (byte)param_2;
  puVar1 = (uint *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x1e);
  *puVar1 = *puVar1 & unaff_EBP;
  pcVar7 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + -8);
  *pcVar7 = *pcVar7 + (char)((ulonglong)param_1 >> 8);
  pcVar7 = (char *)(in_RAX + 0x3f + (longlong)unaff_RBX * 8);
  *pcVar7 = *pcVar7 + bVar4;
  pcVar7 = (char *)(in_RAX + 0x40 + (longlong)param_1 * 8);
  *pcVar7 = *pcVar7 + (char)param_1;
  *unaff_RBX = *unaff_RBX + (char)((ulonglong)unaff_RBX >> 8);
  *unaff_RBX = *unaff_RBX + (char)unaff_EBP;
  *in_R11 = *in_R11;
  uRam00000000000000a0 = 0x41;
  if (*in_R11 < '\0') {
    piVar2 = (int *)(CONCAT71(0xa88b00,bRam00000000a88b0031 ^ 0x31) + -0x7784ffcd);
    *piVar2 = *piVar2 + -0x34;
    pcVar7 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x78);
    *pcVar7 = *pcVar7 + (char)((ulonglong)param_2 >> 8);
    (&stack0x0000006f)[CONCAT44(unaff_00000034,unaff_ESI) * 2] =
         (&stack0x0000006f)[CONCAT44(unaff_00000034,unaff_ESI) * 2] + 'r';
    pbVar8 = (byte *)(CONCAT44(unaff_00000034,unaff_ESI) + 100);
    bVar9 = CARRY1(*pbVar8,bVar4);
    *pbVar8 = *pbVar8 + bVar4;
    uVar5 = func_0x00014176f708();
    uVar6 = (uVar5 + 0xe61fe410) - (uint)bVar9;
    bVar4 = *unaff_RDI;
    *unaff_RDI = *unaff_RDI << 1 | (uVar5 < 0x19e01bf0 || uVar5 + 0xe61fe410 < (uint)bVar9);
    bRam00000001419c0b1a = bRam00000001419c0b1a << 1 | (char)bVar4 < '\0';
    uVar6 = uVar6 | *(uint *)(ulonglong)uVar6;
    *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
         *(uint *)CONCAT44(unaff_00000034,unaff_ESI) & unaff_ESI;
    *param_1 = *param_1 + (char)(uVar6 >> 8);
    puVar1 = (uint *)((ulonglong)uVar6 * 2);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + 0x41;
    uVar5 = uVar6 + 0x11e013f0 + (uint)(0xffffffbe < uVar5);
    pbVar8 = (byte *)(ulonglong)uVar5;
    *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
    bVar4 = (byte)uVar5;
    *pbVar8 = *pbVar8 + bVar4;
    *(int *)CONCAT44(unaff_00000034,unaff_ESI) = *(int *)CONCAT44(unaff_00000034,unaff_ESI) + 0x41;
    *pbVar8 = *pbVar8 | bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar9 = *param_1;
  *param_1 = *param_1 + (byte)unaff_RBX;
  uRam0000000000000041 = 0xfffffffff4140046;
  (&stack0x00000000)[(ulonglong)CONCAT11(bVar4 + CARRY1(bVar9,(byte)unaff_RBX),0x41) * 8] =
       (&stack0x00000000)[(ulonglong)CONCAT11(bVar4 + CARRY1(bVar9,(byte)unaff_RBX),0x41) * 8] +
       (char)param_1;
  pcVar7 = (char *)((ulonglong)param_1 & 0xffffffff);
  *pcVar7 = *pcVar7 + 'A';
  if (*pcVar7 != '\0') {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar3 = in(0x2e);
  pcVar7 = (char *)(ulonglong)CONCAT31((int3)((ulonglong)param_1 >> 8),uVar3);
  *pcVar7 = *pcVar7 + 'A';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

