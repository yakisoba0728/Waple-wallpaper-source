// Function: FUN_140071c30
// Addr: 140071c30
// Size: 401 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140071c30(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *local_res8;
  
  plVar4 = DAT_1404e63d0;
  local_res8 = param_1;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    for (plVar2 = (longlong *)*DAT_1404e63d0; plVar2 != plVar4; plVar2 = (longlong *)*plVar2) {
      plVar7 = (longlong *)plVar2[6];
      if (plVar7 != (longlong *)0x0) {
        if ((longlong *)*plVar7 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar7 + 0x18))();
        }
        *plVar7 = 0;
        DestroyWindow((HWND)plVar7[1]);
        thunk_FUN_14028af80(plVar7,0x18);
      }
    }
    FUN_140078a40(&DAT_1404e63c8);
    return;
  }
  FUN_140030de0(&DAT_1404e63c8,&local_res8,param_2);
  plVar4 = local_res8;
  if (local_res8 != DAT_1404e63d0) {
    if (local_res8[6] != 0) {
      FUN_140065540();
    }
    lVar3 = DAT_1404e63e0;
    plVar2 = DAT_1404e63d0;
    if ((ulonglong)plVar4[5] < 0x10) {
      plVar7 = plVar4 + 2;
    }
    else {
      plVar7 = (longlong *)plVar4[2];
    }
    uVar6 = 0;
    uVar5 = 0xcbf29ce484222325;
    if (plVar4[4] != 0) {
      do {
        pbVar1 = (byte *)((longlong)plVar7 + uVar6);
        uVar6 = uVar6 + 1;
        uVar5 = (uVar5 ^ *pbVar1) * 0x100000001b3;
      } while (uVar6 < (ulonglong)plVar4[4]);
    }
    uVar5 = uVar5 & _DAT_1404e63f8;
    plVar7 = *(longlong **)(DAT_1404e63e0 + uVar5 * 0x10);
    if (*(longlong **)(DAT_1404e63e0 + 8 + uVar5 * 0x10) == plVar4) {
      if (plVar7 == plVar4) {
        *(longlong **)(DAT_1404e63e0 + uVar5 * 0x10) = DAT_1404e63d0;
        *(longlong **)(lVar3 + 8 + uVar5 * 0x10) = plVar2;
      }
      else {
        *(longlong *)(DAT_1404e63e0 + 8 + uVar5 * 0x10) = plVar4[1];
      }
    }
    else if (plVar7 == plVar4) {
      *(longlong *)(DAT_1404e63e0 + uVar5 * 0x10) = *plVar4;
    }
    lVar3 = *plVar4;
    _DAT_1404e63d8 = _DAT_1404e63d8 + -1;
    *(longlong *)plVar4[1] = lVar3;
    *(longlong *)(lVar3 + 8) = plVar4[1];
    FUN_140017240(plVar4 + 2);
    thunk_FUN_14028af80(plVar4,0x38);
  }
  return;
}

