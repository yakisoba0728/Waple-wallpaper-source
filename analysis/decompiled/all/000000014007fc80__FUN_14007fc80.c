// Function: FUN_14007fc80
// Addr: 14007fc80
// Size: 734 bytes


void FUN_14007fc80(longlong *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *local_res8;
  longlong local_res10;
  longlong *local_res18;
  longlong *local_res20;
  
  lVar3 = *param_1;
  if ((lVar3 != 0) && (*(ulonglong *)(lVar3 + 0x10) != 0)) {
    plVar4 = *(longlong **)(lVar3 + 8);
    if (*(ulonglong *)(lVar3 + 0x10) < *(ulonglong *)(lVar3 + 0x38) >> 3) {
      plVar13 = (longlong *)*plVar4;
      if (plVar13 != plVar4) {
        puVar12 = plVar13 + 2;
        local_res10 = *(longlong *)(lVar3 + 0x18);
        local_res8 = (longlong *)plVar13[1];
        if (7 < (ulonglong)plVar13[5]) {
          puVar12 = (undefined8 *)*puVar12;
        }
        uVar9 = 0;
        uVar10 = 0xcbf29ce484222325;
        if (plVar13[4] * 2 != 0) {
          do {
            pbVar1 = (byte *)((longlong)puVar12 + uVar9);
            uVar9 = uVar9 + 1;
            uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
          } while (uVar9 < (ulonglong)(plVar13[4] * 2));
        }
        lVar7 = (*(ulonglong *)(lVar3 + 0x30) & uVar10) * 0x10;
        lVar5 = *(longlong *)(lVar7 + local_res10);
        plVar2 = (longlong *)(lVar7 + local_res10);
        local_res20 = (longlong *)(lVar7 + 8 + local_res10);
        local_res18 = (longlong *)*local_res20;
        plVar8 = plVar13;
        do {
          plVar11 = (longlong *)*plVar8;
          FUN_140016770(plVar8 + 2);
          thunk_FUN_14028af80(plVar8,0x30);
          *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -1;
          if (plVar8 == local_res18) {
            plVar8 = local_res8;
            if ((longlong *)lVar5 == plVar13) {
              *plVar2 = (longlong)plVar4;
              plVar8 = plVar4;
            }
            *local_res20 = (longlong)plVar8;
            while (plVar11 != plVar4) {
              plVar13 = plVar11 + 2;
              if (7 < (ulonglong)plVar11[5]) {
                plVar13 = (longlong *)*plVar13;
              }
              uVar9 = 0;
              uVar10 = 0xcbf29ce484222325;
              if (plVar11[4] * 2 != 0) {
                do {
                  pbVar1 = (byte *)((longlong)plVar13 + uVar9);
                  uVar9 = uVar9 + 1;
                  uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
                } while (uVar9 < (ulonglong)(plVar11[4] * 2));
              }
              uVar10 = *(ulonglong *)(lVar3 + 0x30) & uVar10;
              plVar2 = *(longlong **)(local_res10 + 8 + uVar10 * 0x10);
              plVar13 = (longlong *)(local_res10 + uVar10 * 0x10);
              plVar8 = plVar11;
              while( true ) {
                plVar11 = (longlong *)*plVar8;
                FUN_140016770(plVar8 + 2);
                thunk_FUN_14028af80(plVar8,0x30);
                *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -1;
                if (plVar8 == plVar2) break;
                plVar8 = plVar11;
                if (plVar11 == plVar4) {
                  *plVar13 = (longlong)plVar11;
                  goto LAB_14007fdac;
                }
              }
              *plVar13 = (longlong)plVar4;
              *(longlong **)(local_res10 + 8 + uVar10 * 0x10) = plVar4;
            }
            goto LAB_14007fdac;
          }
          plVar8 = plVar11;
        } while (plVar11 != plVar4);
        if ((longlong *)lVar5 == plVar13) {
          *plVar2 = (longlong)plVar11;
        }
LAB_14007fdac:
        *local_res8 = (longlong)plVar11;
        plVar11[1] = (longlong)local_res8;
        return;
      }
    }
    else {
      *(undefined8 *)plVar4[1] = 0;
      puVar12 = (undefined8 *)*plVar4;
      while (puVar12 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)*puVar12;
        FUN_140016770(puVar12 + 2);
        thunk_FUN_14028af80(puVar12,0x30);
        puVar12 = puVar6;
      }
      *(undefined8 *)*(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar3 + 8);
      *(longlong *)(*(longlong *)(lVar3 + 8) + 8) = *(longlong *)(lVar3 + 8);
      *(undefined8 *)(lVar3 + 0x10) = 0;
      local_res8 = *(longlong **)(lVar3 + 8);
      FUN_14000f7d0(*(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x20),&local_res8);
    }
  }
  return;
}

