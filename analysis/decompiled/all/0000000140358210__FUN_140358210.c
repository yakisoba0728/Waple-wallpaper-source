// Function: FUN_140358210
// Addr: 140358210
// Size: 269 bytes


undefined8 FUN_140358210(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  
  if ((((((param_1 != (longlong *)0x0) && (param_1[6] != 0)) && (param_1[7] != 0)) &&
       ((plVar1 = (longlong *)param_1[5], plVar1 != (longlong *)0x0 &&
        ((longlong *)*plVar1 == param_1)))) &&
      ((iVar3 = (int)plVar1[1], iVar3 - 0x3f34U < 0x20 && (param_1[2] != 0)))) &&
     ((*param_1 != 0 || ((int)param_1[1] == 0)))) {
    if (iVar3 == 0x3f3f) {
      *(undefined4 *)(plVar1 + 1) = 0x3f40;
      iVar3 = 0xc;
    }
    else {
      iVar3 = iVar3 + -0x3f34;
    }
                    /* WARNING: Could not recover jumptable at 0x000140358305. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                      *(uint *)(&DAT_140359aac + (longlong)iVar3 * 4)))
                      (IMAGE_DOS_HEADER_140000000.e_magic +
                       *(uint *)(&DAT_140359aac + (longlong)iVar3 * 4),param_2,plVar1 + 0xe);
    return uVar2;
  }
  return 0xfffffffe;
}

