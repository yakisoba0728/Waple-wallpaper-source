// Function: FUN_1400d3f80
// Addr: 1400d3f80
// Size: 472 bytes


longlong * FUN_1400d3f80(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 ***pppuVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_res10;
  undefined8 **local_48;
  longlong lStack_40;
  ulonglong local_38;
  ulonglong uStack_30;
  
  lVar2 = (**(code **)(*param_2 + 8))(param_2,param_3,0);
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    return param_1;
  }
  lStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0xf;
  local_48 = (undefined8 ***)0x0;
  uVar1 = (**(code **)(*param_2 + 0x18))(param_2,lVar2);
  uVar7 = (ulonglong)uVar1;
  uVar4 = (ulonglong)uVar1;
  if (local_38 < uVar7) {
    uVar6 = uVar4 - local_38;
    if (uStack_30 - local_38 < uVar6) {
      FUN_140016cc0(&local_48,uVar6,local_res10,uVar6,0);
    }
    else {
      pppuVar3 = &local_48;
      if (0xf < uStack_30) {
        pppuVar3 = (undefined8 ***)local_48;
      }
      lVar5 = (longlong)pppuVar3 + local_38;
      local_38 = uVar4;
      FUN_1404217a0(lVar5,0,uVar6);
      *(undefined1 *)(lVar5 + uVar6) = 0;
    }
  }
  else {
    pppuVar3 = &local_48;
    if (0xf < uStack_30) {
      pppuVar3 = (undefined8 ***)local_48;
    }
    local_38 = uVar4;
    *(undefined1 *)((longlong)pppuVar3 + uVar7) = 0;
  }
  pppuVar3 = &local_48;
  if (0xf < uStack_30) {
    pppuVar3 = (undefined8 ***)local_48;
  }
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,lVar2,pppuVar3,uVar7);
  uVar4 = (ulonglong)uVar1;
  if (local_38 < uVar4) {
    uVar7 = uVar4 - local_38;
    if (uStack_30 - local_38 < uVar7) {
      FUN_140016cc0(&local_48,uVar7,local_res10,uVar7,0);
    }
    else {
      pppuVar3 = &local_48;
      if (0xf < uStack_30) {
        pppuVar3 = (undefined8 ***)local_48;
      }
      lVar5 = (longlong)pppuVar3 + local_38;
      local_38 = uVar4;
      FUN_1404217a0(lVar5,0,uVar7);
      *(undefined1 *)(lVar5 + uVar7) = 0;
    }
  }
  else {
    pppuVar3 = &local_48;
    if (0xf < uStack_30) {
      pppuVar3 = (undefined8 ***)local_48;
    }
    local_38 = uVar4;
    *(undefined1 *)((longlong)pppuVar3 + uVar4) = 0;
  }
  (**(code **)(*param_2 + 0x20))(param_2,lVar2);
  *param_1 = (longlong)local_48;
  param_1[1] = lStack_40;
  param_1[2] = local_38;
  param_1[3] = uStack_30;
  return param_1;
}

