// Function: FUN_14039c1f0
// Addr: 14039c1f0
// Size: 35 bytes


void FUN_14039c1f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 unaff_RBX;
  
  (**(code **)(*(longlong *)*param_1 + 0x68))((longlong *)*param_1,param_1[1]);
  if ((param_1 != (undefined8 *)0x0) &&
     (iVar1 = (*DAT_1404264b8)(DAT_1404e4fa0,0,param_1,param_4,unaff_RBX), iVar1 == 0)) {
    uVar2 = (*DAT_1404266a8)();
    func_0x0001402caec4(uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  return;
}

