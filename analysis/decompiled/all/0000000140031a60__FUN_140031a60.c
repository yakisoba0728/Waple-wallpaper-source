// Function: FUN_140031a60
// Addr: 140031a60
// Size: 275 bytes


void FUN_140031a60(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 local_18 [16];
  
  puVar8 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar8 = (undefined8 *)*param_2;
  }
  uVar7 = 0;
  uVar9 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar8 + uVar7);
      uVar7 = uVar7 + 1;
      uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
    } while (uVar7 < (ulonglong)param_2[2]);
  }
  lVar6 = FUN_1400110a0(&DAT_1404e8b20,local_18,param_2,uVar9);
  lVar4 = DAT_1404e8b38;
  uVar5 = DAT_1404e8b28;
  plVar2 = *(longlong **)(lVar6 + 8);
  if (plVar2 != (longlong *)0x0) {
    uVar9 = DAT_1404e8b50 & uVar9;
    plVar3 = *(longlong **)(DAT_1404e8b38 + uVar9 * 0x10);
    if (*(longlong **)(DAT_1404e8b38 + 8 + uVar9 * 0x10) == plVar2) {
      if (plVar3 == plVar2) {
        *(undefined8 *)(DAT_1404e8b38 + uVar9 * 0x10) = DAT_1404e8b28;
        *(undefined8 *)(lVar4 + 8 + uVar9 * 0x10) = uVar5;
      }
      else {
        *(longlong *)(DAT_1404e8b38 + 8 + uVar9 * 0x10) = plVar2[1];
      }
    }
    else if (plVar3 == plVar2) {
      *(longlong *)(DAT_1404e8b38 + uVar9 * 0x10) = *plVar2;
    }
    lVar4 = *plVar2;
    DAT_1404e8b30 = DAT_1404e8b30 + -1;
    *(longlong *)plVar2[1] = lVar4;
    *(longlong *)(lVar4 + 8) = plVar2[1];
    FUN_140017240(plVar2 + 6);
    FUN_140017240(plVar2 + 2);
    thunk_FUN_14028af80(plVar2,0x50);
  }
  FUN_140017240(param_2);
  return;
}

