// Function: FUN_1402dc050
// Addr: 1402dc050
// Size: 172 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dc050(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1402dbca8();
  if (lVar2 == 0) {
    uVar1 = func_0x0001402dc654(param_1,0);
    (*_UNK_140426490)(uVar1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    thunk_FUN_140420d40(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}

