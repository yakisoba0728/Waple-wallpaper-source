// Function: FUN_140116800
// Addr: 140116800
// Size: 709 bytes


ulonglong * FUN_140116800(uint *param_1,ulonglong *param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  uint uVar3;
  ushort uVar4;
  ulonglong *_Buf2;
  uint uVar5;
  ulonglong *_Buf1;
  ulonglong uVar6;
  ulonglong local_58;
  undefined8 uStack_50;
  
  if (param_3 == (char *)0x0) {
    FID_conflict__assert
              (L"str != 0",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x1a8);
  }
  sVar2 = strlen(param_3);
  local_58 = sVar2 & 0xffffffff;
  uVar6 = (ulonglong)param_3 | 0x405000000000000;
  uStack_50 = uVar6;
  if (*(short *)((longlong)param_1 + 0xe) != 3) {
    FID_conflict__assert
              (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x54f
              );
  }
  if ((uVar6 & 0x400000000000000) == 0) {
    FID_conflict__assert
              (L"name.IsString()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
               0x550);
  }
  if (*(short *)((longlong)param_1 + 0xe) != 3) {
    FID_conflict__assert
              (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x4fa
              );
  }
  uVar6 = uStack_50;
  *param_2 = *(ulonglong *)(param_1 + 2) & 0xffffffffffff;
  do {
    if (*(short *)((longlong)param_1 + 0xe) != 3) {
      FID_conflict__assert
                (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x4fd);
    }
    _Buf2 = (ulonglong *)*param_2;
    if (_Buf2 == (ulonglong *)
                 ((ulonglong)*param_1 * 0x20 + (*(ulonglong *)(param_1 + 2) & 0xffffffffffff))) {
      return param_2;
    }
    if ((uVar6 & 0x400000000000000) == 0) {
      FID_conflict__assert
                (L"IsString()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x9a4);
    }
    if ((*(ushort *)((longlong)_Buf2 + 0xe) & 0x400) == 0) {
      FID_conflict__assert
                (L"rhs.IsString()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h"
                 ,0x9a5);
    }
    if ((uVar6 & 0x400000000000000) == 0) {
      FID_conflict__assert
                (L"IsString()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x742);
    }
    uVar5 = (uint)sVar2;
    if ((uVar6 & 0x1000000000000000) != 0) {
      uVar5 = 0xd - (int)uStack_50._5_1_;
    }
    if ((*(ushort *)((longlong)_Buf2 + 0xe) & 0x400) == 0) {
      FID_conflict__assert
                (L"IsString()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x742);
    }
    uVar4 = *(ushort *)((longlong)_Buf2 + 0xe);
    if ((uVar4 >> 0xc & 1) == 0) {
      uVar3 = (uint)*_Buf2;
    }
    else {
      uVar3 = 0xd - (int)*(char *)((longlong)_Buf2 + 0xd);
    }
    if (uVar5 == uVar3) {
      if ((uVar6 & 0x400000000000000) == 0) {
        FID_conflict__assert
                  (L"IsString()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                   0x73d);
        uVar4 = *(ushort *)((longlong)_Buf2 + 0xe);
      }
      if ((uVar6 & 0x1000000000000000) == 0) {
        _Buf1 = (ulonglong *)((ulonglong)param_3 & 0xffffffffffff);
      }
      else {
        _Buf1 = &local_58;
      }
      if ((uVar4 & 0x400) == 0) {
        FID_conflict__assert
                  (L"IsString()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                   0x73d);
      }
      if ((*(ushort *)((longlong)_Buf2 + 0xe) & 0x1000) == 0) {
        _Buf2 = (ulonglong *)(_Buf2[1] & 0xffffffffffff);
      }
      if (_Buf1 == _Buf2) {
        return param_2;
      }
      iVar1 = memcmp(_Buf1,_Buf2,(ulonglong)uVar5);
      if (iVar1 == 0) {
        return param_2;
      }
    }
    *param_2 = *param_2 + 0x20;
  } while( true );
}

