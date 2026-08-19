// Function: FUN_1404cfcd0
// Addr: 1404cfcd0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cfcd0(byte *param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 in_RAX;
  int *piVar8;
  uint *puVar9;
  byte *pbVar11;
  byte bVar12;
  byte bVar13;
  undefined6 uVar14;
  int unaff_ESI;
  undefined1 *unaff_RDI;
  char unaff_R12B;
  byte in_CF;
  byte bVar10;
  
  uVar14 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar13 = (byte)((ulonglong)param_2 >> 8);
  bVar12 = (byte)param_2;
  *(uint *)(&stack0x00000000 + param_2) =
       *(int *)(&stack0x00000000 + param_2) + unaff_ESI + (uint)in_CF;
  bVar3 = *param_1;
  *param_1 = *param_1 + bVar12;
  pbVar11 = param_1 + -1;
  if (pbVar11 == (byte *)0x0 || *param_1 == 0) {
    *pbVar11 = *pbVar11 >> 1 | *pbVar11 << 7;
    *unaff_RDI = *unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar10 = (byte)((ulonglong)in_RAX >> 8);
  bVar4 = bVar10 + bVar13;
  piVar8 = (int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                           CONCAT11(bVar4 + CARRY1(bVar3,bVar12),(char)in_RAX));
  iVar6 = (int)piVar8 + *piVar8 +
          (uint)(CARRY1(bVar10,bVar13) || CARRY1(bVar4,CARRY1(bVar3,bVar12)));
  pbVar1 = (byte *)(CONCAT62(uVar14,CONCAT11(bVar13,0xd)) + CONCAT62(uVar14,CONCAT11(bVar13,0xd)));
  *pbVar1 = *pbVar1 | bVar13;
  cVar5 = cRamfc00402341004022;
  uVar7 = CONCAT31((int3)((uint)iVar6 >> 8),cRamfc00402341004022);
  puVar9 = (uint *)(ulonglong)uVar7;
  *pbVar11 = *pbVar11 + unaff_R12B;
  *(char *)puVar9 = (char)*puVar9 + cVar5;
  *(char *)((longlong)puVar9 + 0x41004022) =
       *(char *)((longlong)puVar9 + 0x41004022) + (char)((uint)iVar6 >> 8);
  uVar7 = uVar7 & *puVar9;
  *pbVar11 = *pbVar11 + unaff_R12B;
  pcVar2 = (char *)((ulonglong)uVar7 * 2);
  *pcVar2 = *pcVar2 + (char)uVar7;
  pcVar2 = (char *)(CONCAT62(uVar14,CONCAT11(bVar13,0xd)) + CONCAT62(uVar14,CONCAT11(bVar13,0xd)));
  *pcVar2 = *pcVar2 + bVar13;
  *pbVar11 = *pbVar11 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

