// Function: FUN_1402f2060
// Addr: 1402f2060
// Size: 77 bytes


void FUN_1402f2060(undefined4 *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (int *)0x0)) {
    uVar1 = *param_1;
    iVar8 = param_2[2];
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    iVar9 = *param_2;
    iVar4 = param_2[1];
    uVar5 = param_1[3];
    param_3 = param_3 << 0x10;
    iVar6 = FUN_1402f2180(uVar2,iVar8);
    iVar7 = FUN_1402f2180(uVar1,iVar9,param_3);
    *param_2 = iVar6 + iVar7;
    iVar6 = FUN_1402f2180(uVar2,param_2[3],param_3);
    iVar7 = FUN_1402f2180(uVar1,iVar4,param_3);
    param_2[1] = iVar6 + iVar7;
    iVar8 = FUN_1402f2180(uVar5,iVar8,param_3);
    iVar9 = FUN_1402f2180(uVar3,iVar9,param_3);
    param_2[2] = iVar8 + iVar9;
    iVar8 = FUN_1402f2180(uVar5,param_2[3],param_3);
    iVar9 = FUN_1402f2180(uVar3,iVar4,param_3);
    param_2[3] = iVar8 + iVar9;
  }
  return;
}

