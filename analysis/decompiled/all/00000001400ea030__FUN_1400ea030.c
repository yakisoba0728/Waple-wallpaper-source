// Function: FUN_1400ea030
// Addr: 1400ea030
// Size: 55 bytes


undefined8 * FUN_1400ea030(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(lVar1 + 0x28);
    if (lVar3 == 0) {
      lVar3 = lVar1 + 0x30;
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    uVar2 = func_0x000140421ed0(lVar3);
    func_0x000140017550(param_2,lVar3,uVar2);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  return param_2;
}

