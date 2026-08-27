// Function: FUN_1402fb0a0
// Addr: 1402fb0a0
// Size: 390 bytes


int FUN_1402fb0a0(undefined8 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (param_1 == (undefined8 *)0x0) {
    return 0x21;
  }
  if ((param_2 == (int *)0x0) || (param_3 == (int *)0x0)) {
    return 6;
  }
  if (param_2 == param_3) {
    return 0;
  }
  piVar1 = param_3 + 2;
  if (param_2[2] < 0) {
    if (*piVar1 < 1) {
LAB_1402fb108:
      bVar6 = false;
      goto LAB_1402fb10a;
    }
  }
  else if ((param_2[2] < 1) || (-1 < *piVar1)) goto LAB_1402fb108;
  bVar6 = true;
LAB_1402fb10a:
  uVar2 = *param_1;
  FUN_1402f7f90(uVar2,*(undefined8 *)(param_3 + 4));
  param_3[4] = 0;
  param_3[5] = 0;
  uVar5 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)param_3 = *(undefined8 *)param_2;
  *(undefined8 *)(param_3 + 2) = uVar5;
  iVar3 = param_2[5];
  iVar8 = param_2[6];
  iVar4 = param_2[7];
  param_3[4] = param_2[4];
  param_3[5] = iVar3;
  param_3[6] = iVar8;
  param_3[7] = iVar4;
  *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
  if (bVar6) {
    *piVar1 = -*piVar1;
  }
  if (*(longlong *)(param_2 + 4) == 0) {
    return 0;
  }
  iVar3 = -param_2[2];
  if (-param_2[2] < 0) {
    iVar3 = param_2[2];
  }
  lVar7 = FUN_1402f7ff0(uVar2,iVar3,0,*param_3,0,local_res8);
  *(longlong *)(param_3 + 4) = lVar7;
  if (local_res8[0] == 0) {
    if (!bVar6) {
      FUN_1404210f0(lVar7,*(undefined8 *)(param_2 + 4),(longlong)(iVar3 * *param_2));
      return local_res8[0];
    }
    iVar8 = *param_3;
    lVar9 = *(longlong *)(param_2 + 4);
    lVar7 = (ulonglong)(uint)((iVar8 + -1) * iVar3) + lVar7;
    if (iVar8 != 0) {
      lVar10 = (longlong)iVar3;
      do {
        FUN_1404210f0(lVar7,lVar9,lVar10);
        lVar9 = lVar9 + lVar10;
        lVar7 = lVar7 - lVar10;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      return local_res8[0];
    }
    return 0;
  }
  return local_res8[0];
}

