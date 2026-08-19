// Function: FUN_14039d610
// Addr: 14039d610
// Size: 47 bytes


void FUN_14039d610(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 unaff_RBX;
  
  if (*(char *)(param_1 + 5) != '\0') {
    func_0x0001402efb50(*(undefined8 *)(param_1 + 0x30));
  }
  (*DAT_140426568)(param_1 + 8);
  if ((param_1 != 0) &&
     (iVar1 = (*DAT_1404264b8)(DAT_1404e4fa0,0,param_1,param_4,unaff_RBX), iVar1 == 0)) {
    uVar2 = (*DAT_1404266a8)();
    func_0x0001402caec4(uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  return;
}

