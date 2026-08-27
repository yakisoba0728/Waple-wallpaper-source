// Function: FUN_1402eeef0
// Addr: 1402eeef0
// Size: 281 bytes


undefined8
FUN_1402eeef0(longlong *param_1,undefined8 param_2,char *param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  char cVar1;
  size_t sVar2;
  char *_Dest;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  
  sVar2 = strlen(param_3);
  iVar6 = (int)sVar2 + 0xe;
  if (iVar6 < 1) {
    _Dest = (char *)0x0;
    if (iVar6 < 0) {
      return 0x40;
    }
  }
  else {
    _Dest = (char *)(**(code **)(*param_1 + 8))(*param_1);
    if (_Dest == (char *)0x0) {
      return 0x40;
    }
  }
  lVar3 = FUN_1402edd20(param_3);
  if (lVar3 == 0) {
    *_Dest = '\0';
  }
  else {
    strncpy(_Dest,param_3,(ulonglong)(((int)lVar3 - (int)param_3) + 1));
    _Dest[lVar3 + (1 - (longlong)param_3)] = '\0';
    param_3 = (char *)(lVar3 + 1);
  }
  pcVar5 = _Dest + -1;
  do {
    pcVar4 = pcVar5;
    pcVar5 = pcVar4 + 1;
  } while (pcVar4[1] != '\0');
  *(undefined8 *)(pcVar4 + 1) = s_resource_frk__140436910._0_8_;
  *(undefined4 *)(pcVar4 + 9) = s_resource_frk__140436910._8_4_;
  *(undefined2 *)(pcVar4 + 0xd) = s_resource_frk__140436910._12_2_;
  pcVar5 = _Dest + -1;
  do {
    pcVar4 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  lVar3 = 0;
  do {
    cVar1 = param_3[lVar3];
    pcVar5[lVar3] = cVar1;
    lVar3 = lVar3 + 1;
  } while (cVar1 != '\0');
  if (_Dest == (char *)0x0) {
    return 0x40;
  }
  *param_4 = _Dest;
  *param_5 = 0;
  return 0;
}

