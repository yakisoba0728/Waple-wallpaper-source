// Function: FUN_1402cdddc
// Addr: 1402cdddc
// Size: 267 bytes


undefined8 FUN_1402cdddc(int param_1,longlong param_2,ulonglong *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong *local_18;
  undefined1 local_10;
  
  if (param_1 < 6) {
    if (param_1 == 5) {
      uVar2 = (-(ulonglong)(*(char *)(param_2 + 0x308) != '\0') & 0x8000000000000000) +
              0x7ff0000000000000 | *param_3 & 0x7ff0000000000000 | 1;
    }
    else {
      local_18 = param_3;
      if (param_1 == 0) {
        local_10 = 1;
        uVar1 = FUN_1402ce544(param_2,&local_18);
        return uVar1;
      }
      if (param_1 == 1) {
        local_10 = 1;
        uVar1 = func_0x0001402d0244(param_2,&local_18);
        return uVar1;
      }
      if (param_1 == 2) {
        uVar2 = -(ulonglong)(*(char *)(param_2 + 0x308) != '\0') & 0x8000000000000000;
      }
      else if (param_1 == 3) {
        uVar2 = (-(ulonglong)(*(char *)(param_2 + 0x308) != '\0') & 0x8000000000000000) +
                0x7ff0000000000000 | *param_3 & 0x7ff0000000000000;
      }
      else {
        if (param_1 != 4) {
          return 1;
        }
        uVar2 = (-(ulonglong)(*(char *)(param_2 + 0x308) != '\0') & 0x8000000000000000) +
                0x7fffffffffffffff;
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
          *param_3 = -(ulonglong)(*(char *)(param_2 + 0x308) != '\0') & 0x8000000000000000;
          return 2;
        }
        if (param_1 == 9) {
          *param_3 = (-(ulonglong)(*(char *)(param_2 + 0x308) != '\0') & 0x8000000000000000) +
                     0x7ff0000000000000 | *param_3 & 0x7ff0000000000000;
          return 3;
        }
      }
      return 1;
    }
    *param_3 = 0xfff8000000000000;
  }
  return 0;
}

