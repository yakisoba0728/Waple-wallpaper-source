// Function: FUN_1400eae50
// Addr: 1400eae50
// Size: 118 bytes


undefined8 FUN_1400eae50(longlong param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 local_18 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  uVar5 = (ulonglong)param_2;
  if (uVar5 < (ulonglong)(*(longlong *)(param_1 + 0x40) - lVar1 >> 4)) {
    lVar2 = *(longlong *)(lVar1 + uVar5 * 0x10);
    *(undefined4 *)(lVar1 + 8 + uVar5 * 0x10) = param_4;
    if (lVar2 != 0) {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
      iVar4 = (**(code **)(*plVar3 + 0x70))(plVar3,lVar2,0,4,0,local_18);
      if (-1 < iVar4) {
        *param_3 = local_18[0];
        return 1;
      }
    }
  }
  return 0;
}

