// Function: FUN_1402bef40
// Addr: 1402bef40
// Size: 108 bytes


int FUN_1402bef40(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_1402bc1c0(param_3);
  if (*(int *)(param_2 + 0x48) == 0) {
    lVar2 = FUN_1402bbec0();
    if (*(int *)(lVar2 + 0x78) != -2) {
      lVar2 = FUN_1402bbec0();
      iVar1 = *(int *)(lVar2 + 0x78);
      lVar2 = FUN_1402bbec0();
      *(undefined4 *)(lVar2 + 0x78) = 0xfffffffe;
    }
    return iVar1;
  }
  lVar2 = FUN_1402bbec0();
  if (*(int *)(lVar2 + 0x78) == -2) {
    return *(int *)(param_2 + 0x48) + -2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402c97e4();
}

