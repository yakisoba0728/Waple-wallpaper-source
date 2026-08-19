// Function: FUN_140085d90
// Addr: 140085d90
// Size: 199 bytes


undefined8 * FUN_140085d90(char *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined1 auStack_f8 [240];
  
  switch(*(uint *)(param_1 + 8) & 0xff) {
  case 0:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    return param_2;
  case 1:
    FUN_140089b10(param_2,*(undefined8 *)param_1);
    return param_2;
  case 2:
    func_0x000140089c70(param_2,*(undefined8 *)param_1);
    return param_2;
  case 3:
    FUN_140089d30(param_2,*(undefined8 *)param_1,0,0x11,0);
    return param_2;
  case 4:
    break;
  case 5:
    pcVar2 = "false";
    if (*param_1 != '\0') {
      pcVar2 = "true";
    }
    func_0x000140017240(param_2,pcVar2);
    return param_2;
  default:
    FUN_140089120(auStack_f8);
    FUN_14000ca60(auStack_f8,"Type is not convertible to string");
    func_0x0001402cba34(L"false && oss.str().c_str()",
                        L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x2b8);
                    /* WARNING: Subroutine does not return */
    FUN_1402c98b4();
  }
  puVar3 = *(undefined4 **)param_1;
  if (puVar3 == (undefined4 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
  }
  else {
    if ((*(uint *)(param_1 + 8) >> 8 & 1) == 0) {
      uVar1 = func_0x000140421ed0(puVar3);
    }
    else {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    func_0x000140017550(param_2,puVar3,uVar1);
  }
  return param_2;
}

