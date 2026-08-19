// Function: FUN_140134b10
// Addr: 140134b10
// Size: 118 bytes


longlong FUN_140134b10(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1402c11a0(param_1,"focused");
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_1402c11a0(param_1,"maximized");
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = FUN_1402c11a0(param_1,"fullscreen");
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = FUN_1402c11a0(param_1,"playingaudio");
  return (ulonglong)(iVar1 == 0) << 2;
}

