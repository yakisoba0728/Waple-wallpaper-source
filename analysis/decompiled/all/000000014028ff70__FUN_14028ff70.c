// Function: FUN_14028ff70
// Addr: 14028ff70
// Size: 334 bytes


void FUN_14028ff70(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  bool local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_1404dc110 ^ (ulonglong)auStack_e8;
  local_a8 = 0x2000000;
  local_b0 = 0x20;
  local_c8 = &local_b0;
  local_a0 = 0;
  uStack_98 = 0;
  lVar3 = (*DAT_140426600)(0,0x80,7,3);
  if ((lVar3 == -1) && (local_b4 = (*DAT_1404266a8)(), local_b4 != 0)) {
    local_b8 = false;
    goto UNWIND_INFO_1402900e2_UnwindCodes_84__OffsetInProlog;
  }
  iVar1 = (*DAT_1404265d8)(lVar3,0x12,&local_90,0x18);
  if (iVar1 == 0) {
    iVar1 = (*DAT_1404266a8)();
    if ((iVar1 == 0x32) || (iVar1 == 0x57)) {
      iVar1 = (*DAT_140426630)(lVar3,&local_78);
      if (iVar1 != 0) {
        local_90 = uStack_60 >> 0x20;
        local_88 = local_4c;
        local_84 = local_48;
        local_80 = 0;
        goto LAB_140290067;
      }
      iVar1 = (*DAT_1404266a8)();
    }
    if (iVar1 != 0) {
      if ((lVar3 != -1) && (iVar2 = (*DAT_140426368)(lVar3), iVar2 == 0)) goto code_r0x0001402901b2;
      local_b8 = false;
      local_b4 = iVar1;
      goto UNWIND_INFO_1402900e2_UnwindCodes_84__OffsetInProlog;
    }
  }
LAB_140290067:
  local_70 = 0x2000000;
  local_c8 = &local_78;
  local_78 = 0x20;
  local_68 = 0;
  uStack_60 = 0;
  lVar4 = (*DAT_140426600)(param_2,0x80,7,3);
  if ((lVar4 != -1) || (iVar1 = (*DAT_1404266a8)(), iVar1 == 0)) {
    iVar1 = FUN_14028f710(lVar4,local_40);
    if (iVar1 == 0) {
      iVar1 = func_0x0001404210c0(&local_90,local_40,0x18);
      if (((lVar4 != -1) && (iVar2 = (*DAT_140426368)(lVar4), iVar2 == 0)) ||
         ((lVar3 != -1 && (iVar2 = (*DAT_140426368)(lVar3), iVar2 == 0))))
      goto code_r0x0001402901b2;
      local_b4 = 0;
      local_b8 = iVar1 == 0;
      goto UNWIND_INFO_1402900e2_UnwindCodes_84__OffsetInProlog;
    }
    if ((lVar4 != -1) && (iVar2 = (*DAT_140426368)(lVar4), iVar2 == 0)) goto code_r0x0001402901b2;
  }
  if ((lVar3 != -1) && (iVar2 = (*DAT_140426368)(lVar3), iVar2 == 0)) {
code_r0x0001402901b2:
                    /* WARNING: Subroutine does not return */
    FUN_1402c98b4();
  }
  local_b8 = false;
  local_b4 = iVar1;
UNWIND_INFO_1402900e2_UnwindCodes_84__OffsetInProlog:
  func_0x0001402ed2f0(local_28 ^ (ulonglong)auStack_e8);
  return;
}

