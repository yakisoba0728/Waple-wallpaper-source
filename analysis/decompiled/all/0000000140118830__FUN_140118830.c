// Function: FUN_140118830
// Addr: 140118830
// Size: 203 bytes


longlong FUN_140118830(ulonglong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (*(longlong *)(param_1[2] + 0x10) == 0) {
    func_0x0001402cba34(L"shared_->refcount > 0",
                        L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal\\../allocators.h"
                        ,0x142);
  }
  if (param_2 != 0) {
    uVar4 = param_2 + 7U & 0xfffffffffffffff8;
    if ((*(ulonglong **)param_1[2])[1] + uVar4 <= **(ulonglong **)param_1[2]) {
LAB_1401188e4:
      lVar2 = *(longlong *)param_1[2];
      lVar1 = *(longlong *)(lVar2 + 8);
      *(ulonglong *)(lVar2 + 8) = lVar1 + uVar4;
      return lVar2 + 0x18 + lVar1;
    }
    uVar5 = *param_1;
    if (*param_1 <= uVar4) {
      uVar5 = uVar4;
    }
    if (param_1[1] == 0) {
      lVar2 = func_0x00014028aff0(1);
      return lVar2;
    }
    if (uVar5 != 0xffffffffffffffe8) {
      puVar3 = (ulonglong *)thunk_FUN_1402da070();
      if (puVar3 != (ulonglong *)0x0) {
        *puVar3 = uVar5;
        puVar3[1] = 0;
        puVar3[2] = *(ulonglong *)param_1[2];
        *(ulonglong **)param_1[2] = puVar3;
        goto LAB_1401188e4;
      }
    }
  }
  return 0;
}

