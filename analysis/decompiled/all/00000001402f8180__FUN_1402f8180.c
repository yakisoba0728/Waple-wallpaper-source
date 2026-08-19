// Function: FUN_1402f8180
// Addr: 1402f8180
// Size: 94 bytes


longlong FUN_1402f8180(undefined8 param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                      undefined4 *param_6)

{
  longlong lVar1;
  
  lVar1 = FUN_1402f80c0();
  if ((lVar1 != 0) && (param_3 < param_4)) {
    func_0x000140421870(param_2 * param_3 + lVar1,0,(longlong)((param_4 - param_3) * param_2));
  }
  *param_6 = 0;
  return lVar1;
}

