// Function: FUN_1401b4340
// Addr: 1401b4340
// Size: 46 bytes


void FUN_1401b4340(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 unaff_RBX;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  FUN_1401b8bf0(lVar1);
  if ((lVar1 != 0) &&
     (iVar2 = (*DAT_1404264b8)(DAT_1404e4fa0,0,lVar1,param_4,unaff_RBX), iVar2 == 0)) {
    uVar3 = (*DAT_1404266a8)();
    func_0x0001402caec4(uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  return;
}

