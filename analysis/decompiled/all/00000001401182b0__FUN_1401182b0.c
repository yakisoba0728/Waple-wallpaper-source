// Function: FUN_1401182b0
// Addr: 1401182b0
// Size: 13 bytes


undefined8 FUN_1401182b0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = (ulonglong)param_2;
  uVar8 = uVar7 * 0x10;
  if ((ulonglong)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30)) < uVar8) {
    func_0x0001402cba34(L"GetSize() >= count * sizeof(T)",
                        L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal/stack.h",
                        0x8b);
  }
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + uVar7 * -0x10;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((ulonglong)(lVar1 - *(longlong *)(param_1 + 0x30)) < 0x10) {
    func_0x0001402cba34(L"GetSize() >= sizeof(T)",
                        L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal/stack.h",
                        0x92);
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    func_0x0001402cba34(L"allocator_",
                        L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0xaed);
  }
  puVar3 = *(ulonglong **)(param_1 + 0x10);
  *(undefined2 *)(lVar2 + -2) = 4;
  if (param_2 == 0) {
    *(ulonglong *)(lVar2 + -8) = *(ulonglong *)(lVar2 + -8) & 0xffff000000000000;
    *(undefined4 *)(lVar2 + -0xc) = 0;
    *(undefined4 *)(lVar2 + -0x10) = 0;
    return 0xffff000000000001;
  }
  if (*(longlong *)(puVar3[2] + 0x10) == 0) {
    func_0x0001402cba34(L"shared_->refcount > 0",
                        L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal\\../allocators.h"
                        ,0x142);
  }
  if (uVar7 == 0) {
    uVar7 = 0;
  }
  else {
    if (**(ulonglong **)puVar3[2] < (*(ulonglong **)puVar3[2])[1] + uVar8) {
      uVar7 = *puVar3;
      if (*puVar3 <= uVar8) {
        uVar7 = uVar8;
      }
      if (puVar3[1] == 0) {
        uVar5 = func_0x00014028aff0(1);
        puVar3[1] = uVar5;
        *(ulonglong *)(puVar3[2] + 8) = uVar5;
      }
      if ((uVar7 == 0xffffffffffffffe8) ||
         (puVar6 = (ulonglong *)thunk_FUN_1402da070(), puVar6 == (ulonglong *)0x0)) {
        uVar7 = 0;
        goto code_r0x000140118416;
      }
      *puVar6 = uVar7;
      puVar6[1] = 0;
      puVar6[2] = *(ulonglong *)puVar3[2];
      *(ulonglong **)puVar3[2] = puVar6;
    }
    lVar4 = *(longlong *)puVar3[2];
    uVar7 = *(longlong *)(lVar4 + 8) + 0x18 + lVar4;
    *(ulonglong *)(lVar4 + 8) = *(longlong *)(lVar4 + 8) + uVar8;
  }
code_r0x000140118416:
  *(ulonglong *)(lVar2 + -8) = *(ulonglong *)(lVar2 + -8) & 0xffff000000000000;
  *(ulonglong *)(lVar2 + -8) = *(ulonglong *)(lVar2 + -8) | uVar7;
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(uVar7,lVar1,uVar8);
}

