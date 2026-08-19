// Function: FUN_140352d10
// Addr: 140352d10
// Size: 269 bytes


void FUN_140352d10(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  int *local_d0;
  int local_c8 [2];
  int local_c0;
  int local_bc;
  int local_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined5 uStack_a5;
  undefined8 uStack_a0;
  ulonglong local_38;
  
  local_38 = DAT_1404dc110 ^ (ulonglong)auStack_f8;
  local_c8[0] = 0;
  FUN_1402fb360(&local_c0);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(param_2 + 0x60) == *(int *)(param_1 + 0x20)) {
    if (param_3 == 5) {
      if (param_4 == 0) {
        piVar1 = (int *)(param_2 + 0x68);
        if ((*piVar1 == 0) || (*(int *)(param_2 + 0x70) == 0)) {
          if (local_c8[0] == 0) {
            if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1402f8060(uVar3,*(undefined8 *)(param_2 + 0x78));
            }
            *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_2 + 0x94);
            *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_2 + 0x90);
            *(ulonglong *)piVar1 = CONCAT44(local_bc,local_c0);
            *(ulonglong *)(param_2 + 0x70) = CONCAT44(uStack_b4,local_b8);
            *(longlong *)(param_2 + 0x78) = local_b0;
            *(ulonglong *)(param_2 + 0x80) = CONCAT53(uStack_a5,CONCAT12(local_a6,local_a8));
            *(undefined8 *)(param_2 + 0x88) = uStack_a0;
            if (local_b0 != 0) {
              puVar2 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
              *puVar2 = *puVar2 | 1;
            }
            goto code_r0x000140352ecc;
          }
        }
        else {
          if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
            FUN_1402fb360(&local_c0);
            local_a8 = 0xff;
            local_d0 = local_c8;
            local_c0 = *(int *)(param_1 + 0x78) * 2;
            local_bc = *(int *)(param_2 + 0x6c) + local_c0;
            local_a6 = 2;
            local_c0 = *piVar1 + local_c0;
            local_d8 = 0;
            local_b8 = local_bc;
                    /* WARNING: Subroutine does not return */
            FUN_1402f8180(uVar3,local_bc,0);
          }
          local_c8[0] = 6;
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
  if (local_b0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402f8060(uVar3);
  }
code_r0x000140352ecc:
  func_0x0001402ed2f0(local_38 ^ (ulonglong)auStack_f8);
  return;
}

