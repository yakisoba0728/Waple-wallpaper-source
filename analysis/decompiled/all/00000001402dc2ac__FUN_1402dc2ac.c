// Function: FUN_1402dc2ac
// Addr: 1402dc2ac
// Size: 121 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dc2ac(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (DAT_140516120 == -1) {
LAB_1402dc311:
    uVar1 = func_0x0001402dc654(param_1,0);
    (*_UNK_140426480)(uVar1,param_2,param_3,param_4);
  }
  else {
    if (DAT_140516120 == 0) {
      lVar2 = FUN_1402dbce0(10,"GetLocaleInfoEx",&DAT_140430110,"GetLocaleInfoEx");
      if (lVar2 == 0) goto LAB_1402dc311;
    }
    thunk_FUN_140420d40(param_1,param_2,param_3,param_4);
  }
  return;
}

