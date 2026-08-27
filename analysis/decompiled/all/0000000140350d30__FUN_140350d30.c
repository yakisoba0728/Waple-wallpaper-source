// Function: FUN_140350d30
// Addr: 140350d30
// Size: 469 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140350d30(longlong param_1,longlong param_2,int param_3,int *param_4)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  int *local_d0;
  int local_c8 [2];
  undefined8 local_c0;
  longlong local_b8;
  int *local_a8;
  longlong local_a0;
  undefined4 local_98;
  ulonglong local_58;
  
  local_58 = DAT_1404dc040 ^ (ulonglong)auStack_f8;
  local_c0 = *(undefined8 *)(param_1 + 0x10);
  lVar3 = param_2 + 0x98;
  iVar7 = 0;
  local_c8[0] = 0;
  iVar8 = 0;
  piVar1 = (int *)(param_2 + 0x68);
  local_b8 = param_1;
  if (*(int *)(param_2 + 0x60) == *(int *)(param_1 + 0x20)) {
    if (param_3 != 2) {
      return 0x13;
    }
    plVar4 = (longlong *)(param_2 + 0xf0);
    if ((*(byte *)(*plVar4 + 8) & 1) != 0) {
      FUN_1402f7f90(local_c0,*(undefined8 *)(param_2 + 0x78));
      *(undefined8 *)(param_2 + 0x78) = 0;
      *(uint *)(*plVar4 + 8) = *(uint *)(*plVar4 + 8) & 0xfffffffe;
    }
    cVar5 = FUN_1402f7200(param_2,2,param_4);
    if (cVar5 == '\0') {
      local_d0 = local_c8;
      local_d8 = 0;
      uVar6 = FUN_1402f80b0(local_c0,*(undefined4 *)(param_2 + 0x70),0,*piVar1);
      *(undefined8 *)(param_2 + 0x78) = uVar6;
      if (local_c8[0] == 0) {
        *(uint *)(*plVar4 + 8) = *(uint *)(*plVar4 + 8) | 1;
        iVar7 = *(int *)(param_2 + 0x90) * -0x40;
        iVar8 = (*piVar1 - *(int *)(param_2 + 0x94)) * 0x40;
        if (param_4 != (int *)0x0) {
          iVar7 = iVar7 + *param_4;
          iVar8 = iVar8 + param_4[1];
        }
        if ((iVar7 != 0) || (iVar8 != 0)) {
          FUN_1402f3790(lVar3,iVar7,iVar8);
        }
        local_98 = 0;
        local_a8 = piVar1;
        local_a0 = lVar3;
        local_c8[0] = (**(code **)(local_b8 + 0x68))(*(undefined8 *)(local_b8 + 0x60),&local_a8);
        if (local_c8[0] == 0) {
          *(undefined4 *)(param_2 + 0x60) = 0x62697473;
          goto LAB_140350ec4;
        }
      }
    }
    else {
      local_c8[0] = 0x62;
      iVar8 = 0;
      iVar7 = 0;
    }
  }
  else {
    local_c8[0] = 6;
    iVar7 = 0;
  }
  if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
    FUN_1402f7f90(local_c0,*(undefined8 *)(param_2 + 0x78));
    *(undefined8 *)(param_2 + 0x78) = 0;
    puVar2 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
    *puVar2 = *puVar2 & 0xfffffffe;
  }
LAB_140350ec4:
  if ((iVar7 != 0) || (iVar8 != 0)) {
    FUN_1402f3790(lVar3,-iVar7,-iVar8);
  }
  return local_c8[0];
}

