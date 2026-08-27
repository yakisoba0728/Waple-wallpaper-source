// Function: FUN_140078d10
// Addr: 140078d10
// Size: 916 bytes


void FUN_140078d10(longlong param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *local_res8;
  longlong *local_res10;
  longlong local_res18;
  longlong *local_res20;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    plVar2 = *(longlong **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      plVar12 = (longlong *)*plVar2;
      if (plVar12 != plVar2) {
        puVar11 = plVar12 + 2;
        local_res18 = *(longlong *)(param_1 + 0x18);
        local_res8 = (longlong *)plVar12[1];
        if (0xf < (ulonglong)plVar12[5]) {
          puVar11 = (undefined8 *)*puVar11;
        }
        uVar6 = 0;
        uVar8 = 0xcbf29ce484222325;
        if (plVar12[4] != 0) {
          do {
            pbVar1 = (byte *)((longlong)puVar11 + uVar6);
            uVar6 = uVar6 + 1;
            uVar8 = (uVar8 ^ *pbVar1) * 0x100000001b3;
          } while (uVar6 < (ulonglong)plVar12[4]);
        }
        lVar4 = (*(ulonglong *)(param_1 + 0x30) & uVar8) * 0x10;
        plVar7 = (longlong *)(local_res18 + 8 + lVar4);
        plVar10 = (longlong *)(lVar4 + local_res18);
        local_res10 = *(longlong **)(lVar4 + local_res18);
        local_res20 = (longlong *)*plVar7;
        plVar5 = plVar12;
        do {
          plVar9 = (longlong *)*plVar5;
          FUN_140017240(plVar5 + 0x18);
          FUN_140017240(plVar5 + 0x14);
          FUN_140031b80(plVar5 + 0x11);
          FUN_140031170(plVar5 + 10);
          FUN_140031170(plVar5 + 7);
          FUN_140017240(plVar5 + 2);
          thunk_FUN_14028af80(plVar5);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar5 == local_res20) {
            plVar5 = local_res8;
            if (local_res10 == plVar12) {
              *plVar10 = (longlong)plVar2;
              plVar5 = plVar2;
            }
            *plVar7 = (longlong)plVar5;
            while (plVar9 != plVar2) {
              plVar12 = plVar9 + 2;
              if (0xf < (ulonglong)plVar9[5]) {
                plVar12 = (longlong *)*plVar12;
              }
              uVar8 = 0;
              uVar6 = 0xcbf29ce484222325;
              if (plVar9[4] != 0) {
                do {
                  pbVar1 = (byte *)((longlong)plVar12 + uVar8);
                  uVar8 = uVar8 + 1;
                  uVar6 = (uVar6 ^ *pbVar1) * 0x100000001b3;
                } while (uVar8 < (ulonglong)plVar9[4]);
              }
              uVar6 = *(ulonglong *)(param_1 + 0x30) & uVar6;
              plVar12 = *(longlong **)(local_res18 + 8 + uVar6 * 0x10);
              local_res10 = (longlong *)(local_res18 + uVar6 * 0x10);
              plVar10 = plVar9;
              while( true ) {
                plVar9 = (longlong *)*plVar10;
                FUN_140017240(plVar10 + 0x18);
                FUN_140017240(plVar10 + 0x14);
                FUN_140031b80(plVar10 + 0x11);
                FUN_140031170(plVar10 + 10);
                FUN_140031170(plVar10 + 7);
                FUN_140017240(plVar10 + 2);
                thunk_FUN_14028af80(plVar10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
                if (plVar10 == plVar12) break;
                plVar10 = plVar9;
                if (plVar9 == plVar2) {
                  *local_res10 = (longlong)plVar9;
                  goto LAB_140078e89;
                }
              }
              *local_res10 = (longlong)plVar2;
              *(longlong **)(local_res18 + 8 + uVar6 * 0x10) = plVar2;
            }
            goto LAB_140078e89;
          }
          plVar5 = plVar9;
        } while (plVar9 != plVar2);
        if (local_res10 == plVar12) {
          *plVar10 = (longlong)plVar9;
        }
LAB_140078e89:
        *local_res8 = (longlong)plVar9;
        plVar9[1] = (longlong)local_res8;
        return;
      }
    }
    else {
      *(undefined8 *)plVar2[1] = 0;
      puVar11 = (undefined8 *)*plVar2;
      while (puVar11 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*puVar11;
        FUN_140017240(puVar11 + 0x18);
        FUN_140017240(puVar11 + 0x14);
        FUN_140031b80(puVar11 + 0x11);
        FUN_140031170(puVar11 + 10);
        FUN_140031170(puVar11 + 7);
        FUN_140017240(puVar11 + 2);
        thunk_FUN_14028af80(puVar11,0xe8);
        puVar11 = puVar3;
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

