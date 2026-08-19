// Function: FUN_140128560
// Addr: 140128560
// Size: 569 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140128560(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e93b8) &&
     (FUN_14028b210(&DAT_1404e93b8), DAT_1404e93b8 == -1)) {
    (*DAT_1404266f8)();
    FUN_14028b1a0(&DAT_1404e93b8);
  }
  if (*(int *)(param_1 + 0x168) != 0) {
    if (*(longlong *)(param_1 + 0x160) != 0) {
      (*DAT_140426ae0)();
      *(undefined8 *)(param_1 + 0x160) = 0;
    }
    lVar4 = DAT_1404e8f28;
    plVar3 = DAT_1404e8f18;
    lVar2 = DAT_1404e8ee8;
    plVar8 = DAT_1404e8ed8;
    uVar6 = DAT_1404e8f00 &
            (((((ulonglong)*(byte *)(param_1 + 0x168) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)*(byte *)(param_1 + 0x169)) * 0x100000001b3 ^
             (ulonglong)*(byte *)(param_1 + 0x16a)) * 0x100000001b3 ^
            (ulonglong)*(byte *)(param_1 + 0x16b)) * 0x100000001b3;
    plVar5 = *(longlong **)(DAT_1404e8ee8 + 8 + uVar6 * 0x10);
    if (plVar5 == DAT_1404e8ed8) {
LAB_140128657:
      plVar5 = (longlong *)0x0;
    }
    else {
      iVar1 = (int)plVar5[2];
      while (*(int *)(param_1 + 0x168) != iVar1) {
        if (plVar5 == *(longlong **)(DAT_1404e8ee8 + uVar6 * 0x10)) goto LAB_140128657;
        plVar5 = (longlong *)plVar5[1];
        iVar1 = (int)plVar5[2];
      }
    }
    plVar7 = DAT_1404e8ed8;
    if (plVar5 != (longlong *)0x0) {
      plVar7 = plVar5;
    }
    if (plVar7 != DAT_1404e8ed8) {
      uVar6 = (((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 & DAT_1404e8f00;
      plVar5 = *(longlong **)(DAT_1404e8ee8 + uVar6 * 0x10);
      if (*(longlong **)(DAT_1404e8ee8 + 8 + uVar6 * 0x10) == plVar7) {
        if (plVar5 == plVar7) {
          *(longlong **)(DAT_1404e8ee8 + uVar6 * 0x10) = DAT_1404e8ed8;
          *(longlong **)(lVar2 + 8 + uVar6 * 0x10) = plVar8;
        }
        else {
          *(longlong *)(DAT_1404e8ee8 + 8 + uVar6 * 0x10) = plVar7[1];
        }
      }
      else if (plVar5 == plVar7) {
        *(longlong *)(DAT_1404e8ee8 + uVar6 * 0x10) = *plVar7;
      }
      lVar2 = *plVar7;
      _DAT_1404e8ee0 = _DAT_1404e8ee0 + -1;
      *(longlong *)plVar7[1] = lVar2;
      *(longlong *)(lVar2 + 8) = plVar7[1];
      func_0x00014028b040(plVar7,0x20);
      return;
    }
    uVar6 = (((((ulonglong)*(byte *)(param_1 + 0x168) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)*(byte *)(param_1 + 0x169)) * 0x100000001b3 ^
             (ulonglong)*(byte *)(param_1 + 0x16a)) * 0x100000001b3 ^
            (ulonglong)*(byte *)(param_1 + 0x16b)) * 0x100000001b3 & DAT_1404e8f40;
    plVar5 = *(longlong **)(DAT_1404e8f28 + 8 + uVar6 * 0x10);
    if (plVar5 == DAT_1404e8f18) {
LAB_140128780:
      plVar5 = (longlong *)0x0;
    }
    else {
      iVar1 = (int)plVar5[2];
      while (*(int *)(param_1 + 0x168) != iVar1) {
        if (plVar5 == *(longlong **)(DAT_1404e8f28 + uVar6 * 0x10)) goto LAB_140128780;
        plVar5 = (longlong *)plVar5[1];
        iVar1 = (int)plVar5[2];
      }
    }
    plVar8 = DAT_1404e8f18;
    if (plVar5 != (longlong *)0x0) {
      plVar8 = plVar5;
    }
    if (plVar8 != DAT_1404e8f18) {
      uVar6 = (((((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar8 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 & DAT_1404e8f40;
      plVar5 = *(longlong **)(DAT_1404e8f28 + uVar6 * 0x10);
      if (*(longlong **)(DAT_1404e8f28 + 8 + uVar6 * 0x10) == plVar8) {
        if (plVar5 == plVar8) {
          *(longlong **)(DAT_1404e8f28 + uVar6 * 0x10) = DAT_1404e8f18;
          *(longlong **)(lVar4 + 8 + uVar6 * 0x10) = plVar3;
        }
        else {
          *(longlong *)(DAT_1404e8f28 + 8 + uVar6 * 0x10) = plVar8[1];
        }
      }
      else if (plVar5 == plVar8) {
        *(longlong *)(DAT_1404e8f28 + uVar6 * 0x10) = *plVar8;
      }
      lVar2 = *plVar8;
      lRam00000001404e8f20 = lRam00000001404e8f20 + -1;
      *(longlong *)plVar8[1] = lVar2;
      *(longlong *)(lVar2 + 8) = plVar8[1];
      func_0x00014028b040(plVar8,0x20);
    }
  }
  return;
}

