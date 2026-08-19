// Function: FUN_140324f00
// Addr: 140324f00
// Size: 136 bytes


undefined8
FUN_140324f00(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x188);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x18c);
  }
  if (lVar1 != 0) {
    uVar2 = func_0x0001402efae0((ulonglong)*(ushort *)(lVar1 + 0x18) << 6,
                                *(undefined4 *)(param_1 + 0x18c));
    return uVar2;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0x10000;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0x10000;
  }
  return 0;
}

