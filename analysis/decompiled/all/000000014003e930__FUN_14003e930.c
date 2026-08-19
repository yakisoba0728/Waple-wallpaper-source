// Function: FUN_14003e930
// Addr: 14003e930
// Size: 208 bytes


void FUN_14003e930(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong local_res8;
  longlong *plStackX_10;
  longlong lStackX_18;
  longlong *plStackX_20;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (*(ulonglong *)(lVar1 + 0x10) != 0)) {
    plVar2 = *(longlong **)(lVar1 + 8);
    if (*(ulonglong *)(lVar1 + 0x10) < *(ulonglong *)(lVar1 + 0x38) >> 3) {
      plVar3 = (longlong *)*plVar2;
      if (plVar3 != plVar2) {
        plVar4 = (longlong *)plVar3[1];
        lVar5 = *(longlong *)(lVar1 + 0x18);
        lVar6 = (*(ulonglong *)(lVar1 + 0x30) &
                (((((((((ulonglong)*(byte *)(plVar3 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar3 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar3 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar3 + 0x13)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar3 + 0x14)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar3 + 0x15)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar3 + 0x16)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar3 + 0x17)) * 0x100000001b3) * 0x10;
        plStackX_20 = (longlong *)(lVar5 + 8 + lVar6);
        plStackX_10 = (longlong *)(lVar6 + lVar5);
        local_res8 = *(longlong *)(lVar6 + lVar5);
        plVar7 = (longlong *)*plStackX_20;
        plVar8 = plVar3;
        lStackX_18 = lVar5;
        do {
          plVar9 = (longlong *)*plVar8;
          func_0x00014028b040(plVar8,0x20);
          *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -1;
          if (plVar8 == plVar7) {
            plVar7 = plVar4;
            if ((longlong *)local_res8 == plVar3) {
              *plStackX_10 = (longlong)plVar2;
              plVar7 = plVar2;
            }
            *plStackX_20 = (longlong)plVar7;
            while (plVar9 != plVar2) {
              uVar10 = *(ulonglong *)(lVar1 + 0x30) &
                       (((((((((ulonglong)*(byte *)(plVar9 + 2) ^ 0xcbf29ce484222325) *
                              0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar9 + 0x11)) *
                             0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar9 + 0x12)) *
                            0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar9 + 0x13)) *
                           0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar9 + 0x14)) *
                          0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar9 + 0x15)) *
                         0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar9 + 0x16)) *
                        0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar9 + 0x17)) *
                       0x100000001b3;
              plVar3 = *(longlong **)(lStackX_18 + 8 + uVar10 * 0x10);
              plVar7 = plVar9;
              while( true ) {
                plVar9 = (longlong *)*plVar7;
                func_0x00014028b040(plVar7,0x20);
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -1;
                if (plVar7 == plVar3) break;
                plVar7 = plVar9;
                if (plVar9 == plVar2) {
                  *(longlong **)(lVar5 + uVar10 * 0x10) = plVar9;
                  goto code_r0x00014003ea70;
                }
              }
              *(longlong **)(lVar5 + uVar10 * 0x10) = plVar2;
              *(longlong **)(lStackX_18 + 8 + uVar10 * 0x10) = plVar2;
              lVar5 = lStackX_18;
            }
            goto code_r0x00014003ea70;
          }
          plVar8 = plVar9;
        } while (plVar9 != plVar2);
        if ((longlong *)local_res8 == plVar3) {
          *plStackX_10 = (longlong)plVar9;
        }
code_r0x00014003ea70:
        *plVar4 = (longlong)plVar9;
        plVar9[1] = (longlong)plVar4;
        return;
      }
    }
    else {
      *(undefined8 *)plVar2[1] = 0;
      if (*plVar2 != 0) {
        func_0x00014028b040(*plVar2,0x20);
        return;
      }
      *(undefined8 *)*(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar1 + 8);
      *(longlong *)(*(longlong *)(lVar1 + 8) + 8) = *(longlong *)(lVar1 + 8);
      *(undefined8 *)(lVar1 + 0x10) = 0;
      local_res8 = *(longlong *)(lVar1 + 8);
      func_0x00014000f8a0(*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),&local_res8);
    }
  }
  return;
}

