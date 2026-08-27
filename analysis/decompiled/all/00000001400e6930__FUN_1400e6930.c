// Function: FUN_1400e6930
// Addr: 1400e6930
// Size: 539 bytes


void FUN_1400e6930(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong local_res8;
  longlong local_res10;
  longlong *local_res18;
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && (*(ulonglong *)(lVar2 + 0x10) != 0)) {
    plVar3 = *(longlong **)(lVar2 + 8);
    if (*(ulonglong *)(lVar2 + 0x10) < *(ulonglong *)(lVar2 + 0x38) >> 3) {
      plVar4 = (longlong *)*plVar3;
      if (plVar4 != plVar3) {
        local_res10 = *(longlong *)(lVar2 + 0x18);
        plVar5 = (longlong *)plVar4[1];
        lVar8 = (*(ulonglong *)(lVar2 + 0x30) &
                ((ulonglong)*(byte *)(plVar4 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x10;
        local_res18 = (longlong *)(local_res10 + 8 + lVar8);
        plVar1 = (longlong *)(lVar8 + local_res10);
        local_res8 = *(longlong *)(lVar8 + local_res10);
        plVar9 = (longlong *)*local_res18;
        plVar10 = plVar4;
        do {
          plVar11 = (longlong *)*plVar10;
          thunk_FUN_14028af80(plVar10,0x18);
          *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -1;
          if (plVar10 == plVar9) {
            plVar9 = plVar5;
            if ((longlong *)local_res8 == plVar4) {
              *plVar1 = (longlong)plVar3;
              plVar9 = plVar3;
            }
            *local_res18 = (longlong)plVar9;
            while (plVar11 != plVar3) {
              uVar12 = *(ulonglong *)(lVar2 + 0x30) &
                       ((ulonglong)*(byte *)(plVar11 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3;
              plVar1 = *(longlong **)(local_res10 + 8 + uVar12 * 0x10);
              plVar4 = (longlong *)(local_res10 + uVar12 * 0x10);
              plVar9 = plVar11;
              while( true ) {
                plVar11 = (longlong *)*plVar9;
                thunk_FUN_14028af80(plVar9,0x18);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -1;
                if (plVar9 == plVar1) break;
                plVar9 = plVar11;
                if (plVar11 == plVar3) {
                  *plVar4 = (longlong)plVar11;
                  goto LAB_1400e6a1b;
                }
              }
              *plVar4 = (longlong)plVar3;
              *(longlong **)(local_res10 + 8 + uVar12 * 0x10) = plVar3;
            }
            goto LAB_1400e6a1b;
          }
          plVar10 = plVar11;
        } while (plVar11 != plVar3);
        if ((longlong *)local_res8 == plVar4) {
          *plVar1 = (longlong)plVar11;
        }
LAB_1400e6a1b:
        *plVar5 = (longlong)plVar11;
        plVar11[1] = (longlong)plVar5;
        return;
      }
    }
    else {
      *(undefined8 *)plVar3[1] = 0;
      puVar7 = (undefined8 *)*plVar3;
      while (puVar7 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)*puVar7;
        thunk_FUN_14028af80(puVar7,0x18);
        puVar7 = puVar6;
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

