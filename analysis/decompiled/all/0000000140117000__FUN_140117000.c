// Function: FUN_140117000
// Addr: 140117000
// Size: 88 bytes


ulonglong FUN_140117000(ulonglong param_1)

{
  if ((*(ushort *)(param_1 + 0xe) & 0x400) == 0) {
    FID_conflict__assert
              (L"IsString()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x73d
              );
  }
  if ((*(ushort *)(param_1 + 0xe) & 0x1000) != 0) {
    return param_1;
  }
  return *(ulonglong *)(param_1 + 8) & 0xffffffffffff;
}

