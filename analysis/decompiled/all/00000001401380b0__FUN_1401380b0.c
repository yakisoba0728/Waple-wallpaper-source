// Function: FUN_1401380b0
// Addr: 1401380b0
// Size: 692 bytes


void FUN_1401380b0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  bool bVar12;
  longlong *local_res8;
  longlong *local_res10;
  longlong local_res18;
  longlong *local_res20;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (*(ulonglong *)(lVar1 + 0x10) != 0)) {
    plVar2 = *(longlong **)(lVar1 + 8);
    if (*(ulonglong *)(lVar1 + 0x10) < *(ulonglong *)(lVar1 + 0x38) >> 3) {
      plVar3 = (longlong *)*plVar2;
      if (plVar3 != plVar2) {
        local_res18 = *(longlong *)(lVar1 + 0x18);
        plVar4 = (longlong *)plVar3[1];
        lVar7 = (*(ulonglong *)(lVar1 + 0x30) &
                (((((ulonglong)*(byte *)(plVar3 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar3 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar3 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar3 + 0x13)) * 0x100000001b3) * 0x10;
        local_res20 = (longlong *)(local_res18 + 8 + lVar7);
        local_res10 = (longlong *)(lVar7 + local_res18);
        local_res8 = *(longlong **)(lVar7 + local_res18);
        plVar8 = (longlong *)*local_res20;
        plVar9 = plVar3;
        do {
          plVar10 = (longlong *)*plVar9;
          FUN_140016770(plVar9 + 3);
          thunk_FUN_14028af80(plVar9,0x38);
          *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -1;
          if (plVar9 == plVar8) {
            plVar8 = plVar4;
            if (local_res8 == plVar3) {
              *local_res10 = (longlong)plVar2;
              plVar8 = plVar2;
            }
            *local_res20 = (longlong)plVar8;
            while (plVar10 != plVar2) {
              uVar11 = *(ulonglong *)(lVar1 + 0x30) &
                       (((((ulonglong)*(byte *)(plVar10 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar10 + 0x11)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar10 + 0x12)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar10 + 0x13)) * 0x100000001b3;
              plVar3 = *(longlong **)(local_res18 + 8 + uVar11 * 0x10);
              local_res8 = (longlong *)(local_res18 + uVar11 * 0x10);
              plVar8 = plVar10;
              while( true ) {
                plVar10 = (longlong *)*plVar8;
                FUN_140016770(plVar8 + 3);
                thunk_FUN_14028af80(plVar8,0x38);
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -1;
                if (plVar8 == plVar3) break;
                plVar8 = plVar10;
                if (plVar10 == plVar2) goto LAB_1401381dc;
              }
              *local_res8 = (longlong)plVar2;
              *(longlong **)(local_res18 + 8 + uVar11 * 0x10) = plVar2;
            }
            goto LAB_1401381df;
          }
          plVar9 = plVar10;
        } while (plVar10 != plVar2);
        bVar12 = local_res8 == plVar3;
        local_res8 = local_res10;
        if (bVar12) {
LAB_1401381dc:
          *local_res8 = (longlong)plVar10;
        }
LAB_1401381df:
        *plVar4 = (longlong)plVar10;
        plVar10[1] = (longlong)plVar4;
        return;
      }
    }
    else {
      *(undefined8 *)plVar2[1] = 0;
      puVar6 = (undefined8 *)*plVar2;
      while (puVar6 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*puVar6;
        FUN_140016770(puVar6 + 3);
        thunk_FUN_14028af80(puVar6,0x38);
        puVar6 = puVar5;
      }
      *(undefined8 *)*(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar1 + 8);
      *(longlong *)(*(longlong *)(lVar1 + 8) + 8) = *(longlong *)(lVar1 + 8);
      *(undefined8 *)(lVar1 + 0x10) = 0;
      local_res8 = *(longlong **)(lVar1 + 8);
      FUN_14000f7d0(*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),&local_res8);
    }
  }
  return;
}

