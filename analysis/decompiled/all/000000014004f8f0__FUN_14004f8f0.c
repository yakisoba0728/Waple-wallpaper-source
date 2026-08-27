// Function: FUN_14004f8f0
// Addr: 14004f8f0
// Size: 282 bytes


void FUN_14004f8f0(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  plVar1 = (longlong *)*param_1;
  lVar7 = plVar1[3];
  if (plVar1[4] - lVar7 < 1) {
    lVar5 = plVar1[2];
    if (lVar5 == 0) {
      if (*plVar1 == 0) {
        lVar3 = FUN_14028af20(1);
        lVar5 = plVar1[2];
        lVar7 = plVar1[3];
        *plVar1 = lVar3;
        plVar1[1] = lVar3;
      }
      uVar4 = plVar1[5];
    }
    else {
      lVar3 = plVar1[4] - lVar5;
      uVar4 = (lVar3 + 1U >> 1) + lVar3;
    }
    uVar6 = (lVar7 - lVar5) + 1;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    if (uVar6 == 0) {
      thunk_FUN_1402d9040();
      lVar3 = 0;
    }
    else {
      lVar3 = _realloc_base(lVar5,uVar6);
    }
    lVar7 = (lVar7 - lVar5) + lVar3;
    plVar1[2] = lVar3;
    plVar1[3] = lVar7;
    plVar1[4] = lVar3 + uVar6;
  }
  if (lVar7 == 0) {
    FID_conflict__assert
              (L"stackTop_",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal/stack.h"
               ,0x82);
  }
  if (plVar1[4] - plVar1[3] < 1) {
    FID_conflict__assert
              (L"static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)",
               L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal/stack.h",0x83);
  }
  puVar2 = (undefined1 *)plVar1[3];
  plVar1[3] = (longlong)(puVar2 + 1);
  *puVar2 = param_2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}

