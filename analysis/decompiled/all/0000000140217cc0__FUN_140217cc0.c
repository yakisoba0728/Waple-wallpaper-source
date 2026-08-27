// Function: FUN_140217cc0
// Addr: 140217cc0
// Size: 287 bytes


void FUN_140217cc0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140219520();
  if (0x20 < param_3) {
    FUN_1402197b0(param_1,param_2,param_4,param_3,param_5);
    lVar2 = 0x40;
    lVar1 = param_3 * 0x40 + param_4;
    FUN_1402199c0(param_4,lVar1,param_1,0x40,param_3,param_5);
    if (0x7f < param_3 + -1) {
      do {
        FUN_1402199c0(param_1,param_2,param_4,lVar2 * 2,param_3,param_5);
        lVar2 = lVar2 * 4;
        FUN_1402199c0(param_4,lVar1,param_1,lVar2,param_3,param_5);
      } while (lVar2 <= (param_3 + -1) / 2);
    }
    if (param_3 * 0x40 != 0) {
      do {
        FUN_140031b80(param_4 + 0x28);
        FUN_140031b80(param_4 + 0x10);
        param_4 = param_4 + 0x40;
      } while (param_4 != lVar1);
    }
  }
  return;
}

