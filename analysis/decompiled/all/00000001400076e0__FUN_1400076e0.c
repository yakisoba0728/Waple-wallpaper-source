// Function: FUN_1400076e0
// Addr: 1400076e0
// Size: 64 bytes


undefined8 FUN_1400076e0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  
  if (DAT_1404e7f58 == '\0') {
    LOCK();
    DAT_1404e7f58 = '\x01';
    UNLOCK();
    cVar1 = FUN_140007000(param_1,param_2,param_1);
    if (cVar1 == '\0') {
      FUN_140007000();
    }
    lVar2 = (*DAT_140426738)(L"steammdmp64.dll");
    if ((lVar2 == 0) && (lVar2 = (*DAT_140426708)(L"steammdmp64.dll",0,0x1000), lVar2 == 0)) {
      return 0;
    }
    pcVar3 = (code *)(*DAT_140426730)(lVar2,"WriteSteamMiniDump");
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(*(undefined4 *)*param_1,param_1);
    }
  }
  return 0;
}

