// Function: FUN_14033e380
// Addr: 14033e380
// Size: 39 bytes


undefined8 FUN_14033e380(longlong param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  uVar2 = *(uint *)(param_1 + 4) >> 3;
  uVar1 = param_2 + 7U >> 3;
  if (uVar2 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402f8180(param_3,1,uVar2,uVar1 + 7 & 0xfffffff8,*(undefined8 *)(param_1 + 8),local_res10);
  }
  return 0;
}

