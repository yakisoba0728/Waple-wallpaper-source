// Function: FUN_14035fa00
// Addr: 14035fa00
// Size: 315 bytes


void FUN_14035fa00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  uint param_5,int *param_6,uint param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar7 = 0;
  uVar8 = (uint)param_3;
  if (*(undefined **)(*(longlong *)(param_1 + 0x90) + 0x48) == PTR_FUN_1404df470) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x90) + 0x10);
    uVar5 = uVar7;
    if (lVar3 != 0) {
      uVar5 = *(ulonglong *)(lVar3 + 0x38);
    }
    (**(code **)(*(longlong *)(lVar2 + 0x90) + 0x58))
              (lVar2,*(undefined8 *)(lVar2 + 0x98),param_3,param_4,param_5,param_6,param_7,uVar5);
    if (uVar8 != 0) {
      do {
        iVar4 = *param_6;
        if (*(longlong *)(param_1 + 0x18) != 0) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x28);
          if ((iVar1 != 0) && (iVar1 != *(int *)(param_1 + 0x28))) {
            iVar4 = (int)(((longlong)iVar4 * (longlong)*(int *)(param_1 + 0x28)) / (longlong)iVar1);
          }
        }
        *param_6 = iVar4;
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        param_6 = (int *)((longlong)param_6 + (ulonglong)param_7);
      } while (uVar6 < uVar8);
    }
  }
  else if (uVar8 != 0) {
    uVar5 = uVar7;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
      uVar9 = uVar7;
      if (lVar2 != 0) {
        uVar9 = *(ulonglong *)(lVar2 + 0x28);
      }
      iVar4 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x48))
                        (param_1,*(undefined8 *)(param_1 + 0x98),*param_4,uVar9);
      *param_6 = iVar4;
      param_4 = (undefined4 *)((longlong)param_4 + (ulonglong)param_5);
      param_6 = (int *)((longlong)param_6 + (ulonglong)param_7);
      uVar6 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar6;
    } while (uVar6 < uVar8);
  }
  return;
}

