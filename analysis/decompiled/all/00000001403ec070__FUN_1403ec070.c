// Function: FUN_1403ec070
// Addr: 1403ec070
// Size: 65 bytes


bool FUN_1403ec070(undefined4 *param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = *(byte *)((longlong)param_1 + 0xf) & 0xf;
  if (0xe < uVar1) {
    uVar1 = FUN_1403c6780(param_3,*param_1);
    if (uVar1 < 0xf) {
      *(byte *)((longlong)param_1 + 0xf) = *(byte *)((longlong)param_1 + 0xf) & 0xf0;
      *(byte *)((longlong)param_1 + 0xf) = *(byte *)((longlong)param_1 + 0xf) | (byte)uVar1;
    }
  }
  return uVar1 == param_2;
}

