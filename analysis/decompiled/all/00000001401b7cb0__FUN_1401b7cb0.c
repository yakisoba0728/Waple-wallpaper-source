// Function: FUN_1401b7cb0
// Addr: 1401b7cb0
// Size: 684 bytes


void FUN_1401b7cb0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *local_res8;
  longlong *local_res10;
  longlong local_res18;
  longlong *local_res20;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (uVar6 = *(ulonglong *)(lVar1 + 0x10), uVar6 != 0)) {
    plVar2 = *(longlong **)(lVar1 + 8);
    if (uVar6 < *(ulonglong *)(lVar1 + 0x38) >> 3) {
      plVar3 = (longlong *)*plVar2;
      if (plVar3 != plVar2) {
        local_res8 = (undefined8 *)plVar3[1];
        lVar11 = *(longlong *)(lVar1 + 0x18);
        local_res18 = lVar11;
        uVar6 = FUN_1401b55d0(uVar6,plVar3 + 2);
        lVar7 = (uVar6 & *(ulonglong *)(lVar1 + 0x30)) * 0x10;
        plVar9 = (longlong *)(lVar11 + 8 + lVar7);
        local_res10 = *(longlong **)(lVar7 + lVar11);
        local_res20 = (longlong *)*plVar9;
        plVar8 = plVar3;
        do {
          plVar10 = (longlong *)*plVar8;
          FUN_14000d9e0(plVar8 + 10);
          FUN_1401b8010(plVar8 + 8);
          FUN_1400efc60(plVar8 + 3);
          thunk_FUN_14028af80(plVar8,0x78);
          *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -1;
          if (plVar8 == local_res20) {
            plVar8 = local_res8;
            if (local_res10 == plVar3) {
              *(longlong *)(lVar7 + lVar11) = (longlong)plVar2;
              plVar8 = plVar2;
            }
            *plVar9 = (longlong)plVar8;
            while (plVar10 != plVar2) {
              uVar6 = FUN_1401b55d0();
              uVar6 = uVar6 & *(ulonglong *)(lVar1 + 0x30);
              plVar3 = *(longlong **)(local_res18 + 8 + uVar6 * 0x10);
              local_res10 = (longlong *)(local_res18 + uVar6 * 0x10);
              plVar8 = plVar10;
              while( true ) {
                plVar10 = (longlong *)*plVar8;
                FUN_14000d9e0(plVar8 + 10);
                FUN_1401b8010(plVar8 + 8);
                FUN_1400efc60(plVar8 + 3);
                thunk_FUN_14028af80(plVar8,0x78);
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -1;
                if (plVar8 == plVar3) break;
                plVar8 = plVar10;
                if (plVar10 == plVar2) {
                  *local_res10 = (longlong)plVar10;
                  goto LAB_1401b7dc5;
                }
              }
              *local_res10 = (longlong)plVar2;
              *(longlong **)(local_res18 + 8 + uVar6 * 0x10) = plVar2;
            }
            goto LAB_1401b7dc5;
          }
          plVar8 = plVar10;
        } while (plVar10 != plVar2);
        if (local_res10 == plVar3) {
          *(longlong *)(lVar7 + lVar11) = (longlong)plVar10;
        }
LAB_1401b7dc5:
        *local_res8 = plVar10;
        plVar10[1] = (longlong)local_res8;
        return;
      }
    }
    else {
      *(undefined8 *)plVar2[1] = 0;
      puVar5 = (undefined8 *)*plVar2;
      while (puVar5 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*puVar5;
        FUN_14000d9e0(puVar5 + 10);
        FUN_1401b8010(puVar5 + 8);
        FUN_1400efc60(puVar5 + 3);
        thunk_FUN_14028af80(puVar5,0x78);
        puVar5 = puVar4;
      }
      *(undefined8 *)*(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar1 + 8);
      *(longlong *)(*(longlong *)(lVar1 + 8) + 8) = *(longlong *)(lVar1 + 8);
      *(undefined8 *)(lVar1 + 0x10) = 0;
      local_res8 = *(undefined8 **)(lVar1 + 8);
      FUN_14000f7d0(*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),&local_res8);
    }
  }
  return;
}

