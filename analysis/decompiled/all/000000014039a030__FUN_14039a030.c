// Function: FUN_14039a030
// Addr: 14039a030
// Size: 46 bytes


undefined8 FUN_14039a030(longlong param_1,uint param_2,longlong *param_3,int *param_4)

{
  if (*(uint *)(param_1 + 0x14) <= param_2) {
    *param_3 = 0;
    *param_4 = 0;
    return 0;
  }
  *param_3 = *(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * 2;
  *param_4 = *(int *)(param_1 + 0x14) - param_2;
  return 0;
}

