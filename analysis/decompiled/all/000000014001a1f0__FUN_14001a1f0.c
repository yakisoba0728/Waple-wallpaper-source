// Function: FUN_14001a1f0
// Addr: 14001a1f0
// Size: 278 bytes


void FUN_14001a1f0(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  uint uVar6;
  
  uVar5 = FUN_140086de0(param_1,"overridewallpaper","");
  cVar2 = FUN_140086300(uVar5);
  uVar5 = FUN_140086de0(param_1,"overridelockscreen","");
  cVar3 = FUN_140086300(uVar5);
  uVar5 = FUN_140086de0(param_1,"slideshowkiller","");
  cVar4 = FUN_140086300(uVar5);
  if (cVar4 == '\0' && (cVar2 == '\0' && cVar3 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    if (cVar2 != '\0') {
      uVar6 = DAT_1404df540 | 0x4000;
      goto LAB_14001a276;
    }
  }
  uVar6 = DAT_1404df540 & 0xffffbfff;
LAB_14001a276:
  DAT_1404df540 = uVar6 | 0x8000;
  if (cVar3 == '\0') {
    DAT_1404df540 = uVar6 & 0xffff7fff;
  }
  if (bVar1) {
    if (DAT_1404e8ba8 == (HWINEVENTHOOK)0x0) {
      DAT_1404e8ba8 = SetWinEventHook(0x800a,0x800b,(HMODULE)0x0,FUN_14001ea20,0,0,2);
    }
  }
  else if (DAT_1404e8ba8 != (HWINEVENTHOOK)0x0) {
    UnhookWinEvent(DAT_1404e8ba8);
    DAT_1404e8ba8 = (HWINEVENTHOOK)0x0;
  }
  return;
}

