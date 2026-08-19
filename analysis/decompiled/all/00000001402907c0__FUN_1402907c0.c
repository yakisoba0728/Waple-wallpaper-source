// Function: FUN_1402907c0
// Addr: 1402907c0
// Size: 629 bytes


void FUN_1402907c0(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined4 local_58;
  uint local_54;
  undefined1 local_50;
  ushort uStack_4f;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_1404dc110 ^ (ulonglong)auStack_88;
  uVar2 = func_0x000140290650(&local_50,param_1,0x10180,0x2200000);
  if (uVar2 == 0) {
    lVar4 = CONCAT44(uStack_4c,CONCAT13(uStack_4d,CONCAT21(uStack_4f,local_50)));
    bVar1 = true;
LAB_14029080e:
    local_58 = 0x13;
    iVar3 = (*DAT_140426618)(lVar4,0x15,&local_58,4);
    if (iVar3 != 0) {
LAB_140290835:
      if ((lVar4 != -1) && (iVar3 = (*DAT_140426368)(lVar4), iVar3 == 0)) {
UNWIND_INFO_140290add_UnwindCodes_1__OffsetInProlog:
                    /* WARNING: Subroutine does not return */
        FUN_1402c98b4();
      }
LAB_14029084c:
      local_58._0_1_ = 1;
      local_54 = 0;
      goto LAB_140290aaf;
    }
    uVar2 = (*DAT_1404266a8)();
    if (((uVar2 != 1) && (uVar2 != 0x32)) && (uVar2 != 0x57)) {
LAB_1402908ef:
      local_54 = uVar2;
      if (lVar4 != -1) {
        iVar3 = (*DAT_140426368)(lVar4);
        goto joined_r0x000140290aa6;
      }
      goto LAB_140290aab;
    }
    uVar2 = func_0x00014028f7b0(lVar4);
    if (uVar2 == 0) goto LAB_140290835;
    if ((uVar2 != 5) || (!bVar1)) goto LAB_1402908ef;
    iVar3 = (*DAT_1404265d8)(lVar4,0,&local_48,0x28);
    if (iVar3 != 0) {
      if ((local_28 & 1) == 0) {
        if (lVar4 != -1) {
          iVar3 = (*DAT_140426368)(lVar4);
joined_r0x000140290a62:
          if (iVar3 == 0) goto UNWIND_INFO_140290add_UnwindCodes_4__OffsetInProlog;
        }
LAB_140290a11:
        local_54 = 5;
        goto LAB_140290aab;
      }
      local_28 = local_28 ^ 1;
      iVar3 = (*DAT_140426618)(lVar4,0,&local_48,0x28);
      if (iVar3 == 0) goto LAB_140290943;
      iVar3 = func_0x00014028f7b0(lVar4);
      if (iVar3 != 0) {
        if (iVar3 == 5) {
          local_28 = local_28 | 1;
          iVar3 = (*DAT_140426618)(lVar4,0,&local_48,0x28);
          if (iVar3 != 0) {
            if (lVar4 != -1) {
              iVar3 = (*DAT_140426368)(lVar4);
              goto joined_r0x000140290a62;
            }
            goto LAB_140290a11;
          }
          goto LAB_140290943;
        }
        local_54 = (*DAT_1404266a8)();
        if (lVar4 == -1) goto LAB_140290962;
        iVar3 = (*DAT_140426368)(lVar4);
        if (iVar3 == 0) goto UNWIND_INFO_140290add_UnwindCodes_1__OffsetInProlog;
        local_58._0_3_ = (uint3)uStack_4f << 8;
        goto LAB_140290ab7;
      }
      if (lVar4 == -1) goto LAB_14029084c;
      iVar3 = (*DAT_140426368)(lVar4);
      if (iVar3 == 0) goto UNWIND_INFO_140290add_UnwindCodes_4__OffsetInProlog;
      local_58._0_1_ = 1;
      local_54 = 0;
      goto LAB_140290aaf;
    }
LAB_140290943:
    local_54 = (*DAT_1404266a8)();
    if ((lVar4 != -1) && (iVar3 = (*DAT_140426368)(lVar4), iVar3 == 0)) {
UNWIND_INFO_140290add_UnwindCodes_4__OffsetInProlog:
                    /* WARNING: Subroutine does not return */
      FUN_1402c98b4();
    }
LAB_140290962:
    local_58._0_3_ = (uint3)uStack_4f << 8;
  }
  else {
    if (uVar2 == 5) {
      local_40 = 0x2200000;
      local_68 = &local_48;
      local_48 = 0x20;
      bVar1 = false;
      local_38 = 0;
      uStack_30 = 0;
      lVar4 = (*DAT_140426600)(param_1,0x10000,7,3);
      if ((lVar4 == -1) && (local_54 = (*DAT_1404266a8)(), local_54 != 0)) {
        local_58 = (uint)CONCAT12(uStack_4d,uStack_4f) << 8;
        goto UNWIND_INFO_140290abb_FrameRegister;
      }
      goto LAB_14029080e;
    }
    if (uVar2 < 0x41) {
      if (((uVar2 == 0x40) || (uVar2 == 2)) || ((uVar2 == 3 || (uVar2 == 0x35)))) {
UNWIND_INFO_140290a84_UnwindCodes_4__UnwindOpCode:
        uVar2 = 0;
      }
    }
    else if (((uVar2 == 0x7b) || (uVar2 == 0xa1)) || (uVar2 == 0x10b))
    goto UNWIND_INFO_140290a84_UnwindCodes_4__UnwindOpCode;
    local_54 = uVar2;
    if (CONCAT44(uStack_4c,CONCAT13(uStack_4d,CONCAT21(uStack_4f,local_50))) != -1) {
      iVar3 = (*DAT_140426368)();
joined_r0x000140290aa6:
      local_54 = uVar2;
      if (iVar3 == 0) goto UNWIND_INFO_140290add_UnwindCodes_1__OffsetInProlog;
    }
LAB_140290aab:
    local_58._0_1_ = 0;
LAB_140290aaf:
    local_58._0_3_ = CONCAT21(uStack_4f,(undefined1)local_58);
  }
LAB_140290ab7:
  local_58 = CONCAT13(uStack_4d,(int3)local_58);
UNWIND_INFO_140290abb_FrameRegister:
  func_0x0001402ed2f0(local_20 ^ (ulonglong)auStack_88);
  return;
}

