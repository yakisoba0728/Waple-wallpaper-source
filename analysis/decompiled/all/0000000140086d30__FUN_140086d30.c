// Function: FUN_140086d30
// Addr: 140086d30
// Size: 141 bytes


void FUN_140086d30(longlong *param_1)

{
  longlong lVar1;
  
  switch(*(uint *)(param_1 + 1) & 0xff) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    break;
  case 4:
    if ((*(uint *)(param_1 + 1) >> 8 & 1) != 0) {
      thunk_FUN_1402d9040(*param_1);
      return;
    }
    break;
  case 6:
  case 7:
    lVar1 = *param_1;
    if (lVar1 != 0) {
      FUN_140088e40(lVar1);
      thunk_FUN_14028af80(lVar1,0x10);
      return;
    }
    break;
  default:
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    return;
  }
  return;
}

