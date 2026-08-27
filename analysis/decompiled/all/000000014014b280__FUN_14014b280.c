// Function: FUN_14014b280
// Addr: 14014b280
// Size: 97 bytes


void FUN_14014b280(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1402d3dd0();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1402d3dd0();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1402d3dd0();
  }
  lVar1 = **(longlong **)(param_1 + 0x80);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0xb0))(lVar1);
  }
  thunk_FUN_1402d9040(param_1);
  return;
}

