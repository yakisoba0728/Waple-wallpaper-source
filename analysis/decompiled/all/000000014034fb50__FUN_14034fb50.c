// Function: FUN_14034fb50
// Addr: 14034fb50
// Size: 382 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14034fb50(longlong param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  uint *local_98;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_b8;
  lVar2 = *(longlong *)(param_1 + 8);
  uVar1 = param_3[2];
  local_88 = 1;
  param_3[2] = uVar1 * 3;
  *param_3 = *param_3 / 3;
  local_98 = param_3;
  local_90 = param_2;
  FUN_1402f3790(param_2,-*(int *)(lVar2 + 0x15c),*(undefined4 *)(lVar2 + 0x158));
  iVar3 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_98);
  if (iVar3 == 0) {
    *(longlong *)(param_3 + 4) = *(longlong *)(param_3 + 4) + (longlong)(int)uVar1;
    FUN_1402f3790(param_2,*(int *)(lVar2 + 0x15c) - *(int *)(lVar2 + 0x164),
                  *(int *)(lVar2 + 0x160) - *(int *)(lVar2 + 0x158));
    iVar3 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_98);
    uVar4 = *(undefined4 *)(lVar2 + 0x164);
    iVar5 = *(int *)(lVar2 + 0x160);
    *(longlong *)(param_3 + 4) = *(longlong *)(param_3 + 4) - (longlong)(int)uVar1;
    if (iVar3 == 0) {
      *(longlong *)(param_3 + 4) = *(longlong *)(param_3 + 4) + (longlong)(int)(uVar1 * 2);
      FUN_1402f3790(param_2,*(int *)(lVar2 + 0x164) - *(int *)(lVar2 + 0x16c),
                    *(int *)(lVar2 + 0x168) - *(int *)(lVar2 + 0x160));
      iVar3 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_98);
      uVar4 = *(undefined4 *)(lVar2 + 0x16c);
      iVar5 = *(int *)(lVar2 + 0x168);
      *(longlong *)(param_3 + 4) = *(longlong *)(param_3 + 4) - (longlong)(int)(uVar1 * 2);
    }
  }
  else {
    uVar4 = *(undefined4 *)(lVar2 + 0x15c);
    iVar5 = *(int *)(lVar2 + 0x158);
  }
  FUN_1402f3790(param_2,uVar4,-iVar5);
  uVar1 = param_3[2];
  param_3[2] = (int)uVar1 / 3 + ((int)uVar1 >> 0x1f) +
               (int)(((longlong)(int)uVar1 / 3 + ((longlong)(int)uVar1 >> 0x3f) & 0xffffffffU) >>
                    0x1f);
  *param_3 = *param_3 * 3;
  return iVar3;
}

