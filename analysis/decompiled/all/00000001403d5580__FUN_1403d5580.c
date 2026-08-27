// Function: FUN_1403d5580
// Addr: 1403d5580
// Size: 133 bytes


bool FUN_1403d5580(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_2;
  uVar3 = FUN_140398b00(lVar1 + 0x38);
  cVar2 = FUN_1403ca530(uVar3,param_3,param_4,param_5);
  if (cVar2 == '\0') {
    uVar3 = FUN_140398510(lVar1 + 0x80);
    cVar2 = FUN_1403ca090(uVar3,param_3,param_4,param_5);
    return cVar2 != '\0';
  }
  return true;
}

