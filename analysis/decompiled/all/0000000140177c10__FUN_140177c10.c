// Function: FUN_140177c10
// Addr: 140177c10
// Size: 179 bytes


ulonglong FUN_140177c10(longlong param_1,undefined8 param_2,longlong *param_3)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  ulonglong uVar3;
  undefined8 ***local_28 [2];
  longlong local_18;
  ulonglong local_10;
  
  FUN_1400d3f80(local_28,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1898),param_2,0);
  if (param_3 != (longlong *)0x0) {
    ppppuVar2 = local_28;
    if (0xf < local_10) {
      ppppuVar2 = (undefined8 ****)local_28[0];
    }
    if (*param_3 != 0) {
      (*(code *)param_3[1])(*param_3,ppppuVar2,local_18 + (longlong)ppppuVar2);
    }
  }
  if (0xf < local_10) {
    uVar3 = local_10 + 1;
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
      uVar3 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar2,uVar3);
  }
  return (ulonglong)(local_18 != 0);
}

