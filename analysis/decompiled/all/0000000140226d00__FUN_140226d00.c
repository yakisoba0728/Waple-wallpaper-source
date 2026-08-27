// Function: FUN_140226d00
// Addr: 140226d00
// Size: 1791 bytes


void FUN_140226d00(longlong param_1,int param_2,uint *param_3,longlong *param_4,undefined8 *param_5)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  undefined1 *puVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  byte *pbVar11;
  undefined7 uVar12;
  ulonglong uVar13;
  undefined2 uVar14;
  ulonglong uVar15;
  uint uVar16;
  char *unaff_RBX;
  longlong *plVar17;
  longlong unaff_RDI;
  uint *puVar18;
  byte bVar19;
  byte bVar20;
  undefined4 extraout_XMM0_Da;
  longlong local_a8;
  uint *puStack_a0;
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  char *local_80;
  char *local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  uint local_50;
  
  pcVar2 = (char *)*param_4;
  if ((((*pcVar2 != '\0') && (*(longlong *)(param_1 + 0x2d8) != 0)) &&
      (*(longlong **)(param_1 + 0x2e8) != (longlong *)0x0)) &&
     (**(longlong **)(param_1 + 0x2e8) != 0)) {
    local_78 = (char *)((ulonglong)local_78 & 0xfffffffffffffe00);
    local_60 = (undefined1 *)0x0;
    local_70 = 0;
    uStack_68 = 0;
    if (1 < param_2) {
      unaff_RBX = (char *)param_4[1];
      local_98 = 0;
      local_a8 = 0;
      puStack_a0 = (uint *)0x0;
      local_90 = 0;
      strlen(unaff_RBX);
      FUN_140017480(&local_a8,unaff_RBX);
      puVar18 = (uint *)0x0;
      FUN_140017840(&local_a8,&local_80);
      if (0xf < local_90) {
        uVar15 = local_90 + 1;
        lVar8 = local_a8;
        if (0xfff < uVar15) {
          lVar8 = *(longlong *)(local_a8 + -8);
          uVar13 = (local_a8 - lVar8) - 8;
          if (0x1f < uVar13) goto LAB_1402271cd;
          uVar15 = local_90 + 0x28;
        }
        thunk_FUN_14028af80(lVar8,uVar15);
      }
    }
    lVar8 = FUN_140087490(&local_80,"blendin","");
    if (lVar8 == 0) {
      local_50 = CONCAT31(local_50._1_3_,5);
      local_58 = 1;
      plVar9 = (longlong *)FUN_140086de0(&local_80,"blendin","");
      uVar16 = *(uint *)(plVar9 + 1);
      *(uint *)(plVar9 + 1) = local_50 & 0xfffffeff;
      unaff_RDI = *plVar9;
      *plVar9 = CONCAT71(uStack_57,local_58);
      unaff_RBX = (char *)plVar9[2];
      plVar9[2] = 0;
      plVar9[3] = 0;
      plVar9[4] = 0;
      switch(uVar16 & 0xff) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 5:
        break;
      case 4:
        if ((uVar16 >> 8 & 1) != 0) {
          thunk_FUN_1402d9040(unaff_RDI);
        }
        break;
      case 6:
      case 7:
        if (unaff_RDI != 0) {
          FUN_140088e40(unaff_RDI);
          thunk_FUN_14028af80(unaff_RDI,0x10);
        }
        break;
      default:
        FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434)
        ;
      }
      if (unaff_RBX != (char *)0x0) {
        FUN_140017240(unaff_RBX + 0x40);
        FUN_140017240(unaff_RBX + 0x20);
        FUN_140017240(unaff_RBX);
        thunk_FUN_14028af80(unaff_RBX,0x60);
      }
    }
    lVar8 = FUN_140087490(&local_80,"blendout","");
    if (lVar8 == 0) {
      local_50 = CONCAT31(local_50._1_3_,5);
      local_58 = 1;
      plVar9 = (longlong *)FUN_140086de0(&local_80,"blendout","");
      uVar16 = *(uint *)(plVar9 + 1);
      *(uint *)(plVar9 + 1) = local_50 & 0xfffffeff;
      unaff_RDI = *plVar9;
      *plVar9 = CONCAT71(uStack_57,local_58);
      unaff_RBX = (char *)plVar9[2];
      plVar9[2] = 0;
      plVar9[3] = 0;
      plVar9[4] = 0;
      switch(uVar16 & 0xff) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 5:
        break;
      case 4:
        if ((uVar16 >> 8 & 1) != 0) {
          thunk_FUN_1402d9040(unaff_RDI);
        }
        break;
      case 6:
      case 7:
        if (unaff_RDI != 0) {
          FUN_140088e40(unaff_RDI);
          thunk_FUN_14028af80(unaff_RDI,0x10);
        }
        break;
      default:
        FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434)
        ;
      }
      if (unaff_RBX != (char *)0x0) {
        FUN_140017240(unaff_RBX + 0x40);
        FUN_140017240(unaff_RBX + 0x20);
        FUN_140017240(unaff_RBX);
        thunk_FUN_14028af80(unaff_RBX,0x60);
      }
    }
    if ((*param_3 >> 9 & 1) == 0) {
      if ((*param_3 >> 10 & 1) != 0) {
        FUN_140084dd0(&local_58,0);
        local_98 = 0;
        local_90 = 0;
        local_a8 = 0;
        puStack_a0 = (uint *)0x0;
        strlen(pcVar2);
        FUN_140017480(&local_a8,pcVar2);
        puVar18 = (uint *)0x0;
        FUN_140017840(&local_a8,&local_58);
        if (0xf < local_90) {
          uVar15 = local_90 + 1;
          lVar8 = local_a8;
          if (0xfff < uVar15) {
            lVar8 = *(longlong *)(local_a8 + -8);
            uVar13 = (local_a8 - lVar8) - 8;
            if (0x1f < uVar13) {
LAB_1402271cd:
              uVar14 = (undefined2)uVar15;
              bVar20 = uVar13 == 0x1f;
              bVar19 = uVar13 < 0x1f;
              lVar8 = 5;
              pcVar4 = (code *)swi(0x29);
              pbVar11 = (byte *)(*pcVar4)();
              puVar6 = local_60;
              pcVar2[0x22] = pcVar2[0x22];
              pcVar2[0x22] = pcVar2[0x22];
              pcVar2[0x22] = pcVar2[0x22];
              pcVar2[0x22] = pcVar2[0x22];
              if (!(bool)(bVar19 & 1) && !(bool)(bVar20 & 1)) {
                unaff_RBX[-0x3d] = unaff_RBX[-0x3d] ^ (byte)unaff_RBX;
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar12 = (undefined7)((ulonglong)pbVar11 >> 8);
              bVar19 = (byte)pbVar11 & *pbVar11;
              pcVar2[0x22] = pcVar2[0x22];
              unaff_RBX[-0x4dffdd92] = unaff_RBX[-0x4dffdd92] + (char)lVar8;
              pcVar1 = pcVar2 + 4;
              out(*(undefined4 *)pcVar2,uVar14);
              bVar19 = bVar19 & *(byte *)CONCAT71(uVar12,bVar19);
              bVar19 = bVar19 & *(byte *)CONCAT71(uVar12,bVar19);
              bVar19 = bVar19 & *(byte *)CONCAT71(uVar12,bVar19);
              bVar19 = bVar19 & *(byte *)CONCAT71(uVar12,bVar19);
              uVar15 = (ulonglong)(uint)(*(int *)(unaff_RDI + 0x22) * 0x226fb200);
              *(char *)(uVar15 + 0x6f) =
                   *(char *)(uVar15 + 0x6f) + (char)((ulonglong)unaff_RBX >> 8);
              bVar19 = bVar19 & *(byte *)CONCAT71(uVar12,bVar19);
              plVar9 = (longlong *)CONCAT71(uVar12,bVar19);
              if (-1 < (char)bVar19) {
                if (((int)plVar9 != 0) && (*plVar9 != 0)) {
                  uVar16 = *puVar18;
                  local_80 = unaff_RBX;
                  local_78 = pcVar1;
                  local_70 = unaff_RDI;
                  if ((uVar16 >> 9 & 1) == 0) {
                    if ((uVar16 & 8) == 0) {
                      if (((uVar16 >> 0xb & 1) != 0) && (*param_4 != 0)) {
                        plVar9 = *(longlong **)(lVar8 + 0x78);
                        do {
                          plVar17 = plVar9;
                          if (plVar17 == *(longlong **)(lVar8 + 0x80)) {
                            return;
                          }
                          plVar9 = plVar17 + 1;
                        } while (*plVar17 != *param_4);
                        FUN_14019e140(*(longlong *)(uVar15 + 200) + 0x1478,plVar17);
                        lVar8 = *(longlong *)(uVar15 + 0x2d8);
                        FUN_1404210f0(plVar17,plVar9,*(longlong *)(lVar8 + 0x80) - (longlong)plVar9)
                        ;
                        plVar9 = (longlong *)(lVar8 + 0x80);
                        *plVar9 = *plVar9 + -8;
                        *local_60 = 1;
                      }
                    }
                    else {
                      uVar13 = (ulonglong)*(int *)*param_4;
                      if ((-1 < *(int *)*param_4) &&
                         (uVar13 < (ulonglong)
                                   (*(longlong *)(lVar8 + 0x80) - *(longlong *)(lVar8 + 0x78) >> 3))
                         ) {
                        FUN_14019e140(*(longlong *)(uVar15 + 200) + 0x1478,
                                      *(longlong *)(lVar8 + 0x78) + uVar13 * 8);
                        lVar3 = *(longlong *)(uVar15 + 0x2d8);
                        lVar5 = *(longlong *)(lVar3 + 0x78) + uVar13 * 8;
                        lVar8 = lVar5 + 8;
                        FUN_1404210f0(lVar5,lVar8,*(longlong *)(lVar3 + 0x80) - lVar8);
                        *(longlong *)(lVar3 + 0x80) = *(longlong *)(lVar3 + 0x80) + -8;
                        *local_60 = 1;
                      }
                    }
                  }
                  else {
                    pcVar2 = (char *)*param_4;
                    if ((*pcVar2 != '\0') &&
                       (plVar9 = *(longlong **)(lVar8 + 0x78), puStack_a0 = param_3,
                       local_98 = param_1, plVar9 != *(longlong **)(lVar8 + 0x80))) {
                      do {
                        plVar17 = plVar9 + 1;
                        cVar7 = FUN_14000d010(*plVar9 + 0xd8,pcVar2);
                        if (cVar7 != '\0') {
                          FUN_14019e140(*(longlong *)(uVar15 + 200) + 0x1478,plVar9);
                          lVar8 = *(longlong *)(uVar15 + 0x2d8);
                          FUN_1404210f0(plVar9,plVar17,
                                        *(longlong *)(lVar8 + 0x80) - (longlong)plVar17);
                          plVar17 = (longlong *)(lVar8 + 0x80);
                          *plVar17 = *plVar17 + -8;
                          *puVar6 = 1;
                          plVar17 = plVar9;
                        }
                        plVar9 = plVar17;
                      } while (plVar17 != *(longlong **)(*(longlong *)(uVar15 + 0x2d8) + 0x80));
                    }
                  }
                }
                return;
              }
              pcVar4 = (code *)swi(3);
              (*pcVar4)(extraout_XMM0_Da,0x6f);
              return;
            }
            uVar15 = local_90 + 0x28;
          }
          thunk_FUN_14028af80(lVar8,uVar15);
        }
        FUN_140018100(&local_58,&local_80);
        uVar10 = FUN_1402230c0(param_1,&local_58);
        *param_5 = uVar10;
        FUN_140085440(&local_58);
      }
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x2e8);
      if (lVar8 != 0) {
        plVar17 = *(longlong **)(lVar8 + 200);
        for (plVar9 = *(longlong **)(lVar8 + 0xc0); plVar9 != plVar17; plVar9 = plVar9 + 0x2b) {
          cVar7 = FUN_14000d010(plVar9 + 1,pcVar2);
          if (cVar7 != '\0') {
            lVar8 = *plVar9;
            if (lVar8 != 0) {
              puStack_a0 = (uint *)CONCAT71(puStack_a0._1_7_,2);
              uVar16 = (uint)puStack_a0 & 0xfffffeff;
              plVar9 = (longlong *)FUN_140086de0(&local_80,"animation","");
              lVar5 = plVar9[1];
              *(uint *)(plVar9 + 1) = uVar16;
              puStack_a0 = (uint *)CONCAT44(puStack_a0._4_4_,(int)lVar5);
              local_a8 = *plVar9;
              *plVar9 = lVar8;
              lVar8 = plVar9[2];
              plVar9[2] = 0;
              local_88 = plVar9[4];
              local_90 = plVar9[3];
              plVar9[3] = 0;
              plVar9[4] = 0;
              local_98 = lVar8;
              FUN_140086d30(&local_a8);
              if (lVar8 != 0) {
                FUN_140017240(lVar8 + 0x40);
                FUN_140017240(lVar8 + 0x20);
                FUN_140017240(lVar8);
                thunk_FUN_14028af80(lVar8,0x60);
              }
              uVar10 = FUN_1402230c0(param_1,&local_80);
              *param_5 = uVar10;
            }
            break;
          }
        }
      }
    }
    FUN_140085440(&local_80);
  }
  return;
}

