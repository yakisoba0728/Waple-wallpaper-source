// Function: FUN_1403ec110
// Addr: 1403ec110
// Size: 62 bytes


bool FUN_1403ec110(undefined4 *param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)((longlong)param_1 + 0xf);
  if (*(byte *)((longlong)param_1 + 0xf) == 0xff) {
    uVar1 = FUN_1403c6780(param_3,*param_1);
    if (uVar1 < 0xff) {
      *(char *)((longlong)param_1 + 0xf) = (char)uVar1;
    }
  }
  return uVar1 == param_2;
}

