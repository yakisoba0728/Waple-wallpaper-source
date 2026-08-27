// Function: FUN_140128490
// Addr: 140128490
// Size: 771 bytes


void FUN_140128490(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e92e8) &&
     (FUN_14028b140(&DAT_1404e92e8), DAT_1404e92e8 == -1)) {
    GetCurrentThreadId();
    _Init_thread_footer(&DAT_1404e92e8);
  }
  if (*(int *)(param_1 + 0x168) != 0) {
    if (*(HWINEVENTHOOK *)(param_1 + 0x160) != (HWINEVENTHOOK)0x0) {
      UnhookWinEvent(*(HWINEVENTHOOK *)(param_1 + 0x160));
      *(undefined8 *)(param_1 + 0x160) = 0;
    }
    lVar2 = DAT_1404e8e18;
    plVar3 = DAT_1404e8e08;
    uVar5 = DAT_1404e8e30 &
            (((((ulonglong)*(byte *)(param_1 + 0x168) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)*(byte *)(param_1 + 0x169)) * 0x100000001b3 ^
             (ulonglong)*(byte *)(param_1 + 0x16a)) * 0x100000001b3 ^
            (ulonglong)*(byte *)(param_1 + 0x16b)) * 0x100000001b3;
    plVar4 = *(longlong **)(DAT_1404e8e18 + 8 + uVar5 * 0x10);
    if (plVar4 == DAT_1404e8e08) {
LAB_140128587:
      plVar4 = (longlong *)0x0;
    }
    else {
      iVar1 = (int)plVar4[2];
      while (*(int *)(param_1 + 0x168) != iVar1) {
        if (plVar4 == *(longlong **)(DAT_1404e8e18 + uVar5 * 0x10)) goto LAB_140128587;
        plVar4 = (longlong *)plVar4[1];
        iVar1 = (int)plVar4[2];
      }
    }
    plVar6 = DAT_1404e8e08;
    if (plVar4 != (longlong *)0x0) {
      plVar6 = plVar4;
    }
    if (plVar6 != DAT_1404e8e08) {
      uVar5 = (((((ulonglong)*(byte *)(plVar6 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar6 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar6 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)plVar6 + 0x13)) * 0x100000001b3 & DAT_1404e8e30;
      plVar4 = *(longlong **)(DAT_1404e8e18 + uVar5 * 0x10);
      if (*(longlong **)(DAT_1404e8e18 + 8 + uVar5 * 0x10) == plVar6) {
        if (plVar4 == plVar6) {
          *(longlong **)(DAT_1404e8e18 + uVar5 * 0x10) = DAT_1404e8e08;
          *(longlong **)(lVar2 + 8 + uVar5 * 0x10) = plVar3;
        }
        else {
          *(longlong *)(DAT_1404e8e18 + 8 + uVar5 * 0x10) = plVar6[1];
        }
      }
      else if (plVar4 == plVar6) {
        *(longlong *)(DAT_1404e8e18 + uVar5 * 0x10) = *plVar6;
      }
      lVar2 = *plVar6;
      DAT_1404e8e10 = DAT_1404e8e10 + -1;
      *(longlong *)plVar6[1] = lVar2;
      *(longlong *)(lVar2 + 8) = plVar6[1];
      thunk_FUN_14028af80(plVar6,0x20);
    }
    lVar2 = DAT_1404e8e58;
    plVar3 = DAT_1404e8e48;
    uVar5 = (((((ulonglong)*(byte *)(param_1 + 0x168) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)*(byte *)(param_1 + 0x169)) * 0x100000001b3 ^
             (ulonglong)*(byte *)(param_1 + 0x16a)) * 0x100000001b3 ^
            (ulonglong)*(byte *)(param_1 + 0x16b)) * 0x100000001b3 & DAT_1404e8e70;
    plVar4 = *(longlong **)(DAT_1404e8e58 + 8 + uVar5 * 0x10);
    if (plVar4 == DAT_1404e8e48) {
LAB_1401286b0:
      plVar4 = (longlong *)0x0;
    }
    else {
      iVar1 = (int)plVar4[2];
      while (*(int *)(param_1 + 0x168) != iVar1) {
        if (plVar4 == *(longlong **)(DAT_1404e8e58 + uVar5 * 0x10)) goto LAB_1401286b0;
        plVar4 = (longlong *)plVar4[1];
        iVar1 = (int)plVar4[2];
      }
    }
    plVar6 = DAT_1404e8e48;
    if (plVar4 != (longlong *)0x0) {
      plVar6 = plVar4;
    }
    if (plVar6 != DAT_1404e8e48) {
      uVar5 = (((((ulonglong)*(byte *)(plVar6 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar6 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar6 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)plVar6 + 0x13)) * 0x100000001b3 & DAT_1404e8e70;
      plVar4 = *(longlong **)(DAT_1404e8e58 + uVar5 * 0x10);
      if (*(longlong **)(DAT_1404e8e58 + 8 + uVar5 * 0x10) == plVar6) {
        if (plVar4 == plVar6) {
          *(longlong **)(DAT_1404e8e58 + uVar5 * 0x10) = DAT_1404e8e48;
          *(longlong **)(lVar2 + 8 + uVar5 * 0x10) = plVar3;
        }
        else {
          *(longlong *)(DAT_1404e8e58 + 8 + uVar5 * 0x10) = plVar6[1];
        }
      }
      else if (plVar4 == plVar6) {
        *(longlong *)(DAT_1404e8e58 + uVar5 * 0x10) = *plVar6;
      }
      lVar2 = *plVar6;
      DAT_1404e8e50 = DAT_1404e8e50 + -1;
      *(longlong *)plVar6[1] = lVar2;
      *(longlong *)(lVar2 + 8) = plVar6[1];
      thunk_FUN_14028af80(plVar6,0x20);
    }
  }
  return;
}

