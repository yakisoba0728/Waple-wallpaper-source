// Function: FUN_1401d5f10
// Addr: 1401d5f10
// Size: 404 bytes


void FUN_1401d5f10(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  byte *pbVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 local_18 [16];
  
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x234) != 0) {
      FUN_1401d6bb0(param_1,*(int *)(param_2 + 0x234));
      return;
    }
    puVar1 = (undefined8 *)(param_2 + 0x210);
    puVar7 = puVar1;
    if (0xf < *(ulonglong *)(param_2 + 0x228)) {
      puVar7 = (undefined8 *)*puVar1;
    }
    uVar10 = 0xcbf29ce484222325;
    uVar8 = 0;
    uVar11 = 0xcbf29ce484222325;
    if (*(ulonglong *)(param_2 + 0x220) != 0) {
      do {
        pbVar3 = (byte *)((longlong)puVar7 + uVar8);
        uVar8 = uVar8 + 1;
        uVar11 = (uVar11 ^ *pbVar3) * 0x100000001b3;
      } while (uVar8 < *(ulonglong *)(param_2 + 0x220));
    }
    lVar6 = FUN_1400110a0(param_1 + 0x158,local_18,puVar1,uVar11);
    plVar4 = *(longlong **)(lVar6 + 8);
    if ((plVar4 != (longlong *)0x0) && (plVar4 != *(longlong **)(param_1 + 0x160))) {
      piVar2 = (int *)(plVar4[6] + 0x230);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_1401d7af0();
        if ((ulonglong)plVar4[5] < 0x10) {
          plVar9 = plVar4 + 2;
        }
        else {
          plVar9 = (longlong *)plVar4[2];
        }
        uVar8 = 0;
        if (plVar4[4] != 0) {
          do {
            pbVar3 = (byte *)((longlong)plVar9 + uVar8);
            uVar8 = uVar8 + 1;
            uVar10 = (uVar10 ^ *pbVar3) * 0x100000001b3;
          } while (uVar8 < (ulonglong)plVar4[4]);
        }
        lVar6 = *(longlong *)(param_1 + 0x170);
        uVar10 = *(ulonglong *)(param_1 + 0x188) & uVar10;
        plVar9 = *(longlong **)(lVar6 + uVar10 * 0x10);
        if (*(longlong **)(lVar6 + 8 + uVar10 * 0x10) == plVar4) {
          if (plVar9 == plVar4) {
            uVar5 = *(undefined8 *)(param_1 + 0x160);
            *(undefined8 *)(lVar6 + uVar10 * 0x10) = uVar5;
            *(undefined8 *)(lVar6 + 8 + uVar10 * 0x10) = uVar5;
          }
          else {
            *(longlong *)(lVar6 + 8 + uVar10 * 0x10) = plVar4[1];
          }
        }
        else if (plVar9 == plVar4) {
          *(longlong *)(lVar6 + uVar10 * 0x10) = *plVar4;
        }
        lVar6 = *plVar4;
        *(longlong *)(param_1 + 0x168) = *(longlong *)(param_1 + 0x168) + -1;
        *(longlong *)plVar4[1] = lVar6;
        *(longlong *)(lVar6 + 8) = plVar4[1];
        FUN_140017240(plVar4 + 2);
        thunk_FUN_14028af80(plVar4,0x38);
      }
    }
  }
  return;
}

