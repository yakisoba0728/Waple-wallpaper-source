// Function: FUN_1402eec80
// Addr: 1402eec80
// Size: 294 bytes


ulonglong FUN_1402eec80(longlong *param_1,undefined8 param_2,char *param_3,undefined8 *param_4,
                       undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  size_t sVar4;
  char *_Dest;
  longlong lVar5;
  ulonglong uVar6;
  char *pcVar7;
  char *pcVar8;
  
  lVar2 = *param_1;
  sVar4 = strlen(param_3);
  iVar3 = (int)sVar4 + 3;
  if (iVar3 < 1) {
    _Dest = (char *)0x0;
    if (iVar3 < 0) {
      return 0x40;
    }
  }
  else {
    _Dest = (char *)(**(code **)(lVar2 + 8))(lVar2,iVar3);
    if (_Dest == (char *)0x0) {
      return 0x40;
    }
  }
  lVar5 = FUN_1402edd20(param_3);
  if (lVar5 == 0) {
    *_Dest = '\0';
  }
  else {
    strncpy(_Dest,param_3,(ulonglong)(((int)lVar5 - (int)param_3) + 1));
    _Dest[lVar5 + (1 - (longlong)param_3)] = '\0';
    param_3 = (char *)(lVar5 + 1);
  }
  pcVar8 = _Dest + -1;
  do {
    pcVar7 = pcVar8;
    pcVar8 = pcVar7 + 1;
  } while (pcVar7[1] != '\0');
  *(undefined2 *)(pcVar7 + 1) = DAT_1404368ec;
  pcVar7[3] = DAT_1404368ee;
  pcVar8 = _Dest + -1;
  do {
    pcVar7 = pcVar8 + 1;
    pcVar8 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  lVar5 = 0;
  do {
    cVar1 = param_3[lVar5];
    pcVar8[lVar5] = cVar1;
    lVar5 = lVar5 + 1;
  } while (cVar1 != '\0');
  if (_Dest == (char *)0x0) {
    return 0x40;
  }
  uVar6 = FUN_1402fa320(param_1,_Dest,param_5);
  if ((int)uVar6 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,_Dest);
    return uVar6 & 0xffffffff;
  }
  *param_4 = _Dest;
  return uVar6;
}

