// Function: FUN_1402ef870
// Addr: 1402ef870
// Size: 410 bytes


int FUN_1402ef870(undefined4 *param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int local_res8 [2];
  
  if (((param_1 == (undefined4 *)0x0) || (param_3 == (longlong *)0x0)) ||
     (lVar1 = *param_3, lVar1 == 0)) {
    return 6;
  }
  lVar9 = *(longlong *)(lVar1 + 0x98);
  puVar8 = (undefined4 *)FUN_1402f7e90(lVar9,*param_1,local_res8);
  iVar6 = local_res8[0];
  if (local_res8[0] != 0) goto LAB_1402ef9cc;
  lVar2 = *param_3;
  uVar3 = *(undefined4 *)((longlong)param_3 + 4);
  lVar5 = param_3[1];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  *(undefined4 **)(puVar8 + 4) = param_1;
  *puVar8 = (int)lVar2;
  puVar8[1] = uVar3;
  puVar8[2] = (int)lVar5;
  puVar8[3] = uVar4;
  if ((*(code **)(param_1 + 2) == (code *)0x0) ||
     (iVar6 = (**(code **)(param_1 + 2))(puVar8,param_2), iVar6 == 0)) {
    iVar6 = *(int *)(lVar1 + 0x38);
    lVar2 = *(longlong *)(lVar1 + 0x40);
    if (iVar6 < 0) {
LAB_1402ef9b9:
      iVar6 = 6;
    }
    else {
      iVar7 = iVar6 + 1;
      if (iVar7 < 0) goto LAB_1402ef9b9;
      if (iVar7 == 0) {
        if (lVar2 != 0) {
          (**(code **)(lVar9 + 0x10))(lVar9);
        }
        *(undefined8 *)(lVar1 + 0x40) = 0;
        iVar6 = 0;
        *(undefined4 **)((longlong)*(int *)(lVar1 + 0x38) * 8) = puVar8;
        *(int *)(lVar1 + 0x38) = *(int *)(lVar1 + 0x38) + 1;
        goto LAB_1402ef9cc;
      }
      if (iVar7 < 0x10000000) {
        if (iVar6 == 0) {
          lVar9 = (**(code **)(lVar9 + 8))(lVar9,8);
          *(longlong *)(lVar1 + 0x40) = lVar9;
          iVar6 = 0x40;
          if (lVar9 != 0) {
            iVar6 = 0;
            *(undefined4 **)(lVar9 + (longlong)*(int *)(lVar1 + 0x38) * 8) = puVar8;
            *(int *)(lVar1 + 0x38) = *(int *)(lVar1 + 0x38) + 1;
            goto LAB_1402ef9cc;
          }
          goto LAB_1402ef9c2;
        }
        lVar9 = (**(code **)(lVar9 + 0x18))(lVar9,iVar6 * 8,iVar7 * 8,lVar2);
        if (lVar9 != 0) {
          *(longlong *)(lVar1 + 0x40) = lVar9;
          iVar6 = 0;
          *(undefined4 **)(lVar9 + (longlong)*(int *)(lVar1 + 0x38) * 8) = puVar8;
          *(int *)(lVar1 + 0x38) = *(int *)(lVar1 + 0x38) + 1;
          goto LAB_1402ef9cc;
        }
        iVar6 = 0x40;
      }
      else {
        iVar6 = 10;
      }
    }
    *(longlong *)(lVar1 + 0x40) = lVar2;
  }
LAB_1402ef9c2:
  FUN_1402f6eb0(puVar8);
  puVar8 = (undefined4 *)0x0;
LAB_1402ef9cc:
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = puVar8;
  }
  return iVar6;
}

