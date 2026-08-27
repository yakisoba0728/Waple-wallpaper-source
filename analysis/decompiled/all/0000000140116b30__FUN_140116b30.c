// Function: FUN_140116b30
// Addr: 140116b30
// Size: 92 bytes


longlong * FUN_140116b30(uint *param_1,longlong *param_2)

{
  if (*(short *)((longlong)param_1 + 0xe) != 3) {
    FID_conflict__assert
              (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x4f7
              );
  }
  *param_2 = (ulonglong)*param_1 * 0x20 + (*(ulonglong *)(param_1 + 2) & 0xffffffffffff);
  return param_2;
}

