// Function: FUN_1403529f0
// Addr: 1403529f0
// Size: 582 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1403529f0(longlong param_1,longlong param_2,int param_3,int *param_4)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  int *local_c0;
  int local_b8 [4];
  int *local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_e8;
  piVar1 = (int *)(param_2 + 0x68);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  local_b8[0] = 0;
  if (*(int *)(param_2 + 0x60) == *(int *)(param_1 + 0x20)) {
    if (param_3 == 5) {
      if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
        FUN_1402f7f90(uVar4,*(undefined8 *)(param_2 + 0x78));
        *(undefined8 *)(param_2 + 0x78) = 0;
        puVar2 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
        *puVar2 = *puVar2 & 0xfffffffe;
      }
      cVar5 = FUN_1402f7200(param_2,0,param_4);
      if (cVar5 == '\0') {
        if ((*piVar1 != 0) && (*(int *)(param_2 + 0x70) != 0)) {
          iVar7 = *(int *)(param_1 + 0x78);
          *(undefined1 *)(param_2 + 0x82) = 2;
          *(undefined2 *)(param_2 + 0x80) = 0xff;
          *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + iVar7 * 2;
          local_c0 = local_b8;
          local_c8 = 0;
          *piVar1 = iVar7 * 2 + *piVar1;
          *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_2 + 0x6c);
          uVar6 = FUN_1402f80b0(uVar4,*(undefined4 *)(param_2 + 0x6c),0);
          *(undefined8 *)(param_2 + 0x78) = uVar6;
          if (local_b8[0] != 0) goto LAB_140352a3e;
          lVar3 = param_2 + 0x98;
          puVar2 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
          *puVar2 = *puVar2 | 1;
          *(int *)(param_2 + 0x90) = *(int *)(param_2 + 0x90) - iVar7;
          *(int *)(param_2 + 0x94) = *(int *)(param_2 + 0x94) + iVar7;
          iVar8 = *(int *)(param_2 + 0x90) * -0x40;
          iVar7 = (*piVar1 - *(int *)(param_2 + 0x94)) * 0x40;
          if (param_4 != (int *)0x0) {
            iVar8 = iVar8 + *param_4;
            iVar7 = iVar7 + param_4[1];
          }
          if ((iVar8 != 0) || (iVar7 != 0)) {
            FUN_1402f3790(lVar3,iVar8,iVar7);
          }
          local_58 = *(undefined4 *)(param_1 + 0x78);
          local_54 = *(undefined1 *)(param_1 + 0x7c);
          local_53 = *(undefined1 *)(param_1 + 0x7d);
          local_52 = *(undefined1 *)(param_1 + 0x7e);
          local_98 = 8;
          local_a8 = piVar1;
          local_a0 = lVar3;
          local_b8[0] = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_a8);
          if ((iVar8 != 0) || (iVar7 != 0)) {
            FUN_1402f3790(lVar3,-iVar8,-iVar7);
          }
        }
        if (local_b8[0] == 0) {
          *(undefined4 *)(param_2 + 0x60) = 0x62697473;
          return 0;
        }
      }
      else {
        local_b8[0] = 0x62;
      }
    }
    else {
      local_b8[0] = 0x13;
    }
  }
  else {
    local_b8[0] = 0x12;
  }
LAB_140352a3e:
  if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
    FUN_1402f7f90(uVar4,*(undefined8 *)(param_2 + 0x78));
    *(undefined8 *)(param_2 + 0x78) = 0;
    puVar2 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
    *puVar2 = *puVar2 & 0xfffffffe;
  }
  return local_b8[0];
}

