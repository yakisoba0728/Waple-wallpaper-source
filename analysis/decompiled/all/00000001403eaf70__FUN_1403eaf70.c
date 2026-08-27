// Function: FUN_1403eaf70
// Addr: 1403eaf70
// Size: 128 bytes


undefined1 FUN_1403eaf70(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  
  cVar1 = FUN_1403bf1a0(param_1,*(int *)(param_1 + 100) + param_3);
  if (cVar1 == '\0') {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x78) == *(longlong *)(param_1 + 0x70)) {
    if ((uint)(*(int *)(param_1 + 0x5c) + param_2) < *(uint *)(param_1 + 100) + param_3) {
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x80);
      if ((ulonglong)*(uint *)(param_1 + 100) * 5 != 0) {
        FUN_1404210f0();
      }
    }
  }
  return 1;
}

