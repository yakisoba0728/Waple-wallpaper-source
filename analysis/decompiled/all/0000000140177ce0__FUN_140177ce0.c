// Function: FUN_140177ce0
// Addr: 140177ce0
// Size: 36 bytes


ulonglong FUN_140177ce0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  ulonglong uVar3;
  undefined8 ***local_28 [2];
  longlong lStack_18;
  ulonglong uStack_10;
  
  func_0x0001400d4050(local_28,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1898),param_2,0);
  if (param_3 != (longlong *)0x0) {
    ppppuVar2 = local_28;
    if (0xf < uStack_10) {
      ppppuVar2 = (undefined8 ****)local_28[0];
    }
    if (*param_3 != 0) {
      (*(code *)param_3[1])(*param_3,ppppuVar2,lStack_18 + (longlong)ppppuVar2);
    }
  }
  if (0xf < uStack_10) {
    uVar3 = uStack_10 + 1;
    ppppuVar2 = (undefined8 ****)local_28[0];
    if (0xfff < uVar3) {
      ppppuVar2 = (undefined8 ****)local_28[0][-1];
      if (0x1f < (ulonglong)((longlong)local_28[0] + (-8 - (longlong)ppppuVar2))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      uVar3 = uStack_10 + 0x28;
    }
    func_0x00014028b040(ppppuVar2,uVar3);
  }
  return (ulonglong)(lStack_18 != 0);
}

