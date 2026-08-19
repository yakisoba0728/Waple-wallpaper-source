// Function: FUN_14002f850
// Addr: 14002f850
// Size: 1 bytes


void FUN_14002f850(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 unaff_RBX;
  
  func_0x00014000dab0(param_1 + 0x18);
  plVar1 = *(longlong **)(param_1 + 8);
  *(undefined8 *)plVar1[1] = 0;
  lVar2 = *plVar1;
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140017310(lVar2 + 0x10);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if ((lVar2 != 0) &&
     (iVar3 = (*DAT_1404264b8)(DAT_1404e4fa0,0,lVar2,param_4,unaff_RBX), iVar3 == 0)) {
    uVar4 = (*DAT_1404266a8)();
    func_0x0001402caec4(uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  return;
}

