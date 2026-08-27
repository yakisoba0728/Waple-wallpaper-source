// Function: FUN_140415c20
// Addr: 140415c20
// Size: 350 bytes


longlong FUN_140415c20(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  char *_Str2;
  bool bVar6;
  
  lVar2 = FUN_14039ced0();
  if (*(char *)(lVar2 + 4) == '\0') goto LAB_140415d1b;
  pcVar3 = DAT_1404e5230;
  if (DAT_1404e5230 == (char *)0x0) {
    pcVar3 = (char *)common_getenv<>("HB_FONT_FUNCS");
    _Str2 = "";
    if (pcVar3 != (char *)0x0) {
      _Str2 = pcVar3;
    }
    LOCK();
    bVar6 = DAT_1404e5230 != (char *)0x0;
    pcVar3 = _Str2;
    if (bVar6) {
      pcVar3 = DAT_1404e5230;
    }
    DAT_1404e5230 = pcVar3;
    UNLOCK();
    if (bVar6) {
      _Str2 = DAT_1404e5230;
    }
    pcVar3 = _Str2;
    if (_Str2 != (char *)0x0) goto LAB_140415ca6;
  }
  else {
LAB_140415ca6:
    _Str2 = (char *)0x0;
    if (*pcVar3 != '\0') {
      _Str2 = pcVar3;
    }
  }
  bVar6 = true;
  while( true ) {
    uVar5 = 0;
    do {
      if (_Str2 == (char *)0x0) {
        (*(code *)(&PTR_FUN_14046fe90)[uVar5 * 3])(lVar2);
        if (*(undefined4 **)(lVar2 + 0x90) != &DAT_1404df428) goto LAB_140415d1b;
      }
      else {
        iVar1 = strcmp(&DAT_14046fe80 + uVar5 * 0x18,_Str2);
        if (iVar1 == 0) {
          (*(code *)(&PTR_FUN_14046fe90)[uVar5 * 3])(lVar2);
          goto LAB_140415d1b;
        }
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < 3);
    if (!bVar6) break;
    bVar6 = false;
    _Str2 = (char *)0x0;
  }
LAB_140415d1b:
  if (param_1 != 0) {
    if (*(ushort *)(param_1 + 0x12) != 0) {
      if (*(char *)(lVar2 + 4) == '\0') {
        return lVar2;
      }
      iVar1 = *(ushort *)(param_1 + 0x12) - 1;
      if (*(int *)(lVar2 + 0x74) == iVar1) {
        return lVar2;
      }
      *(int *)(lVar2 + 0x74) = iVar1;
    }
    FUN_140416580(lVar2,0,0);
  }
  return lVar2;
}

