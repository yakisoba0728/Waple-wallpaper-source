// Function: FUN_14004fa10
// Addr: 14004fa10
// Size: 168 bytes


int FUN_14004fa10(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    cVar1 = *(char *)*param_2;
    iVar2 = iVar2 * 0x10 + (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      iVar2 = iVar2 + -0x30;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      iVar2 = iVar2 + -0x37;
    }
    else {
      if (5 < (byte)(cVar1 + 0x9fU)) {
        if (*(int *)(param_1 + 0x30) != 0) {
          FID_conflict__assert
                    (L"!HasParseError()",
                     L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x397);
        }
        *(undefined4 *)(param_1 + 0x30) = 8;
        *(undefined8 *)(param_1 + 0x38) = param_3;
        return 0;
      }
      iVar2 = iVar2 + -0x57;
    }
    iVar3 = iVar3 + 1;
    *param_2 = (longlong)((char *)*param_2 + 1);
  } while (iVar3 < 4);
  return iVar2;
}

