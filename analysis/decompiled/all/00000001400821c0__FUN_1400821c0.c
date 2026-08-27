// Function: FUN_1400821c0
// Addr: 1400821c0
// Size: 273 bytes


undefined8 FUN_1400821c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined **local_48;
  undefined8 local_40;
  undefined ***local_10;
  
  local_48 = &PTR_LAB_140478368;
  local_10 = &local_48;
  local_40 = param_2;
  iVar1 = FUN_140290d80(param_1 + 0x140);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x18c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x18c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  if (*(longlong *)(param_1 + 0x1b0) == 0) {
    FUN_140290ea0(param_1 + 0x140);
    if (local_10 != (undefined ***)0x0) {
      (*(code *)(*local_10)[4])
                (local_10,CONCAT71((int7)((ulonglong)&local_48 >> 8),local_10 != &local_48));
    }
    return 0;
  }
  if (local_10 != (undefined ***)0x0) {
    (*(code *)(*local_10)[2])
              (local_10,*(undefined8 *)
                         (*(longlong *)(param_1 + 0x198) +
                         (*(longlong *)(param_1 + 0x1a0) - 1U & *(ulonglong *)(param_1 + 0x1a8)) * 8
                         ));
    FUN_140290ea0(param_1 + 0x140);
    if (local_10 != (undefined ***)0x0) {
      (*(code *)(*local_10)[4])
                (local_10,CONCAT71((int7)((ulonglong)&local_48 >> 8),local_10 != &local_48));
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14028c2c0();
}

