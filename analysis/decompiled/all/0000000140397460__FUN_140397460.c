// Function: FUN_140397460
// Addr: 140397460
// Size: 118 bytes


void FUN_140397460(longlong param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x20) + 0x18);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x98));
  }
  FUN_1403c2fb0(param_1 + 0x28);
  if (1 < *(int *)(param_1 + 0x88) + 1U) {
    FUN_14040bf50(param_1 + 0x88,0);
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x90));
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  FUN_1403973f0(param_1 + 0x28);
  return;
}

