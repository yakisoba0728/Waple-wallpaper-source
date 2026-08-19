// Function: FUN_1402dc3f8
// Addr: 1402dc3f8
// Size: 10 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dc3f8(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (lRam0000000140516140 == -1) {
code_r0x0001402dc447:
    uVar1 = (*_UNK_140426470)();
    func_0x0001402dc4d8(uVar1,param_1,param_2,0);
  }
  else {
    if (lRam0000000140516140 == 0) {
      lVar2 = FUN_1402dbce0(0xe,"GetUserDefaultLocaleName",&UNK_140430160,"GetUserDefaultLocaleName"
                           );
      if (lVar2 == 0) goto code_r0x0001402dc447;
    }
    thunk_FUN_140420d40(param_1,param_2);
  }
  return;
}

