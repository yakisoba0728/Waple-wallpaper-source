// Function: FUN_14028f930
// Addr: 14028f930
// Size: 788 bytes


void FUN_14028f930(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  bool local_c8;
  undefined2 uStack_c7;
  undefined1 uStack_c5;
  uint uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  longlong local_70;
  undefined1 auStack_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_1404dc110 ^ (ulonglong)auStack_f8;
  param_3 = param_3 & 0xf;
  if (param_3 == 2) {
LAB_14028fbaa:
    local_a8 = 0;
    local_c0 = 0x20;
    local_b8 = 0;
    uStack_b0 = 0;
    uVar1 = (*DAT_1404265e8)(param_1,param_2,&local_c0);
    local_c8 = (bool)((byte)(uVar1 >> 0x1f) ^ 1);
    uStack_c4 = 0;
    if ((int)uVar1 < 0) {
      uStack_c4 = uVar1 & 0xffff;
    }
    goto LAB_14028fbfb;
  }
  local_a8 = 0;
  local_c0 = 0x100000020;
  local_b8 = 0;
  uStack_b0 = 0;
  uVar1 = (*DAT_1404265e8)(0,param_2,&local_c0);
  if ((int)uVar1 < 0) {
    uStack_c4 = uVar1 & 0xffff;
  }
  else {
    uStack_c4 = 0;
  }
  local_c8 = (int)uVar1 >= 0;
  if ((uStack_c4 != 0x50) || (param_3 == 0)) goto LAB_14028fbfb;
  local_98 = 0;
  local_d8 = &local_a0;
  local_a0 = 0x20;
  uVar5 = 3;
  if (param_3 != 1) {
    uVar5 = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  lVar3 = (*DAT_140426600)(param_1,0x80,uVar5,3);
  if ((lVar3 == -1) && (uVar1 = (*DAT_1404266a8)(), uVar1 != 0)) {
    local_c8 = false;
    uStack_c4 = uVar1;
    goto LAB_14028fbfb;
  }
  local_b8 = 0;
  local_d8 = &local_c0;
  local_c0 = 0x20;
  uStack_b0 = 0;
  local_a8 = 0;
  lVar4 = (*DAT_140426600)(param_2,0x80,uVar5,3);
  if ((lVar4 == -1) && (uVar1 = (*DAT_1404266a8)(), uVar1 != 0)) {
    if ((lVar3 == -1) || (iVar2 = (*DAT_140426368)(lVar3), iVar2 != 0)) {
      local_c8 = false;
      uStack_c4 = uVar1;
      goto LAB_14028fbfb;
    }
    goto LAB_14028fd1b;
  }
  if (param_3 == 4) {
    iVar2 = (*DAT_1404265d8)(lVar3,0,local_80,0x28);
    lVar6 = local_70;
    if (iVar2 != 0) {
LAB_14028fb44:
      iVar2 = (*DAT_1404265d8)(lVar4,0,local_80,0x28);
      if (iVar2 == 0) {
        uVar1 = (*DAT_1404266a8)();
        if (uVar1 != 0) goto LAB_14028faf7;
        local_70 = CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,local_c8)));
      }
      if (local_70 < lVar6) {
        if (((lVar4 != -1) && (iVar2 = (*DAT_140426368)(lVar4), iVar2 == 0)) ||
           ((lVar3 != -1 && (iVar2 = (*DAT_140426368)(lVar3), iVar2 == 0)))) goto LAB_14028fd1b;
        goto LAB_14028fbaa;
      }
      goto LAB_14028fc22;
    }
    uVar1 = (*DAT_1404266a8)();
    if (uVar1 == 0) {
      lVar6 = CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,local_c8)));
      goto LAB_14028fb44;
    }
LAB_14028faf7:
    if (((lVar4 != -1) && (iVar2 = (*DAT_140426368)(lVar4), iVar2 == 0)) ||
       ((lVar3 != -1 && (iVar2 = (*DAT_140426368)(lVar3), iVar2 == 0)))) {
LAB_14028fd1b:
                    /* WARNING: Subroutine does not return */
      FUN_1402c98b4();
    }
  }
  else {
LAB_14028fc22:
    uVar1 = FUN_14028f710(lVar3,local_80);
    if ((uVar1 == 0) && (uVar1 = FUN_14028f710(lVar4,auStack_58), uVar1 == 0)) {
      iVar2 = func_0x0001404210c0(local_80,auStack_58,0x18);
      if (iVar2 == 0) {
        if (((lVar4 != -1) && (iVar2 = (*DAT_140426368)(lVar4), iVar2 == 0)) ||
           ((lVar3 != -1 && (iVar2 = (*DAT_140426368)(lVar3), iVar2 == 0)))) {
LAB_14028fd21:
                    /* WARNING: Subroutine does not return */
          FUN_1402c98b4();
        }
        local_c8 = false;
        uStack_c4 = 0x20;
      }
      else {
        if (((lVar4 != -1) && (iVar2 = (*DAT_140426368)(lVar4), iVar2 == 0)) ||
           ((lVar3 != -1 && (iVar2 = (*DAT_140426368)(lVar3), iVar2 == 0)))) goto LAB_14028fd21;
        local_c8 = false;
        uStack_c4 = 0;
      }
      goto LAB_14028fbfb;
    }
    if (((lVar4 != -1) && (iVar2 = (*DAT_140426368)(lVar4), iVar2 == 0)) ||
       ((lVar3 != -1 && (iVar2 = (*DAT_140426368)(lVar3), iVar2 == 0)))) goto LAB_14028fd21;
  }
  local_c8 = false;
  uStack_c4 = uVar1;
LAB_14028fbfb:
  func_0x0001402ed2f0(local_40 ^ (ulonglong)auStack_f8);
  return;
}

