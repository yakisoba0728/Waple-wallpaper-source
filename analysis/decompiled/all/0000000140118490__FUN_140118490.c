// Function: FUN_140118490
// Addr: 140118490
// Size: 440 bytes


undefined8 FUN_140118490(longlong param_1,undefined *param_2,uint param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  uint *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar8 = (ulonglong)param_3;
  puVar3 = (uint *)FUN_140118650(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FID_conflict__assert
              (L"allocator_",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0xaed
              );
  }
  puVar1 = *(ulonglong **)(param_1 + 0x10);
  puVar3[0] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  if ((param_2 == (undefined *)0x0) && (param_2 = &DAT_140489704, param_3 != 0)) {
    FID_conflict__assert
              (L"str != 0 || len == 0u",
               L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x19c);
  }
  if (param_3 < 0xe) {
    *(undefined2 *)((longlong)puVar3 + 0xe) = 0x1c05;
    *(char *)((longlong)puVar3 + 0xd) = '\r' - (char)param_3;
    FUN_1404210f0(puVar3,param_2,uVar8);
    puVar7 = puVar3;
    goto LAB_14011862b;
  }
  *(undefined2 *)((longlong)puVar3 + 0xe) = 0xc05;
  *puVar3 = param_3;
  if (*(longlong *)(puVar1[2] + 0x10) == 0) {
    FID_conflict__assert
              (L"shared_->refcount > 0",
               L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal\\../allocators.h",
               0x142);
  }
  if (param_3 + 1 == 0) {
    puVar7 = (uint *)0x0;
  }
  else {
    uVar9 = (ulonglong)(param_3 + 1) + 7 & 0xfffffffffffffff8;
    if (**(ulonglong **)puVar1[2] < (*(ulonglong **)puVar1[2])[1] + uVar9) {
      uVar6 = *puVar1;
      if (*puVar1 <= uVar9) {
        uVar6 = uVar9;
      }
      if (puVar1[1] == 0) {
        uVar4 = FUN_14028af20(1);
        puVar1[1] = uVar4;
        *(ulonglong *)(puVar1[2] + 8) = uVar4;
      }
      if ((uVar6 == 0xffffffffffffffe8) ||
         (puVar5 = (ulonglong *)_malloc_base(), puVar5 == (ulonglong *)0x0)) {
        puVar7 = (uint *)0x0;
        goto LAB_14011860b;
      }
      *puVar5 = uVar6;
      puVar5[1] = 0;
      puVar5[2] = *(ulonglong *)puVar1[2];
      *(ulonglong **)puVar1[2] = puVar5;
    }
    lVar2 = *(longlong *)puVar1[2];
    puVar7 = (uint *)(lVar2 + 0x18 + *(longlong *)(lVar2 + 8));
    *(ulonglong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + uVar9;
  }
LAB_14011860b:
  *(ulonglong *)(puVar3 + 2) = *(ulonglong *)(puVar3 + 2) & 0xffff000000000000;
  *(ulonglong *)(puVar3 + 2) = *(ulonglong *)(puVar3 + 2) | (ulonglong)puVar7;
  FUN_1404210f0(puVar7,param_2,uVar8);
LAB_14011862b:
  *(undefined1 *)(uVar8 + (longlong)puVar7) = 0;
  return 1;
}

