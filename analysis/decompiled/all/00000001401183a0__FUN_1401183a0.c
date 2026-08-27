// Function: FUN_1401183a0
// Addr: 1401183a0
// Size: 231 bytes


undefined8 FUN_1401183a0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_2 * 0x20;
  if ((ulonglong)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30)) < uVar5) {
    FID_conflict__assert
              (L"GetSize() >= count * sizeof(T)",
               L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal/stack.h",0x8b);
  }
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + (ulonglong)param_2 * -0x20;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((ulonglong)(lVar1 - *(longlong *)(param_1 + 0x30)) < 0x10) {
    FID_conflict__assert
              (L"GetSize() >= sizeof(T)",
               L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal/stack.h",0x92);
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FID_conflict__assert
              (L"allocator_",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0xaed
              );
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined2 *)(lVar2 + -2) = 3;
  if (param_2 == 0) {
    *(ulonglong *)(lVar2 + -8) = *(ulonglong *)(lVar2 + -8) & 0xffff000000000000;
  }
  else {
    uVar4 = FUN_140118760(uVar3,uVar5);
    *(ulonglong *)(lVar2 + -8) = *(ulonglong *)(lVar2 + -8) & 0xffff000000000000;
    *(ulonglong *)(lVar2 + -8) = *(ulonglong *)(lVar2 + -8) | uVar4;
    FUN_1404210f0(uVar4,lVar1,uVar5);
  }
  *(uint *)(lVar2 + -0xc) = param_2;
  *(uint *)(lVar2 + -0x10) = param_2;
  return 1;
}

