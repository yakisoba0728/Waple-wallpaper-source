// Function: FUN_1401a85f0
// Addr: 1401a85f0
// Size: 931 bytes


void FUN_1401a85f0(longlong *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  bool bVar14;
  longlong *local_res8;
  longlong local_res10;
  longlong *local_res18;
  longlong *local_res20;
  
  local_res10 = *param_1;
  if ((local_res10 != 0) && (uVar6 = *(ulonglong *)(local_res10 + 0x10), uVar6 != 0)) {
    plVar2 = *(longlong **)(local_res10 + 8);
    if (*(ulonglong *)(local_res10 + 0x38) >> 3 <= uVar6) {
      FUN_14017e5c0(uVar6,plVar2);
      *(undefined8 *)*(undefined8 *)(local_res10 + 8) = *(undefined8 *)(local_res10 + 8);
      *(longlong *)(*(longlong *)(local_res10 + 8) + 8) = *(longlong *)(local_res10 + 8);
      *(undefined8 *)(local_res10 + 0x10) = 0;
      local_res8 = *(longlong **)(local_res10 + 8);
      FUN_14000f7d0(*(undefined8 *)(local_res10 + 0x18),*(undefined8 *)(local_res10 + 0x20),
                    &local_res8);
      return;
    }
    plVar11 = (longlong *)*plVar2;
    if (plVar11 != plVar2) {
      puVar13 = plVar11 + 2;
      local_res8 = (longlong *)plVar11[1];
      lVar3 = *(longlong *)(local_res10 + 0x18);
      if (0xf < (ulonglong)plVar11[5]) {
        puVar13 = (undefined8 *)*puVar13;
      }
      uVar6 = 0;
      uVar7 = 0xcbf29ce484222325;
      if (plVar11[4] != 0) {
        do {
          pbVar1 = (byte *)((longlong)puVar13 + uVar6);
          uVar6 = uVar6 + 1;
          uVar7 = (uVar7 ^ *pbVar1) * 0x100000001b3;
        } while (uVar6 < (ulonglong)plVar11[4]);
      }
      lVar4 = (*(ulonglong *)(local_res10 + 0x30) & uVar7) * 0x10;
      plVar8 = (longlong *)(lVar3 + 8 + lVar4);
      local_res20 = (longlong *)(lVar4 + lVar3);
      local_res18 = *(longlong **)(lVar4 + lVar3);
      plVar5 = (longlong *)*plVar8;
      plVar9 = plVar11;
      while( true ) {
        lVar4 = 1;
        plVar10 = (longlong *)*plVar9;
        plVar12 = plVar9 + 0x1a;
        do {
          plVar12 = plVar12 + -4;
          FUN_140017240(plVar12);
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        FUN_14000d9e0(plVar9 + 0x11);
        FUN_1400f8d70(plVar9 + 0xf);
        FUN_14000d9e0(plVar9 + 9);
        FUN_140164020(plVar9 + 7);
        FUN_140017240(plVar9 + 2);
        thunk_FUN_14028af80(plVar9);
        *(longlong *)(local_res10 + 0x10) = *(longlong *)(local_res10 + 0x10) + -1;
        if (plVar9 == plVar5) break;
        plVar9 = plVar10;
        if (plVar10 == plVar2) {
          bVar14 = local_res18 == plVar11;
          local_res18 = local_res20;
          if (bVar14) {
LAB_1401a878d:
            *local_res18 = (longlong)plVar10;
          }
LAB_1401a8790:
          *local_res8 = (longlong)plVar10;
          plVar10[1] = (longlong)local_res8;
          return;
        }
      }
      plVar5 = local_res8;
      if (local_res18 == plVar11) {
        *local_res20 = (longlong)plVar2;
        plVar5 = plVar2;
      }
      *plVar8 = (longlong)plVar5;
      while (plVar10 != plVar2) {
        plVar11 = plVar10 + 2;
        if (0xf < (ulonglong)plVar10[5]) {
          plVar11 = (longlong *)*plVar11;
        }
        uVar7 = 0;
        uVar6 = 0xcbf29ce484222325;
        if (plVar10[4] != 0) {
          do {
            pbVar1 = (byte *)((longlong)plVar11 + uVar7);
            uVar7 = uVar7 + 1;
            uVar6 = (uVar6 ^ *pbVar1) * 0x100000001b3;
          } while (uVar7 < (ulonglong)plVar10[4]);
        }
        uVar6 = *(ulonglong *)(local_res10 + 0x30) & uVar6;
        local_res18 = (longlong *)(lVar3 + uVar6 * 0x10);
        local_res20 = *(longlong **)(lVar3 + 8 + uVar6 * 0x10);
        plVar11 = plVar10;
        while( true ) {
          lVar4 = 1;
          plVar10 = (longlong *)*plVar11;
          plVar5 = plVar11 + 0x1a;
          do {
            plVar5 = plVar5 + -4;
            FUN_140017240(plVar5);
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
          FUN_14000d9e0(plVar11 + 0x11);
          FUN_1400f8d70(plVar11 + 0xf);
          FUN_14000d9e0(plVar11 + 9);
          FUN_140164020(plVar11 + 7);
          FUN_140017240(plVar11 + 2);
          thunk_FUN_14028af80(plVar11);
          *(longlong *)(local_res10 + 0x10) = *(longlong *)(local_res10 + 0x10) + -1;
          if (plVar11 == local_res20) break;
          plVar11 = plVar10;
          if (plVar10 == plVar2) goto LAB_1401a878d;
        }
        *local_res18 = (longlong)plVar2;
        *(longlong **)(lVar3 + 8 + uVar6 * 0x10) = plVar2;
      }
      goto LAB_1401a8790;
    }
  }
  return;
}

