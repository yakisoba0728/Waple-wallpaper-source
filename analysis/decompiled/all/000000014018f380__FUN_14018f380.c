// Function: FUN_14018f380
// Addr: 14018f380
// Size: 1099 bytes


undefined8 FUN_14018f380(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong *local_res18;
  longlong local_res20;
  longlong local_80;
  longlong local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  
  param_2 = param_2 & 0xff;
  if (*(longlong *)(param_1 + 0x428 + param_2 * 8) == 0) {
    lVar7 = FUN_140185960(param_1 + 0x438);
    *(longlong *)(param_1 + 0x428 + param_2 * 8) = lVar7;
    if (lVar7 == 0) {
      return 0;
    }
  }
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 0x20000000;
  iVar6 = FUN_140290d80(&DAT_1404dfaf0);
  if (iVar6 == 0) {
    if (DAT_1404dfb3c == 0x7fffffff) {
      DAT_1404dfb3c = 0x7ffffffe;
    }
    else {
      lVar7 = *(longlong *)(param_1 + 0x428 + param_2 * 8);
      local_78[0] = DAT_1404e8ee8;
      iVar6 = FUN_140290d80(&DAT_1404dfb40);
      if (iVar6 != 0) goto LAB_14018f7c2;
      if (DAT_1404dfb8c != 0x7fffffff) {
        puVar15 = *(undefined8 **)(lVar7 + 0x48);
        local_80 = lVar7;
        for (puVar3 = (undefined8 *)*puVar15; puVar3 != puVar15; puVar3 = (undefined8 *)*puVar3) {
          FUN_140016fc0(local_68,puVar3 + 2);
          local_48 = puVar3[6];
          local_40 = puVar3[7];
          thunk_FUN_14028af80();
          FUN_140017240(local_68);
        }
        if (*(ulonglong *)(lVar7 + 0x50) != 0) {
          plVar4 = *(longlong **)(lVar7 + 0x48);
          if (*(ulonglong *)(lVar7 + 0x50) < *(ulonglong *)(lVar7 + 0x78) >> 3) {
            plVar16 = (longlong *)*plVar4;
            if (plVar16 != plVar4) {
              puVar15 = plVar16 + 2;
              local_res20 = *(longlong *)(lVar7 + 0x58);
              local_res18 = (longlong *)plVar16[1];
              if (0xf < (ulonglong)plVar16[5]) {
                puVar15 = (undefined8 *)*puVar15;
              }
              uVar11 = 0;
              uVar12 = 0xcbf29ce484222325;
              if (plVar16[4] != 0) {
                do {
                  pbVar1 = (byte *)(uVar11 + (longlong)puVar15);
                  uVar11 = uVar11 + 1;
                  uVar12 = (uVar12 ^ *pbVar1) * 0x100000001b3;
                } while (uVar11 < (ulonglong)plVar16[4]);
              }
              lVar8 = (*(ulonglong *)(lVar7 + 0x70) & uVar12) * 0x10;
              lVar5 = *(longlong *)(lVar8 + local_res20);
              plVar2 = (longlong *)(lVar8 + local_res20);
              plVar9 = (longlong *)(lVar8 + 8 + local_res20);
              plVar10 = (longlong *)*plVar9;
              plVar13 = plVar16;
              do {
                plVar14 = (longlong *)*plVar13;
                FUN_140017240(plVar13 + 2);
                thunk_FUN_14028af80(plVar13,0x40);
                *(longlong *)(lVar7 + 0x50) = *(longlong *)(lVar7 + 0x50) + -1;
                if (plVar13 == plVar10) {
                  plVar10 = local_res18;
                  if ((longlong *)lVar5 == plVar16) {
                    *plVar2 = (longlong)plVar4;
                    plVar10 = plVar4;
                  }
                  *plVar9 = (longlong)plVar10;
                  if (plVar14 == plVar4) {
LAB_14018f691:
                    *local_res18 = (longlong)plVar14;
                    plVar14[1] = (longlong)local_res18;
                  }
                  else {
                    do {
                      plVar16 = plVar14 + 2;
                      if (0xf < (ulonglong)plVar14[5]) {
                        plVar16 = (longlong *)*plVar16;
                      }
                      uVar11 = 0;
                      uVar12 = 0xcbf29ce484222325;
                      if (plVar14[4] != 0) {
                        do {
                          pbVar1 = (byte *)(uVar11 + (longlong)plVar16);
                          uVar11 = uVar11 + 1;
                          uVar12 = (uVar12 ^ *pbVar1) * 0x100000001b3;
                        } while (uVar11 < (ulonglong)plVar14[4]);
                      }
                      uVar12 = *(ulonglong *)(lVar7 + 0x70) & uVar12;
                      plVar2 = *(longlong **)(local_res20 + 8 + uVar12 * 0x10);
                      plVar16 = (longlong *)(local_res20 + uVar12 * 0x10);
                      plVar10 = plVar14;
                      while( true ) {
                        plVar14 = (longlong *)*plVar10;
                        FUN_140017240(plVar10 + 2);
                        thunk_FUN_14028af80(plVar10,0x40);
                        *(longlong *)(lVar7 + 0x50) = *(longlong *)(lVar7 + 0x50) + -1;
                        if (plVar10 == plVar2) break;
                        plVar10 = plVar14;
                        if (plVar14 == plVar4) {
                          *plVar16 = (longlong)plVar14;
                          goto LAB_14018f691;
                        }
                      }
                      *plVar16 = (longlong)plVar4;
                      *(longlong **)(local_res20 + 8 + uVar12 * 0x10) = plVar4;
                    } while (plVar14 != plVar4);
                    *local_res18 = (longlong)plVar14;
                    plVar14[1] = (longlong)local_res18;
                  }
                  goto LAB_14018f744;
                }
                plVar13 = plVar14;
              } while (plVar14 != plVar4);
              if ((longlong *)lVar5 == plVar16) {
                *plVar2 = (longlong)plVar14;
              }
              *local_res18 = (longlong)plVar14;
              plVar14[1] = (longlong)local_res18;
            }
          }
          else {
            *(undefined8 *)plVar4[1] = 0;
            puVar15 = (undefined8 *)*plVar4;
            while (puVar15 != (undefined8 *)0x0) {
              puVar3 = (undefined8 *)*puVar15;
              FUN_140017240(puVar15 + 2);
              thunk_FUN_14028af80(puVar15,0x40);
              puVar15 = puVar3;
            }
            *(undefined8 *)*(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(lVar7 + 0x48);
            *(longlong *)(*(longlong *)(lVar7 + 0x48) + 8) = *(longlong *)(lVar7 + 0x48);
            *(undefined8 *)(lVar7 + 0x50) = 0;
            local_res18 = *(longlong **)(lVar7 + 0x48);
            FUN_14000f7d0(*(undefined8 *)(lVar7 + 0x58),*(undefined8 *)(lVar7 + 0x60),&local_res18);
          }
        }
LAB_14018f744:
        *(undefined1 *)(lVar7 + 0x84) = 0;
        FUN_1401e42c0(local_78[0] + 0x28,local_78,&local_80);
        FUN_140290ea0(&DAT_1404dfb40);
        FUN_140290ea0(&DAT_1404dfaf0);
        return 1;
      }
      DAT_1404dfb8c = 0x7ffffffe;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
LAB_14018f7c2:
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(5);
}

