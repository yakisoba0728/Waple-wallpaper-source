// Function: FUN_1403d2db0
// Addr: 1403d2db0
// Size: 6 bytes


void FUN_1403d2db0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  int param_5)

{
  longlong lVar1;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [128];
  ulonglong uStack_28;
  
  uStack_28 = DAT_1404dc110 ^ (ulonglong)auStack_c8;
  lVar1 = param_2 + 8;
  (*DAT_140426580)(lVar1);
  if (param_5 == 0) {
    func_0x0001402f0240(*(undefined8 *)(param_2 + 0x30),param_3,auStack_a8,0x80);
  }
  else {
    func_0x0001402f0240(*(undefined8 *)(param_2 + 0x30),param_3,param_4);
  }
  if (lVar1 != 0) {
    (*DAT_140426578)(lVar1);
  }
  func_0x0001402ed2f0(uStack_28 ^ (ulonglong)auStack_c8);
  return;
}

