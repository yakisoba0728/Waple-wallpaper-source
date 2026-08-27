// Function: FUN_140085cc0
// Addr: 140085cc0
// Size: 382 bytes


undefined8 * FUN_140085cc0(char *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar3;
  char *_Str;
  undefined1 local_f8 [240];
  size_t sVar2;
  
  switch(*(uint *)(param_1 + 8) & 0xff) {
  case 0:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    return param_2;
  case 1:
    FUN_140089a40(param_2,*(undefined8 *)param_1);
    return param_2;
  case 2:
    FUN_140089ba0(param_2,*(undefined8 *)param_1);
    return param_2;
  case 3:
    FUN_140089c60(param_2,*(undefined8 *)param_1,0,0x11,0);
    return param_2;
  case 4:
    break;
  case 5:
    puVar3 = &DAT_140474458;
    if (*param_1 != '\0') {
      puVar3 = &DAT_140474460;
    }
    FUN_140017170(param_2,puVar3);
    return param_2;
  default:
    FUN_140089050(local_f8);
    FUN_14000c990(local_f8,"Type is not convertible to string");
    FID_conflict__assert
              (L"false && oss.str().c_str()",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp"
               ,0x2b8);
                    /* WARNING: Subroutine does not return */
    FUN_1402c97e4();
  }
  _Str = *(char **)param_1;
  if (_Str == (char *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
  }
  else {
    if ((*(uint *)(param_1 + 8) >> 8 & 1) == 0) {
      sVar2 = strlen(_Str);
      uVar1 = (undefined4)sVar2;
    }
    else {
      uVar1 = *(undefined4 *)_Str;
      _Str = _Str + 4;
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    FUN_140017480(param_2,_Str,uVar1);
  }
  return param_2;
}

