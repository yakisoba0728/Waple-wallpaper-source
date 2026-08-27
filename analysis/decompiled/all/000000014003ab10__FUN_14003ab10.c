// Function: FUN_14003ab10
// Addr: 14003ab10
// Size: 496 bytes


void FUN_14003ab10(undefined8 *param_1,uint *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  int local_68 [2];
  uint local_60;
  undefined4 local_58;
  uint uStack_54;
  longlong *local_50;
  
  FUN_14003b1c0(&local_58,param_1,param_2);
  uVar4 = uStack_54;
  uVar5 = *param_2;
  plVar7 = local_50;
  while (local_50 = plVar7, uVar5 == 0) {
    lVar3 = CONCAT44(uStack_54,local_58);
    if (lVar3 == 0) goto LAB_14003ac7a;
    FUN_14003b6c0(lVar3,local_68,6);
    *param_2 = local_60;
    param_2[1] = uVar4;
    *(undefined ***)(param_2 + 2) = &PTR_PTR_1404df530;
    if (local_60 != 0) goto LAB_14003ac24;
    plVar7 = (longlong *)(lVar3 + 0x20);
    if (local_68[0] == 3) {
      FUN_14003ab10(plVar7,param_2,param_3);
    }
    else {
      if (7 < *(ulonglong *)(lVar3 + 0x38)) {
        plVar7 = (longlong *)*plVar7;
      }
      uVar6 = FUN_1402906f0(plVar7);
      param_2[1] = uVar4;
      *param_2 = (uint)(uVar6 >> 0x20);
      *param_3 = *param_3 + (uVar6 & 0xff);
      *(undefined ***)(param_2 + 2) = &PTR_PTR_1404df530;
    }
    if (*param_2 != 0) goto LAB_14003ac24;
    uVar5 = FUN_14003b5f0(&local_58);
    *param_2 = uVar5;
    param_2[1] = uVar4;
    *(undefined ***)(param_2 + 2) = &PTR_PTR_1404df530;
    plVar7 = local_50;
  }
  if (*(longlong *)(*(longlong *)(param_2 + 2) + 8) == DAT_1404df538) {
    if (uVar5 < 0x41) {
      if (((uVar5 != 0x40) && (uVar5 != 2)) && ((uVar5 != 3 && (uVar5 != 0x35))))
      goto LAB_14003ac24;
    }
    else if (((uVar5 != 0x7b) && (uVar5 != 0xa1)) && (uVar5 != 0x10b)) goto LAB_14003ac24;
LAB_14003ac7a:
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
      }
    }
    iVar9 = 0;
    do {
      puVar8 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar8 = (undefined8 *)*param_1;
      }
      uVar6 = FUN_1402906f0(puVar8);
      *param_3 = *param_3 + (uVar6 & 0xff);
      uVar5 = (uint)(uVar6 >> 0x20);
      *param_2 = uVar5;
      param_2[1] = uStack_54;
      *(undefined ***)(param_2 + 2) = &PTR_PTR_1404df530;
    } while (((uVar5 == 0x91) || (uVar5 == 5)) && (iVar9 = iVar9 + 1, iVar9 < 10));
  }
  else {
LAB_14003ac24:
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_50 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_50 + 8))(local_50);
        }
      }
    }
  }
  return;
}

