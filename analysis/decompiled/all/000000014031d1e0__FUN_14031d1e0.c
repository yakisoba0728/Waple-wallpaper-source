// Function: FUN_14031d1e0
// Addr: 14031d1e0
// Size: 121 bytes


undefined8 FUN_14031d1e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x3e0);
  if (((*(byte *)(param_1 + 8) & 8) != 0) && (*(longlong *)(param_1 + 0x2d0) != 0)) {
    uVar2 = func_0x0001402f04f0(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8),&DAT_14043be24);
    puVar3 = (undefined8 *)FUN_1402f82b0(uVar2,"postscript-font-name",0);
    if ((puVar3 != (undefined8 *)0x0) && ((code *)*puVar3 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014031d247. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)*puVar3)(param_1);
      return uVar2;
    }
  }
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x5b0);
  }
  return 0;
}

