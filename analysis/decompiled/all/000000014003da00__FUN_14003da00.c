// Function: FUN_14003da00
// Addr: 14003da00
// Size: 29 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003da00(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  float fVar5;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  longlong lStack_10;
  
  if (DAT_1404df660 == param_1) {
    return;
  }
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  lStack_10 = 0;
  lStack_10 = (*DAT_1404267f8)(L"Progman",0);
  if (lStack_10 == 0) {
    return;
  }
  uVar3 = (*DAT_1404269b0)();
  (*DAT_1404269b8)(uVar3,&DAT_14003c830,&uStack_28);
  if ((10 < DAT_1404e5360) && (iVar1 = (*DAT_140426af0)(uStack_18), iVar1 == 0)) {
    uStack_18 = (*DAT_1404269c0)(lStack_10,0,L"WorkerW",0);
    iVar1 = (*DAT_140426af0)(uStack_18);
    if (iVar1 != 0) {
      uStack_28 = (*DAT_1404269c0)(lStack_10,0,L"SHELLDLL_DefView",0);
      uStack_20 = (*DAT_1404269c0)(uStack_28,0,L"SysListView32",0);
    }
  }
  iVar1 = (*DAT_140426af0)(uStack_28);
  if (iVar1 == 0) {
    return;
  }
  fVar5 = (float)func_0x00014041a070(((float)param_1 / DAT_1404929c8) * DAT_1404929dc);
  uVar4 = (uint)fVar5;
  if ((int)uVar4 < 0xff) {
    if ((int)uVar4 < 1) {
      uVar4 = 1;
      uVar2 = (*DAT_1404269d8)();
    }
    else {
      uVar2 = (*DAT_1404269d8)();
      if (0xfd < (int)uVar4) goto code_r0x00014003db65;
    }
    (*DAT_140426990)(uStack_28,0xffffffec,uVar2 | 0x80000);
    uVar4 = uVar4 & 0xff;
  }
  else {
    uVar2 = (*DAT_1404269d8)(uStack_28,0xffffffec);
code_r0x00014003db65:
    if (DAT_1404e5360 < 0xb) {
      (*DAT_140426990)(uStack_28,0xffffffec,uVar2 & 0xfff7ffff);
      DAT_1404df660 = param_1;
      return;
    }
    uVar4 = 0xff;
  }
  (*_UNK_140426840)(uStack_28,0,uVar4,2);
  (*_UNK_140426970)(uStack_28,0,0,0,0,0,0,0,0);
  DAT_1404df660 = param_1;
  return;
}

