// Function: FUN_1401afe00
// Addr: 1401afe00
// Size: 1212 bytes


void FUN_1401afe00(longlong param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong local_res8;
  longlong *local_res10;
  longlong local_res18;
  longlong *local_res20;
  
  puVar14 = *(undefined8 **)(param_1 + 0x148);
  local_res8 = param_1;
  for (puVar2 = (undefined8 *)*puVar14; puVar2 != puVar14; puVar2 = (undefined8 *)*puVar2) {
    lVar11 = puVar2[6];
    FUN_1401aca20(*(undefined8 *)(lVar11 + 0x70));
    *(undefined8 *)(lVar11 + 0x70) = 0;
    puVar3 = *(undefined8 **)(lVar11 + 0x80);
    for (puVar4 = (undefined8 *)*puVar3; puVar4 != puVar3; puVar4 = (undefined8 *)*puVar4) {
      FUN_1401aca20(puVar4[3]);
    }
    FUN_14015a390(lVar11 + 0x78);
    puVar3 = *(undefined8 **)(lVar11 + 0x38);
    for (puVar4 = (undefined8 *)*puVar3; puVar4 != puVar3; puVar4 = (undefined8 *)*puVar4) {
      plVar5 = (longlong *)puVar4[4];
      for (plVar16 = (longlong *)puVar4[3]; plVar16 != plVar5; plVar16 = plVar16 + 3) {
        if (plVar16[1] != 0) {
          FUN_1402efa80();
        }
        if (plVar16[2] != 0) {
          FUN_140415ec0();
        }
        *(int *)(*plVar16 + 0xc) = *(int *)(*plVar16 + 0xc) + -1;
      }
    }
    FUN_1401b45c0(lVar11 + 0x30);
    lVar11 = puVar2[6];
    if (lVar11 != 0) {
      FUN_14000d9e0(lVar11 + 0xd0);
      FUN_140049340(lVar11 + 0xc0);
      FUN_14000d9e0(lVar11 + 0x90);
      FUN_14003de70(lVar11 + 0x80);
      FUN_14000d9e0(lVar11 + 0x48);
      FUN_1401b4540(lVar11 + 0x38);
      FUN_140017240(lVar11);
      thunk_FUN_14028af80(lVar11,0xf8);
    }
  }
  uVar9 = 0;
  FUN_1400f1000(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1402efbf0();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  thunk_FUN_14028af80(*(undefined8 *)(param_1 + 8),0x20);
  local_res20 = (longlong *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar14 = (undefined8 *)*local_res20;
  for (puVar2 = (undefined8 *)*puVar14; puVar2 != puVar14; puVar2 = (undefined8 *)*puVar2) {
    thunk_FUN_14028af80(*(undefined8 *)puVar2[6]);
    thunk_FUN_14028af80(puVar2[6]);
  }
  lVar11 = local_res8;
  if (*(ulonglong *)(local_res8 + 400) != 0) {
    plVar5 = (longlong *)*local_res20;
    if (*(ulonglong *)(local_res8 + 400) < *(ulonglong *)(local_res8 + 0x1b8) >> 3) {
      plVar16 = (longlong *)*plVar5;
      if (plVar16 != plVar5) {
        puVar14 = plVar16 + 2;
        local_res18 = *(longlong *)(local_res8 + 0x198);
        local_res10 = (longlong *)plVar16[1];
        if (0xf < (ulonglong)plVar16[5]) {
          puVar14 = (undefined8 *)*puVar14;
        }
        uVar10 = 0xcbf29ce484222325;
        if (plVar16[4] != 0) {
          do {
            pbVar1 = (byte *)(uVar9 + (longlong)puVar14);
            uVar9 = uVar9 + 1;
            uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
          } while (uVar9 < (ulonglong)plVar16[4]);
        }
        lVar6 = (*(ulonglong *)(local_res8 + 0x1b0) & uVar10) * 0x10;
        lVar11 = *(longlong *)(lVar6 + local_res18);
        plVar15 = (longlong *)(lVar6 + local_res18);
        plVar7 = (longlong *)(lVar6 + 8 + local_res18);
        plVar8 = (longlong *)*plVar7;
        plVar13 = plVar16;
        do {
          plVar12 = (longlong *)*plVar13;
          FUN_140017240(plVar13 + 2);
          thunk_FUN_14028af80(plVar13,0x38);
          *(longlong *)(local_res8 + 400) = *(longlong *)(local_res8 + 400) + -1;
          if (plVar13 == plVar8) {
            plVar8 = local_res10;
            if ((longlong *)lVar11 == plVar16) {
              *plVar15 = (longlong)plVar5;
              plVar8 = plVar5;
            }
            *plVar7 = (longlong)plVar8;
            plVar16 = local_res10;
            if (plVar12 == plVar5) {
LAB_1401b01cc:
              *plVar16 = (longlong)plVar12;
              plVar12[1] = (longlong)plVar16;
              lVar11 = local_res8;
            }
            else {
              do {
                plVar15 = plVar12 + 2;
                if (0xf < (ulonglong)plVar12[5]) {
                  plVar15 = (longlong *)*plVar15;
                }
                uVar9 = 0;
                uVar10 = 0xcbf29ce484222325;
                if (plVar12[4] != 0) {
                  do {
                    pbVar1 = (byte *)(uVar9 + (longlong)plVar15);
                    uVar9 = uVar9 + 1;
                    uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
                    plVar16 = local_res10;
                  } while (uVar9 < (ulonglong)plVar12[4]);
                }
                uVar10 = *(ulonglong *)(local_res8 + 0x1b0) & uVar10;
                plVar8 = *(longlong **)(local_res18 + 8 + uVar10 * 0x10);
                plVar15 = (longlong *)(local_res18 + uVar10 * 0x10);
                plVar13 = plVar12;
                while( true ) {
                  plVar12 = (longlong *)*plVar13;
                  FUN_140017240(plVar13 + 2);
                  thunk_FUN_14028af80(plVar13,0x38);
                  *(longlong *)(local_res8 + 400) = *(longlong *)(local_res8 + 400) + -1;
                  if (plVar13 == plVar8) break;
                  plVar13 = plVar12;
                  if (plVar12 == plVar5) {
                    *plVar15 = (longlong)plVar12;
                    goto LAB_1401b01cc;
                  }
                }
                *plVar15 = (longlong)plVar5;
                *(longlong **)(local_res18 + 8 + uVar10 * 0x10) = plVar5;
              } while (plVar12 != plVar5);
              *plVar16 = (longlong)plVar12;
              plVar12[1] = (longlong)plVar16;
              lVar11 = local_res8;
            }
            goto LAB_1401b027b;
          }
          plVar13 = plVar12;
        } while (plVar12 != plVar5);
        if ((longlong *)lVar11 == plVar16) {
          *plVar15 = (longlong)plVar12;
        }
        *local_res10 = (longlong)plVar12;
        plVar12[1] = (longlong)local_res10;
        lVar11 = local_res8;
      }
    }
    else {
      *(undefined8 *)plVar5[1] = 0;
      puVar14 = (undefined8 *)*plVar5;
      while (puVar14 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)*puVar14;
        local_res8 = lVar11;
        FUN_140017240(puVar14 + 2);
        thunk_FUN_14028af80(puVar14,0x38);
        puVar14 = puVar2;
        lVar11 = local_res8;
      }
      *(longlong *)*local_res20 = *local_res20;
      *(longlong *)(*local_res20 + 8) = *local_res20;
      *(undefined8 *)(lVar11 + 400) = 0;
      local_res8 = *local_res20;
      FUN_14000f7d0(*(undefined8 *)(lVar11 + 0x198),*(undefined8 *)(lVar11 + 0x1a0),&local_res8);
    }
  }
LAB_1401b027b:
  FUN_14000d9e0(lVar11 + 0x198);
  FUN_140030c70(local_res20);
  FUN_14000d9e0(lVar11 + 0x158);
  FUN_140030c70(lVar11 + 0x148);
  return;
}

