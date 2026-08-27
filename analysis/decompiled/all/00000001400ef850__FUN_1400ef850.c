// Function: FUN_1400ef850
// Addr: 1400ef850
// Size: 114 bytes


void FUN_1400ef850(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x170) != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x170) + 0xd4);
    *piVar1 = *piVar1 + -1;
  }
  if (param_2 != 0) {
    uVar2 = FUN_140099980(*(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0x18),
                          *(uint *)(param_2 + 0x1c) | 0x4000000,1);
    *(undefined8 *)(param_1 + 0x158) = uVar2;
    *(int *)(param_2 + 0xd4) = *(int *)(param_2 + 0xd4) + 1;
    *(longlong *)(param_1 + 0x170) = param_2;
    return;
  }
  *(undefined8 *)(param_1 + 0x170) = 0;
  return;
}

