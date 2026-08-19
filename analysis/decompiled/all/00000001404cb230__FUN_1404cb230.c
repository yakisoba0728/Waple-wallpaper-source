// Function: FUN_1404cb230
// Addr: 1404cb230
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb230(undefined8 param_1,undefined8 param_2,byte param_3)

{
  byte bVar1;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint *in_RAX;
  char *pcVar9;
  undefined7 uVar10;
  char cVar11;
  int unaff_EBX;
  int iVar12;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte in_CF;
  bool bVar13;
  byte bVar2;
  uint *puVar7;
  int *piVar8;
  
  cVar11 = (char)param_2;
  uVar10 = (undefined7)((ulonglong)param_1 >> 8);
  iVar12 = unaff_EBX + unaff_ESI + (uint)in_CF;
  uVar6 = (uint)in_RAX ^ *in_RAX;
  puVar7 = (uint *)(ulonglong)uVar6;
  *(char *)CONCAT71(uVar10,0x4c) = *(char *)CONCAT71(uVar10,0x4c) + (char)(uVar6 >> 8);
  *(char *)puVar7 = (char)*puVar7 + (char)uVar6;
  pcVar9 = (char *)(CONCAT71(uVar10,0x4c) + -0xe);
  *pcVar9 = *pcVar9 + (char)iVar12;
  uVar6 = uVar6 ^ *puVar7 ^ *(uint *)(ulonglong)(uVar6 ^ *puVar7);
  puVar7 = (uint *)(ulonglong)uVar6;
  *(char *)CONCAT71(uVar10,0x4c) = *(char *)CONCAT71(uVar10,0x4c) + (char)(uVar6 >> 8);
  *(char *)puVar7 = (char)*puVar7 + (char)uVar6;
  *(char *)((longlong)puVar7 + 0x590033f1) = *(char *)((longlong)puVar7 + 0x590033f1) + cVar11;
  bVar5 = (char)(uVar6 ^ *puVar7) + 0x4f;
  uVar6 = CONCAT31((int3)((uVar6 ^ *puVar7) >> 8),bVar5);
  piVar8 = (int *)(ulonglong)uVar6;
  bVar13 = CARRY1(*(byte *)CONCAT71(uVar10,0x4c),param_3);
  *(byte *)CONCAT71(uVar10,0x4c) = *(char *)CONCAT71(uVar10,0x4c) + param_3;
  pbVar3 = (byte *)((longlong)piVar8 * 2);
  bVar1 = *pbVar3;
  bVar2 = *pbVar3;
  *pbVar3 = bVar2 + bVar5 + bVar13;
  pcVar9 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + (longlong)piVar8);
  *pcVar9 = *pcVar9 + (char)((ulonglong)param_2 >> 8) +
            (CARRY1(bVar1,bVar5) || CARRY1(bVar2 + bVar5,bVar13));
  iVar4 = *piVar8;
  *(char *)piVar8 = (char)*piVar8 + cVar11;
  if (!SCARRY1((char)iVar4,cVar11)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = uVar6 + *piVar8;
  uVar6 = uVar6 ^ *(uint *)(ulonglong)uVar6;
  pcVar9 = (char *)(ulonglong)uVar6;
  pcVar9[0x21004cb1] = pcVar9[0x21004cb1] + 'L';
  *pcVar9 = *pcVar9 + (char)uVar6;
  *pcVar9 = *pcVar9 + (char)(uVar6 >> 8);
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) + (char)((uint)(iVar12 + unaff_ESI) >> 8);
  pcVar9[0x21004cb1] = pcVar9[0x21004cb1] + 'L';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

