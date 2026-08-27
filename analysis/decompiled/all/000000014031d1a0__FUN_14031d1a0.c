// Function: FUN_14031d1a0
// Addr: 14031d1a0
// Size: 149 bytes


undefined8 FUN_14031d1a0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (((undefined *)param_1[2] == &DAT_14043d570) || ((undefined *)param_1[2] == &DAT_14043d5c0)) {
    return 0x96;
  }
  uVar1 = FUN_1402f0420(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),&DAT_14043bd54);
  puVar2 = (undefined8 *)FUN_1402f81e0(uVar1,"tt-cmaps",0);
  if ((puVar2 != (undefined8 *)0x0) && ((code *)*puVar2 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014031d215. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*puVar2)(param_1,param_2);
    return uVar1;
  }
  return 0;
}

