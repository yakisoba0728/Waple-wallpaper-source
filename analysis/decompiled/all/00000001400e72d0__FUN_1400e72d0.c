// Function: FUN_1400e72d0
// Addr: 1400e72d0
// Size: 6 bytes


undefined8 FUN_1400e72d0(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  undefined8 ****ppppuVar5;
  undefined8 ***pppuStack_28;
  undefined8 uStack_20;
  longlong lStack_18;
  ulonglong uStack_10;
  
  lStack_18 = 0;
  uStack_10 = 0;
  pppuStack_28 = (undefined8 ****)0x0;
  uStack_20 = 0;
  if (param_3 == param_4) {
    pppuStack_28 = (undefined8 ****)0x0;
    uStack_10 = 0xf;
  }
  else {
    func_0x000140017550(&pppuStack_28,param_3,param_4 - param_3);
  }
  ppppuVar3 = &pppuStack_28;
  if (0xf < uStack_10) {
    ppppuVar3 = (undefined8 ****)pppuStack_28;
  }
  ppppuVar5 = &pppuStack_28;
  if (0xf < uStack_10) {
    ppppuVar5 = (undefined8 ****)pppuStack_28;
  }
  (**(code **)(*(longlong *)*param_1 + 0x20))
            ((longlong *)*param_1,param_2,ppppuVar5,(longlong)ppppuVar3 + lStack_18);
  if (0xf < uStack_10) {
    uVar4 = uStack_10 + 1;
    ppppuVar3 = (undefined8 ****)pppuStack_28;
    if (0xfff < uVar4) {
      ppppuVar3 = (undefined8 ****)pppuStack_28[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_28 + (-8 - (longlong)ppppuVar3))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar2 = (*pcVar1)();
        return uVar2;
      }
      uVar4 = uStack_10 + 0x28;
    }
    func_0x00014028b040(ppppuVar3,uVar4);
  }
  return param_2;
}

