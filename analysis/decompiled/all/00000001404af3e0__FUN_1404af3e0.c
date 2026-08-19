// Function: FUN_1404af3e0
// Addr: 1404af3e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404af406) overlaps instruction at (ram,0x0001404af404)
    */

void FUN_1404af3e0(undefined8 param_1,undefined8 param_2)

{
  undefined3 uVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int *in_RAX;
  undefined7 uVar7;
  char *pcVar6;
  byte *pbVar8;
  byte bVar9;
  char cVar10;
  undefined6 uVar11;
  char unaff_BL;
  byte unaff_SPL;
  longlong in_FS_OFFSET;
  bool bVar12;
  bool bVar13;
  uint *puVar5;
  
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  bVar9 = (byte)param_2;
  uVar4 = (int)in_RAX + *in_RAX + (uint)((char)param_1 < '\0');
  cVar10 = bVar3 + bVar9;
  uVar4 = uVar4 + *(int *)(ulonglong)uVar4 + (uint)CARRY1(bVar3,bVar9);
  pbVar8 = (byte *)CONCAT71((int7)((ulonglong)param_1 >> 8),cVar10);
  bVar3 = *pbVar8;
  *pbVar8 = *pbVar8 + unaff_SPL;
  *(int *)(ulonglong)uVar4 =
       (*(int *)(ulonglong)uVar4 - (int)pbVar8) - (uint)CARRY1(bVar3,unaff_SPL);
  *pbVar8 = *pbVar8 + unaff_BL;
  uVar1 = (undefined3)(uVar4 >> 8);
  cVar2 = in(0x27);
  cRam000000014f4b1ccd = cRam000000014f4b1ccd + bVar9;
  bVar3 = (cVar2 - *(char *)(in_FS_OFFSET + (ulonglong)CONCAT31(uVar1,cVar2))) - 0x3c;
  uVar4 = CONCAT31(uVar1,bVar3);
  puVar5 = (uint *)(ulonglong)uVar4;
  bVar12 = *puVar5 < uVar4;
  *puVar5 = *puVar5 - uVar4;
  pbVar8 = pbVar8 + -1;
  bVar13 = bVar12;
  if (pbVar8 != (byte *)0x0 && *puVar5 != 0) {
    bVar13 = CARRY1(bVar3,bVar12);
    puVar5 = (uint *)(ulonglong)CONCAT31(uVar1,bVar3 + bVar12);
    pbVar8 = (byte *)CONCAT71((int7)((ulonglong)pbVar8 >> 8),cVar10);
  }
  uVar7 = (undefined7)((ulonglong)puVar5 >> 8);
  cVar2 = (byte)puVar5 + bVar13 + cRam0000000131d2f41e + CARRY1((byte)puVar5,bVar13);
  pcVar6 = (char *)CONCAT71(uVar7,cVar2);
  *pbVar8 = *pbVar8 + unaff_SPL;
  *pcVar6 = *pcVar6 + cVar2;
  *(byte *)CONCAT62(uVar11,CONCAT11(cVar10,bVar9)) =
       *(char *)CONCAT62(uVar11,CONCAT11(cVar10,bVar9)) + bVar9;
  uVar4 = (int)CONCAT71(uVar7,cVar2 + (char)((ulonglong)puVar5 >> 8) + '\x14') + 0xf1880014;
  pcVar6 = (char *)(ulonglong)uVar4;
  *pbVar8 = *pbVar8 + unaff_SPL;
  *pcVar6 = *pcVar6 + (char)pbVar8;
  *pcVar6 = *pcVar6 + (char)uVar4;
  cVar2 = in(0x27);
  pcVar6 = (char *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),cVar2);
  *pcVar6 = *pcVar6 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

