// Function: FUN_1402d0fe0
// Addr: 1402d0fe0
// Size: 2 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d0fe0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong alStackX_10 [3];
  
  alStackX_10[0] = 0;
  iVar2 = (*_UNK_1404264e0)(0,L"mscoree.dll",alStackX_10,param_4,0xfffffffffffffffe);
  if ((iVar2 != 0) && (lVar1 = (*DAT_140426730)(alStackX_10[0],"CorExitProcess"), lVar1 != 0)) {
    thunk_FUN_140420d40(param_1);
  }
  if (alStackX_10[0] != 0) {
    (*DAT_140426728)();
  }
  return;
}

