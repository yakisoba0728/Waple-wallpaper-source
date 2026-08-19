// Function: FUN_1404b5e7c
// Addr: 1404b5e7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5e7c(uint param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  uint *in_RAX;
  undefined7 uVar10;
  char *pcVar6;
  char *pcVar8;
  undefined4 *puVar9;
  byte bVar11;
  char cVar12;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong lStackX_8;
  char *pcStackX_10;
  int *piVar7;
  
  cVar12 = (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & param_1;
  cVar3 = (char)in_RAX + (char)*in_RAX;
  uVar10 = (undefined7)
           (CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                     CONCAT11((char)((ulonglong)in_RAX >> 8),cVar3)) >> 8);
  pcVar6 = (char *)(CONCAT71(uVar10,cVar3) ^ 0x1b);
  param_2[-0x7bffe4cb] = param_2[-0x7bffe4cb] + unaff_BL;
  *param_4 = *param_4 + '\x10';
  *param_2 = *param_2 + (char)pcVar6;
  *pcVar6 = *pcVar6 + (char)pcVar6;
  uVar4 = in(0x2c);
  piVar7 = (int *)CONCAT71(uVar10,uVar4);
  pbVar1 = (byte *)(param_2 + 0x34);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)param_2;
  piVar7 = (int *)((ulonglong)(((int)piVar7 - *piVar7) - (uint)CARRY1(bVar2,(byte)param_2)) ^ 0x1b);
  *(char *)((longlong)piVar7 + 0x5d) = *(char *)((longlong)piVar7 + 0x5d) + cVar12;
  *param_4 = *param_4 + '\x18';
  *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
  pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + 0x34);
  bVar2 = *pbVar1;
  bVar11 = (byte)pcStackX_10;
  *pbVar1 = *pbVar1 + bVar11;
  uVar5 = ((int)piVar7 - *piVar7) - (uint)CARRY1(bVar2,bVar11);
  pcVar8 = (char *)((ulonglong)uVar5 ^ 0x1b);
  pcVar6 = (char *)(lStackX_8 + 0x4b + CONCAT71(unaff_00000019,unaff_BL) * 2);
  *pcVar6 = *pcVar6 + unaff_BL;
  *pcStackX_10 = *pcStackX_10 + (char)(uVar5 >> 8);
  *pcVar8 = *pcVar8 + (char)pcVar8;
  *pcVar8 = *pcVar8 + cVar12;
  puVar9 = (undefined4 *)((ulonglong)CONCAT31((int3)(uVar5 >> 8),(char)pcVar8) ^ 0x1b);
  pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + 0x34);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar11;
  *param_4 = *param_4 + (((char)puVar9 - (char)*puVar9) - CARRY1(bVar2,bVar11));
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

