// Function: FUN_1404bf6d4
// Addr: 1404bf6d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf6d4(char *param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint unaff_EBX;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  byte in_CF;
  
  uVar3 = func_0x00014176f708();
  uVar4 = (uVar3 + 0xe61fe410) - (uint)in_CF;
  bVar2 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI << 1 | (uVar3 < 0x19e01bf0 || uVar3 + 0xe61fe410 < (uint)in_CF);
  bRam00000001419c0b1a = bRam00000001419c0b1a << 1 | (char)bVar2 < '\0';
  uVar4 = uVar4 | *(uint *)(ulonglong)uVar4;
  *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(uint *)CONCAT44(unaff_00000034,unaff_ESI) & unaff_ESI;
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  puVar1 = (uint *)((ulonglong)uVar4 * 2);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + unaff_EBX;
  uVar3 = uVar4 + 0x11e013f0 + (uint)CARRY4(uVar3,unaff_EBX);
  pbVar5 = (byte *)(ulonglong)uVar3;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  bVar2 = (byte)uVar3;
  *pbVar5 = *pbVar5 + bVar2;
  *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(int *)CONCAT44(unaff_00000034,unaff_ESI) + unaff_EBX;
  *pbVar5 = *pbVar5 | bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

