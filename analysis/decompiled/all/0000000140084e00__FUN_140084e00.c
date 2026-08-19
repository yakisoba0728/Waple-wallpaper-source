// Function: FUN_140084e00
// Addr: 140084e00
// Size: 66 bytes


bool FUN_140084e00(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*param_1 == 0) {
    return *(uint *)(param_1 + 1) == *(uint *)(param_2 + 1);
  }
  uVar2 = *(uint *)(param_1 + 1) >> 2;
  if (uVar2 != *(uint *)(param_2 + 1) >> 2) {
    return false;
  }
  if (*param_2 == 0) {
    func_0x0001402cba34(L"this->cstr_ && other.cstr_",
                        L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x158);
  }
  iVar1 = func_0x0001404210c0(*param_1,*param_2,uVar2);
  return iVar1 == 0;
}

