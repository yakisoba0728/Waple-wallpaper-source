// Function: FUN_14004af80
// Addr: 14004af80
// Size: 1759 bytes


/* WARNING: Removing unreachable block (ram,0x00014004b519) */

void FUN_14004af80(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined1 local_58 [8];
  uint local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  cVar2 = *(char *)*param_2;
  switch(cVar2) {
  case '\"':
    FUN_14004c8b0(param_1,param_2,param_3,0);
    return;
  default:
    FUN_14004cf70(param_1,param_2);
    return;
  case '[':
    if (cVar2 != '[') {
      func_0x0001402cba34(L"is.Peek() == \'[\'",
                          L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x329);
    }
    *param_2 = *param_2 + 1;
    cVar2 = FUN_14003f130(param_3);
    if (cVar2 == '\0') {
      if (*(int *)(param_1 + 0x30) == 0) goto LAB_14004b4dd;
      uVar5 = 0x32d;
    }
    else {
      FUN_14004ae50(extraout_XMM0_Da_00,param_2);
      if (*(int *)(param_1 + 0x30) != 0) {
        return;
      }
      if (*(char *)*param_2 == ']') {
        *param_2 = (longlong)((char *)*param_2 + 1);
        cVar2 = func_0x00014003f1e0(param_3);
        if (cVar2 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x30) == 0) goto LAB_14004b4dd;
        uVar5 = 0x334;
      }
      else {
        FUN_14004af80(param_1,param_2,param_3);
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        while( true ) {
          pcVar3 = (char *)func_0x00014003ecc0(*param_2);
          *param_2 = (longlong)pcVar3;
          if (*(int *)(param_1 + 0x30) != 0) {
            return;
          }
          if (*pcVar3 != ',') break;
          *param_2 = (longlong)(pcVar3 + 1);
          FUN_14004ae50(0x2c,param_2);
          if (*(int *)(param_1 + 0x30) != 0) {
            return;
          }
          FUN_14004af80(param_1,param_2,param_3);
          if (*(int *)(param_1 + 0x30) != 0) {
            return;
          }
        }
        if (*pcVar3 != ']') {
          lVar4 = param_2[2];
          *(undefined4 *)(param_1 + 0x30) = 7;
          *(longlong *)(param_1 + 0x38) = (longlong)pcVar3 - lVar4;
          return;
        }
        *param_2 = (longlong)(pcVar3 + 1);
        cVar2 = func_0x00014003f1e0(param_3);
        if (cVar2 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x30) == 0) goto LAB_14004b4dd;
        uVar5 = 0x346;
      }
    }
    break;
  case 'f':
    if (cVar2 != 'f') {
      func_0x0001402cba34(L"is.Peek() == \'f\'",
                          L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x373);
    }
    lVar4 = *param_2;
    *param_2 = lVar4 + 1;
    if (((*(char *)(lVar4 + 1) != 'a') || (*param_2 = lVar4 + 2, *(char *)(lVar4 + 2) != 'l')) ||
       ((*param_2 = lVar4 + 3, *(char *)(lVar4 + 3) != 's' ||
        (*param_2 = lVar4 + 4, *(char *)(lVar4 + 4) != 'e')))) {
      if (*(int *)(param_1 + 0x30) == 0) goto LAB_14004b123;
      uVar5 = 0x37b;
LAB_14004b110:
      func_0x0001402cba34(L"!HasParseError()",
                          L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",uVar5);
LAB_14004b123:
      lVar4 = *param_2;
      lVar1 = param_2[2];
      *(undefined4 *)(param_1 + 0x30) = 3;
      *(longlong *)(param_1 + 0x38) = lVar4 - lVar1;
      return;
    }
    *param_2 = lVar4 + 5;
    cVar2 = FUN_14003ede0(param_3,0);
    if (cVar2 != '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_14004b4dd;
    uVar5 = 0x378;
    break;
  case 'n':
    if (cVar2 != 'n') {
      func_0x0001402cba34(L"is.Peek() == \'n\'",
                          L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x359);
    }
    lVar4 = *param_2;
    *param_2 = lVar4 + 1;
    if (((*(char *)(lVar4 + 1) != 'u') || (*param_2 = lVar4 + 2, *(char *)(lVar4 + 2) != 'l')) ||
       (*param_2 = lVar4 + 3, *(char *)(lVar4 + 3) != 'l')) {
      if (*(int *)(param_1 + 0x30) == 0) goto LAB_14004b123;
      uVar5 = 0x361;
      goto LAB_14004b110;
    }
    local_50 = (local_50 >> 8 & 0xfffffe) << 8;
    *param_2 = lVar4 + 4;
    local_38 = 0;
    local_48 = 0;
    uStack_40 = 0;
    cVar2 = FUN_14003f280(param_3,local_58);
    if ((byte)local_50 < 8) {
                    /* WARNING: Could not recover jumptable at 0x00014004b061. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_140000080.field_0x50 +
                (&switchD_14004b061::switchdataD_14004b714)[(byte)local_50]))
                ((ulonglong)(byte)local_50,
                 &DAT_140000080.field_0x50 +
                 (&switchD_14004b061::switchdataD_14004b714)[(byte)local_50]);
      return;
    }
    func_0x0001402cba34(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    if (local_48 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140017310(local_48 + 0x40);
    }
    if (cVar2 != '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_14004b4dd;
    uVar5 = 0x35e;
    break;
  case 't':
    if (cVar2 != 't') {
      func_0x0001402cba34(L"is.Peek() == \'t\'",
                          L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x366);
    }
    lVar4 = *param_2;
    *param_2 = lVar4 + 1;
    if (((*(char *)(lVar4 + 1) != 'r') || (*param_2 = lVar4 + 2, *(char *)(lVar4 + 2) != 'u')) ||
       (*param_2 = lVar4 + 3, *(char *)(lVar4 + 3) != 'e')) {
      if (*(int *)(param_1 + 0x30) == 0) goto LAB_14004b123;
      uVar5 = 0x36e;
      goto LAB_14004b110;
    }
    local_50 = CONCAT31(local_50._1_3_,5);
    local_50 = local_50 & 0xfffffeff;
    *param_2 = lVar4 + 4;
    local_38 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58[0] = 1;
    cVar2 = FUN_14003f280(param_3,local_58);
    if ((byte)local_50 < 8) {
                    /* WARNING: Could not recover jumptable at 0x00014004b1e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_140000080.field_0x50 +
                (&switchD_14004b1e1::switchdataD_14004b734)[(byte)local_50]))
                ((ulonglong)(byte)local_50,
                 &DAT_140000080.field_0x50 +
                 (&switchD_14004b1e1::switchdataD_14004b734)[(byte)local_50]);
      return;
    }
    func_0x0001402cba34(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    if (local_48 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140017310(local_48 + 0x40);
    }
    if (cVar2 != '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_14004b4dd;
    uVar5 = 0x36b;
    break;
  case '{':
    if (cVar2 != '{') {
      func_0x0001402cba34(L"is.Peek() == \'{\'",
                          L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x2e5);
    }
    *param_2 = *param_2 + 1;
    cVar2 = FUN_14003efd0(param_3);
    if (cVar2 == '\0') {
      if (*(int *)(param_1 + 0x30) == 0) goto LAB_14004b4dd;
      uVar5 = 0x2e9;
    }
    else {
      FUN_14004ae50(extraout_XMM0_Da,param_2);
      if (*(int *)(param_1 + 0x30) != 0) {
        return;
      }
      if (*(char *)*param_2 == '}') {
        *param_2 = (longlong)((char *)*param_2 + 1);
        cVar2 = func_0x00014003f080(param_3);
        if (cVar2 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x30) == 0) goto LAB_14004b4dd;
        uVar5 = 0x2f0;
      }
      else {
        while( true ) {
          if (*(char *)*param_2 != '\"') {
            lVar4 = *param_2;
            lVar1 = param_2[2];
            *(undefined4 *)(param_1 + 0x30) = 4;
            *(longlong *)(param_1 + 0x38) = lVar4 - lVar1;
            return;
          }
          FUN_14004c8b0(param_1,param_2,param_3,1);
          if (*(int *)(param_1 + 0x30) != 0) {
            return;
          }
          pcVar3 = (char *)func_0x00014003ecc0(*param_2);
          *param_2 = (longlong)pcVar3;
          if (*(int *)(param_1 + 0x30) != 0) {
            return;
          }
          if (*pcVar3 != ':') {
            lVar4 = param_2[2];
            *(undefined4 *)(param_1 + 0x30) = 5;
            *(longlong *)(param_1 + 0x38) = (longlong)pcVar3 - lVar4;
            return;
          }
          *param_2 = (longlong)(pcVar3 + 1);
          lVar4 = func_0x00014003ecc0();
          *param_2 = lVar4;
          if (*(int *)(param_1 + 0x30) != 0) {
            return;
          }
          FUN_14004af80(param_1,param_2,param_3);
          if (*(int *)(param_1 + 0x30) != 0) {
            return;
          }
          pcVar3 = (char *)func_0x00014003ecc0(*param_2);
          *param_2 = (longlong)pcVar3;
          if (*(int *)(param_1 + 0x30) != 0) {
            return;
          }
          if (*pcVar3 != ',') break;
          *param_2 = (longlong)(pcVar3 + 1);
          FUN_14004ae50(0x2c,param_2);
          if (*(int *)(param_1 + 0x30) != 0) {
            return;
          }
        }
        if (*pcVar3 != '}') {
          lVar4 = param_2[2];
          *(undefined4 *)(param_1 + 0x30) = 6;
          *(longlong *)(param_1 + 0x38) = (longlong)pcVar3 - lVar4;
          return;
        }
        *param_2 = (longlong)(pcVar3 + 1);
        cVar2 = func_0x00014003f080(param_3);
        if (cVar2 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x30) == 0) goto LAB_14004b4dd;
        uVar5 = 0x315;
      }
    }
  }
  func_0x0001402cba34(L"!HasParseError()",
                      L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",uVar5);
LAB_14004b4dd:
  lVar4 = *param_2;
  lVar1 = param_2[2];
  *(undefined4 *)(param_1 + 0x30) = 0x10;
  *(longlong *)(param_1 + 0x38) = lVar4 - lVar1;
  return;
}

