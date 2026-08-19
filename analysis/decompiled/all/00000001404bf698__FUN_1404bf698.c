// Function: FUN_1404bf698
// Addr: 1404bf698
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf698(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  int *piVar2;
  byte *pbVar3;
  uint *puVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined8 in_RAX;
  byte *pbVar8;
  char cVar9;
  char cVar10;
  undefined6 uVar11;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  byte bVar12;
  
  uVar11 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar10 = (char)((ulonglong)param_1 >> 8);
  cVar9 = (char)param_1;
  bVar5 = (byte)in_RAX;
  pbVar8 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) << 6,bVar5));
  *param_2 = *param_2 + cVar9;
  pbVar8[-0xb] = pbVar8[-0xb] + cVar10;
  *param_4 = *param_4 + bVar5;
  *pbVar8 = *pbVar8 & bVar5;
  pbVar3 = (byte *)(unaff_RDI + 8);
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,unaff_EBX) + -0x6cffcf38);
  *pcVar1 = *pcVar1 + (char)unaff_EBX;
  piVar2 = (int *)(CONCAT71(0xa88b00,bRam00000000a88b0031 ^ 0x31) + -0x7784ffcd);
  *piVar2 = *piVar2 + -0x34;
  pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x78);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  (&stack0x0000006f)[CONCAT44(unaff_00000034,unaff_ESI) * 2] =
       (&stack0x0000006f)[CONCAT44(unaff_00000034,unaff_ESI) * 2] + 'r';
  pbVar8 = (byte *)(CONCAT44(unaff_00000034,unaff_ESI) + 100);
  bVar12 = CARRY1(*pbVar8,(byte)param_2);
  *pbVar8 = *pbVar8 + (byte)param_2;
  uVar6 = func_0x00014176f708();
  uVar7 = (uVar6 + 0xe61fe410) - (uint)bVar12;
  bVar5 = *pbVar3;
  *pbVar3 = *pbVar3 << 1 | (uVar6 < 0x19e01bf0 || uVar6 + 0xe61fe410 < (uint)bVar12);
  bRam00000001419c0b1a = bRam00000001419c0b1a << 1 | (char)bVar5 < '\0';
  uVar7 = uVar7 | *(uint *)(ulonglong)uVar7;
  *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(uint *)CONCAT44(unaff_00000034,unaff_ESI) & unaff_ESI;
  *(char *)CONCAT62(uVar11,CONCAT11(cVar10,cVar9)) =
       *(char *)CONCAT62(uVar11,CONCAT11(cVar10,cVar9)) + (char)(uVar7 >> 8);
  puVar4 = (uint *)((ulonglong)uVar7 * 2);
  uVar6 = *puVar4;
  *puVar4 = *puVar4 + unaff_EBX;
  uVar6 = uVar7 + 0x11e013f0 + (uint)CARRY4(uVar6,unaff_EBX);
  pbVar8 = (byte *)(ulonglong)uVar6;
  *pbVar3 = *pbVar3 >> 1 | *pbVar3 << 7;
  bVar5 = (byte)uVar6;
  *pbVar8 = *pbVar8 + bVar5;
  *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(int *)CONCAT44(unaff_00000034,unaff_ESI) + unaff_EBX;
  *pbVar8 = *pbVar8 | bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

