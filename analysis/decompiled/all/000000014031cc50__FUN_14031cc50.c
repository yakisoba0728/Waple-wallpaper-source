// Function: FUN_14031cc50
// Addr: 14031cc50
// Size: 228 bytes


undefined8 FUN_14031cc50(longlong param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x3e0);
  if (*(char *)(lVar4 + 0x24) == '\x02') {
    uVar2 = FUN_1402f0420(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8),&DAT_14043bd54);
    puVar3 = (undefined8 *)FUN_1402f81e0(uVar2,"glyph-dict",0);
    if ((puVar3 != (undefined8 *)0x0) && ((code *)*puVar3 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014031ccbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)*puVar3)(param_1,(ulonglong)param_2,param_3,param_4);
      return uVar2;
    }
  }
  else if (*(longlong *)(lVar4 + 0x10d8) != 0) {
    uVar1 = *(ushort *)(*(longlong *)(lVar4 + 0x4d8) + (ulonglong)param_2 * 2);
    if (uVar1 != 0xffff) {
      if (uVar1 < 0x187) {
        lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x10d8) + 0x28))();
      }
      else if (uVar1 - 0x187 < *(uint *)(lVar4 + 0x5c0)) {
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x5c8) + (ulonglong)(uVar1 - 0x187) * 8);
      }
      else {
        lVar4 = 0;
      }
      if (lVar4 != 0) {
        FUN_1402f8130(param_3,lVar4,param_4);
      }
    }
    return 0;
  }
  return 0xb;
}

