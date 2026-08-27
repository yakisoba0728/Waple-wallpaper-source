// Function: FUN_14035f6e0
// Addr: 14035f6e0
// Size: 259 bytes


ulonglong FUN_14035f6e0(longlong param_1,undefined8 param_2,uint param_3,undefined4 *param_4,
                       uint param_5,undefined4 *param_6,uint param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if (*(undefined **)(*(longlong *)(param_1 + 0x90) + 0x30) == PTR_FUN_1404df458) {
    lVar2 = *(longlong *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014035f7df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*(longlong *)(lVar2 + 0x90) + 0x38))(lVar2,*(undefined8 *)(lVar2 + 0x98));
    return uVar5;
  }
  if (param_3 != 0) {
    uVar5 = 0;
    do {
      uVar1 = *param_4;
      *param_6 = 0;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
      uVar4 = 0;
      if (lVar2 != 0) {
        uVar4 = *(ulonglong *)(lVar2 + 0x10);
      }
      iVar3 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x30))
                        (param_1,*(undefined8 *)(param_1 + 0x98),uVar1,param_6,uVar4);
      if (iVar3 == 0) {
        return uVar5;
      }
      param_4 = (undefined4 *)((longlong)param_4 + (ulonglong)param_5);
      param_6 = (undefined4 *)((longlong)param_6 + (ulonglong)param_7);
      uVar6 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar6;
    } while (uVar6 < param_3);
  }
  return (ulonglong)param_3;
}

