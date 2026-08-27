// Function: FUN_1401c3840
// Addr: 1401c3840
// Size: 1069 bytes


void FUN_1401c3840(longlong *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 local_68 [32];
  longlong local_48;
  
  puVar7 = (undefined8 *)param_1[2];
  for (puVar1 = (undefined8 *)*puVar7; puVar1 != puVar7; puVar1 = (undefined8 *)*puVar1) {
    FUN_140016fc0(local_68,puVar1 + 2);
    lVar5 = puVar1[6];
    local_48 = lVar5;
    if (lVar5 != 0) {
      FUN_140085440(lVar5);
      thunk_FUN_14028af80(lVar5,0x28);
    }
    FUN_140017240(local_68);
  }
  FUN_1400f1000(param_1 + 1);
  puVar7 = (undefined8 *)param_1[10];
  for (puVar1 = (undefined8 *)*puVar7; puVar1 != puVar7; puVar1 = (undefined8 *)*puVar1) {
    FUN_140016fc0(local_68,puVar1 + 2);
    lVar5 = puVar1[6];
    local_48 = lVar5;
    FUN_1401c4000(param_1,lVar5);
    if (lVar5 != 0) {
      FUN_1401d9100(lVar5 + 0x1c8);
      FUN_1400efc60(lVar5 + 0x1b0);
      FUN_140017240(lVar5 + 0x38);
      thunk_FUN_14028af80(lVar5,0x1e0);
    }
    FUN_140017240(local_68);
  }
  FUN_1400f1000(param_1 + 9);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  plVar6 = *(longlong **)param_1[0x14];
  if (plVar6 != (longlong *)param_1[0x14]) {
    do {
      lVar5 = plVar6[2];
      FUN_1401ab5f0(*param_1 + 0x16c0,*(undefined8 *)(lVar5 + 0x50));
      *(undefined8 *)(lVar5 + 0x50) = 0;
      *(undefined4 *)(lVar5 + 8) = 0;
      piVar2 = (int *)plVar6[2];
      if (*piVar2 == 0) {
        if (piVar2 != (int *)0x0) {
          FUN_14000d9e0(piVar2 + 0x20);
          FUN_1401d9d50(piVar2 + 0x1a);
          FUN_140017240(piVar2 + 6);
          thunk_FUN_14028af80(piVar2,0xd8);
        }
        uVar4 = param_1[0x19] &
                (((((((((ulonglong)*(byte *)(plVar6 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar6 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar6 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar6 + 0x13)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar6 + 0x14)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar6 + 0x15)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar6 + 0x16)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar6 + 0x17)) * 0x100000001b3;
        lVar5 = param_1[0x16];
        puVar7 = *(undefined8 **)(lVar5 + uVar4 * 0x10);
        if (*(undefined8 **)(lVar5 + 8 + uVar4 * 0x10) == plVar6) {
          if (puVar7 == plVar6) {
            lVar3 = param_1[0x14];
            *(longlong *)(lVar5 + uVar4 * 0x10) = lVar3;
            *(longlong *)(lVar5 + 8 + uVar4 * 0x10) = lVar3;
          }
          else {
            *(longlong *)(lVar5 + 8 + uVar4 * 0x10) = plVar6[1];
          }
        }
        else if (puVar7 == plVar6) {
          *(longlong *)(lVar5 + uVar4 * 0x10) = *plVar6;
        }
        puVar7 = (undefined8 *)*plVar6;
        param_1[0x15] = param_1[0x15] + -1;
        *(undefined8 **)plVar6[1] = puVar7;
        puVar7[1] = plVar6[1];
        thunk_FUN_14028af80(plVar6,0x18);
      }
      else {
        puVar7 = (undefined8 *)*plVar6;
      }
      plVar6 = puVar7;
    } while (puVar7 != (undefined8 *)param_1[0x14]);
  }
  plVar6 = *(longlong **)param_1[0x1c];
  if (plVar6 != (longlong *)param_1[0x1c]) {
    do {
      lVar5 = plVar6[2];
      *(undefined4 *)(lVar5 + 8) = 0;
      FUN_1401c1950(lVar5 + 0x68);
      FUN_1401c1950(lVar5 + 0x128);
      if (*(longlong *)(lVar5 + 0x20) != *(longlong *)(lVar5 + 0x28)) {
        *(longlong *)(lVar5 + 0x28) = *(longlong *)(lVar5 + 0x20);
      }
      if (*(longlong *)(lVar5 + 0x50) != *(longlong *)(lVar5 + 0x58)) {
        *(longlong *)(lVar5 + 0x58) = *(longlong *)(lVar5 + 0x50);
      }
      if (*(longlong *)(lVar5 + 0x38) != *(longlong *)(lVar5 + 0x40)) {
        *(longlong *)(lVar5 + 0x40) = *(longlong *)(lVar5 + 0x38);
      }
      piVar2 = (int *)plVar6[2];
      if (*piVar2 == 0) {
        FUN_1401d4520(piVar2 + 0x4a);
        FUN_1401d4520(piVar2 + 0x1a);
        FUN_140031b80(piVar2 + 0x14);
        FUN_1401d9410(piVar2 + 0xe);
        FUN_1401d9410(piVar2 + 8);
        thunk_FUN_14028af80(piVar2,0x1e8);
        uVar4 = param_1[0x21] &
                (((((((((ulonglong)*(byte *)(plVar6 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar6 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar6 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar6 + 0x13)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar6 + 0x14)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar6 + 0x15)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar6 + 0x16)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar6 + 0x17)) * 0x100000001b3;
        lVar5 = param_1[0x1e];
        puVar7 = *(undefined8 **)(lVar5 + uVar4 * 0x10);
        if (*(undefined8 **)(lVar5 + 8 + uVar4 * 0x10) == plVar6) {
          if (puVar7 == plVar6) {
            lVar3 = param_1[0x1c];
            *(longlong *)(lVar5 + uVar4 * 0x10) = lVar3;
            *(longlong *)(lVar5 + 8 + uVar4 * 0x10) = lVar3;
          }
          else {
            *(longlong *)(lVar5 + 8 + uVar4 * 0x10) = plVar6[1];
          }
        }
        else if (puVar7 == plVar6) {
          *(longlong *)(lVar5 + uVar4 * 0x10) = *plVar6;
        }
        puVar7 = (undefined8 *)*plVar6;
        param_1[0x1d] = param_1[0x1d] + -1;
        *(undefined8 **)plVar6[1] = puVar7;
        puVar7[1] = plVar6[1];
        thunk_FUN_14028af80(plVar6,0x18);
      }
      else {
        puVar7 = (undefined8 *)*plVar6;
      }
      plVar6 = puVar7;
    } while (puVar7 != (undefined8 *)param_1[0x1c]);
  }
  plVar6 = *(longlong **)param_1[0x34];
  if (plVar6 != (longlong *)param_1[0x34]) {
    do {
      FUN_1401d7af0();
      plVar6 = (longlong *)*plVar6;
    } while (plVar6 != (longlong *)param_1[0x34]);
  }
  FUN_14015a390(param_1 + 0x33);
  return;
}

