// Function: FUN_140118560
// Addr: 140118560
// Size: 24 bytes


void FUN_140118560(longlong param_1,undefined *param_2,uint param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  puVar3 = (uint *)func_0x000140118720(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    func_0x0001402cba34(L"allocator_",
                        L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0xaed);
  }
  puVar1 = *(ulonglong **)(param_1 + 0x10);
  puVar3[0] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  if ((param_2 == (undefined *)0x0) && (param_2 = &UNK_1404897d4, param_3 != 0)) {
    func_0x0001402cba34(L"str != 0 || len == 0u",
                        L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x19c);
  }
  if (param_3 < 0xe) {
    *(undefined2 *)((longlong)puVar3 + 0xe) = 0x1c05;
    *(char *)((longlong)puVar3 + 0xd) = '\r' - (char)param_3;
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(puVar3,param_2,param_3);
  }
  *(undefined2 *)((longlong)puVar3 + 0xe) = 0xc05;
  *puVar3 = param_3;
  if (*(longlong *)(puVar1[2] + 0x10) == 0) {
    func_0x0001402cba34(L"shared_->refcount > 0",
                        L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal\\../allocators.h"
                        ,0x142);
  }
  if (param_3 + 1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar7 = (ulonglong)(param_3 + 1) + 7 & 0xfffffffffffffff8;
    if (**(ulonglong **)puVar1[2] < (*(ulonglong **)puVar1[2])[1] + uVar7) {
      uVar6 = *puVar1;
      if (*puVar1 <= uVar7) {
        uVar6 = uVar7;
      }
      if (puVar1[1] == 0) {
        uVar4 = func_0x00014028aff0(1);
        puVar1[1] = uVar4;
        *(ulonglong *)(puVar1[2] + 8) = uVar4;
      }
      if ((uVar6 == 0xffffffffffffffe8) ||
         (puVar5 = (ulonglong *)thunk_FUN_1402da070(), puVar5 == (ulonglong *)0x0)) {
        uVar6 = 0;
        goto code_r0x0001401186db;
      }
      *puVar5 = uVar6;
      puVar5[1] = 0;
      puVar5[2] = *(ulonglong *)puVar1[2];
      *(ulonglong **)puVar1[2] = puVar5;
    }
    lVar2 = *(longlong *)puVar1[2];
    uVar6 = lVar2 + 0x18 + *(longlong *)(lVar2 + 8);
    *(ulonglong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + uVar7;
  }
code_r0x0001401186db:
  *(ulonglong *)(puVar3 + 2) = *(ulonglong *)(puVar3 + 2) & 0xffff000000000000;
  *(ulonglong *)(puVar3 + 2) = *(ulonglong *)(puVar3 + 2) | uVar6;
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(uVar6,param_2,param_3);
}

