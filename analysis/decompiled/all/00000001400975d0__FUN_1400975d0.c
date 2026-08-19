// Function: FUN_1400975d0
// Addr: 1400975d0
// Size: 88 bytes


ulonglong FUN_1400975d0(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    if ((*(byte **)plVar1[7] == (byte *)0x0) || (*(int *)plVar1[10] < 1)) {
      uVar2 = (**(code **)(*plVar1 + 0x30))();
    }
    else {
      uVar2 = (ulonglong)**(byte **)plVar1[7];
    }
    if ((int)uVar2 != -1) {
      *(char *)((longlong)param_1 + 9) = (char)uVar2;
      *(undefined1 *)(param_1 + 1) = 1;
      return uVar2;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return (ulonglong)*(byte *)((longlong)param_1 + 9);
}

