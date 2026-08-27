// Function: FUN_1402f0550
// Addr: 1402f0550
// Size: 178 bytes


undefined8 FUN_1402f0550(longlong param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if ((((param_1 != 0) && ((*(uint *)(param_1 + 8) & 0x200) != 0)) && (param_2 != 0)) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x38), lVar2 != -2)) {
    if (lVar2 == 0) {
      pcVar1 = *(code **)(**(longlong **)(param_1 + 0x90) + 0x30);
      if (pcVar1 != (code *)0x0) {
        lVar2 = (*pcVar1)(*(longlong **)(param_1 + 0x90),"glyph-dict");
      }
      lVar4 = -2;
      if (lVar2 != 0) {
        lVar4 = lVar2;
      }
      *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x38) = lVar4;
      if (lVar2 == 0) {
        return 0;
      }
    }
    if (*(code **)(lVar2 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001402f05ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar2 + 8))(param_1,param_2);
      return uVar3;
    }
  }
  return 0;
}

