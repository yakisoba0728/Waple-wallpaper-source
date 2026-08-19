// Function: FUN_1404b7d68
// Addr: 1404b7d68
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7d68(char *param_1,longlong param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  undefined3 uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  int in_EAX;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  byte bVar16;
  longlong unaff_RBX;
  uint unaff_ESI;
  uint uVar17;
  byte *unaff_RDI;
  byte in_CF;
  bool bVar18;
  byte *pbVar14;
  char *pcVar15;
  
  pbVar14 = (byte *)(param_1 + -0x46a6ffe3);
  bVar7 = *pbVar14;
  bVar16 = (byte)((ulonglong)unaff_RBX >> 8);
  bVar1 = *pbVar14;
  *pbVar14 = bVar1 + bVar16 + in_CF;
  uVar10 = (in_EAX + -0x4a221000) - (uint)(CARRY1(bVar7,bVar16) || CARRY1(bVar1 + bVar16,in_CF));
  *param_1 = *param_1 + (char)uVar10;
  uVar10 = uVar10 | *(uint *)((ulonglong)uVar10 * 2);
  uVar17 = unaff_ESI | *(uint *)(param_2 + 0x7005d007);
  uVar5 = (undefined3)(uVar10 >> 8);
  bVar7 = (char)uVar10 + 0x30;
  *(uint *)(param_1 + -0xb4efff6) = *(uint *)(param_1 + -0xb4efff6) & uVar17;
  bVar7 = bVar7 | *(byte *)(ulonglong)CONCAT31(uVar5,bVar7);
  uVar6 = CONCAT31(uVar5,bVar7);
  puVar13 = (uint *)(ulonglong)uVar6;
  pbVar2 = (byte *)(ulonglong)uVar17 + 1;
  uVar3 = (uint)(*(byte *)(ulonglong)uVar17 < *unaff_RDI);
  uVar17 = *puVar13;
  uVar11 = *puVar13;
  *puVar13 = uVar11 + uVar6 + uVar3;
  uVar11 = CONCAT22((short)(uVar10 >> 0x10),
                    CONCAT11(-(CARRY4(uVar17,uVar6) || CARRY4(uVar11 + uVar6,uVar3)),bVar7));
  uVar11 = uVar11 | *(uint *)(ulonglong)uVar11;
  uVar17 = uVar11 + (uint)&stack0xfffffffffffffff8;
  iVar12 = uVar17 + *(int *)(ulonglong)uVar17 + (uint)CARRY4(uVar11,(uint)&stack0xfffffffffffffff8);
  bVar8 = (byte)iVar12;
  uVar5 = (undefined3)((uint)iVar12 >> 8);
  bVar7 = bVar8 + 100;
  pbVar14 = (byte *)(ulonglong)CONCAT31(uVar5,bVar7);
  bVar4 = bVar7 + *pbVar14;
  bVar18 = CARRY1(bVar7,*pbVar14) || CARRY1(bVar4,0x9b < bVar8);
  pbVar14 = (byte *)(unaff_RBX + -0x44a8ffe3);
  bVar7 = *pbVar14;
  bVar1 = *pbVar14;
  *pbVar14 = bVar1 + bVar16 + bVar18;
  uVar17 = (CONCAT31(uVar5,bVar4 + (0x9b < bVar8)) + -0x4b7ca400) -
           (uint)(CARRY1(bVar7,bVar16) || CARRY1(bVar1 + bVar16,bVar18));
  pbVar14 = (byte *)(ulonglong)uVar17;
  *param_1 = *param_1 + (char)(uVar17 >> 8);
  *pbVar14 = *pbVar14 + (char)uVar17;
  bVar7 = *pbVar14;
  *pbVar14 = *pbVar14 + (byte)param_2;
  uVar17 = (uVar17 + 0xb4835c00) - (uint)CARRY1(bVar7,(byte)param_2);
  *param_1 = *param_1 + (char)(uVar17 >> 8);
  *pbVar2 = *pbVar2 + (char)uVar17;
  *(char *)(ulonglong)uVar17 = *(char *)(ulonglong)uVar17 + (char)uVar17;
  cVar9 = in(0xb);
  pcVar15 = (char *)(ulonglong)CONCAT31((int3)(uVar17 >> 8),cVar9);
  *pcVar15 = *pcVar15 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

