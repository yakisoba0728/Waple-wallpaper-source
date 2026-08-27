// Function: FUN_140118f80
// Addr: 140118f80
// Size: 302 bytes


void FUN_140118f80(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 ***local_28 [3];
  ulonglong local_10;
  
  if (*(int *)(param_1 + 0x4f4) < 1) {
    *(int *)(param_1 + 0x4f4) = *(int *)(param_1 + 0x4f4) + 1;
    FUN_140016fc0(local_28,param_1 + 0x100);
    if (*(char *)(param_1 + 0x4f0) != '\0') {
      *(undefined1 *)(param_1 + 0x4f0) = 0;
      FUN_14011aee0(param_1);
    }
    local_48 = 3;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_1400182d0(param_1 + 0x158,&local_48);
    cVar2 = FUN_1400844b0(param_1 + 0x158,3000);
    if ((cVar2 == '\0') && (*(HANDLE *)(param_1 + 0x158) != (HANDLE)0xffffffffffffffff)) {
      TerminateProcess(*(HANDLE *)(param_1 + 0x158),0xffffffff);
    }
    FUN_140084700(param_1 + 0x158);
    FUN_140084130(param_1 + 0x158);
    ppppuVar3 = local_28;
    if (0xf < local_10) {
      ppppuVar3 = (undefined8 ****)local_28[0];
    }
    FUN_14011a180(param_1,ppppuVar3);
    *(int *)(param_1 + 0x4f4) = *(int *)(param_1 + 0x4f4) + -1;
    thunk_FUN_14028af80(0);
    if (0xf < local_10) {
      uVar4 = local_10 + 1;
      ppppuVar3 = (undefined8 ****)local_28[0];
      if (0xfff < uVar4) {
        ppppuVar3 = (undefined8 ****)local_28[0][-1];
        if (0x1f < (ulonglong)((longlong)local_28[0] + (-8 - (longlong)ppppuVar3))) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar4 = local_10 + 0x28;
      }
      thunk_FUN_14028af80(ppppuVar3,uVar4);
    }
  }
  return;
}

