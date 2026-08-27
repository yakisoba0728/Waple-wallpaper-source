// Function: FUN_140118650
// Addr: 140118650
// Size: 259 bytes


void FUN_140118650(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = param_1[3];
  if (param_1[4] - lVar5 < 0x10) {
    lVar2 = param_1[2];
    if (lVar2 == 0) {
      if (*param_1 == 0) {
        lVar1 = FUN_14028af20(1);
        lVar2 = param_1[2];
        lVar5 = param_1[3];
        *param_1 = lVar1;
        param_1[1] = lVar1;
      }
      uVar3 = param_1[5];
    }
    else {
      lVar1 = param_1[4] - lVar2;
      uVar3 = (lVar1 + 1U >> 1) + lVar1;
    }
    uVar4 = (0x10 - lVar2) + lVar5;
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    if (uVar4 == 0) {
      thunk_FUN_1402d9040();
      lVar1 = 0;
    }
    else {
      lVar1 = _realloc_base(lVar2,uVar4);
    }
    lVar5 = (lVar5 - lVar2) + lVar1;
    param_1[2] = lVar1;
    param_1[3] = lVar5;
    param_1[4] = lVar1 + uVar4;
  }
  if (lVar5 == 0) {
    FID_conflict__assert
              (L"stackTop_",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal/stack.h"
               ,0x82);
  }
  if (param_1[4] - param_1[3] < 0x10) {
    FID_conflict__assert
              (L"static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)",
               L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal/stack.h",0x83);
  }
  param_1[3] = param_1[3] + 0x10;
  return;
}

