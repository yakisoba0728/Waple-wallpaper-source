// Function: FUN_140420e70
// Addr: 140420e70
// Size: 23 bytes


void FUN_140420e70(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong in_SSP;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  longlong *plStack_8;
  
  plStack_8 = param_1;
  if (*param_1 != 0) {
    do {
      uStack_28 = 0x80000026;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_18 = 0;
      uStack_10 = 1;
      lVar2 = plStack_8[10];
      plVar1 = (longlong *)*plStack_8;
      func_0x000140419cef(plVar1,lVar2,&uStack_28,in_SSP);
      plStack_8 = plVar1;
      in_SSP = lVar2;
    } while( true );
  }
  MXCSR = (undefined4)param_1[0xb];
                    /* WARNING: Could not recover jumptable at 0x000140420f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[10])(param_1,(code *)param_1[10]);
  return;
}

