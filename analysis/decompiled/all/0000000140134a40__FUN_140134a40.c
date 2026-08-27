// Function: FUN_140134a40
// Addr: 140134a40
// Size: 129 bytes


longlong FUN_140134a40(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1402c10d0(param_1,"focused");
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_1402c10d0(param_1,"maximized");
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = FUN_1402c10d0(param_1,"fullscreen");
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = FUN_1402c10d0(param_1,"playingaudio");
  return (ulonglong)(iVar1 == 0) << 2;
}

