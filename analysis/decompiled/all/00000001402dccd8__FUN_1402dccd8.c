// Function: FUN_1402dccd8
// Addr: 1402dccd8
// Size: 12 bytes


void FUN_1402dccd8(uint param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined4 *in_stack_00000040;
  
  uVar2 = 0;
  if (param_1 < 0xdead) {
    if (param_1 == 0xdeac) goto code_r0x0001402dcd78;
    if (0xc433 < param_1) {
      if ((param_1 == 0xc435) || (param_1 == 0xd698)) goto code_r0x0001402dcd78;
      iVar1 = param_1 - 0xdeaa;
      goto code_r0x0001402dcd69;
    }
    if ((((param_1 == 0xc433) || (param_1 == 0x2a)) || (param_1 == 0xc42c)) ||
       ((param_1 == 0xc42d || (param_1 == 0xc42e)))) goto code_r0x0001402dcd78;
    bVar3 = param_1 == 0xc431;
  }
  else {
    if (((((param_1 == 0xdead) || (param_1 == 0xdeae)) || (param_1 == 0xdeaf)) ||
        ((param_1 == 0xdeb0 || (param_1 == 0xdeb1)))) ||
       ((param_1 == 0xdeb2 || (param_1 == 0xdeb3)))) goto code_r0x0001402dcd78;
    iVar1 = param_1 - 65000;
code_r0x0001402dcd69:
    if (iVar1 == 0) goto code_r0x0001402dcd78;
    bVar3 = iVar1 == 1;
  }
  if (!bVar3) {
    uVar2 = param_2 & 0xffffff7f;
  }
code_r0x0001402dcd78:
  if ((param_1 - 65000 < 2) && (in_stack_00000040 != (undefined4 *)0x0)) {
    *in_stack_00000040 = 0;
  }
  (*DAT_140426608)(param_1,uVar2,param_3,param_4);
  return;
}

