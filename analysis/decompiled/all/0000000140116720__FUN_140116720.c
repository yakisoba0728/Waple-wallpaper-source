// Function: FUN_140116720
// Addr: 140116720
// Size: 222 bytes


void FUN_140116720(longlong *param_1)

{
  ushort uVar1;
  
  if ((*(byte *)((longlong)param_1 + 0xe) & 0x10) == 0) {
    FID_conflict__assert
              (L"IsNumber()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x722
              );
  }
  uVar1 = *(ushort *)((longlong)param_1 + 0xe);
  if ((uVar1 >> 9 & 1) != 0) {
    return;
  }
  if ((uVar1 & 0x20) != 0) {
    return;
  }
  if ((uVar1 & 0x40) != 0) {
    return;
  }
  if ((char)uVar1 < '\0') {
    return;
  }
  if ((uVar1 >> 8 & 1) == 0) {
    FID_conflict__assert
              (L"(data_.f.flags & kUint64Flag) != 0",
               L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x727);
  }
  if (-1 < *param_1) {
    return;
  }
  return;
}

