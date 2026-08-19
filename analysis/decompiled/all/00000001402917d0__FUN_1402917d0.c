// Function: FUN_1402917d0
// Addr: 1402917d0
// Size: 20 bytes


longlong FUN_1402917d0(char param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 local_res8 [8];
  
  func_0x000140291580(local_res8,0);
  lVar1 = DAT_1404e3db8;
  if (DAT_1404e3db8 == 0) {
    lVar1 = func_0x000140291a80(0);
    if (cRam00000001404e3dc0 == '\0') {
      cRam00000001404e3dc0 = '\x01';
      FUN_140294680(FUN_140291b30);
    }
    DAT_1404e3db8 = lVar1;
    *(undefined4 *)(lVar1 + 0x20) = 0x3f;
    if (*(undefined **)(lVar1 + 0x28) != &DAT_14048f3ac) {
      if (*(undefined **)(lVar1 + 0x28) != (undefined *)0x0) {
        func_0x0001402bf8e0();
      }
      *(undefined8 *)(lVar1 + 0x28) = 0;
      puVar2 = (undefined2 *)thunk_FUN_1402da070(2);
      if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0x43;
      }
      *(undefined2 **)(lVar1 + 0x28) = puVar2;
    }
    (*(code *)PTR_FUN_140426bb8)(lVar1);
    lRam00000001404e3d68 = lVar1;
    lRam00000001404e3d98 = lVar1;
  }
  if (param_1 != '\0') {
    (*(code *)PTR_FUN_140426bb8)(lVar1);
  }
  FUN_140291620(local_res8);
  return lVar1;
}

