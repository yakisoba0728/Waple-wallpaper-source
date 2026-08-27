// Function: FUN_140117060
// Addr: 140117060
// Size: 1306 bytes


void FUN_140117060(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  char *pcVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  
  cVar2 = *(char *)*param_2;
  switch(cVar2) {
  case '\"':
    FUN_140117600(param_1,param_2,param_3,0);
    return;
  default:
    FUN_140117ad0(param_1,param_2);
    return;
  case '[':
    if (cVar2 != '[') {
      FID_conflict__assert
                (L"is.Peek() == \'[\'",
                 L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x329);
    }
    *param_2 = *param_2 + 1;
    puVar3 = (undefined8 *)FUN_140118650(param_3 + 0x20);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined2 *)((longlong)puVar3 + 0xe) = 4;
    FUN_14004ad80(0,param_2);
    if (*(int *)(param_1 + 0x30) != 0) {
      return;
    }
    if (*(char *)*param_2 == ']') {
      *param_2 = (longlong)((char *)*param_2 + 1);
      cVar2 = FUN_1401181e0(param_3,0);
      if (cVar2 != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x30) == 0) goto LAB_1401173ec;
      uVar7 = 0x334;
    }
    else {
      iVar6 = 0;
      FUN_140117060(param_1,param_2,param_3);
      if (*(int *)(param_1 + 0x30) != 0) {
        return;
      }
      while( true ) {
        pcVar4 = (char *)FUN_14003ebf0(*param_2);
        *param_2 = (longlong)pcVar4;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        iVar6 = iVar6 + 1;
        if (*pcVar4 != ',') break;
        *param_2 = (longlong)(pcVar4 + 1);
        FUN_14004ad80(0x2c,param_2);
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        FUN_140117060(param_1,param_2,param_3);
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
      }
      if (*pcVar4 != ']') {
        lVar5 = param_2[1];
        *(undefined4 *)(param_1 + 0x30) = 7;
        *(longlong *)(param_1 + 0x38) = (longlong)pcVar4 - lVar5;
        return;
      }
      *param_2 = (longlong)(pcVar4 + 1);
      cVar2 = FUN_1401181e0(param_3,iVar6);
      if (cVar2 != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x30) == 0) goto LAB_1401173ec;
      uVar7 = 0x346;
    }
    goto LAB_1401173d9;
  case 'f':
    if (cVar2 != 'f') {
      FID_conflict__assert
                (L"is.Peek() == \'f\'",
                 L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x373);
    }
    lVar5 = *param_2;
    *param_2 = lVar5 + 1;
    if (((*(char *)(lVar5 + 1) == 'a') && (*param_2 = lVar5 + 2, *(char *)(lVar5 + 2) == 'l')) &&
       ((*param_2 = lVar5 + 3, *(char *)(lVar5 + 3) == 's' &&
        (*param_2 = lVar5 + 4, *(char *)(lVar5 + 4) == 'e')))) {
      *param_2 = lVar5 + 5;
      puVar3 = (undefined8 *)FUN_140118650(param_3 + 0x20);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined2 *)((longlong)puVar3 + 0xe) = 9;
      return;
    }
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_140117128;
    uVar7 = 0x37b;
    break;
  case 'n':
    if (cVar2 != 'n') {
      FID_conflict__assert
                (L"is.Peek() == \'n\'",
                 L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x359);
    }
    lVar5 = *param_2;
    *param_2 = lVar5 + 1;
    if (((*(char *)(lVar5 + 1) == 'u') && (*param_2 = lVar5 + 2, *(char *)(lVar5 + 2) == 'l')) &&
       (*param_2 = lVar5 + 3, *(char *)(lVar5 + 3) == 'l')) {
      *param_2 = lVar5 + 4;
      puVar3 = (undefined8 *)FUN_140118650(param_3 + 0x20);
      *puVar3 = 0;
      puVar3[1] = 0;
      return;
    }
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_140117128;
    uVar7 = 0x361;
    break;
  case 't':
    if (cVar2 != 't') {
      FID_conflict__assert
                (L"is.Peek() == \'t\'",
                 L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x366);
    }
    lVar5 = *param_2;
    *param_2 = lVar5 + 1;
    if (((*(char *)(lVar5 + 1) == 'r') && (*param_2 = lVar5 + 2, *(char *)(lVar5 + 2) == 'u')) &&
       (*param_2 = lVar5 + 3, *(char *)(lVar5 + 3) == 'e')) {
      *param_2 = lVar5 + 4;
      puVar3 = (undefined8 *)FUN_140118650(param_3 + 0x20);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined2 *)((longlong)puVar3 + 0xe) = 10;
      return;
    }
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_140117128;
    uVar7 = 0x36e;
    break;
  case '{':
    if (cVar2 != '{') {
      FID_conflict__assert
                (L"is.Peek() == \'{\'",
                 L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x2e5);
    }
    *param_2 = *param_2 + 1;
    puVar3 = (undefined8 *)FUN_140118650(param_3 + 0x20);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined2 *)((longlong)puVar3 + 0xe) = 3;
    FUN_14004ad80(0,param_2);
    if (*(int *)(param_1 + 0x30) != 0) {
      return;
    }
    if (*(char *)*param_2 == '}') {
      *param_2 = (longlong)((char *)*param_2 + 1);
      cVar2 = FUN_1401183a0(param_3,0);
      if (cVar2 != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x30) == 0) goto LAB_1401173ec;
      uVar7 = 0x2f0;
    }
    else {
      iVar6 = 0;
      while( true ) {
        if (*(char *)*param_2 != '\"') {
          lVar5 = *param_2;
          lVar1 = param_2[1];
          *(undefined4 *)(param_1 + 0x30) = 4;
          *(longlong *)(param_1 + 0x38) = lVar5 - lVar1;
          return;
        }
        FUN_140117600(param_1,param_2,param_3,1);
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        pcVar4 = (char *)FUN_14003ebf0(*param_2);
        *param_2 = (longlong)pcVar4;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        if (*pcVar4 != ':') {
          lVar5 = param_2[1];
          *(undefined4 *)(param_1 + 0x30) = 5;
          *(longlong *)(param_1 + 0x38) = (longlong)pcVar4 - lVar5;
          return;
        }
        *param_2 = (longlong)(pcVar4 + 1);
        lVar5 = FUN_14003ebf0();
        *param_2 = lVar5;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        FUN_140117060(param_1,param_2,param_3);
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        pcVar4 = (char *)FUN_14003ebf0(*param_2);
        *param_2 = (longlong)pcVar4;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        iVar6 = iVar6 + 1;
        if (*pcVar4 != ',') break;
        *param_2 = (longlong)(pcVar4 + 1);
        FUN_14004ad80(0x2c,param_2);
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
      }
      if (*pcVar4 != '}') {
        lVar5 = param_2[1];
        *(undefined4 *)(param_1 + 0x30) = 6;
        *(longlong *)(param_1 + 0x38) = (longlong)pcVar4 - lVar5;
        return;
      }
      *param_2 = (longlong)(pcVar4 + 1);
      cVar2 = FUN_1401183a0(param_3,iVar6);
      if (cVar2 != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x30) == 0) goto LAB_1401173ec;
      uVar7 = 0x315;
    }
LAB_1401173d9:
    FID_conflict__assert
              (L"!HasParseError()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",
               uVar7);
LAB_1401173ec:
    lVar5 = *param_2;
    lVar1 = param_2[1];
    *(undefined4 *)(param_1 + 0x30) = 0x10;
    *(longlong *)(param_1 + 0x38) = lVar5 - lVar1;
    return;
  }
  FID_conflict__assert
            (L"!HasParseError()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",
             uVar7);
LAB_140117128:
  lVar5 = *param_2;
  lVar1 = param_2[1];
  *(undefined4 *)(param_1 + 0x30) = 3;
  *(longlong *)(param_1 + 0x38) = lVar5 - lVar1;
  return;
}

