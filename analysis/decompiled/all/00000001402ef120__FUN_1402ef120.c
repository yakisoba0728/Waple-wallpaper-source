// Function: FUN_1402ef120
// Addr: 1402ef120
// Size: 294 bytes


ulonglong FUN_1402ef120(longlong *param_1,undefined8 param_2,char *param_3,undefined8 *param_4,
                       undefined8 param_5)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  size_t sVar5;
  char *_Dest;
  longlong lVar6;
  ulonglong uVar7;
  char *pcVar8;
  
  lVar3 = *param_1;
  sVar5 = strlen(param_3);
  iVar4 = (int)sVar5 + 2;
  if (iVar4 < 1) {
    _Dest = (char *)0x0;
    if (iVar4 < 0) {
      return 0x40;
    }
  }
  else {
    _Dest = (char *)(**(code **)(lVar3 + 8))(lVar3,iVar4);
    if (_Dest == (char *)0x0) {
      return 0x40;
    }
  }
  lVar6 = FUN_1402edd20(param_3);
  if (lVar6 == 0) {
    *_Dest = '\0';
  }
  else {
    strncpy(_Dest,param_3,(ulonglong)(((int)lVar6 - (int)param_3) + 1));
    _Dest[lVar6 + (1 - (longlong)param_3)] = '\0';
    param_3 = (char *)(lVar6 + 1);
  }
  pcVar8 = _Dest + -1;
  do {
    pcVar1 = pcVar8 + 1;
    pcVar8 = pcVar8 + 1;
  } while (*pcVar1 != '\0');
  *(undefined2 *)pcVar8 = DAT_14042cd54;
  pcVar8 = _Dest + -1;
  do {
    pcVar1 = pcVar8 + 1;
    pcVar8 = pcVar8 + 1;
  } while (*pcVar1 != '\0');
  lVar6 = 0;
  do {
    cVar2 = param_3[lVar6];
    pcVar8[lVar6] = cVar2;
    lVar6 = lVar6 + 1;
  } while (cVar2 != '\0');
  if (_Dest == (char *)0x0) {
    return 0x40;
  }
  uVar7 = FUN_1402fa320(param_1,_Dest,param_5);
  if ((int)uVar7 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,_Dest);
    return uVar7 & 0xffffffff;
  }
  *param_4 = _Dest;
  return uVar7;
}

