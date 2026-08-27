// Function: FUN_14040c900
// Addr: 14040c900
// Size: 105 bytes


undefined1 FUN_14040c900(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x58) != '\0') {
    cVar1 = FUN_1403ed060(param_1,*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c));
    if (cVar1 != '\0') {
      if (*(longlong *)(param_1 + 0x78) != *(longlong *)(param_1 + 0x70)) {
        *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x70);
        *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x78);
      }
      uVar2 = 1;
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 100);
    }
  }
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
  *(undefined1 *)(param_1 + 0x59) = 0;
  return uVar2;
}

