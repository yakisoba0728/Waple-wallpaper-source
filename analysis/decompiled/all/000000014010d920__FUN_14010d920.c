// Function: FUN_14010d920
// Addr: 14010d920
// Size: 16 bytes


uint * FUN_14010d920(uint *param_1,undefined8 param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lStackX_8;
  
  FUN_1401168d0(param_1,&lStackX_8,param_2);
  if (*(short *)((longlong)param_1 + 0xe) != 3) {
    func_0x0001402cba34(L"IsObject()",
                        L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x4fd);
  }
  lVar2 = lStackX_8;
  if (lStackX_8 != (ulonglong)*param_1 * 0x20 + (*(ulonglong *)(param_1 + 2) & 0xffffffffffff)) {
    puVar1 = (uint *)(lStackX_8 + 0x10);
    if (*(short *)(lStackX_8 + 0x1e) != 3) {
      return puVar1;
    }
    FUN_1401168d0(puVar1,&lStackX_8,"value");
    if (*(short *)(lVar2 + 0x1e) != 3) {
      func_0x0001402cba34(L"IsObject()",
                          L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x4fd);
    }
    if (lStackX_8 != (ulonglong)*puVar1 * 0x20 + (*(ulonglong *)(lVar2 + 0x18) & 0xffffffffffff)) {
      return (uint *)(lStackX_8 + 0x10);
    }
  }
  return (uint *)0x0;
}

