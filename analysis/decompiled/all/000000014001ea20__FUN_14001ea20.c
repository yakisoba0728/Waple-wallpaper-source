// Function: FUN_14001ea20
// Addr: 14001ea20
// Size: 187 bytes


void FUN_14001ea20(undefined8 param_1,undefined8 param_2,HWND param_3)

{
  BOOL BVar1;
  int iVar2;
  HWND pHVar3;
  WCHAR local_18 [8];
  
  BVar1 = IsWindow(DAT_1404e52a0);
  if ((((BVar1 != 0) && (BVar1 = IsWindow(DAT_1404e5298), BVar1 != 0)) && (param_3 != DAT_1404e5298)
      ) && (param_3 != DAT_1404e52a0)) {
    GetClassNameW(param_3,local_18,8);
    iVar2 = FUN_1402c12c0(local_18,L"WorkerW");
    if (iVar2 == 0) {
      pHVar3 = GetWindow(param_3,2);
      if (pHVar3 != DAT_1404e52a0) {
        pHVar3 = GetWindow(param_3,2);
        pHVar3 = GetWindow(pHVar3,2);
        if (pHVar3 != DAT_1404e52a0) {
          return;
        }
      }
      ShowWindow(param_3,0);
    }
  }
  return;
}

