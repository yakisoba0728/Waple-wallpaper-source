// Function: FUN_1400cd820
// Addr: 1400cd820
// Size: 664 bytes


void FUN_1400cd820(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong local_res8;
  longlong *local_res10;
  longlong local_res18;
  longlong *local_res20;
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && (*(ulonglong *)(lVar2 + 0x10) != 0)) {
    plVar3 = *(longlong **)(lVar2 + 8);
    if (*(ulonglong *)(lVar2 + 0x10) < *(ulonglong *)(lVar2 + 0x38) >> 3) {
      plVar4 = (longlong *)*plVar3;
      if (plVar4 != plVar3) {
        uVar1 = *(uint *)(plVar4 + 2);
        plVar5 = (longlong *)plVar4[1];
        lVar6 = *(longlong *)(lVar2 + 0x18);
        lVar9 = (*(ulonglong *)(lVar2 + 0x30) &
                (((((ulonglong)(uVar1 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)(uVar1 >> 8 & 0xff)) * 0x100000001b3 ^
                 (ulonglong)(uVar1 >> 0x10 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar1 >> 0x18)) *
                0x100000001b3) * 0x10;
        local_res20 = (longlong *)(lVar6 + 8 + lVar9);
        local_res10 = (longlong *)(lVar9 + lVar6);
        local_res8 = *(longlong *)(lVar9 + lVar6);
        plVar10 = (longlong *)*local_res20;
        plVar11 = plVar4;
        local_res18 = lVar6;
        do {
          plVar12 = (longlong *)*plVar11;
          thunk_FUN_14028af80(plVar11,0x18);
          *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -1;
          if (plVar11 == plVar10) {
            plVar10 = plVar5;
            if ((longlong *)local_res8 == plVar4) {
              *local_res10 = (longlong)plVar3;
              plVar10 = plVar3;
            }
            *local_res20 = (longlong)plVar10;
            while (plVar12 != plVar3) {
              uVar1 = *(uint *)(plVar12 + 2);
              uVar13 = *(ulonglong *)(lVar2 + 0x30) &
                       (((((ulonglong)(uVar1 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (ulonglong)(uVar1 >> 8 & 0xff)) * 0x100000001b3 ^
                        (ulonglong)(uVar1 >> 0x10 & 0xff)) * 0x100000001b3 ^
                       (ulonglong)(uVar1 >> 0x18)) * 0x100000001b3;
              plVar4 = *(longlong **)(local_res18 + 8 + uVar13 * 0x10);
              plVar10 = plVar12;
              while( true ) {
                plVar12 = (longlong *)*plVar10;
                thunk_FUN_14028af80(plVar10,0x18);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -1;
                if (plVar10 == plVar4) break;
                plVar10 = plVar12;
                if (plVar12 == plVar3) {
                  *(longlong **)(lVar6 + uVar13 * 0x10) = plVar12;
                  goto LAB_1400cd940;
                }
              }
              *(longlong **)(lVar6 + uVar13 * 0x10) = plVar3;
              *(longlong **)(local_res18 + 8 + uVar13 * 0x10) = plVar3;
              lVar6 = local_res18;
            }
            goto LAB_1400cd940;
          }
          plVar11 = plVar12;
        } while (plVar12 != plVar3);
        if ((longlong *)local_res8 == plVar4) {
          *local_res10 = (longlong)plVar12;
        }
LAB_1400cd940:
        *plVar5 = (longlong)plVar12;
        plVar12[1] = (longlong)plVar5;
        return;
      }
    }
    else {
      *(undefined8 *)plVar3[1] = 0;
      puVar8 = (undefined8 *)*plVar3;
      while (puVar8 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)*puVar8;
        thunk_FUN_14028af80(puVar8,0x18);
        puVar8 = puVar7;
      }
      *(undefined8 *)*(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar2 + 8);
      *(longlong *)(*(longlong *)(lVar2 + 8) + 8) = *(longlong *)(lVar2 + 8);
      *(undefined8 *)(lVar2 + 0x10) = 0;
      local_res8 = *(longlong *)(lVar2 + 8);
      FUN_14000f7d0(*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20),&local_res8);
    }
  }
  return;
}

