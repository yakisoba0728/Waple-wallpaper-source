// Function: FUN_1402daec8
// Addr: 1402daec8
// Size: 396 bytes


ulonglong FUN_1402daec8(int *param_1,undefined1 *param_2,ulonglong param_3,ushort param_4,
                       longlong param_5)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong local_res10;
  ushort local_res20 [4];
  undefined8 in_stack_ffffffffffffffd0;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  if ((param_2 == (undefined1 *)0x0) && (param_3 != 0)) {
    if (param_1 == (int *)0x0) {
      return 0;
    }
    *param_1 = 0;
    return 0;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = -1;
  }
  local_res20[0] = param_4;
  if (param_3 < 0x80000000) {
    if (*(char *)(param_5 + 0x28) == '\0') {
      FUN_1402c0e60(param_5);
    }
    iVar1 = *(int *)(*(longlong *)(param_5 + 0x18) + 0xc);
    if (iVar1 == 0xfde9) {
      local_res10 = 0;
      iVar1 = FUN_1402e9254(param_2,local_res20[0],&local_res10,param_5);
      if (param_1 != (int *)0x0) {
        *param_1 = iVar1;
      }
      if (iVar1 < 5) {
        return 0;
      }
      if (*(char *)(param_5 + 0x30) != '\0') {
        return (ulonglong)*(uint *)(param_5 + 0x2c);
      }
      return 0;
    }
    if (*(longlong *)(*(longlong *)(param_5 + 0x18) + 0x138) == 0) {
      if (0xff < local_res20[0]) {
        if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
          func_0x000140421870(param_2,0,param_3);
        }
        goto UNWIND_INFO_1402dafa8_CountOfUnwindCodes;
      }
      if (param_2 == (undefined1 *)0x0) {
LAB_1402dafd6:
        if (param_1 != (int *)0x0) {
          *param_1 = 1;
        }
        return 0;
      }
      if (param_3 != 0) {
        *param_2 = (char)local_res20[0];
        goto LAB_1402dafd6;
      }
    }
    else {
      local_res10 = local_res10 & 0xffffffff00000000;
      iVar1 = FUN_1402dccd8(iVar1,0,local_res20,1,param_2,CONCAT44(uVar4,(int)param_3),0,
                            &local_res10);
      if (iVar1 != 0) {
        if ((int)local_res10 == 0) {
          if (param_1 == (int *)0x0) {
            return 0;
          }
          *param_1 = iVar1;
          return 0;
        }
UNWIND_INFO_1402dafa8_CountOfUnwindCodes:
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        *(undefined1 *)(param_5 + 0x30) = 1;
        return 0x2a;
      }
      iVar1 = (*DAT_1404266a8)();
      if (iVar1 != 0x7a) goto UNWIND_INFO_1402dafa8_CountOfUnwindCodes;
      if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
        uVar2 = func_0x000140421870(param_2,0,param_3);
        return uVar2;
      }
    }
    uVar3 = 0x22;
  }
  else {
    uVar3 = 0x16;
  }
  *(uint *)(param_5 + 0x2c) = uVar3;
  *(undefined1 *)(param_5 + 0x30) = 1;
  FUN_1402cada4(0,0,0,0,0,param_5);
  return (ulonglong)uVar3;
}

