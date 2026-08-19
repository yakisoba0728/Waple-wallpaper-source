// Function: FUN_1403ec1e0
// Addr: 1403ec1e0
// Size: 62 bytes


bool FUN_1403ec1e0(undefined4 *param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)((longlong)param_1 + 0xf);
  if (*(byte *)((longlong)param_1 + 0xf) == 0xff) {
    uVar1 = func_0x0001403c6850(param_3,*param_1);
    if (uVar1 < 0xff) {
      *(char *)((longlong)param_1 + 0xf) = (char)uVar1;
    }
  }
  return uVar1 == param_2;
}

