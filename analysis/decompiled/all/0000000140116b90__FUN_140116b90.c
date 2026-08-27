// Function: FUN_140116b90
// Addr: 140116b90
// Size: 54 bytes


bool FUN_140116b90(longlong param_1)

{
  if ((*(byte *)(param_1 + 0xe) & 8) == 0) {
    FID_conflict__assert
              (L"IsBool()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x498);
  }
  return *(short *)(param_1 + 0xe) == 10;
}

