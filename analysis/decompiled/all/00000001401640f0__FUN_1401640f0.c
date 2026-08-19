// Function: FUN_1401640f0
// Addr: 1401640f0
// Size: 40 bytes


void FUN_1401640f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  
  plVar1 = (longlong *)*param_1;
  *(undefined8 *)plVar1[1] = 0;
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    func_0x00014003a700(lVar2 + 0x88);
                    /* WARNING: Subroutine does not return */
    FUN_140017310(lVar2 + 0x60);
  }
  if ((*param_1 != 0) && (iVar3 = (*DAT_1404264b8)(DAT_1404e4fa0,0,*param_1), iVar3 == 0)) {
    uVar4 = (*DAT_1404266a8)();
    func_0x0001402caec4(uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  return;
}

