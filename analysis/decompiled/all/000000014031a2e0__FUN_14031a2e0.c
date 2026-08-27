// Function: FUN_14031a2e0
// Addr: 14031a2e0
// Size: 546 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14031a2e0(longlong param_1,uint param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_748 [32];
  longlong local_728;
  undefined1 local_718 [808];
  undefined1 *local_3f0;
  undefined1 *local_338;
  int local_330;
  int local_32c;
  undefined1 local_328 [720];
  ulonglong local_58;
  
  local_58 = DAT_1404dc040 ^ (ulonglong)auStack_748;
  lVar1 = *(longlong *)(param_1 + 8);
  uVar9 = (ulonglong)param_2;
  local_728 = *(longlong *)(lVar1 + 0x2a0);
  uVar4 = *(undefined4 *)(lVar1 + 0x268);
  uVar5 = *(undefined4 *)(lVar1 + 0x26c);
  uVar6 = *(undefined4 *)(lVar1 + 0x270);
  plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xd0) + 0x50);
  lVar3 = *(longlong *)(local_728 + 0x18);
  *(undefined4 *)(param_1 + 0x690) = *(undefined4 *)(lVar1 + 0x264);
  *(undefined4 *)(param_1 + 0x694) = uVar4;
  *(undefined4 *)(param_1 + 0x698) = uVar5;
  *(undefined4 *)(param_1 + 0x69c) = uVar6;
  *(undefined8 *)(param_1 + 0x6a0) = *(undefined8 *)(lVar1 + 0x274);
  local_338 = param_4;
  if (plVar2 == (longlong *)0x0) {
    *param_3 = *(undefined8 *)(*(longlong *)(lVar1 + 0x250) + uVar9 * 8);
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(*(longlong *)(lVar1 + 600) + uVar9 * 4);
  }
  else {
    *param_3 = 0;
    iVar8 = (**(code **)*plVar2)(plVar2[1],uVar9);
    if (iVar8 != 0) goto LAB_14031a4d0;
  }
  lVar7 = local_728;
  if (*(char *)(param_1 + 0x5e) == '\0') {
    (**(code **)(local_728 + 0x30))(local_718,param_1,1);
    (**(code **)(lVar7 + 0x38))(lVar1,lVar1 + 0x114,local_328);
    local_3f0 = local_328;
    iVar8 = (**(code **)(lVar3 + 0x18))(local_718,*param_3,*(undefined4 *)(param_3 + 1));
    if ((char)iVar8 == -0x5c) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xf8) = 0;
      *local_338 = 1;
      iVar8 = (**(code **)(lVar3 + 0x18))(local_718,*param_3,*(undefined4 *)(param_3 + 1));
    }
  }
  else {
    iVar8 = (**(code **)(lVar3 + 0x10))(param_1,*param_3,*(undefined4 *)(param_3 + 1));
  }
  if (iVar8 == 0) {
    if (plVar2 == (longlong *)0x0) {
      return 0;
    }
    if (*(longlong *)(*plVar2 + 0x10) == 0) {
      return 0;
    }
    iVar8 = FUN_1402f4b60(*(undefined4 *)(param_1 + 0x38));
    local_338 = (undefined1 *)(ulonglong)(uint)(iVar8 >> 0x10);
    local_330 = FUN_1402f4b60(*(undefined4 *)(param_1 + 0x40));
    local_330 = local_330 >> 0x10;
    local_32c = FUN_1402f4b60(*(undefined4 *)(param_1 + 0x44));
    local_32c = local_32c >> 0x10;
    iVar8 = (**(code **)(*plVar2 + 0x10))(plVar2[1],uVar9,0,&local_338);
    *(int *)(param_1 + 0x38) = (int)local_338 << 0x10;
    *(int *)(param_1 + 0x40) = local_330 << 0x10;
    *(int *)(param_1 + 0x44) = local_32c << 0x10;
    if (iVar8 == 0) {
      return 0;
    }
  }
  if (plVar2 == (longlong *)0x0) {
    return iVar8;
  }
LAB_14031a4d0:
  (**(code **)(*plVar2 + 8))(plVar2[1],param_3);
  return iVar8;
}

