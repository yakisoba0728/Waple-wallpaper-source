// Function: FUN_14018ff60
// Addr: 14018ff60
// Size: 2642 bytes


/* WARNING: Removing unreachable block (ram,0x000140190882) */
/* WARNING: Removing unreachable block (ram,0x00014019089e) */
/* WARNING: Type propagation algorithm not settling */

longlong * FUN_14018ff60(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  ushort uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined4 uVar16;
  longlong *local_res18;
  longlong *local_res20;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  ulonglong local_58 [4];
  
  uStack_90 = 0;
  local_88 = 5;
  local_80 = 0xf;
  local_98 = (ulonglong)CONCAT14(s_model_140489148[4],s_model_140489148._0_4_);
  lVar7 = FUN_140087490(param_2,&local_98,(longlong)&local_98 + 5);
  if (0xf < local_80) {
    uVar14 = local_80 + 1;
    uVar13 = local_98;
    if (0xfff < uVar14) {
      uVar13 = *(ulonglong *)(local_98 - 8);
      if (0x1f < (local_98 - uVar13) - 8) goto LAB_1401909ac;
      uVar14 = local_80 + 0x28;
    }
    thunk_FUN_14028af80(uVar13,uVar14);
  }
  local_80 = 0xf;
  local_58[2] = 8;
  local_88 = 0;
  local_58[0]._0_1_ = s_particle_14048e608[0];
  local_58[0]._1_1_ = s_particle_14048e608[1];
  local_58[0]._2_1_ = s_particle_14048e608[2];
  local_58[0]._3_1_ = s_particle_14048e608[3];
  local_58[0]._4_1_ = s_particle_14048e608[4];
  local_58[0]._5_1_ = s_particle_14048e608[5];
  local_58[0]._6_1_ = s_particle_14048e608[6];
  local_58[0]._7_1_ = s_particle_14048e608[7];
  local_98 = local_98 & 0xffffffffffffff00;
  local_58[3] = 0xf;
  local_58[1] = 0;
  lVar8 = FUN_140087490(param_2,local_58,local_58 + 1);
  if (0xf < local_58[3]) {
    uVar14 = local_58[3] + 1;
    uVar13 = local_58[0];
    if (0xfff < uVar14) {
      uVar13 = *(ulonglong *)(local_58[0] - 8);
      if (0x1f < (local_58[0] - uVar13) - 8) goto LAB_1401909ac;
      uVar14 = local_58[3] + 0x28;
    }
    thunk_FUN_14028af80(uVar13,uVar14);
  }
  local_58[2] = 0;
  uStack_70 = 0;
  local_58[3] = 0xf;
  local_58[0] = local_58[0] & 0xffffffffffffff00;
  local_68 = 5;
  local_60 = 0xf;
  local_78 = (ulonglong)CONCAT14(s_image_14048e390[4],s_image_14048e390._0_4_);
  lVar9 = FUN_140087490(param_2,&local_78,(longlong)&local_78 + 5);
  if (0xf < local_60) {
    uVar14 = local_60 + 1;
    uVar13 = local_78;
    if (0xfff < uVar14) {
      uVar13 = *(ulonglong *)(local_78 - 8);
      if (0x1f < (local_78 - uVar13) - 8) goto LAB_1401909ac;
      uVar14 = local_60 + 0x28;
    }
    thunk_FUN_14028af80(uVar13,uVar14);
  }
  local_68 = 0;
  local_60 = 0xf;
  bVar3 = true;
  bVar4 = true;
  local_78 = local_78 & 0xffffffffffffff00;
  if ((lVar7 == 0) || ((uVar12 = *(uint *)(lVar7 + 8) & 0xff, 3 < uVar12 - 1 && (uVar12 != 7)))) {
    if ((lVar8 == 0) || (*(char *)(lVar8 + 8) != '\x04')) {
      bVar3 = bVar4;
      if ((lVar9 == 0) || (*(char *)(lVar9 + 8) != '\x04')) {
        lVar7 = FUN_140087490(param_2,"sprite","");
        if ((lVar7 == 0) ||
           (lVar7 = FUN_140086de0(param_2,"sprite",""), *(char *)(lVar7 + 8) != '\x04')) {
          lVar7 = FUN_140087490(param_2,&DAT_140488b08,&DAT_140488b0c);
          if (lVar7 == 0) {
            lVar7 = FUN_140087490(param_2,"light","");
            if ((lVar7 == 0) ||
               (lVar7 = FUN_140086de0(param_2,"light",""), *(char *)(lVar7 + 8) != '\x04')) {
              lVar7 = FUN_140087490(param_2,"sound","");
              if ((lVar7 == 0) ||
                 (lVar7 = FUN_140086de0(param_2,"sound",""), *(char *)(lVar7 + 8) == '\0')) {
                lVar7 = FUN_140087490(param_2,"camera","");
                if ((lVar7 == 0) ||
                   (lVar7 = FUN_140086de0(param_2,"camera",""), *(char *)(lVar7 + 8) != '\x04')) {
                  lVar7 = FUN_140087490(param_2,"shape","");
                  if ((lVar7 == 0) ||
                     (lVar7 = FUN_140086de0(param_2,"shape",""), *(char *)(lVar7 + 8) != '\x04')) {
                    plVar10 = (longlong *)FUN_14028af20(0x2c0);
                    FUN_1401ddbb0(plVar10,*(undefined8 *)(param_1 + 0xd8),param_2);
                    *plVar10 = (longlong)&PTR_FUN_14048ec88;
                    FUN_140153760(plVar10 + 0x48);
                  }
                  else {
                    plVar10 = (longlong *)FUN_14028af20(0x460);
                    FUN_1401e6980(plVar10,*(undefined8 *)(param_1 + 0xd8),param_2);
                    *plVar10 = (longlong)&PTR_FUN_140491d10;
                    FUN_140153760(plVar10 + 0x7a);
                    *(uint *)((longlong)plVar10 + 0x304) =
                         *(uint *)((longlong)plVar10 + 0x304) | 0x2000;
                    *(undefined4 *)(plVar10 + 0x8a) = 0x3f800000;
                  }
                  bVar3 = false;
                  local_res18 = plVar10;
                }
                else {
                  plVar10 = (longlong *)FUN_14028af20(0x360);
                  lVar7 = *(longlong *)(param_1 + 0xd8);
                  FUN_1401ddbb0(plVar10,lVar7,param_2);
                  *plVar10 = (longlong)&PTR_FUN_140490980;
                  FUN_140153760(plVar10 + 0x48);
                  plVar10[0x58] = 0;
                  plVar10[0x59] = 0;
                  plVar10[0x5a] = 0;
                  *(undefined4 *)(plVar10 + 0x5b) = 0x42480000;
                  *(undefined4 *)((longlong)plVar10 + 0x2dc) = 0x3f800000;
                  *(undefined4 *)(plVar10 + 0x5c) = 0xffffffff;
                  FUN_1400493a0(plVar10 + 0x5d);
                  plVar10[0x65] = 0;
                  plVar10[0x66] = 0;
                  plVar10[0x67] = 0;
                  *(undefined1 *)((longlong)plVar10 + 0x344) = 0;
                  bVar3 = false;
                  plVar10[0x69] = lVar7 + 0x1cd0;
                  *(undefined1 *)(plVar10 + 0x6a) = 0;
                  local_res18 = plVar10;
                  local_res20 = plVar10;
                  FUN_14019e140(param_1 + 0x1f8,&local_res20);
                }
              }
              else {
                plVar10 = (longlong *)FUN_14028af20(800);
                FUN_1401ddbb0(plVar10,*(undefined8 *)(param_1 + 0xd8),param_2);
                *plVar10 = (longlong)&PTR_FUN_140490ae8;
                FUN_140153760(plVar10 + 0x48);
                plVar10[0x58] = 0;
                plVar10[0x59] = 0;
                plVar10[0x5a] = 0;
                plVar10[0x5b] = 0;
                plVar10[0x5c] = 0;
                plVar10[0x5d] = 0;
                *(ushort *)(plVar10 + 0x24) = *(ushort *)(plVar10 + 0x24) & 0xfffe;
                bVar3 = false;
                *(undefined4 *)(plVar10 + 0x5e) = 0x3f800000;
                *(undefined4 *)((longlong)plVar10 + 0x2f4) = 0x3f800000;
                plVar10[0x5f] = 0x40a00000;
                *(undefined4 *)(plVar10 + 0x60) = 0;
                *(undefined4 *)((longlong)plVar10 + 0x304) = 0x3f800000;
                *(undefined4 *)(plVar10 + 0x61) = 0x3f800000;
                *(undefined1 *)((longlong)plVar10 + 0x30c) = 0;
                *(undefined4 *)(plVar10 + 0x62) = 0x88000000;
                local_res18 = plVar10;
              }
            }
            else {
              plVar10 = (longlong *)FUN_14028af20(0x3a0);
              uVar12 = 0;
              uVar16 = 0;
              for (plVar15 = *(longlong **)(param_1 + 0x1e0);
                  plVar15 != *(longlong **)(param_1 + 0x1e8); plVar15 = plVar15 + 1) {
                uVar12 = uVar12 | 1 << ((byte)*(undefined4 *)(*plVar15 + 0x2c8) & 0x1f);
              }
              if (((((uVar12 & 1) != 0) && (uVar16 = 1, (uVar12 & 2) != 0)) &&
                  (uVar16 = 2, (uVar12 & 4) != 0)) && (uVar16 = 3, (uVar12 & 8) != 0)) {
                uVar16 = 0;
              }
              FUN_1401ddbb0(plVar10,*(undefined8 *)(param_1 + 0xd8),param_2);
              *plVar10 = (longlong)&PTR_FUN_140491c38;
              FUN_140153760(plVar10 + 0x48);
              *(undefined4 *)(plVar10 + 0x59) = uVar16;
              *(undefined8 *)((longlong)plVar10 + 0x2cc) = 0;
              *(undefined4 *)((longlong)plVar10 + 0x2d4) = 0;
              bVar3 = false;
              plVar10[0x5b] = 0x40000000;
              plVar10[0x5c] = 0;
              *(undefined1 *)(plVar10 + 0x58) = 5;
              *(undefined4 *)((longlong)plVar10 + 0x2c4) = 0;
              *(undefined4 *)(plVar10 + 0x5d) = 0x3f800000;
              *(undefined4 *)((longlong)plVar10 + 0x2ec) = 0x40000000;
              *(undefined4 *)(plVar10 + 0x5e) = 0x41a00000;
              *(undefined4 *)((longlong)plVar10 + 0x2f4) = 0x41f00000;
              *(undefined4 *)(plVar10 + 0x5f) = 0x40000000;
              *(undefined4 *)((longlong)plVar10 + 0x2fc) = 0x3f800000;
              *(undefined4 *)(plVar10 + 0x60) = 0x40400000;
              *(undefined4 *)((longlong)plVar10 + 0x304) = 0x41200000;
              plVar10[0x61] = 0x42c80000;
              plVar10[0x66] = 0;
              plVar10[0x6f] = 0;
              plVar10[0x70] = 0;
              plVar10[0x71] = 0;
              plVar10[0x72] = 0;
              *(ushort *)(plVar10 + 0x24) = *(ushort *)(plVar10 + 0x24) | 0x100;
              puVar1 = *(undefined8 **)(param_1 + 0x1e8);
              local_res18 = plVar10;
              local_res20 = plVar10;
              if (puVar1 == *(undefined8 **)(param_1 + 0x1f0)) {
                FUN_14005ffa0(param_1 + 0x1e0,puVar1,&local_res20);
              }
              else {
                *puVar1 = plVar10;
                *(longlong *)(param_1 + 0x1e8) = *(longlong *)(param_1 + 0x1e8) + 8;
              }
            }
          }
          else {
            uVar11 = FUN_14028af20(0x5d0);
            plVar10 = (longlong *)FUN_140256ae0(uVar11,*(undefined8 *)(param_1 + 0xd8),param_2);
            local_res18 = plVar10;
          }
        }
        else {
          uVar11 = FUN_14028af20(0x270);
          plVar10 = (longlong *)FUN_140256560(uVar11,*(undefined8 *)(param_1 + 0xd8),param_2);
          local_res18 = plVar10;
        }
      }
      else {
        uVar11 = FUN_14028af20(0x4d0);
        plVar10 = (longlong *)FUN_1401fac50(uVar11,*(undefined8 *)(param_1 + 0xd8),param_2);
        local_res18 = plVar10;
      }
    }
    else {
      plVar10 = (longlong *)FUN_14028af20(0x960);
      lVar7 = *(longlong *)(param_1 + 0xd8);
      FUN_1401ddbb0(plVar10,lVar7,param_2);
      *plVar10 = (longlong)&PTR_FUN_1404915b0;
      FUN_140153760(plVar10 + 0x48);
      FUN_1402293a0(plVar10 + 0x58,lVar7,plVar10);
      *(undefined4 *)(plVar10 + 0xee) = 0;
      FUN_14024d760(plVar10 + 0xef,lVar7 + 0x1c88);
      plVar10[0x126] = 0;
      *(undefined4 *)(plVar10 + 0x127) = 0;
      plVar10[0x128] = 0;
      plVar10[0x129] = 0;
      plVar10[0x12a] = 0;
      *(ushort *)(plVar10 + 0x24) = *(ushort *)(plVar10 + 0x24) | 0x100;
      *(undefined2 *)((longlong)plVar10 + 0x93c) = 0;
      FUN_14022af30(plVar10);
      local_res18 = plVar10;
    }
  }
  else {
    plVar10 = (longlong *)FUN_14028af20(800);
    FUN_1401ddbb0(plVar10,*(undefined8 *)(param_1 + 0xd8),param_2);
    *plVar10 = (longlong)&PTR_FUN_140491338;
    FUN_140153760(plVar10 + 0x48);
    plVar10[0x58] = 0;
    plVar10[0x59] = 0;
    plVar10[0x5a] = 0;
    *(ushort *)(plVar10 + 0x24) = *(ushort *)(plVar10 + 0x24) | 0x800;
    plVar10[0x5b] = 0;
    *(undefined4 *)(plVar10 + 0x5c) = 0;
    plVar10[0x5d] = 0;
    plVar10[0x5e] = 0;
    plVar10[0x62] = 1;
    plVar10[0x5f] = 0;
    plVar10[0x60] = 0;
    plVar10[0x61] = 0;
    local_res18 = plVar10;
  }
  if (plVar10 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  (**(code **)(*plVar10 + 0x40))(plVar10,param_2);
  FUN_14019e140(param_1 + 0x158,&local_res18);
  uVar6 = (**(code **)(*plVar10 + 0x58))(plVar10);
  local_68 = 9;
  local_60 = 0xf;
  local_78._0_1_ = s_reflected_14048e668[0];
  local_78._1_1_ = s_reflected_14048e668[1];
  local_78._2_1_ = s_reflected_14048e668[2];
  local_78._3_1_ = s_reflected_14048e668[3];
  local_78._4_1_ = s_reflected_14048e668[4];
  local_78._5_1_ = s_reflected_14048e668[5];
  local_78._6_1_ = s_reflected_14048e668[6];
  local_78._7_1_ = s_reflected_14048e668[7];
  uStack_70 = (ulonglong)(byte)s_reflected_14048e668[8];
  lVar7 = FUN_140087490(param_2,&local_78,(longlong)&uStack_70 + 1);
  if (0xf < local_60) {
    uVar14 = local_60 + 1;
    uVar13 = local_78;
    if (0xfff < uVar14) {
      uVar13 = *(ulonglong *)(local_78 - 8);
      if (0x1f < (local_78 - uVar13) - 8) {
LAB_1401909ac:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        plVar10 = (longlong *)(*pcVar2)();
        return plVar10;
      }
      uVar14 = local_60 + 0x28;
    }
    thunk_FUN_14028af80(uVar13,uVar14);
  }
  local_68 = 0;
  local_60 = 0xf;
  local_78 = local_78 & 0xffffffffffffff00;
  if ((lVar7 != 0) && (*(char *)(lVar7 + 8) == '\x05')) {
    cVar5 = FUN_140086300(lVar7);
    bVar4 = false;
    if (cVar5 == '\0') goto LAB_14019090d;
  }
  bVar4 = true;
LAB_14019090d:
  if (((bVar3) && (bVar4)) && ((uVar6 & 8) == 0)) {
    FUN_14019e140(param_1 + 0x1c8,&local_res18);
  }
  if ((uVar6 >> 0xc & 1) != 0) {
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 0x20000;
  }
  FUN_140172830(*(longlong *)(param_1 + 0xd8) + 0x1708,plVar10);
  if ((*(ushort *)(plVar10 + 0x24) & 0x100) != 0) {
    FUN_14019e140(param_1 + 0x170,&local_res18);
    FUN_140152770(param_1 + 0x188,&local_98,&local_res18);
    plVar10 = local_res18;
  }
  return plVar10;
}

