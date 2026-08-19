// Function: FUN_1402f50b0
// Addr: 1402f50b0
// Size: 8 bytes


longlong FUN_1402f50b0(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar3 = *(uint *)(param_1 + 1);
  uVar5 = (ulonglong)param_2;
  if (param_1[4] != 0) {
    if (uVar3 < param_2) {
      return 0x55;
    }
    lVar2 = param_1[6];
    if ((int)param_2 < 1) {
      if ((int)param_2 < 0) {
        *param_1 = 0;
        return 6;
      }
      lVar4 = 0;
      lVar7 = lVar4;
    }
    else {
      lVar4 = (**(code **)(lVar2 + 8))(lVar2,param_2);
      lVar7 = 0x40;
      if (lVar4 != 0) {
        lVar7 = 0;
      }
    }
    lVar6 = 0;
    *param_1 = lVar4;
    if ((int)lVar7 == 0) {
      uVar3 = (*(code *)param_1[4])(param_1,*(undefined4 *)((longlong)param_1 + 0xc),lVar4,uVar5);
      if (uVar3 < param_2) {
        if (*param_1 != 0) {
          (**(code **)(lVar2 + 0x10))(lVar2);
        }
        *param_1 = 0;
        lVar7 = 0x55;
      }
      lVar2 = *param_1;
      param_1[7] = lVar2;
      if (lVar2 != 0) {
        lVar6 = lVar2 + uVar5;
      }
      *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + uVar3;
      param_1[8] = lVar6;
    }
    return lVar7;
  }
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if ((uVar1 < uVar3) && (param_2 <= uVar3 - uVar1)) {
    param_1[7] = (ulonglong)uVar1 + *param_1;
    param_1[8] = (ulonglong)uVar1 + *param_1 + uVar5;
    *(uint *)((longlong)param_1 + 0xc) = uVar1 + param_2;
    return 0;
  }
  return 0x55;
}

