// Function: FUN_1402f91d0
// Addr: 1402f91d0
// Size: 21 bytes


void FUN_1402f91d0(longlong param_1,undefined4 param_2)

{
  code *pcVar1;
  
  *(undefined4 *)(param_1 + 0x114) = param_2;
  FUN_140419d00(param_1,1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

