// Function: FUN_1403329d0
// Addr: 1403329d0
// Size: 74 bytes


undefined8 FUN_1403329d0(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x3e0);
  if (*(int *)(lVar4 + 0x8a8) == 0) {
    lVar4 = lVar4 + 0x5e0;
  }
  else {
    bVar2 = (**(code **)(*(longlong *)(lVar4 + 0x10e0) + 0x10))(lVar4 + 0x10b0,param_3);
    if (*(uint *)(lVar4 + 0x8a8) <= (uint)bVar2) {
      return 3;
    }
    lVar4 = *(longlong *)(lVar4 + 0x8b0 + (ulonglong)bVar2 * 8);
    if ((*(longlong *)(param_1 + 0x60) != 0) && (param_2 != 0)) {
      *(undefined8 *)(param_1 + 0x68) =
           *(undefined8 *)(**(longlong **)(param_2 + 0x38) + 8 + (ulonglong)bVar2 * 8);
    }
  }
  uVar1 = *(uint *)(lVar4 + 0x298);
  *(uint *)(param_1 + 0x3f8) = uVar1;
  *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(lVar4 + 0x2b8);
  if (*(int *)(*(longlong *)(param_1 + 0xb0) + 0x608) == 1) {
    uVar3 = 0;
  }
  else if (uVar1 < 0x4d8) {
    uVar3 = 0x6b;
  }
  else {
    uVar3 = 0x8000;
    if (uVar1 < 0x846c) {
      uVar3 = 0x46b;
    }
  }
  *(undefined4 *)(param_1 + 0x400) = uVar3;
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(lVar4 + 0x218);
  *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(lVar4 + 0x21c);
  *(longlong *)(param_1 + 0x430) = lVar4;
  return 0;
}

