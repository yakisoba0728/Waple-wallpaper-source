// Function: FUN_1400fe9f0
// Addr: 1400fe9f0
// Size: 412 bytes


uint FUN_1400fe9f0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  uint uVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  undefined8 *puVar4;
  INT_PTR IVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  longlong *local_res20;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  longlong *local_48;
  undefined1 local_40 [8];
  longlong local_38 [3];
  ulonglong local_20;
  
  puVar8 = auStack_68;
  local_48 = (longlong *)0x0;
  local_res20 = (longlong *)0x0;
  hModule = LoadLibraryW(L"mfreadwrite.dll");
  if (hModule == (HMODULE)0x0) {
    return 0;
  }
  pFVar3 = GetProcAddress(hModule,"MFCreateSourceReaderFromURL");
  if (pFVar3 == (FARPROC)0x0) {
LAB_1400feb32:
    uVar2 = 0x80004005;
    *(undefined8 *)(puVar8 + -8) = 0x1400feb40;
    FreeLibrary(hModule);
  }
  else {
    puVar4 = (undefined8 *)FUN_140005880(local_38,param_1 + 0x100);
    if (7 < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    IVar5 = (*pFVar3)(puVar4,0,&local_48);
    uVar2 = (uint)IVar5;
    if (7 < local_20) {
      uVar7 = local_20 * 2 + 2;
      lVar6 = local_38[0];
      if (0xfff < uVar7) {
        lVar6 = *(longlong *)(local_38[0] + -8);
        if (0x1f < (local_38[0] - lVar6) - 8U) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar8 = auStack_60;
          goto LAB_1400feb32;
        }
        uVar7 = local_20 * 2 + 0x29;
      }
      thunk_FUN_14028af80(lVar6,uVar7);
    }
    FreeLibrary(hModule);
    puVar8 = auStack_68;
    if (-1 < (int)uVar2) {
      uVar2 = (**(code **)(*local_48 + 0x30))(local_48,0xfffffffc,&local_res20);
      puVar8 = auStack_68;
      if (-1 < (int)uVar2) {
        uVar2 = (**(code **)(*local_res20 + 0x40))(local_res20,&DAT_14042c2e0,local_40);
        puVar8 = auStack_68;
        if (-1 < (int)uVar2) {
          *param_2 = local_40._4_4_;
          *param_3 = local_40._0_4_;
          puVar8 = auStack_68;
        }
      }
    }
  }
  if (*(longlong **)(puVar8 + 0x88) != (longlong *)0x0) {
    pcVar1 = *(code **)(**(longlong **)(puVar8 + 0x88) + 0x10);
    *(undefined8 *)(puVar8 + -8) = 0x1400feb53;
    (*pcVar1)();
    *(undefined8 *)(puVar8 + 0x88) = 0;
  }
  if (*(longlong **)(puVar8 + 0x20) != (longlong *)0x0) {
    pcVar1 = *(code **)(**(longlong **)(puVar8 + 0x20) + 0x10);
    *(undefined8 *)(puVar8 + -8) = 0x1400feb6f;
    (*pcVar1)();
  }
  return uVar2 >> 0x1f ^ 1;
}

