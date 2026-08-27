// Function: FUN_14033e2b0
// Addr: 14033e2b0
// Size: 126 bytes


int FUN_14033e2b0(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int local_res10 [6];
  
  local_res10[0] = 0;
  uVar3 = *(uint *)(param_1 + 4) >> 3;
  uVar2 = param_2 + 7U >> 3;
  if (uVar3 < uVar2) {
    uVar2 = uVar2 + 7 & 0xfffffff8;
    uVar1 = FUN_1402f80b0(param_3,1,uVar3,uVar2,*(undefined8 *)(param_1 + 8),local_res10);
    *(undefined8 *)(param_1 + 8) = uVar1;
    if (local_res10[0] == 0) {
      *(uint *)(param_1 + 4) = uVar2 * 8;
    }
    return local_res10[0];
  }
  return 0;
}

