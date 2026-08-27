// Function: FUN_1402efb60
// Addr: 1402efb60
// Size: 134 bytes


void FUN_1402efb60(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    lVar2 = *(longlong *)(lVar1 + 0x78);
    lVar4 = 0;
    if (*(longlong *)(lVar1 + 0x78) != 0) {
      while (lVar3 = lVar2, lVar3 != param_1) {
        lVar2 = *(longlong *)(lVar3 + 0x10);
        lVar4 = lVar3;
        if (lVar2 == 0) {
          return;
        }
      }
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x90) + 0x10);
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if (lVar4 == 0) {
        *(longlong *)(lVar1 + 0x78) = lVar3;
      }
      else {
        *(longlong *)(lVar4 + 0x10) = lVar3;
      }
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_1);
      }
      FUN_1402f7080(param_1);
      (**(code **)(lVar2 + 0x10))(lVar2,param_1);
    }
  }
  return;
}

