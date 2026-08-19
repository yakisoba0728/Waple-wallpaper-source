// Function: FUN_140056c40
// Addr: 140056c40
// Size: 82 bytes


void FUN_140056c40(longlong param_1,byte param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    (*DAT_140426838)(*(longlong *)(param_1 + 0x78),param_2 + 10000);
    (*DAT_140426818)(*(undefined8 *)(param_1 + 0x78),param_2 + 10000,param_3,0);
  }
  return;
}

