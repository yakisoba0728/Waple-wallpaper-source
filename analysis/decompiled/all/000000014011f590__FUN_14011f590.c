// Function: FUN_14011f590
// Addr: 14011f590
// Size: 144 bytes


undefined4 FUN_14011f590(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_140290d80(param_1 + 0xe50);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0xe9c) != 0x7fffffff) {
    uVar3 = FUN_1402d6aa0(param_2);
    FUN_140016ae0(param_1 + 0x80,param_2,uVar3);
    uVar2 = FUN_140120050(param_1);
    FUN_140290ea0(param_1 + 0xe50);
    return uVar2;
  }
  *(undefined4 *)(param_1 + 0xe9c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

