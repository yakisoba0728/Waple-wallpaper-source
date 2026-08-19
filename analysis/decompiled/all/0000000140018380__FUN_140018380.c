// Function: FUN_140018380
// Addr: 140018380
// Size: 9 bytes


void FUN_140018380(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (iVar1 = (*DAT_1404264b8)(DAT_1404e4fa0,0,*(longlong *)(param_1 + 0x18)), iVar1 == 0)) {
    uVar2 = (*DAT_1404266a8)();
    func_0x0001402caec4(uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  return;
}

