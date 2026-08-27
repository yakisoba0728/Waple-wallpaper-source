// Function: FUN_1401dce80
// Addr: 1401dce80
// Size: 883 bytes


void FUN_1401dce80(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
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
        plVar11 = (longlong *)plVar3[1];
        lVar6 = (*(ulonglong *)(lVar1 + 0x30) &
                (((((((((ulonglong)*(byte *)(plVar3 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar3 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar3 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar3 + 0x13)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar3 + 0x14)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar3 + 0x15)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar3 + 0x16)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar3 + 0x17)) * 0x100000001b3) * 0x10;
        plVar8 = (longlong *)(local_res18 + 8 + lVar6);
        local_res10 = (longlong *)(lVar6 + local_res18);
        local_res8 = *(longlong **)(lVar6 + local_res18);
        plVar7 = (longlong *)*plVar8;
        plVar9 = plVar3;
        local_res20 = plVar11;
        do {
          plVar10 = (longlong *)*plVar9;
          FUN_14000d9e0(plVar9 + 6);
          FUN_1400d2120(plVar9 + 4);
          thunk_FUN_14028af80(plVar9,0x58);
          *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -1;
          if (plVar9 == plVar7) {
            plVar7 = plVar11;
            if (local_res8 == plVar3) {
              *local_res10 = (longlong)plVar2;
              plVar7 = plVar2;
            }
            *plVar8 = (longlong)plVar7;
            while (plVar10 != plVar2) {
              uVar12 = *(ulonglong *)(lVar1 + 0x30) &
                       (((((((((ulonglong)*(byte *)(plVar10 + 2) ^ 0xcbf29ce484222325) *
                              0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar10 + 0x11)) *
                             0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar10 + 0x12)) *
                            0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar10 + 0x13)) *
                           0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar10 + 0x14)) *
                          0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar10 + 0x15)) *
                         0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar10 + 0x16)) *
                        0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar10 + 0x17)) *
                       0x100000001b3;
              plVar3 = *(longlong **)(local_res18 + 8 + uVar12 * 0x10);
              local_res8 = (longlong *)(local_res18 + uVar12 * 0x10);
              plVar11 = plVar10;
              while( true ) {
                plVar10 = (longlong *)*plVar11;
                FUN_14000d9e0(plVar11 + 6);
                FUN_1400d2120(plVar11 + 4);
                thunk_FUN_14028af80(plVar11,0x58);
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -1;
                if (plVar11 == plVar3) break;
                plVar11 = plVar10;
                if (plVar10 == plVar2) {
                  *local_res8 = (longlong)plVar10;
                  *local_res20 = (longlong)plVar10;
                  plVar10[1] = (longlong)local_res20;
                  return;
                }
              }
              *local_res8 = (longlong)plVar2;
              *(longlong **)(local_res18 + 8 + uVar12 * 0x10) = plVar2;
              plVar11 = local_res20;
            }
            goto LAB_1401dd000;
          }
          plVar9 = plVar10;
        } while (plVar10 != plVar2);
        if (local_res8 == plVar3) {
          *local_res10 = (longlong)plVar10;
        }
LAB_1401dd000:
        *plVar11 = (longlong)plVar10;
        plVar10[1] = (longlong)plVar11;
        return;
      }
    }
    else {
      *(undefined8 *)plVar2[1] = 0;
      puVar5 = (undefined8 *)*plVar2;
      while (puVar5 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*puVar5;
        FUN_14000d9e0(puVar5 + 6);
        FUN_1400d2120(puVar5 + 4);
        thunk_FUN_14028af80(puVar5,0x58);
        puVar5 = puVar4;
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

