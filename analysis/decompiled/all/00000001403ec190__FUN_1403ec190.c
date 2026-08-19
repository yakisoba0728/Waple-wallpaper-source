// Function: FUN_1403ec190
// Addr: 1403ec190
// Size: 52 bytes


bool FUN_1403ec190(undefined4 *param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(*(byte *)((longlong)param_1 + 0xf) >> 4);
  if (0xe < uVar1) {
    uVar1 = func_0x0001403c6850(param_3,*param_1);
    if (uVar1 < 0xf) {
      *(byte *)((longlong)param_1 + 0xf) = *(byte *)((longlong)param_1 + 0xf) & 0xf;
      *(byte *)((longlong)param_1 + 0xf) = *(byte *)((longlong)param_1 + 0xf) | (char)uVar1 << 4;
    }
  }
  return uVar1 == param_2;
}

