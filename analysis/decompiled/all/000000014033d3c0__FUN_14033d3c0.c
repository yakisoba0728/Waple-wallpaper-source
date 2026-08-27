// Function: FUN_14033d3c0
// Addr: 14033d3c0
// Size: 378 bytes


ulonglong FUN_14033d3c0(uint *param_1,int param_2,int param_3,undefined8 param_4,uint *param_5)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint *local_res8;
  uint local_res18 [4];
  
  uVar12 = 0;
  if (param_3 < 0) {
    iVar3 = param_2 + param_3;
    if (param_3 != -0x15) {
      iVar3 = param_2;
    }
    param_2 = iVar3;
    uVar12 = 3;
    if (param_3 != -0x15) {
      uVar12 = 1;
    }
    param_3 = 0;
  }
  uVar11 = *param_1;
  uVar10 = 0;
  piVar4 = *(int **)(param_1 + 2);
  if (uVar11 != 0) {
    do {
      if ((*piVar4 == param_2) && (piVar4[1] == param_3)) goto LAB_14033d4aa;
      uVar10 = uVar10 + 1;
      piVar4 = piVar4 + 3;
    } while (uVar10 < uVar11);
  }
  uVar1 = uVar11 + 1;
  if (param_1[1] < uVar1) {
    uVar11 = uVar11 + 8 & 0xfffffff8;
    uVar5 = FUN_1402f7ff0(param_4,0xc,param_1[1],uVar11,*(int **)(param_1 + 2),local_res18);
    *(undefined8 *)(param_1 + 2) = uVar5;
    if (local_res18[0] != 0) {
      return (ulonglong)local_res18[0];
    }
    param_1[1] = uVar11;
  }
  lVar2 = *(longlong *)(param_1 + 2);
  *param_1 = uVar1;
  lVar8 = (ulonglong)uVar1 * 3 + -3;
  *(int *)(lVar2 + lVar8 * 4) = param_2;
  lVar2 = lVar2 + lVar8 * 4;
  *(int *)(lVar2 + 4) = param_3;
  *(undefined4 *)(lVar2 + 8) = uVar12;
LAB_14033d4aa:
  if (param_1[4] == 0) {
    uVar6 = FUN_14033e330(param_1 + 4,param_4,&local_res8);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
  }
  else {
    local_res8 = (uint *)(*(longlong *)(param_1 + 6) + ((ulonglong)param_1[4] * 3 + -3) * 8);
  }
  uVar6 = 0;
  if (*local_res8 <= uVar10) {
    uVar7 = FUN_14033e2b0(local_res8,uVar10 + 1,param_4);
    uVar6 = uVar7 & 0xffffffff;
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    *local_res8 = uVar10 + 1;
  }
  pbVar9 = (byte *)((ulonglong)(uVar10 >> 3) + *(longlong *)(local_res8 + 2));
  *pbVar9 = *pbVar9 | (byte)(0x80 >> ((byte)uVar10 & 7));
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar10;
  }
  return uVar6;
}

