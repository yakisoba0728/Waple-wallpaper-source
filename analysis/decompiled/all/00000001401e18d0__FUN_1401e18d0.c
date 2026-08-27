// Function: FUN_1401e18d0
// Addr: 1401e18d0
// Size: 443 bytes


void FUN_1401e18d0(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  FUN_14015ab00(param_2,DAT_1404e82a0);
  puVar5 = DAT_1404e8298;
  puVar2 = (undefined8 *)*DAT_1404e8298;
  do {
    if (puVar2 == puVar5) {
      return;
    }
    plVar8 = (longlong *)param_2[1];
    if (plVar8 == (longlong *)param_2[2]) {
      uVar11 = (longlong)plVar8 - *param_2;
      lVar7 = (longlong)uVar11 >> 3;
      if (lVar7 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      uVar6 = param_2[2] - *param_2 >> 3;
      puVar9 = auStack_48;
      if (0x1fffffffffffffff - (uVar6 >> 1) < uVar6) {
LAB_1401e1a81:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar9 + -8) = &UNK_1401e1a86;
        FUN_140017370();
      }
      uVar1 = lVar7 + 1;
      uVar6 = (uVar6 >> 1) + uVar6;
      uVar10 = uVar1;
      if (uVar1 <= uVar6) {
        uVar10 = uVar6;
      }
      puVar9 = auStack_48;
      if (0x1fffffffffffffff < uVar10) goto LAB_1401e1a81;
      uVar6 = uVar10 * 8;
      if (uVar6 == 0) {
        uVar6 = 0;
      }
      else if (uVar6 < 0x1000) {
        uVar6 = FUN_14028af20();
      }
      else {
        puVar9 = auStack_48;
        if (uVar6 + 0x27 <= uVar6) goto LAB_1401e1a81;
        lVar7 = FUN_14028af20(uVar6 + 0x27);
        if (lVar7 == 0) {
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          puVar9 = auStack_40;
          goto LAB_1401e1a81;
        }
        uVar6 = lVar7 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar6 - 8) = lVar7;
      }
      uVar11 = uVar11 & 0xfffffffffffffff8;
      *(undefined8 **)(uVar11 + uVar6) = puVar2 + 6;
      plVar3 = (longlong *)*param_2;
      if (plVar8 == (longlong *)param_2[1]) {
        lVar7 = param_2[1] - (longlong)plVar3;
        uVar11 = uVar6;
        plVar8 = plVar3;
      }
      else {
        FUN_1404210f0(uVar6,plVar3,(longlong)plVar8 - (longlong)plVar3);
        uVar11 = uVar11 + 8 + uVar6;
        lVar7 = param_2[1] - (longlong)plVar8;
      }
      FUN_1404210f0(uVar11,plVar8,lVar7);
      FUN_1400384c0(param_2,uVar6,uVar1,uVar10);
    }
    else {
      *plVar8 = (longlong)(puVar2 + 6);
      param_2[1] = param_2[1] + 8;
    }
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
}

