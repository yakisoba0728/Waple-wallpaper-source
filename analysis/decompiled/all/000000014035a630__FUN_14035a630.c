// Function: FUN_14035a630
// Addr: 14035a630
// Size: 531 bytes


ulonglong FUN_14035a630(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  char local_res8;
  char local_res9;
  uint local_res18 [4];
  
  if ((param_1 == (undefined8 *)0x0) || (param_2 == 0)) {
    return 0x28;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = FUN_1402f5c50(param_2,0);
  if ((((int)uVar4 == 0) && (uVar4 = FUN_1402f54b0(param_2,&local_res8,2), (int)uVar4 == 0)) &&
     ((local_res8 != '\x1f' || (local_res9 != -99)))) {
    return 3;
  }
  local_res18[0] = (uint)uVar4;
  if (local_res18[0] != 0) {
    return uVar4;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = uVar2;
  plVar5 = (longlong *)FUN_1402f7fa0(uVar2,0x1108,local_res18);
  uVar3 = local_res18[0];
  if (local_res18[0] == 0) {
    plVar5[1] = (longlong)param_1;
    *plVar5 = param_2;
    plVar5[2] = param_1[6];
    plVar1 = plVar5 + 0x21e;
    plVar5[0x220] = (longlong)plVar1;
    plVar5[0x21f] = (longlong)plVar1;
    *(undefined4 *)plVar1 = 0;
    uVar3 = FUN_1402f5c50(param_2,0);
    if ((uVar3 == 0) && (uVar3 = FUN_1402f54b0(param_2,&local_res8,2), uVar3 == 0)) {
      if ((local_res8 == '\x1f') && (local_res9 == -99)) {
        FUN_1404217a0(plVar5 + 3,0,0xd8);
        plVar5[0x1c] = param_2;
        plVar5[0x1d] = *(longlong *)(param_2 + 0x30);
        plVar5[0x11] = (longlong)(plVar5 + 0x14);
        plVar5[0xe] = 0;
        plVar5[0xf] = 0;
        *(undefined4 *)(plVar5 + 0x10) = 0;
        plVar5[0x13] = 0x40;
        plVar5[3] = 0;
        plVar5[6] = 0;
        *(undefined1 *)(plVar5 + 7) = 0;
        plVar5[8] = 0;
        *(undefined4 *)(plVar5 + 0x12) = 0;
        *(undefined4 *)((longlong)plVar5 + 0x54) = 9;
        param_1[2] = plVar5;
        goto LAB_14035a7df;
      }
      uVar3 = 3;
    }
    local_res18[0] = uVar3;
    FUN_1402f7f90(uVar2,plVar5);
  }
  else {
LAB_14035a7df:
    param_1[1] = 0x7fffffff;
    param_1[4] = &LAB_14035aa90;
    param_1[5] = FUN_14035a9c0;
    *param_1 = 0;
    local_res18[0] = uVar3;
  }
  return (ulonglong)local_res18[0];
}

