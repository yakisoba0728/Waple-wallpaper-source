// Function: FUN_14014fbd0
// Addr: 14014fbd0
// Size: 844 bytes


void FUN_14014fbd0(longlong *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *local_res8;
  longlong *local_res10;
  longlong local_res18;
  longlong *local_res20;
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && (*(ulonglong *)(lVar2 + 0x10) != 0)) {
    plVar3 = *(longlong **)(lVar2 + 8);
    if (*(ulonglong *)(lVar2 + 0x10) < *(ulonglong *)(lVar2 + 0x38) >> 3) {
      plVar13 = (longlong *)*plVar3;
      if (plVar13 != plVar3) {
        puVar12 = plVar13 + 2;
        local_res18 = *(longlong *)(lVar2 + 0x18);
        local_res8 = (longlong *)plVar13[1];
        if (0xf < (ulonglong)plVar13[5]) {
          puVar12 = (undefined8 *)*puVar12;
        }
        uVar7 = 0;
        uVar9 = 0xcbf29ce484222325;
        if (plVar13[4] != 0) {
          do {
            pbVar1 = (byte *)((longlong)puVar12 + uVar7);
            uVar7 = uVar7 + 1;
            uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
          } while (uVar7 < (ulonglong)plVar13[4]);
        }
        lVar5 = (*(ulonglong *)(lVar2 + 0x30) & uVar9) * 0x10;
        plVar8 = (longlong *)(local_res18 + 8 + lVar5);
        plVar11 = (longlong *)(lVar5 + local_res18);
        local_res10 = *(longlong **)(lVar5 + local_res18);
        local_res20 = (longlong *)*plVar8;
        plVar6 = plVar13;
        do {
          plVar10 = (longlong *)*plVar6;
          FUN_1400efd70(plVar6 + 0x14);
          FUN_14000d9e0(plVar6 + 0xd);
          FUN_14000da50(plVar6 + 0xb);
          FUN_140017240(plVar6 + 2);
          thunk_FUN_14028af80(plVar6);
          *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -1;
          if (plVar6 == local_res20) {
            plVar6 = local_res8;
            if (local_res10 == plVar13) {
              *plVar11 = (longlong)plVar3;
              plVar6 = plVar3;
            }
            *plVar8 = (longlong)plVar6;
            while (plVar10 != plVar3) {
              plVar13 = plVar10 + 2;
              if (0xf < (ulonglong)plVar10[5]) {
                plVar13 = (longlong *)*plVar13;
              }
              uVar9 = 0;
              uVar7 = 0xcbf29ce484222325;
              if (plVar10[4] != 0) {
                do {
                  pbVar1 = (byte *)((longlong)plVar13 + uVar9);
                  uVar9 = uVar9 + 1;
                  uVar7 = (uVar7 ^ *pbVar1) * 0x100000001b3;
                } while (uVar9 < (ulonglong)plVar10[4]);
              }
              uVar7 = *(ulonglong *)(lVar2 + 0x30) & uVar7;
              plVar13 = *(longlong **)(local_res18 + 8 + uVar7 * 0x10);
              local_res10 = (longlong *)(local_res18 + uVar7 * 0x10);
              plVar11 = plVar10;
              while( true ) {
                plVar10 = (longlong *)*plVar11;
                FUN_1400efd70(plVar11 + 0x14);
                FUN_14000d9e0(plVar11 + 0xd);
                FUN_14000da50(plVar11 + 0xb);
                FUN_140017240(plVar11 + 2);
                thunk_FUN_14028af80(plVar11);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -1;
                if (plVar11 == plVar13) break;
                plVar11 = plVar10;
                if (plVar10 == plVar3) {
                  *local_res10 = (longlong)plVar10;
                  goto LAB_14014fd31;
                }
              }
              *local_res10 = (longlong)plVar3;
              *(longlong **)(local_res18 + 8 + uVar7 * 0x10) = plVar3;
            }
            goto LAB_14014fd31;
          }
          plVar6 = plVar10;
        } while (plVar10 != plVar3);
        if (local_res10 == plVar13) {
          *plVar11 = (longlong)plVar10;
        }
LAB_14014fd31:
        *local_res8 = (longlong)plVar10;
        plVar10[1] = (longlong)local_res8;
        return;
      }
    }
    else {
      *(undefined8 *)plVar3[1] = 0;
      puVar12 = (undefined8 *)*plVar3;
      while (puVar12 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*puVar12;
        FUN_1400efd70(puVar12 + 0x14);
        FUN_14000d9e0(puVar12 + 0xd);
        FUN_14000da50(puVar12 + 0xb);
        FUN_140017240(puVar12 + 2);
        thunk_FUN_14028af80(puVar12,0xb8);
        puVar12 = puVar4;
      }
      *(undefined8 *)*(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar2 + 8);
      *(longlong *)(*(longlong *)(lVar2 + 8) + 8) = *(longlong *)(lVar2 + 8);
      *(undefined8 *)(lVar2 + 0x10) = 0;
      local_res8 = *(longlong **)(lVar2 + 8);
      FUN_14000f7d0(*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20),&local_res8);
    }
  }
  return;
}

