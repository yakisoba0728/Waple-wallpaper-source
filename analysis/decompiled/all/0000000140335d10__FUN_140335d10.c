// Function: FUN_140335d10
// Addr: 140335d10
// Size: 571 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140335d10(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,char param_5)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  int *piVar5;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  int local_60;
  int iStack_5c;
  undefined1 local_58 [8];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_1404dc040 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  lVar4 = 0x4948;
  if (*(int *)(param_1 + 0x493c) != 2) {
    lVar4 = 0x4958;
  }
  piVar5 = (int *)(lVar4 + param_1);
  lVar4 = 0x4940;
  if (*(int *)(param_1 + 0x493c) != 2) {
    lVar4 = 0x4950;
  }
  local_70 = param_4;
  if ((*piVar5 != *param_3) || (cVar3 = '\0', piVar5[1] != param_3[1])) {
    local_80 = &local_78;
    local_88 = &local_70;
    cVar3 = FUN_140335260(param_1,lVar4 + param_1,piVar5,param_3);
    if (cVar3 != '\0') {
      *(undefined8 *)piVar5 = local_78;
    }
  }
  uVar2 = local_78;
  local_68 = *(undefined8 *)(param_1 + 0x4928);
  iVar1 = *(int *)(param_1 + 0x493c);
  if (iVar1 == 2) {
    local_48 = 2;
    lVar4 = param_1 + 0x1838;
    if (param_5 == '\0') {
      lVar4 = param_2;
    }
    local_88 = (undefined8 *)CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 0x494c));
    FUN_140335900(param_1,lVar4,&local_60,*(undefined4 *)(param_1 + 0x4948));
    if (((int)local_68 != local_60) || (local_68._4_4_ != iStack_5c)) {
      (**(code **)(*(longlong *)(param_1 + 8) + 8))(*(longlong *)(param_1 + 8),&local_68);
      local_50 = CONCAT44(iStack_5c,local_60);
      goto LAB_140335eaf;
    }
  }
  else if (iVar1 == 4) {
    local_88._0_4_ = *(undefined4 *)(param_1 + 0x494c);
    local_48 = iVar1;
    FUN_140335900(param_1,param_2,&local_60,*(undefined4 *)(param_1 + 0x4948));
    local_88._0_4_ = *(undefined4 *)(param_1 + 0x4954);
    FUN_140335900(param_1,param_2,local_58,*(undefined4 *)(param_1 + 0x4950));
    local_88 = (undefined8 *)CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 0x495c));
    FUN_140335900(param_1,param_2,&local_50,*(undefined4 *)(param_1 + 0x4958));
    (**(code **)(*(longlong *)(param_1 + 8) + 0x18))(*(longlong *)(param_1 + 8),&local_68);
LAB_140335eaf:
    *(undefined8 *)(param_1 + 0x4928) = local_50;
  }
  if (cVar3 == '\0') {
    if (param_5 != '\0') goto LAB_140335ec7;
  }
  else {
    if (param_5 == '\0') goto LAB_140335f2d;
LAB_140335ec7:
    param_2 = param_1 + 0x1838;
  }
  local_88 = (undefined8 *)CONCAT44(local_88._4_4_,param_3[1]);
  FUN_140335900(param_1,param_2,&local_60,*param_3);
  if ((local_60 != *(int *)(param_1 + 0x4928)) || (iStack_5c != *(int *)(param_1 + 0x492c))) {
    local_68 = *(undefined8 *)(param_1 + 0x4928);
    local_48 = 2;
    (**(code **)(*(longlong *)(param_1 + 8) + 8))(*(longlong *)(param_1 + 8),&local_68);
    *(ulonglong *)(param_1 + 0x4928) = CONCAT44(iStack_5c,local_60);
  }
  if (cVar3 == '\0') {
    return;
  }
LAB_140335f2d:
  *(undefined8 *)param_3 = uVar2;
  return;
}

