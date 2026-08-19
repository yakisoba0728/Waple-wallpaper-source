// Function: FUN_1402cdc74
// Addr: 1402cdc74
// Size: 334 bytes


undefined8 FUN_1402cdc74(int param_1,longlong param_2,uint *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint *local_18;
  undefined1 local_10;
  
  if (param_1 < 6) {
    if (param_1 == 5) {
      uVar2 = (-(uint)(*(char *)(param_2 + 0x308) != '\0') & 0x80000000) + 0x7f800000 |
              *param_3 & 0x7f800000 | 1;
    }
    else {
      local_18 = param_3;
      if (param_1 == 0) {
        local_10 = 0;
        uVar1 = FUN_1402ce544(param_2,&local_18);
        return uVar1;
      }
      if (param_1 == 1) {
        local_10 = 0;
        uVar1 = func_0x0001402d0244(param_2,&local_18);
        return uVar1;
      }
      if (param_1 == 2) {
        uVar2 = -(uint)(*(char *)(param_2 + 0x308) != '\0') & 0x80000000;
      }
      else if (param_1 == 3) {
        uVar2 = (-(uint)(*(char *)(param_2 + 0x308) != '\0') & 0x80000000) + 0x7f800000 |
                *param_3 & 0x7f800000;
      }
      else {
        if (param_1 != 4) {
          return 1;
        }
        uVar2 = (-(uint)(*(char *)(param_2 + 0x308) != '\0') & 0x80000000) + 0x7fffffff;
      }
    }
    *param_3 = uVar2;
  }
  else {
    if (param_1 != 6) {
      if (param_1 == 7) {
        *param_3 = 0;
      }
      else {
        if (param_1 == 8) {
          *param_3 = -(uint)(*(char *)(param_2 + 0x308) != '\0') & 0x80000000;
          return 2;
        }
        if (param_1 == 9) {
          *param_3 = (-(uint)(*(char *)(param_2 + 0x308) != '\0') & 0x80000000) + 0x7f800000 |
                     *param_3 & 0x7f800000;
          return 3;
        }
      }
      return 1;
    }
    *param_3 = 0xffc00000;
  }
  return 0;
}

