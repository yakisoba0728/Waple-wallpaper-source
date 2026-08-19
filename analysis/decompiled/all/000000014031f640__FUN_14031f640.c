// Function: FUN_14031f640
// Addr: 14031f640
// Size: 416 bytes


int FUN_14031f640(longlong *param_1,undefined8 *param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int local_res8 [2];
  undefined8 *local_res10;
  
  plVar4 = (longlong *)0x0;
  local_res8[0] = 0;
  lVar5 = 0;
  uVar2 = *(undefined8 *)(*param_1 + 0x30);
  *param_2 = 0;
  local_res10 = param_2;
  if (((param_1[4] == 0) && (local_res8[0] = func_0x00014031fa20(), local_res8[0] != 0)) ||
     (iVar9 = (int)param_1[2], iVar9 == 0)) {
LAB_14031f7f1:
    if (local_res8[0] == 0) {
      return 0;
    }
  }
  else {
    iVar1 = *(int *)((longlong)param_1 + 0x1c);
    plVar4 = (longlong *)FUN_1402f80c0(uVar2,8,0,iVar9 + 1,0,local_res8);
    if (local_res8[0] != 0) goto LAB_14031f813;
    iVar9 = iVar9 + iVar1;
    if ((param_3 == (longlong *)0x0) ||
       (lVar5 = func_0x0001402f7f60(uVar2,iVar9,local_res8), local_res8[0] == 0)) {
      lVar3 = param_1[5];
      lVar7 = lVar3;
      if (param_3 != (longlong *)0x0) {
        lVar7 = lVar5;
      }
      *plVar4 = lVar7;
      if ((int)param_1[2] != 0) {
        uVar11 = 1;
        uVar8 = 0;
        do {
          uVar6 = *(int *)(param_1[4] + uVar11 * 4) - 1;
          uVar10 = uVar8;
          if (((uint)uVar8 <= uVar6) &&
             (uVar10 = (ulonglong)*(uint *)((longlong)param_1 + 0x1c),
             uVar6 <= *(uint *)((longlong)param_1 + 0x1c))) {
            uVar10 = (ulonglong)uVar6;
          }
          if (param_3 == (longlong *)0x0) {
            plVar4[uVar11] = uVar10 + lVar3;
          }
          else {
            plVar4[uVar11] = uVar10 + lVar5;
            if ((uint)uVar10 != (uint)uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_1404211c0(plVar4[(int)uVar11 - 1],uVar8 + lVar3,
                            (uVar10 + lVar5) - plVar4[(int)uVar11 - 1]);
            }
          }
          uVar6 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar6;
          uVar8 = uVar10;
        } while (uVar6 <= *(uint *)(param_1 + 2));
      }
      *local_res10 = plVar4;
      if (param_3 != (longlong *)0x0) {
        *param_3 = lVar5;
      }
      if (param_4 != (int *)0x0) {
        *param_4 = iVar9;
      }
      goto LAB_14031f7f1;
    }
  }
  if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402f8060(uVar2,lVar5);
  }
  if (local_res8[0] == 0) {
    return 0;
  }
LAB_14031f813:
  if (plVar4 == (longlong *)0x0) {
    return local_res8[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402f8060(uVar2,plVar4);
}

