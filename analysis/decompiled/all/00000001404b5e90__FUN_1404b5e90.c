// Function: FUN_1404b5e90
// Addr: 1404b5e90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5e90(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint *in_RAX;
  int *piVar7;
  char *pcVar9;
  undefined4 *puVar10;
  byte bVar11;
  byte unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  int *piVar8;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  cVar5 = (char)in_RAX + (char)*in_RAX;
  piVar7 = (int *)(CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                            CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',cVar5))
                                  >> 8),cVar5) ^ 0x1b);
  pbVar1 = (byte *)(param_1 + 0x34);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BL;
  iVar4 = (int)piVar7 - *piVar7;
  uVar6 = iVar4 - (uint)CARRY1(bVar3,unaff_BL);
  piVar8 = (int *)(ulonglong)uVar6;
  bVar11 = (byte)param_1;
  cVar5 = (char)uVar6;
  if (SBORROW4((int)piVar7,*piVar7) == SBORROW4(iVar4,(uint)CARRY1(bVar3,unaff_BL))) {
    *param_4 = *param_4 + -8;
    *(char *)piVar8 = (char)*piVar8 + cVar5;
    pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + 0x34);
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar11;
    uVar6 = (uVar6 - *piVar8) - (uint)CARRY1(bVar3,bVar11);
    pcVar9 = (char *)((ulonglong)uVar6 ^ 0x1b);
    pcVar2 = (char *)(unaff_RBP + 0x4b + CONCAT71(unaff_00000019,unaff_BL) * 2);
    *pcVar2 = *pcVar2 + unaff_BL;
    *param_1 = *param_1 + (char)(uVar6 >> 8);
    *pcVar9 = *pcVar9 + (char)pcVar9;
    *pcVar9 = *pcVar9 + (char)((ulonglong)param_2 >> 8);
    puVar10 = (undefined4 *)((ulonglong)CONCAT31((int3)(uVar6 >> 8),(char)pcVar9) ^ 0x1b);
    pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + 0x34);
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar11;
    *param_4 = *param_4 + (((char)puVar10 - (char)*puVar10) - CARRY1(bVar3,bVar11));
    *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
         *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + CONCAT71(unaff_00000019,unaff_BL) * 2);
  *pcVar2 = *pcVar2 + bVar11;
  *param_4 = *param_4 + -8;
  *(char *)piVar8 = (char)*piVar8 + cVar5;
  *(char *)((longlong)piVar8 + -0x5fffe4c1) = *(char *)((longlong)piVar8 + -0x5fffe4c1) + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

