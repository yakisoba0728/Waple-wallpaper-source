// Function: FUN_14031d480
// Addr: 14031d480
// Size: 100 bytes


longlong FUN_14031d480(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_1402f8f20(&PTR_s_font_format_14043d840);
  if (lVar1 == 0) {
    if ((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      plVar2 = (longlong *)FUN_1402f0420(*(longlong *)(param_1 + 8),&DAT_14043bd54);
      if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014031d4d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,param_2);
        return lVar1;
      }
    }
    lVar1 = 0;
  }
  return lVar1;
}

