// Function: FUN_140345be0
// Addr: 140345be0
// Size: 322 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140345be0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_48 [32];
  int local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  undefined2 uStack_1b;
  char cStack_19;
  ulonglong local_18;
  
  local_18 = DAT_1404dc040 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  lVar2 = *(longlong *)(param_1 + 0x4e0);
  if (((lVar2 == 0) || (*(longlong *)(lVar2 + 0x20) == 0)) || (*(longlong *)(lVar2 + 0x80) == 0)) {
    uVar3 = (ulonglong)param_2 & 0xffffffffffffff00;
  }
  else if (*(char *)(param_2 + 1) == '\0') {
    uVar3 = FUN_140349c10();
  }
  else {
    *(uint *)((longlong)param_3 + 0x11) = CONCAT13(uStack_1c,uStack_20._1_3_);
    *(undefined2 *)((longlong)param_3 + 0x15) = uStack_1b;
    *(undefined8 *)(param_3 + 2) = uVar1;
    *(char *)((longlong)param_3 + 0x17) = cStack_19;
    *param_3 = 0xc;
    *(undefined1 *)(param_3 + 4) = 0;
    local_24 = 0;
    uStack_20 = 0;
    local_28 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x1c) + 0x20 >> 6;
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x20) + 0x20;
    iVar5 = iVar4 >> 6;
    uStack_1c = (undefined1)iVar5;
    uStack_1b = (undefined2)((uint)iVar5 >> 8);
    cStack_19 = (char)(iVar4 >> 0x1e);
    uVar6 = 0;
    uVar7 = 0;
    if ((*(byte *)(*(longlong *)(param_1 + 0xd0) + 0x18) & 1) != 0) {
      FUN_1402f1e30(*(longlong *)(param_1 + 0xd0),&local_28);
      iVar5 = CONCAT13(cStack_19,CONCAT21(uStack_1b,uStack_1c));
      uVar6 = local_24;
      uVar7 = uStack_20;
    }
    param_3[6] = local_28;
    param_3[7] = uVar6;
    param_3[9] = uVar7;
    param_3[10] = iVar5;
    lVar2 = *(longlong *)(param_1 + 0xd0);
    if ((*(byte *)(lVar2 + 0x18) & 2) == 0) {
      param_3[8] = 0;
      param_3[0xb] = 0;
      uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
    else {
      param_3[8] = *(int *)(lVar2 + 0x10) << 10;
      uVar3 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0xd0) >> 8),1);
      param_3[0xb] = *(int *)(*(longlong *)(param_1 + 0xd0) + 0x14) << 10;
    }
  }
  return uVar3;
}

