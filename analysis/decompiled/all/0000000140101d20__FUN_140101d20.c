// Function: FUN_140101d20
// Addr: 140101d20
// Size: 3526 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140101d20(undefined8 param_1,uint param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  ulonglong uVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int local_res10;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [24];
  int *local_168;
  undefined4 local_160;
  ulonglong *local_158;
  int local_148 [2];
  undefined8 local_140;
  int local_138;
  int local_134;
  ulonglong local_128;
  ulonglong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  int local_108;
  undefined8 local_100;
  undefined4 local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [136];
  
  puVar16 = auStack_188;
  if (param_2 < 0x83) {
    if (param_2 == 0x82) {
      return 0;
    }
    switch(param_2) {
    case 2:
    case 0x20:
      return 0;
    case 5:
      lVar11 = (*DAT_140426948)(param_1,0xffffffeb);
      if (((lVar11 != 0) && (plVar2 = *(longlong **)(lVar11 + 0x160), plVar2 != (longlong *)0x0)) &&
         (((ulonglong)param_3 & 0xfffffffffffffffd) == 0)) {
        local_120 = CONCAT44((int)((ulonglong)param_4 >> 0x10),(int)param_4) & 0xffff0000ffff;
        iVar7 = (**(code **)(*plVar2 + 0xa8))(plVar2,local_120);
        if (iVar7 < 0) {
          FUN_140098830("Failed resizing video in callback.\n");
        }
      }
      break;
    case 0xf:
      lVar11 = (*DAT_140426948)(param_1,0xffffffeb);
      if (((lVar11 != 0) && (*(longlong **)(lVar11 + 0x160) != (longlong *)0x0)) &&
         ((iVar7 = (**(code **)(**(longlong **)(lVar11 + 0x160) + 0xb0))(), iVar7 != 0 &&
          (iVar7 = (**(code **)(**(longlong **)(lVar11 + 0x160) + 0xb8))(), iVar7 != 0)))) {
        (**(code **)(**(longlong **)(lVar11 + 0x160) + 0xa0))(*(longlong **)(lVar11 + 0x160),0);
        if (2 < *(uint *)(lVar11 + 0x180)) {
          local_118 = 0;
          uStack_110 = 0;
          (**(code **)(**(longlong **)(lVar11 + 0x160) + 0x80))
                    (*(longlong **)(lVar11 + 0x160),&local_118);
          iVar7 = (int)uStack_110 - (int)local_118;
          iVar25 = uStack_110._4_4_ - local_118._4_4_;
          (*DAT_140426918)(param_1,&local_100);
          uVar9 = (*DAT_140426920)(param_1);
          uVar8 = (*DAT_140426170)(*(uint *)(lVar11 + 0x194) & 0xffffff);
          if ((iVar7 < 1) && (iVar25 < 1)) {
            puVar12 = &local_100;
          }
          else {
            local_140._0_4_ = (int)local_100;
            local_138 = (int)local_118;
            local_140._4_4_ = local_100._4_4_;
            local_134 = local_f4;
            (*DAT_1404268d8)(uVar9,&local_140,uVar8);
            local_140._0_4_ = (int)uStack_110;
            local_138 = local_f8;
            (*DAT_1404268d8)(uVar9,&local_140,uVar8);
            local_140 = (undefined8 *)CONCAT44(local_140._4_4_,(int)local_118);
            local_138 = (int)uStack_110;
            local_134 = local_118._4_4_;
            (*DAT_1404268d8)(uVar9,&local_140,uVar8);
            puVar12 = &local_140;
            local_140 = (undefined8 *)CONCAT44(uStack_110._4_4_,(int)local_140);
            local_134 = local_f4;
          }
          (*DAT_1404268d8)(uVar9,puVar12,uVar8);
          (*DAT_1404261a0)(uVar8);
          (*DAT_140426910)(param_1,uVar9);
        }
        *(uint *)(lVar11 + 0x17c) = *(uint *)(lVar11 + 0x17c) | 1;
      }
      (*DAT_140426960)(param_1,local_c8);
      (*DAT_140426958)(param_1,local_c8);
      return 0;
    case 0x14:
      return 1;
    case 0x46:
      lVar11 = (*DAT_140426948)(param_1,0xffffffeb);
      if (((lVar11 != 0) && (param_4 != 0)) && (((byte)*(undefined4 *)(param_4 + 0x20) & 3) != 3)) {
        FUN_1400fdd90(lVar11,&local_140);
        if (0 < local_138 - (int)local_140) {
          if (0 < local_134 - local_140._4_4_) {
            *(int *)(param_4 + 0x18) = local_138 - (int)local_140;
            *(int *)(param_4 + 0x1c) = local_134 - local_140._4_4_;
            *(int *)(param_4 + 0x10) = (int)local_140;
            *(int *)(param_4 + 0x14) = local_140._4_4_;
            return 0;
          }
        }
      }
    }
switchD_140101d8b_caseD_3:
    lVar11 = (*DAT_140426810)(param_1,param_2,param_3,param_4);
    return lVar11;
  }
  if (0x8001 < param_2) {
    if (param_2 == 0x8002) {
LAB_14010319a:
      *(undefined8 *)(puVar16 + -8) = 0x1401031a5;
      lVar11 = (*DAT_140426948)();
      if (lVar11 == 0) {
        return 0;
      }
      plVar2 = *(longlong **)(lVar11 + 0x160);
      if (plVar2 == (longlong *)0x0) {
        return 0;
      }
      pcVar4 = *(code **)(*plVar2 + 200);
      *(undefined8 *)(puVar16 + -8) = 0x1401031c1;
      (*pcVar4)(plVar2,0);
      return 0;
    }
    if (param_2 == 0x8003) {
      lVar11 = (*DAT_140426948)(param_1,0xffffffeb);
      if (lVar11 == 0) {
        return 0;
      }
      plVar2 = *(longlong **)(lVar11 + 0x160);
      if (plVar2 == (longlong *)0x0) {
        return 0;
      }
      iVar7 = (**(code **)(*plVar2 + 0xd0))(plVar2,(ulonglong)param_3 & 0xffffffff);
      if (-1 < iVar7) {
        return 0;
      }
      uVar10 = *(ulonglong *)(lVar11 + 0x2b0);
      func_0x000140032c90(lVar11 + 0x2a0,&local_140,lVar11 + 0x2e0);
      *(undefined4 *)(lVar11 + 0x278) = 0xc00d5212;
      if (4 < uVar10) {
        return 0;
      }
      FUN_140005950(&local_140,lVar11 + 0x100);
      puVar12 = &local_140;
      if (7 < local_128) {
        puVar12 = local_140;
      }
      FUN_140100dc0(lVar11,puVar12);
      if (local_128 < 8) {
        return 0;
      }
      uVar10 = local_128 * 2 + 2;
      puVar12 = local_140;
      if (0xfff < uVar10) {
        puVar12 = (undefined8 *)local_140[-1];
        if (0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)puVar12))) {
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          puVar16 = auStack_180;
          goto LAB_14010319a;
        }
        uVar10 = local_128 * 2 + 0x29;
      }
      lVar11 = func_0x00014028b040(puVar12,uVar10);
      return lVar11;
    }
    goto switchD_140101d8b_caseD_3;
  }
  if (param_2 != 0x8001) {
    if (param_2 == 0x113) {
      switch(param_3) {
      case (longlong *)0x64:
        (*DAT_140426838)(param_1,100);
        lVar11 = (*DAT_140426948)(param_1,0xffffffeb);
        if (lVar11 == 0) {
          return 0;
        }
        if (*(longlong **)(lVar11 + 0x160) == (longlong *)0x0) {
          return 0;
        }
        (**(code **)(**(longlong **)(lVar11 + 0x160) + 0x38))();
        return 0;
      case (longlong *)0x65:
        lVar11 = (*DAT_140426948)(param_1,0xffffffeb);
        if (lVar11 == 0) {
          return 0;
        }
        plVar2 = *(longlong **)(lVar11 + 0x160);
        if (plVar2 == (longlong *)0x0) {
          return 0;
        }
        fVar28 = *(float *)(lVar11 + 0x174);
        if ((fVar28 == 0.0) || ((*(uint *)(lVar11 + 0x17c) >> 3 & 1) == 0)) {
          bVar27 = true;
        }
        else {
          bVar27 = false;
        }
        fVar30 = 0.0;
        if ((*(char *)(lVar11 + 9) == '\0') && (*(char *)(lVar11 + 8) == '\0')) {
          fVar30 = fVar28;
        }
        fVar29 = *(float *)(lVar11 + 0x170);
        if (fVar29 == fVar30) {
          bVar27 = true;
        }
        else {
          if (bVar27) {
            bVar27 = true;
          }
          else {
            if (fVar29 <= fVar30) {
              fVar29 = fVar28 * DAT_1404926f0 + DAT_1404926f0 + fVar29;
              bVar27 = fVar29 < fVar30;
            }
            else {
              fVar29 = fVar29 - (fVar28 * _DAT_140492704 + DAT_1404926fc);
              bVar27 = fVar30 < fVar29;
            }
            bVar27 = !bVar27;
            if (!bVar27) {
              *(float *)(lVar11 + 0x170) = fVar29;
              (**(code **)(*plVar2 + 0x30))();
              return 0;
            }
          }
          *(float *)(lVar11 + 0x170) = fVar30;
          (**(code **)(*plVar2 + 0x30))();
        }
        if ((*(char *)(lVar11 + 8) != '\0') &&
           ((**(code **)(**(longlong **)(lVar11 + 0x160) + 0x10))(), !bVar27)) {
          return 0;
        }
        (*DAT_140426838)(param_1,0x65);
        *(uint *)(lVar11 + 0x17c) = *(uint *)(lVar11 + 0x17c) & 0xfffffffd;
        return 0;
      case (longlong *)0x66:
        goto switchD_1401020f4_caseD_66;
      case (longlong *)0x67:
        lVar11 = (*DAT_140426948)(param_1,0xffffffeb);
        if (lVar11 == 0) {
          return 0;
        }
        if (*(longlong *)(lVar11 + 0x160) == 0) {
          return 0;
        }
        iVar7 = func_0x000140290e50(lVar11 + 800);
        fVar30 = DAT_1404927d4;
        fVar28 = DAT_14049272c;
        if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140290e00(5);
        }
        if (*(int *)(lVar11 + 0x36c) != 0x7fffffff) {
          lVar3 = *(longlong *)(lVar11 + 0x308);
          for (lVar15 = *(longlong *)(lVar11 + 0x300); lVar15 != lVar3; lVar15 = lVar15 + 0x38) {
            uVar22 = 0;
            fVar29 = *(float *)(lVar15 + 0xc) + fVar28;
            if (fVar30 <= fVar29) {
              fVar29 = fVar30;
            }
            *(float *)(lVar15 + 0xc) = fVar29;
            if (*(int *)(lVar15 + 8) * *(int *)(lVar15 + 4) * 3 != 0) {
              do {
                lVar20 = (longlong)(int)uVar22;
                uVar22 = uVar22 + 1;
                uVar13 = (uint)*(byte *)(lVar20 + *(longlong *)(lVar15 + 0x28));
                *(char *)(lVar20 + *(longlong *)(lVar15 + 0x30)) =
                     (char)(int)((float)(int)(*(byte *)(lVar20 + *(longlong *)(lVar15 + 0x20)) -
                                             uVar13) * *(float *)(lVar15 + 0xc) + (float)uVar13);
              } while (uVar22 < (uint)(*(int *)(lVar15 + 8) * *(int *)(lVar15 + 4) * 3));
            }
            (**(code **)(lVar15 + 0x10))
                      (*(undefined8 *)(lVar15 + 0x18),*(undefined8 *)(lVar15 + 0x30));
          }
          FUN_140290f70(lVar11 + 800);
          return 0;
        }
        *(undefined4 *)(lVar11 + 0x36c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_140290e00(6);
      case (longlong *)0x68:
        lVar11 = (*DAT_140426948)(param_1,0xffffffeb);
        if (lVar11 == 0) {
          return 0;
        }
        if (*(longlong *)(lVar11 + 0x160) == 0) {
          return 0;
        }
        piVar1 = (int *)(lVar11 + 0x370);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          (*DAT_140426838)(param_1,0x68);
        }
        (*DAT_140426b00)(param_1,0,0);
        return 0;
      case (longlong *)0x69:
        lVar11 = (*DAT_140426948)(param_1,0xffffffeb);
        if (lVar11 == 0) {
          return 0;
        }
        if (*(longlong **)(lVar11 + 0x160) == (longlong *)0x0) {
          return 0;
        }
        (**(code **)(**(longlong **)(lVar11 + 0x160) + 0x98))();
        return 0;
      default:
        return 0;
      }
    }
    if (param_2 == 0x200) {
      uVar9 = (*DAT_1404268d0)();
      iVar7 = (*DAT_140426a98)(uVar9,0x200,param_3,param_4);
      return (longlong)iVar7;
    }
    if (param_2 == 0x40a) {
      lVar11 = (*DAT_140426948)();
      if (lVar11 == 0) {
        return 0;
      }
      if (*(longlong *)(lVar11 + 0x68) == 0) {
        return 0;
      }
      local_158 = &local_120;
      local_120 = 0;
      local_160 = 0;
      local_168 = (int *)CONCAT44(local_168._4_4_,1);
      (*DAT_1404267f0)(*(longlong *)(lVar11 + 0x68),0x40a,*(undefined4 *)(lVar11 + 0x154),0);
      if (local_120 != 1) {
        return 0;
      }
      return 1;
    }
    goto switchD_140101d8b_caseD_3;
  }
  lVar11 = (*DAT_140426948)(param_1,0xffffffeb);
  if ((lVar11 == 0) || (plVar2 = *(longlong **)(lVar11 + 0x160), plVar2 == (longlong *)0x0)) {
    if (param_3 == (longlong *)0x0) {
      return 0;
    }
    (**(code **)(*param_3 + 0x10))(param_3);
    return 0;
  }
  local_148[0] = 0;
  uVar10 = (**(code **)(*plVar2 + 0xc0))(plVar2,param_3,local_148);
  iVar7 = (int)uVar10;
  if ((-1 < iVar7) ||
     ((iVar7 + 0x3ff2c930U < 0x2d &&
      ((0x100000200001U >> ((ulonglong)(iVar7 + 0x3ff2c930U) & 0x3f) & 1) != 0)))) {
    if (local_148[0] != 1) {
      return 0;
    }
    if (*(char *)(lVar11 + 8) != '\0') {
      (**(code **)(**(longlong **)(lVar11 + 0x160) + 0x10))();
    }
    (**(code **)(**(longlong **)(lVar11 + 0x160) + 0x38))();
    if (*(char *)(lVar11 + 9) != '\0') {
      (**(code **)(**(longlong **)(lVar11 + 0x160) + 0x30))();
      return 0;
    }
    (**(code **)(**(longlong **)(lVar11 + 0x160) + 0x30))();
    return 0;
  }
  lVar3 = *(longlong *)(lVar11 + 0x228);
  uVar26 = (uVar10 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3;
  lVar15 = *(longlong *)(lVar11 + 0x238);
  uVar14 = *(ulonglong *)(lVar11 + 0x250) &
           (((uVar26 ^ iVar7 >> 8 & 0xff) * 0x100000001b3 ^ (ulonglong)(iVar7 >> 0x10 & 0xff)) *
            0x100000001b3 ^ (ulonglong)(iVar7 >> 0x18 & 0xff)) * 0x100000001b3;
  lVar20 = *(longlong *)(lVar15 + 8 + uVar14 * 0x10);
  if (lVar20 == lVar3) {
LAB_1401027e9:
    lVar20 = 0;
  }
  else {
    iVar25 = *(int *)(lVar20 + 0x10);
    while (iVar7 != iVar25) {
      if (lVar20 == *(longlong *)(lVar15 + uVar14 * 0x10)) goto LAB_1401027e9;
      lVar20 = *(longlong *)(lVar20 + 8);
      iVar25 = *(int *)(lVar20 + 0x10);
    }
  }
  uVar14 = uVar10 >> 0x18 & 0xff;
  uVar23 = uVar10 >> 0x10 & 0xff;
  uVar24 = uVar10 >> 8 & 0xff;
  if ((lVar20 == 0) || (lVar20 == lVar3)) {
    uVar26 = *(ulonglong *)(lVar11 + 0x250) &
             (((uVar26 ^ uVar24) * 0x100000001b3 ^ uVar23) * 0x100000001b3 ^ uVar14) * 0x100000001b3
    ;
    lVar20 = *(longlong *)(lVar15 + 8 + uVar26 * 0x10);
    if (lVar20 == lVar3) {
LAB_140102868:
      if (*(longlong *)(lVar11 + 0x230) != 0xaaaaaaaaaaaaaaa) {
        lVar11 = func_0x00014028aff0(0x18);
        return lVar11;
      }
      goto LAB_140103230;
    }
    iVar25 = *(int *)(lVar20 + 0x10);
    while (iVar7 != iVar25) {
      if (lVar20 == *(longlong *)(lVar15 + uVar26 * 0x10)) goto LAB_140102868;
      lVar20 = *(longlong *)(lVar20 + 8);
      iVar25 = *(int *)(lVar20 + 0x10);
    }
    *(undefined4 *)(lVar20 + 0x14) = 0;
  }
  lVar3 = *(longlong *)(lVar11 + 0x238);
  local_140 = (undefined8 *)
              (((((uVar10 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar24) * 0x100000001b3 ^
                uVar23) * 0x100000001b3 ^ uVar14) * 0x100000001b3);
  uVar14 = (ulonglong)local_140 & *(ulonglong *)(lVar11 + 0x250);
  lVar15 = *(longlong *)(lVar3 + 8 + uVar14 * 0x10);
  if (lVar15 != *(longlong *)(lVar11 + 0x228)) {
    iVar25 = *(int *)(lVar15 + 0x10);
    while( true ) {
      if (iVar7 == iVar25) {
        if (9 < *(uint *)(lVar15 + 0x14)) {
          return 0;
        }
        *(uint *)(lVar15 + 0x14) = *(uint *)(lVar15 + 0x14) + 1;
        FUN_140098830("Failed handling MF video event: %x (%u)\n",uVar10 & 0xffffffff);
        if (local_148[0] != 2) {
          return 0;
        }
        FUN_140101c50(lVar11,uVar10 & 0xffffffff);
        return 0;
      }
      if (lVar15 == *(longlong *)(lVar3 + uVar14 * 0x10)) break;
      lVar15 = *(longlong *)(lVar15 + 8);
      iVar25 = *(int *)(lVar15 + 0x10);
    }
  }
  if (*(longlong *)(lVar11 + 0x230) != 0xaaaaaaaaaaaaaaa) {
    lVar11 = func_0x00014028aff0(0x18);
    return lVar11;
  }
LAB_140103230:
                    /* WARNING: Subroutine does not return */
  FUN_14028c3b0("unordered_map/set too long");
switchD_1401020f4_caseD_66:
  lVar11 = (*DAT_140426948)(param_1,0xffffffeb);
  if (lVar11 == 0) {
    return 0;
  }
  plVar2 = *(longlong **)(lVar11 + 0x160);
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
  if (*(longlong *)(lVar11 + 0x300) == *(longlong *)(lVar11 + 0x308)) {
    return 0;
  }
  local_d0 = 0;
  local_168 = &local_ec;
  local_e0 = 0;
  local_118 = lVar11;
  cVar6 = (**(code **)(*plVar2 + 0x88))(plVar2,&local_d0,&local_e0,&local_f0);
  if (cVar6 == '\0') {
    return 0;
  }
  local_140 = (undefined8 *)(lVar11 + 800);
  iVar7 = func_0x000140290e50(local_140);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (*(int *)(lVar11 + 0x36c) == 0x7fffffff) {
    *(undefined4 *)(lVar11 + 0x36c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(6);
  }
  local_100 = *(longlong *)(lVar11 + 0x308);
  lVar11 = *(longlong *)(lVar11 + 0x300);
  local_d8 = lVar11;
  if (lVar11 != local_100) {
    do {
      local_d8 = lVar11;
      (**(code **)(lVar11 + 0x10))
                (*(undefined8 *)(lVar11 + 0x18),*(undefined8 *)(lVar11 + 0x20),
                 *(undefined4 *)(lVar11 + 4),*(undefined4 *)(lVar11 + 8));
      lVar15 = local_e0;
      lVar3 = *(longlong *)(lVar11 + 0x28);
      *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(lVar11 + 0x20);
      *(longlong *)(lVar11 + 0x20) = lVar3;
      *(undefined4 *)(lVar11 + 0xc) = 0;
      local_108 = local_f0;
      if (local_f0 < 2) {
LAB_1401024dd:
        func_0x0001402cba34(&DAT_1404886c4,
                            L"D:\\dev\\we\\windows\\src\\wallpaper\\src\\wallpaper\\videowallpaper.cpp"
                            ,0x56);
      }
      else {
        local_120 = CONCAT44(local_120._4_4_,local_ec);
        if (local_ec < 2) goto LAB_1401024dd;
        iVar7 = *(int *)(lVar11 + 4);
        iVar25 = *(int *)(lVar11 + 8);
        local_res10 = 0;
        fVar28 = (float)iVar7;
        fVar29 = (float)local_f0;
        fVar30 = (float)local_ec;
        iVar18 = local_f0;
        iVar21 = local_ec;
        local_148[0] = iVar7;
        if (0 < iVar7) {
          do {
            iVar17 = 0;
            if (0 < iVar25) {
              local_e8 = iVar25 * iVar7 * 3;
              iVar19 = iVar18;
              do {
                iVar5 = (((iVar25 - iVar17) + -1) * iVar7 + local_res10) * 3;
                iVar7 = (int)((float)((int)((float)iVar17 * (fVar30 / (float)iVar25)) * iVar19) +
                             (float)local_res10 * (fVar29 / fVar28)) * 4;
                if (local_e8 <= iVar5) {
                  func_0x0001402cba34(L"writePos < (gridWidth * gridHeight * 3)",
                                      L"D:\\dev\\we\\windows\\src\\wallpaper\\src\\wallpaper\\videowallpaper.cpp"
                                      ,0x66);
                }
                if (iVar21 * iVar18 * 4 <= iVar7) {
                  func_0x0001402cba34(L"readPos < (width * height * 4)",
                                      L"D:\\dev\\we\\windows\\src\\wallpaper\\src\\wallpaper\\videowallpaper.cpp"
                                      ,0x67);
                }
                iVar17 = iVar17 + 1;
                *(undefined1 *)(lVar3 + iVar5) = *(undefined1 *)((longlong)iVar7 + 2 + lVar15);
                *(undefined1 *)(lVar3 + 1 + (longlong)iVar5) =
                     *(undefined1 *)((longlong)iVar7 + 1 + lVar15);
                *(undefined1 *)(lVar3 + 2 + (longlong)iVar5) = *(undefined1 *)(iVar7 + lVar15);
                iVar19 = local_108;
                iVar7 = local_148[0];
              } while (iVar17 < iVar25);
              iVar18 = local_108;
              iVar21 = (int)local_120;
            }
            local_res10 = local_res10 + 1;
            lVar11 = local_d8;
          } while (local_res10 < iVar7);
        }
      }
      lVar11 = lVar11 + 0x38;
      local_d8 = lVar11;
    } while (lVar11 != local_100);
  }
  (**(code **)(**(longlong **)(local_118 + 0x160) + 0x90))
            (*(longlong **)(local_118 + 0x160),local_d0);
  FUN_140290f70(local_140);
  return 0;
}

