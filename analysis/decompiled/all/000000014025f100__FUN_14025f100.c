// Function: FUN_14025f100
// Addr: 14025f100
// Size: 533 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14025f100(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  FUN_14015abd0(param_2,*(longlong *)(param_1 + 0x250) + _DAT_1404e8a40);
  FUN_1401e15d0(param_1,param_2);
  puVar3 = DAT_1404e8a38;
  for (puVar1 = (undefined8 *)*DAT_1404e8a38; puVar1 != puVar3; puVar1 = (undefined8 *)*puVar1) {
    plVar2 = (longlong *)param_2[1];
    if (plVar2 == (longlong *)param_2[2]) {
      uVar8 = (longlong)plVar2 - *param_2;
      lVar6 = (longlong)uVar8 >> 3;
      if (lVar6 == 0x1fffffffffffffff) goto LAB_14025f3f0;
      uVar5 = param_2[2] - *param_2 >> 3;
      if (uVar5 <= 0x1fffffffffffffff - (uVar5 >> 1)) {
        uVar7 = lVar6 + 1;
        uVar5 = (uVar5 >> 1) + uVar5;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (uVar7 < 0x2000000000000000) {
          uVar7 = uVar7 * 8;
          if (uVar7 == 0) {
            *(undefined8 **)(uVar8 & 0xfffffffffffffff8) = puVar1 + 6;
            lVar6 = *param_2;
            if (plVar2 == (longlong *)param_2[1]) {
                    /* WARNING: Subroutine does not return */
              FUN_1404211c0(0,lVar6,param_2[1] - lVar6);
            }
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(0,lVar6,(longlong)plVar2 - lVar6);
          }
          if (uVar7 < 0x1000) {
            func_0x00014028aff0();
            return;
          }
          if (uVar7 < uVar7 + 0x27) {
            func_0x00014028aff0(uVar7 + 0x27);
            return;
          }
        }
      }
      goto LAB_14025f3f6;
    }
    *plVar2 = (longlong)(puVar1 + 6);
    param_2[1] = param_2[1] + 8;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x248);
  puVar3 = (undefined8 *)*puVar1;
  while( true ) {
    if (puVar3 == puVar1) {
      return;
    }
    plVar2 = (longlong *)param_2[1];
    if (plVar2 == (longlong *)param_2[2]) break;
    *plVar2 = (longlong)(puVar3 + 6);
    param_2[1] = param_2[1] + 8;
    puVar3 = (undefined8 *)*puVar3;
  }
  uVar8 = (longlong)plVar2 - *param_2;
  lVar6 = (longlong)uVar8 >> 3;
  if (lVar6 == 0x1fffffffffffffff) {
LAB_14025f3f0:
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar5 = param_2[2] - *param_2 >> 3;
  if (uVar5 <= 0x1fffffffffffffff - (uVar5 >> 1)) {
    uVar7 = lVar6 + 1;
    uVar5 = (uVar5 >> 1) + uVar5;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    if (uVar7 < 0x2000000000000000) {
      uVar7 = uVar7 * 8;
      if (uVar7 == 0) {
        uVar5 = 0;
      }
      else if (uVar7 < 0x1000) {
        uVar5 = func_0x00014028aff0();
      }
      else {
        if (uVar7 + 0x27 <= uVar7) goto LAB_14025f3f6;
        lVar6 = func_0x00014028aff0(uVar7 + 0x27);
        if (lVar6 == 0) {
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          return;
        }
        uVar5 = lVar6 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar5 - 8) = lVar6;
      }
      *(undefined8 **)((uVar8 & 0xfffffffffffffff8) + uVar5) = puVar3 + 6;
      lVar6 = *param_2;
      if (plVar2 == (longlong *)param_2[1]) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(uVar5,lVar6,param_2[1] - lVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(uVar5,lVar6,(longlong)plVar2 - lVar6);
    }
  }
LAB_14025f3f6:
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

