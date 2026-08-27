// Function: FUN_140327d30
// Addr: 140327d30
// Size: 138 bytes


undefined8 FUN_140327d30(longlong param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  char *_Str2;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  iVar2 = *(int *)(param_1 + 0x240);
  if (0 < iVar2) {
    lVar3 = *(longlong *)(param_1 + 0x248);
    uVar7 = 0;
    cVar1 = *param_2;
    do {
      _Str2 = *(char **)(lVar3 + uVar7 * 8);
      if (cVar1 == *_Str2) {
        iVar4 = strcmp(param_2,_Str2);
        if (iVar4 == 0) {
          uVar5 = FUN_1402c0f34(*(undefined8 *)(*(longlong *)(param_1 + 0x250) + uVar7 * 8),0,10);
          return uVar5;
        }
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < iVar2);
  }
  return 0;
}

