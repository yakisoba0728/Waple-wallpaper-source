// Function: FUN_140164120
// Addr: 140164120
// Size: 56 bytes


undefined4 FUN_140164120(undefined4 *param_1)

{
  if ((*(byte *)((longlong)param_1 + 0xe) & 0x20) == 0) {
    FID_conflict__assert
              (L"data_.f.flags & kIntFlag",
               L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x719);
    return *param_1;
  }
  return *param_1;
}

