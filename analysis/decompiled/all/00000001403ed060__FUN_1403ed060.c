// Function: FUN_1403ed060
// Addr: 1403ed060
// Size: 128 bytes


undefined1 FUN_1403ed060(longlong param_1,uint param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x59) != '\0') {
    if ((*(longlong *)(param_1 + 0x78) != *(longlong *)(param_1 + 0x70)) ||
       (*(int *)(param_1 + 100) != *(int *)(param_1 + 0x5c))) {
      cVar1 = FUN_1403bf1a0(param_1,*(int *)(param_1 + 100) + param_2);
      if (cVar1 == '\0') {
        return 0;
      }
      FUN_1404210f0(*(longlong *)(param_1 + 0x78) + (ulonglong)*(uint *)(param_1 + 100) * 0x14,
                    *(longlong *)(param_1 + 0x70) + (ulonglong)*(uint *)(param_1 + 0x5c) * 0x14,
                    (ulonglong)param_2 * 0x14);
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + param_2;
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + param_2;
  return 1;
}

