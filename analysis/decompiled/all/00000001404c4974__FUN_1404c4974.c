// Function: FUN_1404c4974
// Addr: 1404c4974
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c49ca) overlaps instruction at (ram,0x0001404c49c9)
    */
/* WARNING: Removing unreachable block (ram,0x0001404c49a6) */
/* WARNING: Removing unreachable block (ram,0x0001404c4992) */
/* WARNING: Removing unreachable block (ram,0x0001404c49ca) */

void FUN_1404c4974(byte *param_1,undefined8 param_2)

{
  char *pcVar1;
  int *piVar2;
  uint *puVar3;
  byte *pbVar4;
  byte bVar5;
  undefined4 in_EAX;
  undefined3 uVar8;
  int iVar7;
  undefined4 in_register_00000004;
  char cVar9;
  byte bVar10;
  byte bVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  byte unaff_BL;
  char unaff_BH;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  int unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  bool bVar14;
  undefined4 uVar6;
  
  uVar13 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar12 = (undefined2)((ulonglong)param_2 >> 0x10);
  bVar10 = (byte)param_2;
  bVar5 = (byte)in_EAX;
  *param_1 = *param_1 + bVar5;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar5;
  cRam00000001414c76c0 = cRam00000001414c76c0 + unaff_BH;
  uVar8 = (undefined3)((uint)in_EAX >> 8);
  bVar11 = (byte)((ulonglong)param_2 >> 8) | param_1[0x6920a00];
  bVar5 = (bVar5 | *(byte *)(CONCAT44(in_register_00000004,in_EAX) +
                            CONCAT44(in_register_00000004,in_EAX))) + 1;
  uVar6 = CONCAT31(uVar8,bVar5);
  pcVar1 = (char *)(CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) +
                   CONCAT44(in_register_00000004,uVar6) * 2);
  *pcVar1 = *pcVar1 + bVar5;
  *(byte *)CONCAT44(in_register_00000004,uVar6) =
       *(char *)CONCAT44(in_register_00000004,uVar6) + bVar5;
  *(int *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) =
       *(int *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) + (int)param_1;
  bVar11 = bVar11 | *(byte *)(CONCAT44(unaff_00000034,unaff_ESI) +
                             CONCAT44(in_register_00000004,CONCAT31(uVar8,bVar5)));
  cVar9 = (char)param_1;
  *(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) =
       *(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) + cVar9;
  bVar5 = bVar5 ^ *(byte *)CONCAT44(unaff_00000034,unaff_ESI);
  uVar6 = CONCAT31(uVar8,bVar5);
  *(int *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) =
       *(int *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) - (int)param_1;
  bVar14 = CARRY1(*param_1,unaff_BL);
  *param_1 = *param_1 + unaff_BL;
  if (*param_1 != 0) {
    *param_1 = *param_1 + unaff_BL;
    pbVar4 = (byte *)(in_FS_OFFSET + CONCAT44(in_register_00000004,uVar6));
    *pbVar4 = *pbVar4 | bVar5;
    puVar3 = (uint *)(unaff_RDI + CONCAT44(in_register_00000004,uVar6));
    bVar14 = *puVar3 < CONCAT22(uVar12,CONCAT11(bVar11,bVar10));
    *puVar3 = *puVar3 - CONCAT22(uVar12,CONCAT11(bVar11,bVar10));
  }
  piVar2 = (int *)(CONCAT44(unaff_00000034,unaff_ESI) + CONCAT44(in_register_00000004,uVar6));
  *piVar2 = (*piVar2 - unaff_ESI) - (uint)bVar14;
  *param_1 = *param_1 + unaff_BL;
  bVar10 = bVar10 ^ bRam0000000144564b9f;
  *(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) =
       *(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) + cVar9;
  *(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) =
       *(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) + cVar9;
  iVar7 = CONCAT31(uVar8,(bVar5 ^ 6 ^ *(byte *)CONCAT44(unaff_00000034,unaff_ESI)) + 10);
  pbVar4 = (byte *)(CONCAT44(unaff_00000024,unaff_ESP) + CONCAT44(unaff_00000034,unaff_ESI));
  bVar5 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar10;
  *(uint *)CONCAT44(in_register_00000004,iVar7) =
       *(int *)CONCAT44(in_register_00000004,iVar7) + iVar7 + (uint)CARRY1(bVar5,bVar10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

