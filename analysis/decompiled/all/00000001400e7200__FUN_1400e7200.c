// Function: FUN_1400e7200
// Addr: 1400e7200
// Size: 217 bytes


undefined8 FUN_1400e7200(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  undefined8 ****ppppuVar5;
  undefined8 ***local_28;
  undefined8 uStack_20;
  longlong local_18;
  ulonglong local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_28 = (undefined8 ****)0x0;
  uStack_20 = 0;
  if (param_3 == param_4) {
    local_28 = (undefined8 ****)0x0;
    local_10 = 0xf;
  }
  else {
    FUN_140017480(&local_28,param_3,param_4 - param_3);
  }
  ppppuVar3 = &local_28;
  if (0xf < local_10) {
    ppppuVar3 = (undefined8 ****)local_28;
  }
  ppppuVar5 = &local_28;
  if (0xf < local_10) {
    ppppuVar5 = (undefined8 ****)local_28;
  }
  (**(code **)(*(longlong *)*param_1 + 0x20))
            ((longlong *)*param_1,param_2,ppppuVar5,(longlong)ppppuVar3 + local_18);
  if (0xf < local_10) {
    uVar4 = local_10 + 1;
    ppppuVar3 = (undefined8 ****)local_28;
    if (0xfff < uVar4) {
      ppppuVar3 = (undefined8 ****)local_28[-1];
      if (0x1f < (ulonglong)((longlong)local_28 + (-8 - (longlong)ppppuVar3))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar2 = (*pcVar1)();
        return uVar2;
      }
      uVar4 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar3,uVar4);
  }
  return param_2;
}

