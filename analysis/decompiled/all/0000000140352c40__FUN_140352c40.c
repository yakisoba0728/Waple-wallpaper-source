// Function: FUN_140352c40
// Addr: 140352c40
// Size: 479 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140352c40(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  int *local_d0;
  int local_c8 [2];
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined2 uStack_a8;
  undefined1 uStack_a6;
  undefined5 uStack_a5;
  undefined8 local_a0;
  int *local_98;
  int *local_90;
  undefined4 local_88;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_43;
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_f8;
  local_c8[0] = 0;
  FUN_1402fb290(&local_c0);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(param_2 + 0x60) == *(int *)(param_1 + 0x20)) {
    if (param_3 == 5) {
      if (param_4 == 0) {
        piVar1 = (int *)(param_2 + 0x68);
        iVar4 = 0;
        if ((*piVar1 != 0) && (*(int *)(param_2 + 0x70) != 0)) {
          if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) == 0) {
            local_c8[0] = 6;
            goto LAB_140352c96;
          }
          FUN_1402fb290(&local_c0);
          iVar4 = *(int *)(param_1 + 0x78);
          uStack_a8 = 0xff;
          local_d0 = local_c8;
          iStack_bc = *(int *)(param_2 + 0x6c) + iVar4 * 2;
          uStack_a6 = 2;
          local_c0 = *piVar1 + iVar4 * 2;
          local_d8 = 0;
          iStack_b8 = iStack_bc;
          local_b0 = FUN_1402f80b0(uVar3,iStack_bc,0);
          if (local_c8[0] != 0) goto LAB_140352c96;
          local_98 = &local_c0;
          local_48 = *(undefined4 *)(param_1 + 0x78);
          local_44 = *(undefined1 *)(param_1 + 0x7c);
          local_43 = *(undefined1 *)(param_1 + 0x7d);
          local_88 = 8;
          local_90 = piVar1;
          local_c8[0] = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_98);
        }
        if (local_c8[0] == 0) {
          if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
            FUN_1402f7f90(uVar3,*(undefined8 *)(param_2 + 0x78));
          }
          *(int *)(param_2 + 0x94) = *(int *)(param_2 + 0x94) + iVar4;
          *(int *)(param_2 + 0x90) = *(int *)(param_2 + 0x90) - iVar4;
          *(ulonglong *)piVar1 = CONCAT44(iStack_bc,local_c0);
          *(ulonglong *)(param_2 + 0x70) = CONCAT44(uStack_b4,iStack_b8);
          *(longlong *)(param_2 + 0x78) = local_b0;
          *(ulonglong *)(param_2 + 0x80) = CONCAT53(uStack_a5,CONCAT12(uStack_a6,uStack_a8));
          *(undefined8 *)(param_2 + 0x88) = local_a0;
          if (local_b0 == 0) {
            return local_c8[0];
          }
          puVar2 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
          *puVar2 = *puVar2 | 1;
          return local_c8[0];
        }
      }
      else {
        local_c8[0] = 7;
      }
    }
    else {
      local_c8[0] = 0x13;
    }
  }
  else {
    local_c8[0] = 0x12;
  }
LAB_140352c96:
  if (local_b0 != 0) {
    FUN_1402f7f90(uVar3);
  }
  return local_c8[0];
}

