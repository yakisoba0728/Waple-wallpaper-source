// Function: FUN_1403ec140
// Addr: 1403ec140
// Size: 14 bytes


bool FUN_1403ec140(undefined4 *param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = *(byte *)((longlong)param_1 + 0xf) & 0xf;
  if (0xe < uVar1) {
    uVar1 = func_0x0001403c6850(param_3,*param_1);
    if (uVar1 < 0xf) {
      *(byte *)((longlong)param_1 + 0xf) = *(byte *)((longlong)param_1 + 0xf) & 0xf0;
      *(byte *)((longlong)param_1 + 0xf) = *(byte *)((longlong)param_1 + 0xf) | (byte)uVar1;
    }
  }
  return uVar1 == param_2;
}

