// Function: FUN_14004fac0
// Addr: 14004fac0
// Size: 166 bytes


void FUN_14004fac0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (0x7f < param_2) {
    if (param_2 < 0x800) {
      uVar1 = param_2 >> 6 | 0xc0;
    }
    else {
      if (param_2 < 0x10000) {
        uVar1 = param_2 >> 0xc | 0xe0;
      }
      else {
        if (0x10ffff < param_2) {
          FID_conflict__assert
                    (L"codepoint <= 0x10FFFF",
                     L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\encodings.h",0x73);
        }
        FUN_14004f8f0(param_1,param_2 >> 0x12 | 0xf0);
        uVar1 = param_2 >> 0xc & 0xfff3f | 0x80;
      }
      FUN_14004f8f0(param_1,uVar1);
      uVar1 = param_2 >> 6 & 0x3ffff3f | 0x80;
    }
    FUN_14004f8f0(param_1,uVar1);
    param_2 = (uint)((byte)param_2 & 0x3f | 0x80);
  }
  FUN_14004f8f0(param_1,param_2 & 0xff);
  return;
}

