// Function: FUN_140178870
// Addr: 140178870
// Size: 730 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140178870(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  code *pcVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  FUN_14015ab00(param_2,*(longlong *)(param_1 + 0x58) + _DAT_1404e8150);
  puVar2 = DAT_1404e8148;
  for (puVar1 = (undefined8 *)*DAT_1404e8148; puVar1 != puVar2; puVar1 = (undefined8 *)*puVar1) {
    plVar8 = (longlong *)param_2[1];
    if (plVar8 == (longlong *)param_2[2]) {
      uVar9 = (longlong)plVar8 - *param_2;
      lVar6 = (longlong)uVar9 >> 3;
      if (lVar6 == 0x1fffffffffffffff) goto LAB_140178b40;
      uVar5 = param_2[2] - *param_2 >> 3;
      if (0x1fffffffffffffff - (uVar5 >> 1) < uVar5) goto LAB_140178b46;
      uVar10 = lVar6 + 1;
      uVar5 = (uVar5 >> 1) + uVar5;
      uVar7 = uVar10;
      if (uVar10 <= uVar5) {
        uVar7 = uVar5;
      }
      if (0x1fffffffffffffff < uVar7) goto LAB_140178b46;
      uVar5 = uVar7 * 8;
      if (uVar5 == 0) {
        uVar5 = 0;
      }
      else if (uVar5 < 0x1000) {
        uVar5 = FUN_14028af20();
      }
      else {
        if (uVar5 + 0x27 <= uVar5) goto LAB_140178b46;
        lVar6 = FUN_14028af20(uVar5 + 0x27);
        if (lVar6 == 0) goto LAB_140178b24;
        uVar5 = lVar6 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar5 - 8) = lVar6;
      }
      uVar9 = uVar9 & 0xfffffffffffffff8;
      *(undefined8 **)(uVar9 + uVar5) = puVar1 + 6;
      plVar3 = (longlong *)*param_2;
      if (plVar8 == (longlong *)param_2[1]) {
        lVar6 = param_2[1] - (longlong)plVar3;
        uVar9 = uVar5;
        plVar8 = plVar3;
      }
      else {
        FUN_1404210f0(uVar5,plVar3,(longlong)plVar8 - (longlong)plVar3);
        uVar9 = uVar9 + 8 + uVar5;
        lVar6 = param_2[1] - (longlong)plVar8;
      }
      FUN_1404210f0(uVar9,plVar8,lVar6);
      FUN_1400384c0(param_2,uVar5,uVar10,uVar7);
    }
    else {
      *plVar8 = (longlong)(puVar1 + 6);
      param_2[1] = param_2[1] + 8;
    }
  }
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  puVar2 = (undefined8 *)*puVar1;
  do {
    if (puVar2 == puVar1) {
      return;
    }
    plVar8 = (longlong *)param_2[1];
    if (plVar8 == (longlong *)param_2[2]) {
      uVar9 = (longlong)plVar8 - *param_2;
      lVar6 = (longlong)uVar9 >> 3;
      if (lVar6 == 0x1fffffffffffffff) {
LAB_140178b40:
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      uVar5 = param_2[2] - *param_2 >> 3;
      if (0x1fffffffffffffff - (uVar5 >> 1) < uVar5) {
LAB_140178b46:
                    /* WARNING: Subroutine does not return */
        FUN_140017370();
      }
      uVar7 = lVar6 + 1;
      uVar5 = (uVar5 >> 1) + uVar5;
      uVar10 = uVar7;
      if (uVar7 <= uVar5) {
        uVar10 = uVar5;
      }
      if (0x1fffffffffffffff < uVar10) goto LAB_140178b46;
      uVar5 = uVar10 * 8;
      if (uVar5 == 0) {
        uVar5 = 0;
      }
      else if (uVar5 < 0x1000) {
        uVar5 = FUN_14028af20();
      }
      else {
        if (uVar5 + 0x27 <= uVar5) goto LAB_140178b46;
        lVar6 = FUN_14028af20(uVar5 + 0x27);
        if (lVar6 == 0) {
LAB_140178b24:
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          return;
        }
        uVar5 = lVar6 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar5 - 8) = lVar6;
      }
      uVar9 = uVar9 & 0xfffffffffffffff8;
      *(undefined8 **)(uVar9 + uVar5) = puVar2 + 6;
      plVar3 = (longlong *)*param_2;
      if (plVar8 == (longlong *)param_2[1]) {
        lVar6 = param_2[1] - (longlong)plVar3;
        uVar9 = uVar5;
        plVar8 = plVar3;
      }
      else {
        FUN_1404210f0(uVar5,plVar3,(longlong)plVar8 - (longlong)plVar3);
        uVar9 = uVar9 + 8 + uVar5;
        lVar6 = param_2[1] - (longlong)plVar8;
      }
      FUN_1404210f0(uVar9,plVar8,lVar6);
      FUN_1400384c0(param_2,uVar5,uVar7,uVar10);
    }
    else {
      *plVar8 = (longlong)(puVar2 + 6);
      param_2[1] = param_2[1] + 8;
    }
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
}

