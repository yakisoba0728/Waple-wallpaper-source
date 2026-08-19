// Function: FUN_140050680
// Addr: 140050680
// Size: 52 bytes


void FUN_140050680(longlong param_1,undefined1 param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    func_0x0001402cba34(L"dst_ != 0",
                        L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\stream.h",199);
    return;
  }
  **(undefined1 **)(param_1 + 8) = param_2;
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
  return;
}

