// Function: FUN_14028c410
// Addr: 14028c410
// Size: 16 bytes


void FUN_14028c410(undefined4 param_1)

{
  code *pcVar1;
  undefined1 local_28 [40];
  
  FUN_14028c1c0(local_28,param_1);
  func_0x0001402bbb30(local_28,&UNK_1404d84c8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

