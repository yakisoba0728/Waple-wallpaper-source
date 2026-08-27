// Function: FUN_1403f6f20
// Addr: 1403f6f20
// Size: 77 bytes


void FUN_1403f6f20(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  
  if ((0 < *(int *)(param_1 + 0x80)) && (0 < *(int *)(param_1 + 0x84))) {
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
    FUN_1403786f0(param_2,local_res8,param_1);
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  }
  return;
}

