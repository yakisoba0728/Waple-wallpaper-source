// Function: FUN_14015ffd0
// Addr: 14015ffd0
// Size: 189 bytes


longlong FUN_14015ffd0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x188);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x150));
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  FUN_14000d9e0(param_1 + 0x120);
  FUN_14000da50(param_1 + 0x110);
  FUN_14000d9e0(param_1 + 0xe0);
  FUN_140049340(param_1 + 0xd0);
  FUN_14000d9e0(param_1 + 0xa0);
  FUN_14015a700(param_1 + 0x90);
  FUN_14000d9e0(param_1 + 0x60);
  FUN_14015a780(param_1 + 0x50);
  FUN_1401a3b60(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x198);
  }
  return param_1;
}

