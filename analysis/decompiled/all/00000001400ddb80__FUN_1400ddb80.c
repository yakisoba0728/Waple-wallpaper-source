// Function: FUN_1400ddb80
// Addr: 1400ddb80
// Size: 108 bytes


void FUN_1400ddb80(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(*param_1 + 8);
  if (*(char *)(lVar1 + 0x19) == '\0') {
    FUN_1400dfc30(param_1,param_1,*(undefined8 *)(lVar1 + 0x10));
                    /* WARNING: Subroutine does not return */
    FUN_140017310(lVar1 + 0x88);
  }
  if ((*param_1 != 0) && (iVar2 = (*DAT_1404264b8)(DAT_1404e4fa0,0,*param_1), iVar2 == 0)) {
    uVar3 = (*DAT_1404266a8)();
    func_0x0001402caec4(uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  return;
}

