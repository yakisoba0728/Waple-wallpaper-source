// Function: FUN_1400e9b10
// Addr: 1400e9b10
// Size: 60 bytes


undefined8
FUN_1400e9b10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  undefined8 ****ppppuVar5;
  undefined8 ***local_28 [2];
  longlong lStack_18;
  ulonglong local_10;
  
  FUN_140053de0(local_28,param_3,param_4);
  ppppuVar3 = local_28;
  if (0xf < local_10) {
    ppppuVar3 = (undefined8 ****)local_28[0];
  }
  ppppuVar5 = local_28;
  if (0xf < local_10) {
    ppppuVar5 = (undefined8 ****)local_28[0];
  }
  (**(code **)(*(longlong *)*param_1 + 0x20))
            ((longlong *)*param_1,param_2,ppppuVar5,lStack_18 + (longlong)ppppuVar3);
  if (0xf < local_10) {
    uVar4 = local_10 + 1;
    ppppuVar3 = (undefined8 ****)local_28[0];
    if (0xfff < uVar4) {
      ppppuVar3 = (undefined8 ****)local_28[0][-1];
      if (0x1f < (ulonglong)((longlong)local_28[0] + (-8 - (longlong)ppppuVar3))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar2 = (*pcVar1)();
        return uVar2;
      }
      uVar4 = local_10 + 0x28;
    }
    func_0x00014028b040(ppppuVar3,uVar4);
  }
  return param_2;
}

