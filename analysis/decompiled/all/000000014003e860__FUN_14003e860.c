// Function: FUN_14003e860
// Addr: 14003e860
// Size: 728 bytes


void FUN_14003e860(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong local_res8;
  longlong *local_res10;
  longlong local_res18;
  longlong *local_res20;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (*(ulonglong *)(lVar1 + 0x10) != 0)) {
    plVar2 = *(longlong **)(lVar1 + 8);
    if (*(ulonglong *)(lVar1 + 0x10) < *(ulonglong *)(lVar1 + 0x38) >> 3) {
      plVar3 = (longlong *)*plVar2;
      if (plVar3 != plVar2) {
        plVar4 = (longlong *)plVar3[1];
        lVar5 = *(longlong *)(lVar1 + 0x18);
        lVar8 = (*(ulonglong *)(lVar1 + 0x30) &
                (((((((((ulonglong)*(byte *)(plVar3 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar3 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar3 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar3 + 0x13)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar3 + 0x14)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar3 + 0x15)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar3 + 0x16)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar3 + 0x17)) * 0x100000001b3) * 0x10;
        local_res20 = (longlong *)(lVar5 + 8 + lVar8);
        local_res10 = (longlong *)(lVar8 + lVar5);
        local_res8 = *(longlong *)(lVar8 + lVar5);
        plVar9 = (longlong *)*local_res20;
        plVar10 = plVar3;
        local_res18 = lVar5;
        do {
          plVar11 = (longlong *)*plVar10;
          thunk_FUN_14028af80(plVar10,0x20);
          *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -1;
          if (plVar10 == plVar9) {
            plVar9 = plVar4;
            if ((longlong *)local_res8 == plVar3) {
              *local_res10 = (longlong)plVar2;
              plVar9 = plVar2;
            }
            *local_res20 = (longlong)plVar9;
            while (plVar11 != plVar2) {
              uVar12 = *(ulonglong *)(lVar1 + 0x30) &
                       (((((((((ulonglong)*(byte *)(plVar11 + 2) ^ 0xcbf29ce484222325) *
                              0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar11 + 0x11)) *
                             0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar11 + 0x12)) *
                            0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar11 + 0x13)) *
                           0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar11 + 0x14)) *
                          0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar11 + 0x15)) *
                         0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar11 + 0x16)) *
                        0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar11 + 0x17)) *
                       0x100000001b3;
              plVar3 = *(longlong **)(local_res18 + 8 + uVar12 * 0x10);
              plVar9 = plVar11;
              while( true ) {
                plVar11 = (longlong *)*plVar9;
                thunk_FUN_14028af80(plVar9,0x20);
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -1;
                if (plVar9 == plVar3) break;
                plVar9 = plVar11;
                if (plVar11 == plVar2) {
                  *(longlong **)(lVar5 + uVar12 * 0x10) = plVar11;
                  goto LAB_14003e9a0;
                }
              }
              *(longlong **)(lVar5 + uVar12 * 0x10) = plVar2;
              *(longlong **)(local_res18 + 8 + uVar12 * 0x10) = plVar2;
              lVar5 = local_res18;
            }
            goto LAB_14003e9a0;
          }
          plVar10 = plVar11;
        } while (plVar11 != plVar2);
        if ((longlong *)local_res8 == plVar3) {
          *local_res10 = (longlong)plVar11;
        }
LAB_14003e9a0:
        *plVar4 = (longlong)plVar11;
        plVar11[1] = (longlong)plVar4;
        return;
      }
    }
    else {
      *(undefined8 *)plVar2[1] = 0;
      puVar7 = (undefined8 *)*plVar2;
      while (puVar7 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)*puVar7;
        thunk_FUN_14028af80(puVar7,0x20);
        puVar7 = puVar6;
      }
      *(undefined8 *)*(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar1 + 8);
      *(longlong *)(*(longlong *)(lVar1 + 8) + 8) = *(longlong *)(lVar1 + 8);
      *(undefined8 *)(lVar1 + 0x10) = 0;
      local_res8 = *(longlong *)(lVar1 + 8);
      FUN_14000f7d0(*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),&local_res8);
    }
  }
  return;
}

