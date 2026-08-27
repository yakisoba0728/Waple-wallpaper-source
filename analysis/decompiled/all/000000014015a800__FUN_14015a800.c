// Function: FUN_14015a800
// Addr: 14015a800
// Size: 763 bytes


void FUN_14015a800(longlong param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *local_res8;
  longlong local_res10;
  longlong *local_res18;
  longlong *local_res20;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    plVar3 = *(longlong **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      plVar12 = (longlong *)*plVar3;
      if (plVar12 != plVar3) {
        puVar11 = plVar12 + 2;
        local_res10 = *(longlong *)(param_1 + 0x18);
        local_res8 = (longlong *)plVar12[1];
        if (0xf < (ulonglong)plVar12[5]) {
          puVar11 = (undefined8 *)*puVar11;
        }
        uVar8 = 0;
        uVar9 = 0xcbf29ce484222325;
        if (plVar12[4] != 0) {
          do {
            pbVar1 = (byte *)((longlong)puVar11 + uVar8);
            uVar8 = uVar8 + 1;
            uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
          } while (uVar8 < (ulonglong)plVar12[4]);
        }
        lVar6 = (*(ulonglong *)(param_1 + 0x30) & uVar9) * 0x10;
        lVar4 = *(longlong *)(lVar6 + local_res10);
        plVar2 = (longlong *)(lVar6 + local_res10);
        local_res20 = (longlong *)(lVar6 + 8 + local_res10);
        local_res18 = (longlong *)*local_res20;
        plVar7 = plVar12;
        do {
          plVar10 = (longlong *)*plVar7;
          FUN_140017240(plVar7 + 0xd);
          FUN_140017240(plVar7 + 2);
          thunk_FUN_14028af80(plVar7,0x88);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar7 == local_res18) {
            plVar7 = local_res8;
            if ((longlong *)lVar4 == plVar12) {
              *plVar2 = (longlong)plVar3;
              plVar7 = plVar3;
            }
            *local_res20 = (longlong)plVar7;
            while (plVar10 != plVar3) {
              plVar12 = plVar10 + 2;
              if (0xf < (ulonglong)plVar10[5]) {
                plVar12 = (longlong *)*plVar12;
              }
              uVar8 = 0;
              uVar9 = 0xcbf29ce484222325;
              if (plVar10[4] != 0) {
                do {
                  pbVar1 = (byte *)((longlong)plVar12 + uVar8);
                  uVar8 = uVar8 + 1;
                  uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
                } while (uVar8 < (ulonglong)plVar10[4]);
              }
              uVar9 = *(ulonglong *)(param_1 + 0x30) & uVar9;
              plVar2 = *(longlong **)(local_res10 + 8 + uVar9 * 0x10);
              plVar12 = (longlong *)(local_res10 + uVar9 * 0x10);
              plVar7 = plVar10;
              while( true ) {
                plVar10 = (longlong *)*plVar7;
                FUN_140017240(plVar7 + 0xd);
                FUN_140017240(plVar7 + 2);
                thunk_FUN_14028af80(plVar7,0x88);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
                if (plVar7 == plVar2) break;
                plVar7 = plVar10;
                if (plVar10 == plVar3) {
                  *plVar12 = (longlong)plVar10;
                  goto LAB_14015a947;
                }
              }
              *plVar12 = (longlong)plVar3;
              *(longlong **)(local_res10 + 8 + uVar9 * 0x10) = plVar3;
            }
            goto LAB_14015a947;
          }
          plVar7 = plVar10;
        } while (plVar10 != plVar3);
        if ((longlong *)lVar4 == plVar12) {
          *plVar2 = (longlong)plVar10;
        }
LAB_14015a947:
        *local_res8 = (longlong)plVar10;
        plVar10[1] = (longlong)local_res8;
        return;
      }
    }
    else {
      *(undefined8 *)plVar3[1] = 0;
      puVar11 = (undefined8 *)*plVar3;
      while (puVar11 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*puVar11;
        FUN_140017240(puVar11 + 0xd);
        FUN_140017240(puVar11 + 2);
        thunk_FUN_14028af80(puVar11,0x88);
        puVar11 = puVar5;
      }
      *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
      *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
      *(undefined8 *)(param_1 + 0x10) = 0;
      local_res8 = *(longlong **)(param_1 + 8);
      FUN_14000f7d0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),&local_res8);
    }
  }
  return;
}

