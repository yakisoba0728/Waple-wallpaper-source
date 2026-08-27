// Function: FUN_1403ec0c0
// Addr: 1403ec0c0
// Size: 71 bytes


bool FUN_1403ec0c0(undefined4 *param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(*(byte *)((longlong)param_1 + 0xf) >> 4);
  if (0xe < uVar1) {
    uVar1 = FUN_1403c6780(param_3,*param_1);
    if (uVar1 < 0xf) {
      *(byte *)((longlong)param_1 + 0xf) = *(byte *)((longlong)param_1 + 0xf) & 0xf;
      *(byte *)((longlong)param_1 + 0xf) = *(byte *)((longlong)param_1 + 0xf) | (char)uVar1 << 4;
    }
  }
  return uVar1 == param_2;
}

