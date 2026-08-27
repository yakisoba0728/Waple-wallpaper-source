// Function: FUN_140006060
// Addr: 140006060
// Size: 150 bytes


void FUN_140006060(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar3 = DAT_1404e52b8;
  plVar2 = (longlong *)FUN_140086de0(param_1,"loglevel","");
  if ((char)*(uint *)(plVar2 + 1) == '\x04') {
    lVar4 = *plVar2;
    if ((lVar4 != 0) && ((*(uint *)(plVar2 + 1) >> 8 & 1) != 0)) {
      lVar4 = lVar4 + 4;
    }
    iVar1 = FUN_1402c10d0(lVar4,"error");
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    else {
      iVar1 = FUN_1402c10d0(lVar4,"verbose");
      uVar3 = 0;
      if (iVar1 == 0) {
        uVar3 = 2;
      }
    }
  }
  DAT_1404e5294 = 1;
  DAT_1404e52b8 = uVar3;
  FUN_140085440(param_1);
  return;
}

