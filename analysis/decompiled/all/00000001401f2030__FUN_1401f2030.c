// Function: FUN_1401f2030
// Addr: 1401f2030
// Size: 2705 bytes


/* WARNING: Removing unreachable block (ram,0x0001401f21e4) */

void FUN_1401f2030(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  code *pcVar5;
  int iVar6;
  longlong *plVar7;
  char cVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 ****ppppuVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined8 *unaff_R12;
  ulonglong uVar21;
  bool bVar22;
  int local_res8 [2];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [24];
  ulonglong local_e8 [5];
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined1 local_a8 [8];
  uint local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 ***local_60 [3];
  ulonglong local_48;
  
  puVar18 = auStack_108;
  plVar19 = *(longlong **)(param_1 + 0x2c8);
  for (plVar14 = *(longlong **)(param_1 + 0x2c0); plVar14 != plVar19; plVar14 = plVar14 + 1) {
    puVar10 = (undefined8 *)*plVar14;
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)(puVar10,1);
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x2c0);
  if (lVar9 != *(longlong *)(param_1 + 0x2c8)) {
    *(longlong *)(param_1 + 0x2c8) = lVar9;
  }
  FUN_1401de470(param_1,param_2);
  local_e8[1] = 0;
  local_e8[2] = 4;
  plVar19 = (longlong *)0xf;
  local_e8[3] = 0xf;
  local_e8[0] = (ulonglong)DAT_140490954;
  lVar9 = FUN_140087490(param_2,local_e8);
  if (0xf < local_e8[3]) {
    uVar16 = local_e8[3] + 1;
    uVar17 = local_e8[0];
    if (0xfff < uVar16) {
      uVar17 = *(ulonglong *)(local_e8[0] - 8);
      if (0x1f < (local_e8[0] - uVar17) - 8) goto LAB_1401f299a;
      uVar16 = local_e8[3] + 0x28;
    }
    thunk_FUN_14028af80(uVar17,uVar16);
  }
  local_e8[2] = 0;
  local_e8[3] = 0xf;
  local_e8[0] = local_e8[0] & 0xffffffffffffff00;
  if ((lVar9 != 0) && (*(char *)(lVar9 + 8) == '\x04')) {
    FUN_140085cc0(lVar9,local_60);
    ppppuVar13 = local_60;
    if (0xf < local_48) {
      ppppuVar13 = (undefined8 ****)local_60[0];
    }
    FUN_1400d3f80(&local_80,*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x1898),ppppuVar13,0);
    local_a0 = (local_a0 >> 8 & 0xfffffe) << 8;
    local_88 = 0;
    local_98 = 0;
    uStack_90 = 0;
    cVar8 = FUN_140017840(&local_80,local_a8);
    if (((cVar8 != '\0') && ((char)local_a0 == '\a')) &&
       (puVar10 = (undefined8 *)FUN_140086de0(local_a8,&DAT_14048e5e4),
       (*(uint *)(puVar10 + 1) & 0xff) == 6)) {
      cVar8 = (undefined8 *)*puVar10 == (undefined8 *)0x0;
      if ((bool)cVar8) {
        plVar14 = (longlong *)0x0;
      }
      else {
        plVar14 = (longlong *)**(undefined8 **)*puVar10;
      }
      puVar10 = (undefined8 *)*puVar10;
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,cVar8);
      if (puVar10 == (undefined8 *)0x0) {
        plVar19 = (longlong *)0x0;
      }
      else {
        plVar19 = (longlong *)*puVar10;
      }
      while( true ) {
        bVar22 = puVar10 == (undefined8 *)0x0;
        if (cVar8 == '\0') {
          bVar22 = plVar14 == plVar19;
        }
        if (bVar22) break;
        if ((char)plVar14[7] == '\a') {
          lVar9 = FUN_140086de0(plVar14 + 6,"options");
          if (*(char *)(lVar9 + 8) == '\a') {
            uVar11 = FUN_140086de0(lVar9,"events","");
            local_e8[4] = FUN_140086de0(plVar14 + 6,"center","");
            local_c0 = FUN_140086de0(plVar14 + 6,&DAT_14048e59c,&DAT_14048e59f);
            local_b8 = FUN_140086de0(plVar14 + 6,&DAT_14048e5ec,&DAT_14048e5ee);
            local_b0 = FUN_140086de0(plVar14 + 6,&DAT_14048e73c,&DAT_14048e740);
            local_e8[0] = FUN_140086de0(plVar14 + 6,&DAT_14048e880,0x14048e883);
            puVar12 = (undefined8 *)FUN_14028af20(0x340);
            lVar15 = *(longlong *)(param_1 + 200);
            puVar12[1] = 0;
            puVar12[2] = lVar15 + 0x1c88;
            puVar12[3] = 0;
            puVar12[4] = 0;
            puVar12[5] = 0;
            puVar12[6] = 0;
            puVar12[7] = 0;
            puVar12[8] = 0;
            *puVar12 = &PTR_FUN_140490a28;
            FUN_140153760(puVar12 + 9);
            puVar12[0x19] = param_1;
            puVar12[0x1a] = 0;
            puVar12[0x1b] = 0;
            puVar12[0x1c] = 0;
            puVar12[0x1d] = 0xf;
            *(undefined1 *)(puVar12 + 0x1a) = 0;
            *(undefined4 *)(puVar12 + 0x1e) = 1;
            puVar12[0x1f] = 0;
            puVar12[0x20] = 0;
            *(undefined4 *)(puVar12 + 0x21) = 0;
            puVar12[0x22] = 0;
            puVar12[0x23] = 0;
            puVar12[0x24] = 0;
            puVar12[0x25] = 0;
            puVar12[0x26] = 0;
            puVar12[0x27] = 0;
            puVar12[0x28] = 0;
            puVar12[0x29] = 0;
            puVar12[0x2a] = 0;
            puVar12[0x2b] = 0;
            puVar12[0x2c] = 0;
            puVar12[0x2d] = 0;
            puVar12[0x2e] = 0;
            puVar12[0x2f] = 0;
            puVar12[0x30] = 0;
            puVar12[0x31] = 0;
            puVar12[0x32] = 0;
            puVar12[0x33] = 0;
            puVar12[0x34] = 0;
            puVar12[0x35] = 0;
            puVar12[0x36] = 0;
            puVar12[0x37] = 0;
            puVar12[0x38] = 0;
            puVar12[0x39] = 0;
            puVar12[0x3a] = 0;
            puVar12[0x3b] = 0;
            puVar12[0x3c] = 0;
            puVar12[0x3d] = 0;
            puVar12[0x3e] = 0;
            puVar12[0x3f] = 0;
            puVar12[0x40] = 0;
            puVar12[0x41] = 0;
            puVar12[0x42] = 0;
            puVar12[0x43] = 0;
            puVar12[0x44] = 0;
            puVar12[0x45] = 0;
            puVar12[0x46] = 0;
            puVar12[0x47] = 0;
            puVar12[0x48] = 0;
            puVar12[0x49] = 0;
            puVar12[0x4a] = 0;
            puVar12[0x4b] = 0;
            puVar12[0x4c] = 0;
            puVar12[0x4d] = 0;
            puVar12[0x4e] = 0;
            puVar12[0x4f] = 0;
            puVar12[0x50] = 0;
            puVar12[0x51] = 0;
            puVar12[0x52] = 0;
            puVar12[0x53] = 0;
            puVar12[0x54] = 0;
            puVar12[0x55] = 0;
            puVar12[0x56] = 0;
            puVar12[0x57] = 0;
            puVar12[0x58] = 0;
            puVar12[0x59] = 0;
            puVar12[0x5a] = 0;
            puVar12[0x5b] = 0;
            puVar12[0x5c] = 0;
            puVar12[0x5d] = 0;
            puVar12[0x5e] = 0;
            puVar12[0x5f] = 0;
            puVar12[0x60] = 0;
            puVar12[0x61] = 0;
            puVar12[0x62] = 0;
            puVar12[99] = 0;
            puVar12[100] = 0;
            puVar12[0x65] = 0;
            puVar12[0x66] = 0;
            *(undefined4 *)(puVar12 + 0x67) = 0x3f800000;
            *(undefined4 *)((longlong)puVar12 + 0x33c) = 0x42480000;
            FUN_1401a38f0(puVar12 + 1,plVar14 + 6);
            FUN_1401730d0(*(longlong *)(param_1 + 200) + 0x1708,puVar12);
            cVar8 = FUN_1401a96b0(lVar9,puVar12 + 0x1f);
            if (cVar8 == '\0') {
              (**(code **)*puVar12)(puVar12,1);
            }
            else {
              FUN_1401a9410(uVar11,*(undefined4 *)(puVar12 + 0x1f),puVar12 + 0x22);
              FUN_1401f1bc0(local_e8[4],puVar12 + 0x25,*(undefined4 *)(puVar12 + 0x21),
                            *(uint *)((longlong)puVar12 + 0x104) >> 4 & 0xffffff01);
              FUN_1401f1bc0(local_c0,puVar12 + 0x37,*(undefined4 *)(puVar12 + 0x21),
                            *(uint *)((longlong)puVar12 + 0x104) >> 4 & 0xffffff01);
              FUN_1401f1bc0(local_b8,puVar12 + 0x49,*(undefined4 *)(puVar12 + 0x21),
                            *(uint *)((longlong)puVar12 + 0x104) >> 4 & 0xffffff01);
              if (*(char *)(local_b0 + 8) == '\x06') {
                uVar2 = *(uint *)((longlong)puVar12 + 0x104);
                uVar3 = *(undefined4 *)(puVar12 + 0x21);
                FUN_1401a8ce0(local_b0,puVar12 + 0x5b);
                if ((uVar2 >> 4 & 1) != 0) {
                  FUN_1401a98b0(uVar3,puVar12 + 0x5b);
                }
              }
              if (*(char *)(local_e8[0] + 8) == '\x06') {
                uVar2 = *(uint *)((longlong)puVar12 + 0x104);
                uVar3 = *(undefined4 *)(puVar12 + 0x21);
                FUN_1401a8ce0(local_e8[0],puVar12 + 0x61);
                if ((uVar2 >> 4 & 1) != 0) {
                  FUN_1401a98b0(uVar3,puVar12 + 0x61);
                }
              }
              unaff_R12 = *(undefined8 **)(param_1 + 0x2c8);
              if (unaff_R12 == *(undefined8 **)(param_1 + 0x2d0)) {
                uVar17 = (longlong)unaff_R12 - *(longlong *)(param_1 + 0x2c0);
                lVar9 = (longlong)uVar17 >> 3;
                if (lVar9 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  FUN_140013050();
                }
                uVar16 = (longlong)*(undefined8 **)(param_1 + 0x2d0) -
                         *(longlong *)(param_1 + 0x2c0) >> 3;
                if (0x1fffffffffffffff - (uVar16 >> 1) < uVar16) {
LAB_1401f2abe:
                    /* WARNING: Subroutine does not return */
                  FUN_140017370();
                }
                local_e8[0] = lVar9 + 1;
                uVar16 = (uVar16 >> 1) + uVar16;
                uVar21 = local_e8[0];
                if (local_e8[0] <= uVar16) {
                  uVar21 = uVar16;
                }
                if (0x1fffffffffffffff < uVar21) goto LAB_1401f2abe;
                uVar16 = uVar21 * 8;
                if (uVar16 == 0) {
                  uVar16 = 0;
                }
                else if (uVar16 < 0x1000) {
                  uVar16 = FUN_14028af20();
                }
                else {
                  if (uVar16 + 0x27 <= uVar16) goto LAB_1401f2abe;
                  lVar9 = FUN_14028af20(uVar16 + 0x27);
                  if (lVar9 == 0) goto LAB_1401f299a;
                  uVar16 = lVar9 + 0x27U & 0xffffffffffffffe0;
                  *(longlong *)(uVar16 - 8) = lVar9;
                }
                uVar17 = uVar17 & 0xfffffffffffffff8;
                *(undefined8 **)(uVar17 + uVar16) = puVar12;
                puVar12 = *(undefined8 **)(param_1 + 0x2c0);
                if (unaff_R12 == *(undefined8 **)(param_1 + 0x2c8)) {
                  lVar9 = (longlong)*(undefined8 **)(param_1 + 0x2c8) - (longlong)puVar12;
                  uVar17 = uVar16;
                }
                else {
                  FUN_1404210f0(uVar16,puVar12,(longlong)unaff_R12 - (longlong)puVar12);
                  uVar17 = uVar17 + 8 + uVar16;
                  lVar9 = *(longlong *)(param_1 + 0x2c8) - (longlong)unaff_R12;
                  puVar12 = unaff_R12;
                }
                FUN_1404210f0(uVar17,puVar12,lVar9);
                FUN_1400384c0((ulonglong *)(param_1 + 0x2c0),uVar16,local_e8[0],uVar21);
              }
              else {
                *unaff_R12 = puVar12;
                *(longlong *)(param_1 + 0x2c8) = *(longlong *)(param_1 + 0x2c8) + 8;
              }
            }
          }
          cVar8 = (char)local_res8[0];
        }
        plVar4 = (longlong *)plVar14[2];
        if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x19);
          plVar14 = plVar4;
          while (cVar1 == '\0') {
            plVar14 = (longlong *)*plVar14;
            cVar1 = *(char *)(*plVar14 + 0x19);
          }
        }
        else {
          cVar1 = *(char *)(plVar14[1] + 0x19);
          plVar7 = (longlong *)plVar14[1];
          plVar4 = plVar14;
          while ((plVar14 = plVar7, cVar1 == '\0' && (plVar4 == (longlong *)plVar14[2]))) {
            cVar1 = *(char *)(plVar14[1] + 0x19);
            plVar7 = (longlong *)plVar14[1];
            plVar4 = plVar14;
          }
        }
      }
    }
    plVar19 = (longlong *)0xf;
    FUN_140085440(local_a8);
    if (0xf < local_68) {
      lVar15 = CONCAT71(uStack_7f,local_80);
      uVar17 = local_68 + 1;
      lVar9 = lVar15;
      if (0xfff < uVar17) {
        lVar9 = *(longlong *)(lVar15 + -8);
        if (0x1f < (lVar15 - lVar9) - 8U) goto LAB_1401f299a;
        uVar17 = local_68 + 0x28;
      }
      thunk_FUN_14028af80(lVar9,uVar17);
    }
    local_70 = 0;
    local_68 = 0xf;
    local_80 = 0;
    if (0xf < local_48) {
      uVar17 = local_48 + 1;
      ppppuVar13 = (undefined8 ****)local_60[0];
      if (0xfff < uVar17) {
        ppppuVar13 = (undefined8 ****)local_60[0][-1];
        if (0x1f < (ulonglong)((longlong)local_60[0] + (-8 - (longlong)ppppuVar13))) {
LAB_1401f299a:
          plVar14 = (longlong *)&DAT_00000005;
          pcVar5 = (code *)swi(0x29);
          (*pcVar5)();
          puVar18 = auStack_100;
          goto LAB_1401f29a1;
        }
        uVar17 = local_48 + 0x28;
      }
      thunk_FUN_14028af80(ppppuVar13,uVar17);
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x2c0);
  local_res8[0] = 0;
  if (*(longlong *)(param_1 + 0x2c8) - lVar9 >> 3 != 0) {
    do {
      unaff_R12 = (undefined8 *)0x3fffffffffffffff;
      if ((*(byte *)(*(longlong *)(lVar9 + (longlong)local_res8[0] * 8) + 0xf0) & 1) != 0) {
        *(undefined8 *)(puVar18 + -8) = 0x1401f2975;
        FUN_140130b20(param_1 + 0x2e8,puVar18 + 0x20,local_res8);
        plVar14 = *(longlong **)(param_1 + 0x338);
        plVar19 = *(longlong **)(param_1 + 0x330);
        if (plVar19 == plVar14) {
LAB_1401f29a1:
          uVar17 = (longlong)plVar19 - *(longlong *)(param_1 + 0x328);
          puVar10 = (undefined8 *)((longlong)uVar17 >> 2);
          if (puVar10 == unaff_R12) {
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar18 + -8) = &UNK_1401f2abd;
            FUN_140013050();
          }
          puVar10 = (undefined8 *)((longlong)puVar10 + 1);
          uVar16 = (longlong)plVar14 - *(longlong *)(param_1 + 0x328) >> 2;
          if ((uVar16 <= (longlong)unaff_R12 - (uVar16 >> 1)) &&
             (unaff_R12 = (undefined8 *)((uVar16 >> 1) + uVar16), unaff_R12 < puVar10)) {
            unaff_R12 = puVar10;
          }
          *(undefined8 *)(puVar18 + -8) = 0x1401f29f6;
          lVar9 = FUN_1400399f0(uVar16,unaff_R12);
          iVar6 = local_res8[0];
          uVar17 = uVar17 & 0xfffffffffffffffc;
          *(int *)(uVar17 + lVar9) = local_res8[0];
          plVar14 = *(longlong **)(param_1 + 0x328);
          if (plVar19 == *(longlong **)(param_1 + 0x330)) {
            lVar20 = (longlong)*(longlong **)(param_1 + 0x330) - (longlong)plVar14;
            lVar15 = lVar9;
            plVar19 = plVar14;
          }
          else {
            *(undefined8 *)(puVar18 + -8) = 0x1401f2a29;
            FUN_1404210f0(lVar9,plVar14,(longlong)plVar19 - (longlong)plVar14);
            lVar15 = uVar17 + 4 + lVar9;
            lVar20 = *(longlong *)(param_1 + 0x330) - (longlong)plVar19;
          }
          *(undefined8 *)(puVar18 + -8) = 0x1401f2a42;
          FUN_1404210f0(lVar15,plVar19,lVar20);
          *(undefined8 *)(puVar18 + -8) = 0x1401f2a58;
          FUN_140038af0(param_1 + 0x328,lVar9,puVar10,unaff_R12);
          local_res8[0] = iVar6;
        }
        else {
          *(int *)plVar19 = local_res8[0];
          *(longlong *)(param_1 + 0x330) = *(longlong *)(param_1 + 0x330) + 4;
        }
      }
      lVar9 = *(longlong *)(param_1 + 0x2c0);
      local_res8[0] = local_res8[0] + 1;
    } while ((ulonglong)(longlong)local_res8[0] <
             (ulonglong)(*(longlong *)(param_1 + 0x2c8) - lVar9 >> 3));
  }
  return;
}

