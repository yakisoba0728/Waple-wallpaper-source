// Function: FUN_1403613d0
// Addr: 1403613d0
// Size: 32 bytes


void FUN_1403613d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 unaff_RBX;
  
  func_0x0001403b11a0(*(undefined8 *)(param_1 + 0x20));
  if ((param_1 != 0) &&
     (iVar1 = (*DAT_1404264b8)(DAT_1404e4fa0,0,param_1,param_4,unaff_RBX), iVar1 == 0)) {
    uVar2 = (*DAT_1404266a8)();
    func_0x0001402caec4(uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  return;
}

