// Function: FUN_140101b80
// Addr: 140101b80
// Size: 195 bytes


void FUN_140101b80(longlong param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  ulonglong uVar3;
  undefined8 ***local_28 [3];
  ulonglong local_10;
  
  uVar3 = *(ulonglong *)(param_1 + 0x2b0);
  FUN_140032bc0(param_1 + 0x2a0,local_28,param_1 + 0x2e0);
  *(undefined4 *)(param_1 + 0x278) = param_2;
  if (uVar3 < 5) {
    FUN_140005880(local_28,param_1 + 0x100);
    ppppuVar2 = local_28;
    if (7 < local_10) {
      ppppuVar2 = (undefined8 ****)local_28[0];
    }
    FUN_140100cf0(param_1,ppppuVar2);
    if (7 < local_10) {
      uVar3 = local_10 * 2 + 2;
      ppppuVar2 = (undefined8 ****)local_28[0];
      if (0xfff < uVar3) {
        ppppuVar2 = (undefined8 ****)local_28[0][-1];
        if (0x1f < (ulonglong)((longlong)local_28[0] + (-8 - (longlong)ppppuVar2))) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar3 = local_10 * 2 + 0x29;
      }
      thunk_FUN_14028af80(ppppuVar2,uVar3);
    }
  }
  return;
}

