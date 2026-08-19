// Function: FUN_140062de0
// Addr: 140062de0
// Size: 55 bytes


undefined4 FUN_140062de0(void)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (DAT_1404e8df0 != 0) {
    return 1;
  }
  lVar3 = (*DAT_140426708)(L"cloneextensions64.dll",0,0x1000);
  if (lVar3 == 0) {
    uVar1 = (*DAT_1404266a8)();
    FUN_140098830("Error loading library %S (%i).\n",L"cloneextensions64.dll",uVar1);
    DAT_1404e8df0 = lVar3;
    return 0;
  }
  DAT_1404e8df0 = lVar3;
  pcRam00000001404e8df8 = (code *)(*DAT_140426730)(lVar3,"InitCloneSystem");
  DAT_1404e8e00 = (*DAT_140426730)(DAT_1404e8df0,"ShutdownCloneSystem");
  lRam00000001404e8e08 = (*DAT_140426730)(DAT_1404e8df0,"CreateClone");
  DAT_1404e8e10 = (*DAT_140426730)(DAT_1404e8df0,"DestroyClone");
  if ((((pcRam00000001404e8df8 != (code *)0x0) && (DAT_1404e8e00 != 0)) &&
      (lRam00000001404e8e08 != 0)) && (DAT_1404e8e10 != 0)) {
    iVar2 = (*pcRam00000001404e8df8)();
    if (-1 < iVar2) {
      return 1;
    }
  }
  (*DAT_140426728)(DAT_1404e8df0);
  DAT_1404e8df0 = 0;
  return 0;
}

