// Function: FUN_1404c4968
// Addr: 1404c4968
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c49ca) overlaps instruction at (ram,0x0001404c49c9)
    */
/* WARNING: Removing unreachable block (ram,0x0001404c49a6) */
/* WARNING: Removing unreachable block (ram,0x0001404c4992) */
/* WARNING: Removing unreachable block (ram,0x0001404c49ca) */

void FUN_1404c4968(byte *param_1,undefined8 param_2)

{
  char *pcVar1;
  int *piVar2;
  uint *puVar3;
  byte *pbVar4;
  char cVar5;
  byte bVar6;
  undefined4 in_EAX;
  undefined3 uVar9;
  int iVar8;
  undefined4 in_register_00000004;
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
  undefined4 uVar7;
  
  uVar13 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar12 = (undefined2)((ulonglong)param_2 >> 0x10);
  bVar10 = (byte)param_2;
  uVar9 = (undefined3)((uint)in_EAX >> 8);
  cVar5 = (char)in_EAX + 'B';
  uVar7 = CONCAT31(uVar9,cVar5);
  *(char *)CONCAT44(in_register_00000004,uVar7) =
       *(char *)CONCAT44(in_register_00000004,uVar7) + cVar5;
  bVar6 = bRam3600000001002edc;
  uVar7 = CONCAT31(uVar9,bRam3600000001002edc);
  *param_1 = *param_1 + bRam3600000001002edc;
  *(byte *)CONCAT44(in_register_00000004,uVar7) =
       *(char *)CONCAT44(in_register_00000004,uVar7) + bVar6;
  cRam00000001414c76c0 = cRam00000001414c76c0 + unaff_BH;
  bVar11 = (byte)((ulonglong)param_2 >> 8) | param_1[0x6920a00];
  bVar6 = (bVar6 | *(byte *)(CONCAT44(in_register_00000004,uVar7) +
                            CONCAT44(in_register_00000004,uVar7))) + 1;
  uVar7 = CONCAT31(uVar9,bVar6);
  pcVar1 = (char *)(CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) +
                   CONCAT44(in_register_00000004,uVar7) * 2);
  *pcVar1 = *pcVar1 + bVar6;
  *(byte *)CONCAT44(in_register_00000004,uVar7) =
       *(char *)CONCAT44(in_register_00000004,uVar7) + bVar6;
  *(int *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) =
       *(int *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) + (int)param_1;
  bVar11 = bVar11 | *(byte *)(CONCAT44(unaff_00000034,unaff_ESI) +
                             CONCAT44(in_register_00000004,CONCAT31(uVar9,bVar6)));
  cVar5 = (char)param_1;
  *(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) =
       *(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) + cVar5;
  bVar6 = bVar6 ^ *(byte *)CONCAT44(unaff_00000034,unaff_ESI);
  uVar7 = CONCAT31(uVar9,bVar6);
  *(int *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) =
       *(int *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) - (int)param_1;
  bVar14 = CARRY1(*param_1,unaff_BL);
  *param_1 = *param_1 + unaff_BL;
  if (*param_1 != 0) {
    *param_1 = *param_1 + unaff_BL;
    pbVar4 = (byte *)(in_FS_OFFSET + CONCAT44(in_register_00000004,uVar7));
    *pbVar4 = *pbVar4 | bVar6;
    puVar3 = (uint *)(unaff_RDI + CONCAT44(in_register_00000004,uVar7));
    bVar14 = *puVar3 < CONCAT22(uVar12,CONCAT11(bVar11,bVar10));
    *puVar3 = *puVar3 - CONCAT22(uVar12,CONCAT11(bVar11,bVar10));
  }
  piVar2 = (int *)(CONCAT44(unaff_00000034,unaff_ESI) + CONCAT44(in_register_00000004,uVar7));
  *piVar2 = (*piVar2 - unaff_ESI) - (uint)bVar14;
  *param_1 = *param_1 + unaff_BL;
  bVar10 = bVar10 ^ bRam0000000144564b9f;
  *(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) =
       *(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) + cVar5;
  *(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) =
       *(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) + cVar5;
  iVar8 = CONCAT31(uVar9,(bVar6 ^ 6 ^ *(byte *)CONCAT44(unaff_00000034,unaff_ESI)) + 10);
  pbVar4 = (byte *)(CONCAT44(unaff_00000024,unaff_ESP) + CONCAT44(unaff_00000034,unaff_ESI));
  bVar6 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar10;
  *(uint *)CONCAT44(in_register_00000004,iVar8) =
       *(int *)CONCAT44(in_register_00000004,iVar8) + iVar8 + (uint)CARRY1(bVar6,bVar10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

