// Function: FUN_1404bf6bc
// Addr: 1404bf6bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf6bc(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  longlong in_RAX;
  byte *pbVar6;
  uint unaff_EBX;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  byte in_CF;
  byte bVar7;
  
  *(int *)(in_RAX + -0x7784ffcd) = (*(int *)(in_RAX + -0x7784ffcd) + -0x34) - (uint)in_CF;
  pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x78);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  (&stack0x0000006f)[CONCAT44(unaff_00000034,unaff_ESI) * 2] =
       (&stack0x0000006f)[CONCAT44(unaff_00000034,unaff_ESI) * 2] +
       ((byte)((ulonglong)in_RAX >> 8) ^ 0x72);
  pbVar6 = (byte *)(CONCAT44(unaff_00000034,unaff_ESI) + 100);
  bVar7 = CARRY1(*pbVar6,(byte)param_2);
  *pbVar6 = *pbVar6 + (byte)param_2;
  uVar4 = func_0x00014176f708();
  uVar5 = (uVar4 + 0xe61fe410) - (uint)bVar7;
  bVar3 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI << 1 | (uVar4 < 0x19e01bf0 || uVar4 + 0xe61fe410 < (uint)bVar7);
  bRam00000001419c0b1a = bRam00000001419c0b1a << 1 | (char)bVar3 < '\0';
  uVar5 = uVar5 | *(uint *)(ulonglong)uVar5;
  *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(uint *)CONCAT44(unaff_00000034,unaff_ESI) & unaff_ESI;
  *param_1 = *param_1 + (char)(uVar5 >> 8);
  puVar2 = (uint *)((ulonglong)uVar5 * 2);
  uVar4 = *puVar2;
  *puVar2 = *puVar2 + unaff_EBX;
  uVar4 = uVar5 + 0x11e013f0 + (uint)CARRY4(uVar4,unaff_EBX);
  pbVar6 = (byte *)(ulonglong)uVar4;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  bVar3 = (byte)uVar4;
  *pbVar6 = *pbVar6 + bVar3;
  *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(int *)CONCAT44(unaff_00000034,unaff_ESI) + unaff_EBX;
  *pbVar6 = *pbVar6 | bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

