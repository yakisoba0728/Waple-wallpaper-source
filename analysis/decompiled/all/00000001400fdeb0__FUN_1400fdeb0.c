// Function: FUN_1400fdeb0
// Addr: 1400fdeb0
// Size: 1002 bytes


undefined8 * FUN_1400fdeb0(undefined8 *param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  HMODULE hLibModule;
  LPCWSTR lpCaption;
  LPCWSTR lpText;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined2 local_48;
  undefined6 uStack_46;
  undefined8 local_38;
  ulonglong local_30;
  longlong local_28 [3];
  ulonglong local_10;
  
  FUN_14010a0e0();
  *(undefined8 *)((longlong)param_1 + 0x17c) = 8;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x31) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3f800000;
  param_1[0x32] = 0x3f000000;
  *param_1 = &PTR_FUN_140488970;
  param_1[0x2b] = &PTR_LAB_140488a10;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0x3f800000;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0xf;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0xf;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  lVar3 = FUN_14028af20(0x18);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  param_1[0x45] = lVar3;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 7;
  param_1[0x4b] = 8;
  *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
  FUN_14004f190(param_1 + 0x47,0x10,param_1[0x45]);
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0xf;
  *(undefined1 *)(param_1 + 0x50) = 0;
  FUN_1400316b0(param_1 + 0x54);
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0xf;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 2;
  *(undefined4 *)((longlong)param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x6e) = 10;
  FUN_1401031f0(param_1 + 0x4c,"mfEngine");
  FUN_140103450(param_1 + 0x4c);
  FUN_1401031f0(param_1 + 0x4c,&DAT_1404884d0);
  puVar5 = auStack_68;
  if (DAT_1404e7e8c != '\0') goto LAB_1400fe267;
  DAT_1404e7e8c = '\x01';
  hLibModule = LoadLibraryW(L"mfplat.dll");
  puVar5 = auStack_68;
  if (hLibModule == (HMODULE)0x0) {
    *(uint *)((longlong)param_1 + 0x17c) = *(uint *)((longlong)param_1 + 0x17c) | 0x40;
    lpCaption = (LPCWSTR)FUN_140097640(&DAT_1404e6d80,local_28,"core_msgboxtitle_error");
    if (7 < *(ulonglong *)(lpCaption + 0xc)) {
      lpCaption = *(LPCWSTR *)lpCaption;
    }
    lpText = (LPCWSTR)FUN_140097640(&DAT_1404e6d80,&local_48,
                                    "core_msgbox_media_feature_pack_missing");
    if (7 < *(ulonglong *)(lpText + 0xc)) {
      lpText = *(LPCWSTR *)lpText;
    }
    MessageBoxW((HWND)0x0,lpText,lpCaption,0x10);
    if (local_30 < 8) {
LAB_1400fe200:
      local_38 = 0;
      local_30 = 7;
      local_48 = 0;
      puVar5 = auStack_68;
      if (local_10 < 8) goto LAB_1400fe267;
      uVar4 = local_10 * 2 + 2;
      lVar3 = local_28[0];
      if (0xfff < uVar4) {
        lVar3 = *(longlong *)(local_28[0] + -8);
        if (0x1f < (local_28[0] - lVar3) - 8U) goto LAB_1400fe257;
        uVar4 = local_10 * 2 + 0x29;
      }
      thunk_FUN_14028af80(lVar3,uVar4);
      puVar5 = auStack_68;
      goto LAB_1400fe267;
    }
    lVar2 = CONCAT62(uStack_46,local_48);
    uVar4 = local_30 * 2 + 2;
    lVar3 = lVar2;
    if (uVar4 < 0x1000) {
LAB_1400fe1fb:
      thunk_FUN_14028af80(lVar3,uVar4);
      goto LAB_1400fe200;
    }
    lVar3 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar3) - 8U < 0x20) {
      uVar4 = local_30 * 2 + 0x29;
      goto LAB_1400fe1fb;
    }
LAB_1400fe257:
    pcVar1 = (code *)swi(0x29);
    hLibModule = (HMODULE)(*pcVar1)(5);
    puVar5 = auStack_60;
  }
  *(undefined8 *)(puVar5 + -8) = 0x1400fe267;
  FreeLibrary(hLibModule);
LAB_1400fe267:
  if (DAT_1404e7e8d == '\0') {
    *(undefined8 *)(puVar5 + -8) = 0x1400fe280;
    MFStartup(0x20070,1);
    DAT_1404e7e8d = '\x01';
  }
  return param_1;
}

