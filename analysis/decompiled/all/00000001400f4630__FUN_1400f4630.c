// Function: FUN_1400f4630
// Addr: 1400f4630
// Size: 472 bytes


undefined8 * FUN_1400f4630(void)

{
  undefined *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [288];
  
  puVar7 = auStack_148;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e91c8) &&
     (FUN_14028b140(&DAT_1404e91c8), DAT_1404e91c8 == -1)) {
    DAT_1404e91e0 = 0;
    DAT_1404e91d0 = 0;
    DAT_1404e91d8 = 0;
    lVar4 = FUN_14028af20(600);
    uVar3 = DAT_1404e91d8;
    lVar8 = lVar4;
    uVar6 = DAT_1404e91d8;
    for (uVar5 = DAT_1404e91d0; DAT_1404e91d8 = uVar6, uVar5 != uVar3; uVar5 = uVar5 + 0x28) {
      FUN_1400e6b50(lVar8,uVar5);
      lVar8 = lVar8 + 0x28;
      uVar6 = DAT_1404e91d8;
    }
    uVar5 = DAT_1404e91d0;
    if (DAT_1404e91d0 != 0) {
      for (; uVar5 != uVar6; uVar5 = uVar5 + 0x28) {
        FUN_1400de1e0(uVar5);
      }
      uVar5 = DAT_1404e91d0;
      puVar7 = auStack_148;
      if (0xfff < (ulonglong)(((longlong)(DAT_1404e91e0 - DAT_1404e91d0) / 0x28) * 0x28)) {
        uVar5 = *(ulonglong *)(DAT_1404e91d0 - 8);
        uVar6 = (DAT_1404e91d0 - uVar5) - 8;
        puVar7 = auStack_148;
        if (0x1f < uVar6) {
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          uVar5 = uVar6;
          puVar7 = auStack_140;
        }
      }
      *(undefined8 *)(puVar7 + -8) = 0x1400f478c;
      thunk_FUN_14028af80(uVar5);
    }
    DAT_1404e91e0 = lVar4 + 600;
    lVar8 = 0;
    DAT_1404e91d0 = lVar4;
    DAT_1404e91d8 = lVar4;
    do {
      puVar1 = (&PTR_s_float_140482eb0)[lVar8 * 2];
      *(undefined8 *)(puVar7 + -8) = 0x1400f47cc;
      uVar9 = FUN_1400f8590(puVar7 + 0x20,"(\\w+)[\\s]+%s[\\s]+(\\w+)(\\[[\\d\\w]+\\])?",puVar1);
      if (DAT_1404e91d8 == DAT_1404e91e0) {
        *(undefined8 *)(puVar7 + -8) = 0x1400f4803;
        FUN_1400f9640(uVar9,DAT_1404e91d8,puVar7 + 0x20);
      }
      else {
        *(undefined8 *)(puVar7 + -8) = 0x1400f47e9;
        FUN_1400de280(DAT_1404e91d8,puVar7 + 0x20);
        DAT_1404e91d8 = DAT_1404e91d8 + 0x28;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0xf);
    *(undefined8 *)(puVar7 + -8) = 0x1400f4684;
    FUN_14028b410(&LAB_1404248f0);
    *(undefined8 *)(puVar7 + -8) = 0x1400f4690;
    _Init_thread_footer(&DAT_1404e91c8);
  }
  return &DAT_1404e91d0;
}

