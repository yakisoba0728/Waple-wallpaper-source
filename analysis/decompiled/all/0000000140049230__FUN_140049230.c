// Function: FUN_140049230
// Addr: 140049230
// Size: 258 bytes


void FUN_140049230(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = param_1[3];
  if (param_1[4] - lVar5 < param_2) {
    lVar3 = param_1[2];
    if (lVar3 == 0) {
      if (*param_1 == 0) {
        lVar1 = FUN_14028af20(1);
        lVar3 = param_1[2];
        lVar5 = param_1[3];
        *param_1 = lVar1;
        param_1[1] = lVar1;
      }
      uVar2 = param_1[5];
    }
    else {
      lVar1 = param_1[4] - lVar3;
      uVar2 = (lVar1 + 1U >> 1) + lVar1;
    }
    uVar4 = (lVar5 - lVar3) + param_2;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    if (uVar4 == 0) {
      thunk_FUN_1402d9040();
      lVar1 = 0;
    }
    else {
      lVar1 = _realloc_base(lVar3,uVar4);
    }
    lVar5 = (lVar5 - lVar3) + lVar1;
    param_1[2] = lVar1;
    param_1[3] = lVar5;
    param_1[4] = lVar1 + uVar4;
  }
  if (lVar5 == 0) {
    FID_conflict__assert
              (L"stackTop_",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal/stack.h"
               ,0x82);
  }
  if (param_1[4] - param_1[3] < param_2) {
    FID_conflict__assert
              (L"static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)",
               L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal/stack.h",0x83);
  }
  param_1[3] = param_1[3] + param_2;
  return;
}

