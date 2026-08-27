// Function: FUN_1403d2210
// Addr: 1403d2210
// Size: 410 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_1403d2210(undefined8 param_1,uint *param_2,undefined4 param_3,longlong param_4,
             undefined8 param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 auStack_d8 [32];
  float local_b8;
  undefined8 local_b0;
  code *local_a8;
  code *local_a0;
  code *local_98;
  code *local_90;
  undefined8 local_88;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  float local_60;
  float fStack_5c;
  float local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_d8;
  FUN_14039db30();
  lpCriticalSection = (LPCRITICAL_SECTION)(param_2 + 2);
  EnterCriticalSection(lpCriticalSection);
  lVar1 = *(longlong *)(param_2 + 0xc);
  iVar3 = FUN_1402f12d0(lVar1,param_3,*param_2 | 8);
  if ((iVar3 == 0) && (*(int *)(*(longlong *)(lVar1 + 0x78) + 0x60) == 0x6f75746c)) {
    local_a8 = FUN_14039dcb0;
    local_a0 = FUN_14039dbd0;
    local_98 = FUN_14039d2d0;
    local_90 = FUN_14039d3e0;
    uVar4 = 0;
    local_88 = 0;
    local_70 = param_5;
    local_68 = 0;
    local_60 = 0.0;
    fStack_5c = 0.0;
    local_58 = 0.0;
    uStack_54 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_78 = param_4;
    FUN_1402f27a0(*(longlong *)(lVar1 + 0x78) + 0x98,&local_a8,&local_78);
    uVar2 = local_70;
    lVar1 = local_78;
    uVar5 = 1;
    if ((int)local_68 != 0) {
      if ((local_68._4_4_ != fStack_5c) || (local_60 != local_58)) {
        local_b0 = uVar4;
        if (*(longlong *)(local_78 + 0x38) != 0) {
          local_b0 = *(undefined8 *)(*(longlong *)(local_78 + 0x38) + 8);
        }
        local_b8 = local_60;
        (**(code **)(local_78 + 0x18))(local_78,local_70,&local_68);
      }
      if (*(longlong *)(lVar1 + 0x38) != 0) {
        uVar4 = *(undefined8 *)(*(longlong *)(lVar1 + 0x38) + 0x20);
      }
      (**(code **)(lVar1 + 0x30))(lVar1,uVar2,&local_68,uVar4);
    }
    local_68 = 0;
    fStack_5c = 0.0;
    local_58 = 0.0;
    local_60 = 0.0;
  }
  else {
    uVar5 = 0;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return uVar5;
}

