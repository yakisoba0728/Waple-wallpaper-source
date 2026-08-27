// Function: FUN_14035f850
// Addr: 14035f850
// Size: 202 bytes


ulonglong FUN_14035f850(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  uint local_res8 [4];
  undefined4 local_res18 [4];
  
  local_res18[0] = (undefined4)param_3;
  pcVar2 = *(code **)(*(longlong *)(param_1 + 0x90) + 0x58);
  if (pcVar2 != (code *)PTR_FUN_1404df480) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
    uVar6 = 0;
    if (lVar3 != 0) {
      uVar6 = *(undefined8 *)(lVar3 + 0x38);
    }
    (*pcVar2)(param_1,*(undefined8 *)(param_1 + 0x98),1,local_res18,0,local_res8,0,uVar6);
    return (ulonglong)local_res8[0];
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x90) + 0x10);
  uVar6 = 0;
  if (lVar4 != 0) {
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
  }
  uVar5 = (**(code **)(*(longlong *)(lVar3 + 0x90) + 0x48))
                    (lVar3,*(undefined8 *)(lVar3 + 0x98),param_3,uVar6);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x28);
    if ((iVar1 != 0) && (iVar1 != *(int *)(param_1 + 0x28))) {
      return ((longlong)*(int *)(param_1 + 0x28) * (longlong)(int)uVar5) / (longlong)iVar1;
    }
  }
  return (ulonglong)uVar5;
}

