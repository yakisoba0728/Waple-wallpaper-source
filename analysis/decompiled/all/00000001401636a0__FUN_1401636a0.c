// Function: FUN_1401636a0
// Addr: 1401636a0
// Size: 2418 bytes


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1401636a0(longlong *param_1,undefined8 *param_2,longlong param_3,int *param_4)

{
  ulonglong *puVar1;
  ushort uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *******pppppppuVar10;
  char *pcVar11;
  size_t sVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 *******pppppppuVar16;
  undefined8 ******ppppppuVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 *puVar20;
  longlong *plVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong local_res18;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [32];
  uint local_120;
  uint local_118;
  undefined8 *******local_108;
  undefined8 *******pppppppuStack_100;
  longlong local_f8;
  ulonglong local_f0;
  undefined8 *******local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined1 local_c8 [32];
  undefined8 ******local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  uint local_88 [2];
  uint6 local_80;
  short sStack_7a;
  int local_38;
  
  uStack_a0 = 0;
  local_98 = 2;
  local_90 = 0xf;
  local_a8 = (undefined8 ******)(ulonglong)DAT_14048ba14;
  puVar7 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar7 = (undefined8 *)*param_2;
  }
  local_res18 = param_3;
  if ((((ulonglong)param_2[2] < 2) ||
      (lVar19 = param_2[2] + (longlong)puVar7,
      lVar6 = thunk_FUN_14028e750(puVar7,lVar19,&local_a8,2), lVar6 == lVar19)) ||
     (lVar6 - (longlong)puVar7 == -1)) {
    uVar9 = 0;
LAB_140163fa8:
    if (local_90 < 0x10) {
      return uVar9;
    }
    uVar23 = local_90 + 1;
    ppppppuVar17 = local_a8;
    if (uVar23 < 0x1000) {
LAB_140163fd7:
      thunk_FUN_14028af80(ppppppuVar17,uVar23);
      return uVar9;
    }
    ppppppuVar17 = (undefined8 ******)local_a8[-1];
    if ((ulonglong)((longlong)local_a8 + (-8 - (longlong)ppppppuVar17)) < 0x20) {
      uVar23 = local_90 + 0x28;
      goto LAB_140163fd7;
    }
  }
  else {
    uVar23 = (lVar6 - (longlong)puVar7) + 2;
    local_d8 = 0;
    local_d0 = 0;
    local_e8 = (undefined8 *******)0x0;
    uStack_e0 = 0;
    puVar20 = auStack_148;
    if ((ulonglong)param_2[2] < uVar23) goto LAB_14016400d;
    lVar6 = param_2[2] - uVar23;
    lVar22 = -1;
    lVar19 = -1;
    if (lVar6 != -1) {
      lVar19 = lVar6;
    }
    puVar7 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar7 = (undefined8 *)*param_2;
    }
    FUN_140017480(&local_e8,(longlong)puVar7 + uVar23,lVar19);
    FUN_1401165f0(local_88);
    local_108 = &local_e8;
    if (0xf < local_d0) {
      local_108 = local_e8;
    }
    pppppppuStack_100 = local_108;
    FUN_140116d90(local_88,&local_108);
    if (local_38 != 0) {
LAB_140163f41:
      uVar9 = 0;
LAB_140163f43:
      FUN_1401164f0(local_88);
      if (0xf < local_d0) {
        uVar23 = local_d0 + 1;
        pppppppuVar10 = local_e8;
        if (0xfff < uVar23) {
          pppppppuVar10 = (undefined8 *******)local_e8[-1];
          if ((undefined1 *)0x1f <
              (undefined1 *)((longlong)local_e8 + (-8 - (longlong)pppppppuVar10)))
          goto LAB_140164006;
          uVar23 = local_d0 + 0x28;
        }
        thunk_FUN_14028af80(pppppppuVar10,uVar23);
      }
      local_d8 = 0;
      local_d0 = 0xf;
      local_e8 = (undefined8 *******)((ulonglong)local_e8 & 0xffffffffffffff00);
      goto LAB_140163fa8;
    }
    puVar7 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar7 = (undefined8 *)*param_2;
    }
    if (((6 < (ulonglong)param_2[2]) &&
        (lVar19 = param_2[2] + (longlong)puVar7,
        lVar6 = thunk_FUN_14028e750(puVar7,lVar19,"sampler",7), lVar6 != lVar19)) &&
       (lVar6 - (longlong)puVar7 != -1)) goto LAB_140163f41;
    FUN_140116800(local_88,&local_res18,"material");
    if (sStack_7a != 3) {
      FID_conflict__assert
                (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x4fd);
    }
    lVar19 = local_res18;
    if ((local_res18 == (ulonglong)local_88[0] * 0x20 + (ulonglong)local_80) ||
       ((*(ushort *)(local_res18 + 0x1e) & 0x400) == 0)) goto LAB_140163f41;
    puVar7 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar7 = (undefined8 *)*param_2;
    }
    if (((param_2[2] == 0) ||
        (lVar6 = param_2[2] + (longlong)puVar7, lVar8 = thunk_FUN_14028cf70(puVar7,lVar6,0x3b),
        lVar8 == lVar6)) || (lVar22 = lVar8 - (longlong)puVar7, lVar6 = lVar22, lVar22 != 0)) {
      lVar6 = lVar22;
      do {
        puVar7 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          puVar7 = (undefined8 *)*param_2;
        }
      } while ((*(char *)((longlong)puVar7 + lVar6) != ' ') && (lVar6 = lVar6 + -1, lVar6 != 0));
    }
    uVar23 = lVar6 + 1;
    local_f8 = 0;
    local_f0 = 0;
    local_108 = (undefined8 *******)0x0;
    pppppppuStack_100 = (undefined8 *******)0x0;
    puVar20 = auStack_148;
    if ((ulonglong)param_2[2] < uVar23) goto LAB_14016400d;
    uVar15 = param_2[2] - uVar23;
    uVar18 = lVar22 - uVar23;
    if (uVar15 < lVar22 - uVar23) {
      uVar18 = uVar15;
    }
    puVar7 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar7 = (undefined8 *)*param_2;
    }
    FUN_140017480(&local_108,(longlong)puVar7 + uVar23,uVar18);
    plVar21 = (longlong *)(param_4 + 10);
    FUN_14000de40(plVar21,&local_108);
    if (local_f0 < 0x10) {
LAB_140163983:
      if (0xf < *(ulonglong *)(param_4 + 0x10)) {
        plVar21 = (longlong *)*plVar21;
      }
      iVar4 = (**(code **)(*param_1 + 0x28))(param_1,0x8c,plVar21,0);
      *param_4 = iVar4;
      if (iVar4 == -1) goto LAB_140163f41;
      uVar9 = FUN_140117000(lVar19 + 0x10);
      FUN_14000ddd0(param_4 + 0x12,uVar9);
      param_4[0x1b] = 0;
      FUN_140116800(local_88,&local_res18,"default");
      if (sStack_7a != 3) {
        FID_conflict__assert
                  (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                   0x4fd);
      }
      if (local_res18 != (ulonglong)local_88[0] * 0x20 + (ulonglong)local_80) {
        uVar2 = *(ushort *)(local_res18 + 0x1e);
        if ((uVar2 & 0x400) == 0) {
          if ((uVar2 & 0x20) == 0) {
            if ((uVar2 & 0x10) == 0) goto LAB_140163bfa;
            uVar18 = FUN_140116720(local_res18 + 0x10);
            uVar23 = uVar18 & 0xffffffff;
            uVar13 = (uint)uVar18;
            if ((uVar18 >> 0x1f & 1) == 0) {
              ppppppuVar17 = (undefined8 ******)local_c8;
            }
            else {
              uVar13 = uVar13 & 0x7fffffff;
              uVar23 = (ulonglong)uVar13;
              local_c8[0] = 0x2d;
              ppppppuVar17 = (undefined8 ******)(local_c8 + 1);
            }
            uVar14 = (uint)uVar23;
            if ((uVar14 & 0x7f800000) == 0x7f800000) {
              if ((uVar23 & 0x7fffff) == 0) {
                pcVar11 = "inf";
                lVar19 = 3;
              }
              else if (((uVar18 >> 0x1f & 1) == 0) || ((uVar14 & 0x7fffff) != 0x400000)) {
                if ((uVar14 >> 0x16 & 1) == 0) {
                  pcVar11 = "nan(snan)";
                  lVar19 = 9;
                }
                else {
                  pcVar11 = "nan";
                  lVar19 = 3;
                }
              }
              else {
                pcVar11 = "nan(ind)";
                lVar19 = 8;
              }
              if ((longlong)&local_a8 - (longlong)ppppppuVar17 < lVar19) {
                local_108 = &local_a8;
              }
              else {
                FUN_1404210f0(ppppppuVar17,pcVar11,lVar19);
                local_108 = (undefined8 *******)(lVar19 + (longlong)ppppppuVar17);
              }
            }
            else if (uVar13 == 0) {
              if ((undefined8 *******)ppppppuVar17 == &local_a8) {
                local_108 = &local_a8;
              }
              else {
                *(undefined1 *)ppppppuVar17 = 0x30;
                local_108 = (undefined8 *******)((longlong)ppppppuVar17 + 1);
              }
            }
            else {
              uVar9 = FUN_140165c00(uVar13 & 0x7fffff,uVar13 >> 0x17);
              local_120 = uVar13 & 0x7fffff;
              local_118 = uVar13 >> 0x17;
              FUN_140166520(&local_108,ppppppuVar17,&local_a8,uVar9);
            }
            local_f8 = 0;
            local_f0 = 0;
            lVar19 = (longlong)local_108 - (longlong)local_c8;
            local_108 = (undefined8 *******)0x0;
            pppppppuStack_100 = (undefined8 *******)0x0;
            FUN_140017480(&local_108,local_c8,lVar19);
            pppppppuVar10 = &local_108;
          }
          else {
            uVar5 = FUN_140164120(local_res18 + 0x10);
            pppppppuVar10 = (undefined8 *******)FUN_140053e40(&local_108,uVar5);
          }
          FUN_14000de40(param_4 + 2,pppppppuVar10);
          if (0xf < local_f0) {
            uVar23 = local_f0 + 1;
            pppppppuVar10 = local_108;
            if (0xfff < uVar23) {
              pppppppuVar10 = (undefined8 *******)local_108[-1];
              if ((undefined1 *)0x1f <
                  (undefined1 *)((longlong)local_108 + (-8 - (longlong)pppppppuVar10)))
              goto LAB_140164006;
              uVar23 = local_f0 + 0x28;
            }
            thunk_FUN_14028af80(pppppppuVar10,uVar23);
          }
        }
        else {
          uVar9 = FUN_140117000(local_res18 + 0x10);
          FUN_14000ddd0(param_4 + 2,uVar9);
        }
      }
LAB_140163bfa:
      FUN_140116800(local_88,&local_res18,"conversion");
      if (sStack_7a != 3) {
        FID_conflict__assert
                  (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                   0x4fd);
      }
      if ((local_res18 != (ulonglong)local_88[0] * 0x20 + (ulonglong)local_80) &&
         ((*(ushort *)(local_res18 + 0x1e) & 0x400) != 0)) {
        pcVar11 = (char *)FUN_140117000(local_res18 + 0x10);
        local_f8 = 0;
        local_f0 = 0;
        local_108 = (undefined8 *******)0x0;
        pppppppuStack_100 = (undefined8 *******)0x0;
        sVar12 = strlen(pcVar11);
        FUN_140017480(&local_108,pcVar11,sVar12);
        uVar23 = local_f0;
        lVar19 = local_f8;
        pppppppuVar10 = local_108;
        pppppppuVar16 = &local_108;
        if (0xf < local_f0) {
          pppppppuVar16 = local_108;
        }
        if ((local_f8 == 7) && (iVar4 = memcmp(pppppppuVar16,"rad2deg",7), iVar4 == 0)) {
          param_4[0x1b] = param_4[0x1b] | 0x20;
        }
        else {
          pppppppuVar16 = &local_108;
          if (0xf < uVar23) {
            pppppppuVar16 = pppppppuVar10;
          }
          if ((lVar19 == 10) && (iVar4 = memcmp(pppppppuVar16,"startdelta",10), iVar4 == 0)) {
            param_4[0x1b] = param_4[0x1b] | 0x40;
          }
        }
        if (0xf < uVar23) {
          uVar18 = uVar23 + 1;
          pppppppuVar16 = pppppppuVar10;
          if (0xfff < uVar18) {
            pppppppuVar16 = (undefined8 *******)pppppppuVar10[-1];
            if ((undefined1 *)0x1f <
                (undefined1 *)((longlong)pppppppuVar10 + (-8 - (longlong)pppppppuVar16)))
            goto LAB_140164006;
            uVar18 = uVar23 + 0x28;
          }
          thunk_FUN_14028af80(pppppppuVar16,uVar18);
        }
      }
      puVar7 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar7 = (undefined8 *)*param_2;
      }
      if ((((ulonglong)param_2[2] < 4) ||
          (lVar19 = param_2[2] + (longlong)puVar7,
          lVar6 = thunk_FUN_14028e750(puVar7,lVar19,&DAT_14048744c,4), lVar6 == lVar19)) ||
         (lVar6 - (longlong)puVar7 == -1)) {
        puVar7 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          puVar7 = (undefined8 *)*param_2;
        }
        if ((((ulonglong)param_2[2] < 4) ||
            (lVar19 = param_2[2] + (longlong)puVar7,
            lVar6 = thunk_FUN_14028e750(puVar7,lVar19,&DAT_14048747c,4), lVar6 == lVar19)) ||
           (lVar6 - (longlong)puVar7 == -1)) {
          puVar1 = param_2 + 2;
          if (0xf < (ulonglong)param_2[3]) {
            param_2 = (undefined8 *)*param_2;
          }
          if (((*puVar1 < 4) ||
              (lVar19 = *puVar1 + (longlong)param_2,
              lVar6 = thunk_FUN_14028e750(param_2,lVar19,&DAT_14048745c,4), lVar6 == lVar19)) ||
             (lVar6 - (longlong)param_2 == -1)) {
            *(undefined1 *)(param_4 + 1) = 1;
            param_4[0x1a] = 0;
          }
          else {
            *(undefined1 *)(param_4 + 1) = 2;
            param_4[0x1a] = 1;
          }
        }
        else {
          *(undefined1 *)(param_4 + 1) = 4;
          param_4[0x1a] = 3;
        }
      }
      else {
        *(undefined1 *)(param_4 + 1) = 3;
        param_4[0x1a] = 2;
      }
      FUN_140116800(local_88,&local_res18,&DAT_140474874);
      if (sStack_7a != 3) {
        FID_conflict__assert
                  (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                   0x4fd);
      }
      if ((local_res18 != (ulonglong)local_88[0] * 0x20 + (ulonglong)local_80) &&
         ((*(ushort *)(local_res18 + 0x1e) & 0x400) != 0)) {
        pcVar11 = (char *)FUN_140117000(local_res18 + 0x10);
        local_f8 = 0;
        local_f0 = 0;
        local_108 = (undefined8 *******)0x0;
        pppppppuStack_100 = (undefined8 *******)0x0;
        sVar12 = strlen(pcVar11);
        FUN_140017480(&local_108,pcVar11,sVar12);
        uVar23 = local_f0;
        pppppppuVar10 = local_108;
        pppppppuVar16 = &local_108;
        if (0xf < local_f0) {
          pppppppuVar16 = local_108;
        }
        if (((local_f8 == 5) && (iVar4 = memcmp(pppppppuVar16,"color",5), iVar4 == 0)) &&
           ((char)param_4[1] == '\x03')) {
          param_4[0x1a] = 4;
        }
        if (0xf < uVar23) {
          uVar18 = uVar23 + 1;
          pppppppuVar16 = pppppppuVar10;
          if (0xfff < uVar18) {
            pppppppuVar16 = (undefined8 *******)pppppppuVar10[-1];
            if ((undefined1 *)0x1f <
                (undefined1 *)((longlong)pppppppuVar10 + (-8 - (longlong)pppppppuVar16)))
            goto LAB_140164006;
            uVar18 = uVar23 + 0x28;
          }
          thunk_FUN_14028af80(pppppppuVar16,uVar18);
        }
      }
      *(undefined1 *)((longlong)param_4 + 5) = 0;
      uVar9 = 1;
      goto LAB_140163f43;
    }
    uVar23 = local_f0 + 1;
    pppppppuVar10 = local_108;
    if (uVar23 < 0x1000) {
LAB_14016397e:
      thunk_FUN_14028af80(pppppppuVar10,uVar23);
      goto LAB_140163983;
    }
    pppppppuVar10 = (undefined8 *******)local_108[-1];
    if ((undefined1 *)((longlong)local_108 + (-8 - (longlong)pppppppuVar10)) < (undefined1 *)0x20) {
      uVar23 = local_f0 + 0x28;
      goto LAB_14016397e;
    }
  }
LAB_140164006:
  pcVar3 = (code *)swi(0x29);
  (*pcVar3)(5);
  puVar20 = auStack_140;
LAB_14016400d:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar20 + -8) = &UNK_140164012;
  FUN_140012940();
}

