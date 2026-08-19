// Function: FUN_140043500
// Addr: 140043500
// Size: 96 bytes


void FUN_140043500(longlong param_1,undefined8 param_2,char *param_3,longlong *param_4)

{
  longlong lVar1;
  
  if ((*param_3 != '\0') && ((char)param_4[1] == '\a')) {
                    /* WARNING: Subroutine does not return */
    FUN_140086eb0(param_1 + 0x48,"wproperties","");
  }
  switch(*(uint *)(param_4 + 1) & 0xff) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    break;
  case 4:
    if ((*(uint *)(param_4 + 1) >> 8 & 1) != 0) {
      func_0x0001402bf8e0(*param_4);
    }
    break;
  case 6:
  case 7:
    lVar1 = *param_4;
    if (lVar1 != 0) {
      func_0x000140088f10(lVar1);
      func_0x00014028b040(lVar1,0x10);
    }
    break;
  default:
    func_0x0001402cba34(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
  }
  *param_4 = 0;
  if (param_4[2] == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017310(param_4[2] + 0x40);
}

