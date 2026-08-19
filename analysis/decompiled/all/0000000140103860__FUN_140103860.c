// Function: FUN_140103860
// Addr: 140103860
// Size: 129 bytes


void FUN_140103860(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  
  plVar1 = (longlong *)*param_1;
  *(undefined8 *)plVar1[1] = 0;
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    plVar1 = *(longlong **)(lVar2 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(lVar2 + 0x80));
      *(undefined8 *)(lVar2 + 0xb8) = 0;
    }
    func_0x00014000dab0(lVar2 + 0x58);
    return;
  }
  if ((*param_1 != 0) && (iVar3 = (*DAT_1404264b8)(DAT_1404e4fa0,0,*param_1), iVar3 == 0)) {
    uVar4 = (*DAT_1404266a8)();
    func_0x0001402caec4(uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  return;
}

