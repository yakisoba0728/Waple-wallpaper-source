// Function: FUN_1402dc560
// Addr: 1402dc560
// Size: 33 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dc560(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (DAT_140516160 == -1) {
code_r0x0001402dc60b:
    uVar1 = func_0x0001402dc654(param_1,0);
    (*_UNK_140426488)(uVar1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    if (DAT_140516160 == 0) {
      lVar2 = FUN_1402dbce0(0x12,"LCMapStringEx",&UNK_1404301d0,"LCMapStringEx");
      if (lVar2 == 0) goto code_r0x0001402dc60b;
    }
    thunk_FUN_140420d40(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}

