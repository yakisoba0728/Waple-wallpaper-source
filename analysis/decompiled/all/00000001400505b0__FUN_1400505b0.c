// Function: FUN_1400505b0
// Addr: 1400505b0
// Size: 70 bytes


void FUN_1400505b0(longlong param_1,undefined1 param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    FID_conflict__assert
              (L"dst_ != 0",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\stream.h",199);
  }
  **(undefined1 **)(param_1 + 8) = param_2;
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
  return;
}

