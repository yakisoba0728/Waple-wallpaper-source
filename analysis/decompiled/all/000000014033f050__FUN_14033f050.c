// Function: FUN_14033f050
// Addr: 14033f050
// Size: 135 bytes


void FUN_14033f050(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  if ((param_2 != *(int *)(param_1 + 0xcc)) || (param_4 != *(int *)(param_1 + 0xd0))) {
    *(int *)(param_1 + 0xcc) = param_2;
    *(int *)(param_1 + 0xd0) = param_4;
    func_0x00014033ef90(param_1,0);
  }
  if ((param_3 != *(int *)(param_1 + 0x198)) || (param_5 != *(int *)(param_1 + 0x19c))) {
    *(int *)(param_1 + 0x198) = param_3;
    *(int *)(param_1 + 0x19c) = param_5;
    func_0x00014033ef90(param_1,1);
    FUN_14033e6e0(param_1 + 0x1a0,param_3,param_5);
  }
  return;
}

