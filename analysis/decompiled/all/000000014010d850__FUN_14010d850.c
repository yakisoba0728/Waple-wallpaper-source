// Function: FUN_14010d850
// Addr: 14010d850
// Size: 225 bytes


uint * FUN_14010d850(uint *param_1,undefined8 param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong local_res8;
  
  FUN_140116800(param_1,&local_res8,param_2);
  if (*(short *)((longlong)param_1 + 0xe) != 3) {
    FID_conflict__assert
              (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x4fd
              );
  }
  lVar2 = local_res8;
  if (local_res8 != (ulonglong)*param_1 * 0x20 + (*(ulonglong *)(param_1 + 2) & 0xffffffffffff)) {
    puVar1 = (uint *)(local_res8 + 0x10);
    if (*(short *)(local_res8 + 0x1e) != 3) {
      return puVar1;
    }
    FUN_140116800(puVar1,&local_res8,"value");
    if (*(short *)(lVar2 + 0x1e) != 3) {
      FID_conflict__assert
                (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x4fd);
    }
    if (local_res8 != (ulonglong)*puVar1 * 0x20 + (*(ulonglong *)(lVar2 + 0x18) & 0xffffffffffff)) {
      return (uint *)(local_res8 + 0x10);
    }
  }
  return (uint *)0x0;
}

