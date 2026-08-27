// Function: FUN_1403091b0
// Addr: 1403091b0
// Size: 109 bytes


longlong FUN_1403091b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_1402f8f20(&PTR_s_font_format_14043bc90);
  if (lVar1 == 0) {
    if ((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      plVar2 = (longlong *)FUN_1402f0420(*(longlong *)(param_1 + 8),&DAT_14043bd54);
      if ((plVar2 != (longlong *)0x0) && (*(longlong *)(*plVar2 + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014030920c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (**(code **)(*(longlong *)(*plVar2 + 0x18) + 0x20))(param_1,param_2);
        return lVar1;
      }
    }
    lVar1 = 0;
  }
  return lVar1;
}

