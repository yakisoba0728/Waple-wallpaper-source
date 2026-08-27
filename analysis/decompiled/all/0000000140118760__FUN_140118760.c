// Function: FUN_140118760
// Addr: 140118760
// Size: 240 bytes


longlong FUN_140118760(ulonglong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (*(longlong *)(param_1[2] + 0x10) == 0) {
    FID_conflict__assert
              (L"shared_->refcount > 0",
               L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal\\../allocators.h",
               0x142);
  }
  if (param_2 != 0) {
    uVar5 = param_2 + 7U & 0xfffffffffffffff8;
    if ((*(ulonglong **)param_1[2])[1] + uVar5 <= **(ulonglong **)param_1[2]) {
LAB_140118814:
      lVar1 = *(longlong *)param_1[2];
      lVar2 = *(longlong *)(lVar1 + 8);
      *(ulonglong *)(lVar1 + 8) = lVar2 + uVar5;
      return lVar1 + 0x18 + lVar2;
    }
    uVar6 = *param_1;
    if (*param_1 <= uVar5) {
      uVar6 = uVar5;
    }
    if (param_1[1] == 0) {
      uVar3 = FUN_14028af20(1);
      param_1[1] = uVar3;
      *(ulonglong *)(param_1[2] + 8) = uVar3;
    }
    if (uVar6 != 0xffffffffffffffe8) {
      puVar4 = (ulonglong *)_malloc_base();
      if (puVar4 != (ulonglong *)0x0) {
        *puVar4 = uVar6;
        puVar4[1] = 0;
        puVar4[2] = *(ulonglong *)param_1[2];
        *(ulonglong **)param_1[2] = puVar4;
        goto LAB_140118814;
      }
    }
  }
  return 0;
}

