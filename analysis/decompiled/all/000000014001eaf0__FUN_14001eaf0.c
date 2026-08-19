// Function: FUN_14001eaf0
// Addr: 14001eaf0
// Size: 187 bytes


void FUN_14001eaf0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 local_18 [16];
  
  iVar3 = (*DAT_140426af0)(DAT_1404e5370);
  if ((((iVar3 != 0) && (iVar3 = (*DAT_140426af0)(DAT_1404e5368), iVar3 != 0)) &&
      (param_3 != DAT_1404e5368)) && (param_3 != DAT_1404e5370)) {
    (*DAT_140426a90)(param_3,local_18,8);
    iVar3 = FUN_1402c1390(local_18,L"WorkerW");
    if (iVar3 == 0) {
      lVar1 = (*DAT_140426a88)(param_3,2);
      if (lVar1 != DAT_1404e5370) {
        uVar2 = (*DAT_140426a88)(param_3,2);
        lVar1 = (*DAT_140426a88)(uVar2,2);
        if (lVar1 != DAT_1404e5370) {
          return;
        }
      }
      (*DAT_140426af8)(param_3,0);
    }
  }
  return;
}

