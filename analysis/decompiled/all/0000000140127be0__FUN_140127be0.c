// Function: FUN_140127be0
// Addr: 140127be0
// Size: 281 bytes


void FUN_140127be0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *_Buf1;
  DWORD dwPriorityClass;
  ulonglong uVar7;
  bool bVar8;
  longlong local_28 [3];
  ulonglong local_10;
  
  bVar8 = false;
  lVar5 = FUN_140086de0(param_2,"processpriority","");
  if (*(char *)(lVar5 + 8) == '\x04') {
    bVar8 = true;
    uVar6 = FUN_140086de0(param_2,"processpriority","");
    _Buf1 = (undefined8 *)FUN_140085cc0(uVar6,local_28);
    plVar1 = _Buf1 + 2;
    if (0xf < (ulonglong)_Buf1[3]) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    if (*plVar1 == 0xb) {
      iVar4 = memcmp(_Buf1,"belownormal",0xb);
      if (iVar4 == 0) {
        uVar3 = 1;
        goto LAB_140127c6e;
      }
    }
  }
  uVar3 = 0;
LAB_140127c6e:
  *(undefined1 *)(param_1 + 0x191) = uVar3;
  if ((bVar8) && (0xf < local_10)) {
    uVar7 = local_10 + 1;
    lVar5 = local_28[0];
    if (0xfff < uVar7) {
      lVar5 = *(longlong *)(local_28[0] + -8);
      if (0x1f < (local_28[0] - lVar5) - 8U) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(lVar5,uVar7);
  }
  if (*(HANDLE *)(param_1 + 0x158) != (HANDLE)0xffffffffffffffff) {
    dwPriorityClass = 0x20;
    if (*(char *)(param_1 + 0x191) != '\0') {
      dwPriorityClass = 0x4000;
    }
    SetPriorityClass(*(HANDLE *)(param_1 + 0x158),dwPriorityClass);
  }
  FUN_140085440(param_2);
  return;
}

