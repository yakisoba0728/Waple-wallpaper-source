// Function: FUN_140276be0
// Addr: 140276be0
// Size: 798 bytes


void FUN_140276be0(longlong param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *local_res8;
  longlong local_res10;
  longlong *local_res18;
  longlong *local_res20;
  
  if ((*(longlong *)(param_1 + 0x108) != 0) && (lVar5 = FUN_14004c3c0(param_1 + 0x88), lVar5 == 0))
  {
    lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x78) + 4);
    uVar9 = 6;
    if (*(longlong *)(lVar5 + 0xc0 + param_1) != 0) {
      uVar9 = 2;
    }
    FUN_140013b50(param_1 + 0x78 + lVar5,uVar9 | *(uint *)(lVar5 + 0x88 + param_1),0);
  }
  if (*(ulonglong *)(param_1 + 0x48) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x40);
    if (*(ulonglong *)(param_1 + 0x48) < *(ulonglong *)(param_1 + 0x70) >> 3) {
      plVar13 = (longlong *)*plVar3;
      if (plVar13 != plVar3) {
        puVar12 = plVar13 + 2;
        local_res10 = *(longlong *)(param_1 + 0x50);
        local_res8 = (longlong *)plVar13[1];
        if (0xf < (ulonglong)plVar13[5]) {
          puVar12 = (undefined8 *)*puVar12;
        }
        uVar8 = 0;
        uVar10 = 0xcbf29ce484222325;
        if (plVar13[4] != 0) {
          do {
            pbVar1 = (byte *)((longlong)puVar12 + uVar8);
            uVar8 = uVar8 + 1;
            uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
          } while (uVar8 < (ulonglong)plVar13[4]);
        }
        lVar6 = (*(ulonglong *)(param_1 + 0x68) & uVar10) * 0x10;
        lVar5 = *(longlong *)(lVar6 + local_res10);
        plVar2 = (longlong *)(lVar6 + local_res10);
        local_res20 = (longlong *)(lVar6 + 8 + local_res10);
        local_res18 = (longlong *)*local_res20;
        plVar7 = plVar13;
        do {
          plVar11 = (longlong *)*plVar7;
          FUN_140017240(plVar7 + 2);
          thunk_FUN_14028af80(plVar7,0x38);
          *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + -1;
          if (plVar7 == local_res18) {
            plVar7 = local_res8;
            if ((longlong *)lVar5 == plVar13) {
              *plVar2 = (longlong)plVar3;
              plVar7 = plVar3;
            }
            *local_res20 = (longlong)plVar7;
            while (plVar11 != plVar3) {
              plVar13 = plVar11 + 2;
              if (0xf < (ulonglong)plVar11[5]) {
                plVar13 = (longlong *)*plVar13;
              }
              uVar8 = 0;
              uVar10 = 0xcbf29ce484222325;
              if (plVar11[4] != 0) {
                do {
                  pbVar1 = (byte *)((longlong)plVar13 + uVar8);
                  uVar8 = uVar8 + 1;
                  uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
                } while (uVar8 < (ulonglong)plVar11[4]);
              }
              uVar10 = *(ulonglong *)(param_1 + 0x68) & uVar10;
              plVar2 = *(longlong **)(local_res10 + 8 + uVar10 * 0x10);
              plVar13 = (longlong *)(local_res10 + uVar10 * 0x10);
              plVar7 = plVar11;
              while( true ) {
                plVar11 = (longlong *)*plVar7;
                FUN_140017240(plVar7 + 2);
                thunk_FUN_14028af80(plVar7,0x38);
                *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + -1;
                if (plVar7 == plVar2) break;
                plVar7 = plVar11;
                if (plVar11 == plVar3) {
                  *plVar13 = (longlong)plVar11;
                  goto LAB_140276d5c;
                }
              }
              *plVar13 = (longlong)plVar3;
              *(longlong **)(local_res10 + 8 + uVar10 * 0x10) = plVar3;
            }
            goto LAB_140276d5c;
          }
          plVar7 = plVar11;
        } while (plVar11 != plVar3);
        if ((longlong *)lVar5 == plVar13) {
          *plVar2 = (longlong)plVar11;
        }
LAB_140276d5c:
        *local_res8 = (longlong)plVar11;
        plVar11[1] = (longlong)local_res8;
        return;
      }
    }
    else {
      *(undefined8 *)plVar3[1] = 0;
      puVar12 = (undefined8 *)*plVar3;
      while (puVar12 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*puVar12;
        FUN_140017240(puVar12 + 2);
        thunk_FUN_14028af80(puVar12,0x38);
        puVar12 = puVar4;
      }
      *(undefined8 *)*(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x40);
      *(longlong *)(*(longlong *)(param_1 + 0x40) + 8) = *(longlong *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x48) = 0;
      local_res8 = *(longlong **)(param_1 + 0x40);
      FUN_14000f7d0(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),&local_res8);
    }
  }
  return;
}

