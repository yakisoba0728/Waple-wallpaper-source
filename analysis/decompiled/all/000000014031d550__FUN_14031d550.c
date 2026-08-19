// Function: FUN_14031d550
// Addr: 14031d550
// Size: 100 bytes


longlong FUN_14031d550(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_1402f8ff0(&PTR_DAT_14043d910);
  if (lVar1 == 0) {
    if ((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      plVar2 = (longlong *)func_0x0001402f04f0(*(longlong *)(param_1 + 8),&DAT_14043be24);
      if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014031d5a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,param_2);
        return lVar1;
      }
    }
    lVar1 = 0;
  }
  return lVar1;
}

