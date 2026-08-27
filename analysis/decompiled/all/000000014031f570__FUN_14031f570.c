// Function: FUN_14031f570
// Addr: 14031f570
// Size: 519 bytes


int FUN_14031f570(longlong *param_1,undefined8 *param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int local_res8 [2];
  undefined8 *local_res10;
  
  plVar4 = (longlong *)0x0;
  local_res8[0] = 0;
  lVar5 = 0;
  uVar2 = *(undefined8 *)(*param_1 + 0x30);
  *param_2 = 0;
  local_res10 = param_2;
  if (((param_1[4] == 0) && (local_res8[0] = FUN_14031f950(), local_res8[0] != 0)) ||
     (iVar8 = (int)param_1[2], iVar8 == 0)) {
LAB_14031f721:
    if (local_res8[0] == 0) {
      return 0;
    }
  }
  else {
    iVar1 = *(int *)((longlong)param_1 + 0x1c);
    plVar4 = (longlong *)FUN_1402f7ff0(uVar2,8,0,iVar8 + 1,0,local_res8);
    if (local_res8[0] != 0) goto LAB_14031f743;
    iVar8 = iVar8 + iVar1;
    if ((param_3 == (longlong *)0x0) ||
       (lVar5 = FUN_1402f7e90(uVar2,iVar8,local_res8), local_res8[0] == 0)) {
      lVar3 = param_1[5];
      lVar11 = lVar3;
      if (param_3 != (longlong *)0x0) {
        lVar11 = lVar5;
      }
      *plVar4 = lVar11;
      if ((int)param_1[2] != 0) {
        uVar12 = 0;
        uVar10 = 1;
        uVar7 = 0;
        do {
          uVar6 = *(int *)(param_1[4] + uVar10 * 4) - 1;
          uVar9 = uVar7;
          if (((uint)uVar7 <= uVar6) &&
             (uVar9 = (ulonglong)*(uint *)((longlong)param_1 + 0x1c),
             uVar6 <= *(uint *)((longlong)param_1 + 0x1c))) {
            uVar9 = (ulonglong)uVar6;
          }
          if (param_3 == (longlong *)0x0) {
            plVar4[uVar10] = uVar9 + lVar3;
          }
          else {
            lVar11 = uVar12 + uVar9 + lVar5;
            plVar4[uVar10] = lVar11;
            if ((uint)uVar9 != (uint)uVar7) {
              FUN_1404210f0(plVar4[(int)uVar10 - 1],uVar7 + lVar3,lVar11 - plVar4[(int)uVar10 - 1]);
              *(undefined1 *)plVar4[uVar10] = 0;
              plVar4[uVar10] = plVar4[uVar10] + 1;
              uVar12 = (ulonglong)((int)uVar12 + 1);
            }
          }
          uVar6 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar6;
          uVar7 = uVar9;
        } while (uVar6 <= *(uint *)(param_1 + 2));
      }
      *local_res10 = plVar4;
      if (param_3 != (longlong *)0x0) {
        *param_3 = lVar5;
      }
      if (param_4 != (int *)0x0) {
        *param_4 = iVar8;
      }
      goto LAB_14031f721;
    }
  }
  if (lVar5 != 0) {
    FUN_1402f7f90(uVar2,lVar5);
  }
  if (local_res8[0] == 0) {
    return 0;
  }
LAB_14031f743:
  if (plVar4 != (longlong *)0x0) {
    FUN_1402f7f90(uVar2,plVar4);
  }
  return local_res8[0];
}

