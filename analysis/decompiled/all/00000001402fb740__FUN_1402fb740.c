// Function: FUN_1402fb740
// Addr: 1402fb740
// Size: 65 bytes


void FUN_1402fb740(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(**(longlong **)(param_1 + 0x30) + 0x98);
  if (lVar1 != 0) {
    func_0x0001402f7890(lVar1,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402f8060(uVar2,lVar1);
}

