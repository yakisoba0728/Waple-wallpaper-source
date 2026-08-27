// Function: FUN_1401ea500
// Addr: 1401ea500
// Size: 5806 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_1401ea500(longlong *param_1)

{
  undefined8 *puVar1;
  code ****ppppcVar2;
  undefined2 *puVar3;
  longlong *****ppppplVar4;
  code ****ppppcVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  ulonglong uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  size_t sVar16;
  longlong *******ppppppplVar17;
  undefined8 uVar18;
  longlong *******ppppppplVar19;
  code *****pppppcVar20;
  uint uVar21;
  code *******pppppppcVar22;
  char *pcVar23;
  longlong *******ppppppplVar24;
  ulonglong uVar25;
  code ******ppppppcVar26;
  code ******ppppppcVar27;
  int iVar28;
  char *pcVar29;
  undefined1 local_res8;
  char local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 in_stack_fffffffffffffea0;
  longlong *******local_138;
  undefined8 uStack_130;
  longlong *******local_128;
  longlong *******local_120;
  longlong *******local_118;
  longlong *******local_110 [2];
  longlong *******local_100;
  ulonglong local_f8;
  undefined8 local_f0;
  uint local_e8;
  uint local_e4;
  longlong *******local_e0;
  undefined8 uStack_d8;
  longlong *******local_d0;
  longlong *******local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  longlong *******local_b0;
  undefined8 local_a8;
  code *******local_a0;
  code *******local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong *******local_70;
  int local_68;
  int local_64;
  undefined8 local_60;
  code ******local_58;
  longlong *******local_50;
  
  local_70 = (longlong *******)((ulonglong)local_70 & 0xffffffff00000000);
  if (*(longlong *)(param_1[0x19] + 0x60) == param_1[0x59]) {
    *(undefined8 *)(param_1[0x19] + 0x60) = 0;
  }
  lVar14 = param_1[0x59];
  if (lVar14 != 0) {
    lVar15 = param_1[0x19];
    *(int *)(lVar14 + 0x2c) = *(int *)(lVar14 + 0x2c) + -1;
    if (*(int *)(lVar14 + 0x2c) < 1) {
      FUN_1401ab5f0(lVar15 + 0x16c0);
    }
  }
  lVar14 = param_1[0x5a];
  if (lVar14 != 0) {
    lVar15 = param_1[0x19];
    *(int *)(lVar14 + 0x2c) = *(int *)(lVar14 + 0x2c) + -1;
    if (*(int *)(lVar14 + 0x2c) < 1) {
      FUN_1401ab5f0(lVar15 + 0x16c0);
    }
  }
  ppppppplVar17 = (longlong *******)&local_68;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  (**(code **)(*param_1 + 0x128))(param_1,local_res10,&local_60,&local_e8,ppppppplVar17);
  uVar10 = *(uint *)((longlong)param_1 + 0x304);
  if ((uVar10 >> 0xe & 1) != 0) {
    local_res10[0] = '\x01';
  }
  uVar21 = 4;
  if (4 < (int)local_e8) {
    uVar21 = local_e8;
  }
  uVar11 = 4;
  if (4 < (int)local_e4) {
    uVar11 = local_e4;
  }
  local_f0 = (code ******)
             (CONCAT44(local_f0._4_4_,-(uint)((*(uint *)(param_1[0x19] + 0x118) & 0x2000) != 0)) &
             0xffffffff0000000e);
  iVar28 = (uVar10 >> 4 & 1) + (int)param_1[100];
  local_res8 = SUB81(param_1,0);
  local_e8 = uVar21;
  local_e4 = uVar11;
  if (((iVar28 == 0) && ((*(byte *)(param_1 + 0x24) & 4) != 0)) && (param_1[0x33] != param_1[0x34]))
  {
    local_b0 = (longlong *******)CONCAT44(local_b0._4_4_,1);
  }
  else {
    if (2 < iVar28) {
      iVar28 = 2;
    }
    local_b0 = (longlong *******)CONCAT44(local_b0._4_4_,iVar28);
    if (iVar28 < 1) goto LAB_1401eb16e;
  }
  local_a8 = CONCAT44(local_a8._4_4_,~(*(uint *)(param_1[0x19] + 0x118) * 8)) & 0xffffffff00000008 |
             1;
  local_c0 = (longlong *******)(CONCAT44(local_c0._4_4_,uVar10 >> 0xf) & 0xffffffff00000001);
  iVar28 = 0;
  local_b8 = CONCAT44(local_b8._4_4_,(uint)(local_res10[0] != '\0') | (uVar10 >> 0xf & 1) * 2);
  local_78 = local_78 & 0xffffffff00000000;
  do {
    uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffea0 >> 0x20);
    lVar14 = (longlong)&local_88 + 5;
    if (((*(uint *)((longlong)param_1 + 0x304) >> 4 & 1) == 0) || (iVar28 != 0)) {
      local_128 = (longlong *******)0x3;
      local_120 = (longlong *******)0xf;
      uStack_130 = 0;
      local_138 = (longlong *******)(ulonglong)(uint3)DAT_140490834;
      if ((int)local_e8 < 0) {
        lVar15 = FUN_140053cb0(lVar14,-local_e8);
        *(undefined1 *)(lVar15 + -1) = 0x2d;
        lVar15 = lVar15 + -1;
      }
      else {
        lVar15 = FUN_140053cb0(lVar14);
      }
      FUN_140053d10(local_110,lVar15,lVar14);
      ppppppplVar17 = (longlong *******)local_110;
      if (0xf < local_f8) {
        ppppppplVar17 = local_110[0];
      }
      local_118 = local_110[0];
      local_res20 = local_128;
      if ((longlong *******)((longlong)local_120 - (longlong)local_128) < local_100) {
        FUN_140053110(&local_138,local_100,local_res8,ppppppplVar17,local_100);
        ppppppplVar17 = local_110[0];
      }
      else {
        local_res18 = (longlong *******)&local_138;
        if ((longlong *******)0xf < local_120) {
          local_res18 = local_138;
        }
        lVar14 = (longlong)local_128 + (longlong)local_res18;
        local_128 = (longlong *******)((longlong)local_100 + (longlong)local_128);
        FUN_1404210f0(lVar14,ppppppplVar17,local_100);
        *(undefined1 *)((longlong)local_res20 + (longlong)local_100 + (longlong)local_res18) = 0;
        ppppppplVar17 = local_118;
      }
      if (0xf < local_f8) {
        uVar25 = local_f8 + 1;
        ppppppplVar19 = ppppppplVar17;
        if (0xfff < uVar25) {
          ppppppplVar19 = (longlong *******)ppppppplVar17[-1];
          if (0x1f < (ulonglong)((longlong)ppppppplVar17 + (-8 - (longlong)ppppppplVar19))) {
LAB_1401ebbaf:
            pcVar6 = (code *)swi(0x29);
            (*pcVar6)(5);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar25 = local_f8 + 0x28;
        }
        thunk_FUN_14028af80(ppppppplVar19,uVar25);
      }
      if (local_120 == local_128) {
        FUN_140053110(&local_138,1,(ulonglong)param_1 & 0xff,&DAT_140474080,1);
      }
      else {
        ppppppplVar17 = (longlong *******)&local_138;
        if ((longlong *******)0xf < local_120) {
          ppppppplVar17 = local_138;
        }
        puVar3 = (undefined2 *)((longlong)ppppppplVar17 + (longlong)local_128);
        local_128 = (longlong *******)((longlong)local_128 + 1);
        *puVar3 = 0x2e;
      }
      if ((int)local_e4 < 0) {
        lVar14 = FUN_140053cb0((longlong)&local_88 + 5,-local_e4);
        *(undefined1 *)(lVar14 + -1) = 0x2d;
        lVar14 = lVar14 + -1;
      }
      else {
        lVar14 = FUN_140053cb0((longlong)&local_88 + 5);
      }
      FUN_140053d10(local_110,lVar14,(longlong)&local_88 + 5);
      ppppppplVar17 = (longlong *******)local_110;
      if (0xf < local_f8) {
        ppppppplVar17 = local_110[0];
      }
      local_res20 = local_110[0];
      if ((longlong *******)((longlong)local_120 - (longlong)local_128) < local_100) {
        FUN_140053110(&local_138,local_100,(ulonglong)param_1 & 0xff,ppppppplVar17,local_100);
        ppppppplVar17 = local_110[0];
      }
      else {
        local_res18 = (longlong *******)&local_138;
        if ((longlong *******)0xf < local_120) {
          local_res18 = local_138;
        }
        local_res18 = (longlong *******)((longlong)local_res18 + (longlong)local_128);
        local_128 = (longlong *******)((longlong)local_128 + (longlong)local_100);
        FUN_1404210f0(local_res18,ppppppplVar17,local_100);
        *(undefined1 *)((longlong)local_100 + (longlong)local_res18) = 0;
        ppppppplVar17 = local_res20;
      }
      if (0xf < local_f8) {
        uVar25 = local_f8 + 1;
        ppppppplVar19 = ppppppplVar17;
        if (0xfff < uVar25) {
          ppppppplVar19 = (longlong *******)ppppppplVar17[-1];
          if (0x1f < (ulonglong)((longlong)ppppppplVar17 + (-8 - (longlong)ppppppplVar19)))
          goto LAB_1401ebbaf;
          uVar25 = local_f8 + 0x28;
        }
        thunk_FUN_14028af80(ppppppplVar19,uVar25);
      }
      if (local_120 == local_128) {
        FUN_140053110(&local_138,1,(ulonglong)param_1 & 0xff,&DAT_140474080,1);
      }
      else {
        ppppppplVar17 = (longlong *******)&local_138;
        if ((longlong *******)0xf < local_120) {
          ppppppplVar17 = local_138;
        }
        puVar3 = (undefined2 *)((longlong)ppppppplVar17 + (longlong)local_128);
        local_128 = (longlong *******)((longlong)local_128 + 1);
        *puVar3 = 0x2e;
      }
      local_res18 = (longlong *******)0x140490600;
      if (local_res10[0] != '\0') {
        local_res18 = (longlong *******)0x140490838;
      }
      local_118 = (longlong *******)strlen((char *)local_res18);
      if ((ulonglong)((longlong)local_120 - (longlong)local_128) < local_118) {
        FUN_140053110(&local_138,local_118,(ulonglong)param_1 & 0xff,local_res18,local_118);
      }
      else {
        local_res20 = (longlong *******)&local_138;
        if ((longlong *******)0xf < local_120) {
          local_res20 = local_138;
        }
        local_res20 = (longlong *******)((longlong)local_128 + (longlong)local_res20);
        local_128 = (longlong *******)((longlong)local_128 + (longlong)local_118);
        FUN_1404210f0(local_res20,local_res18,local_118);
        *(undefined1 *)((longlong)local_118 + (longlong)local_res20) = 0;
      }
      local_res18 = (longlong *******)&DAT_1404907cc;
      if ((char)local_c0 == '\0') {
        local_res18 = (longlong *******)&DAT_1404907c8;
      }
      local_118 = (longlong *******)strlen((char *)local_res18);
      if ((ulonglong)((longlong)local_120 - (longlong)local_128) < local_118) {
        FUN_140053110(&local_138,local_118,(ulonglong)param_1 & 0xff,local_res18,local_118);
      }
      else {
        local_res20 = (longlong *******)&local_138;
        if ((longlong *******)0xf < local_120) {
          local_res20 = local_138;
        }
        local_res20 = (longlong *******)((longlong)local_128 + (longlong)local_res20);
        local_128 = (longlong *******)((longlong)local_128 + (longlong)local_118);
        FUN_1404210f0(local_res20,local_res18,local_118);
        *(undefined1 *)((longlong)local_118 + (longlong)local_res20) = 0;
      }
      if ((int)local_78 < 0) {
        lVar14 = FUN_140053cb0((longlong)&local_88 + 5,-(int)local_78);
        *(undefined1 *)(lVar14 + -1) = 0x2d;
        lVar14 = lVar14 + -1;
      }
      else {
        lVar14 = FUN_140053cb0((longlong)&local_88 + 5,local_78 & 0xffffffff);
      }
      FUN_140053d10(local_110,lVar14,(longlong)&local_88 + 5);
      ppppppplVar17 = (longlong *******)local_110;
      if (0xf < local_f8) {
        ppppppplVar17 = local_110[0];
      }
      local_118 = local_110[0];
      local_res20 = local_128;
      if ((longlong *******)((longlong)local_120 - (longlong)local_128) < local_100) {
        FUN_140053110(&local_138,local_100,(ulonglong)param_1 & 0xff,ppppppplVar17,local_100);
        ppppppplVar17 = local_110[0];
      }
      else {
        local_res18 = (longlong *******)&local_138;
        if ((longlong *******)0xf < local_120) {
          local_res18 = local_138;
        }
        lVar14 = (longlong)local_128 + (longlong)local_res18;
        local_128 = (longlong *******)((longlong)local_100 + (longlong)local_128);
        FUN_1404210f0(lVar14,ppppppplVar17);
        *(undefined1 *)((longlong)local_res20 + (longlong)local_100 + (longlong)local_res18) = 0;
        ppppppplVar17 = local_118;
      }
      if (0xf < local_f8) {
        uVar25 = local_f8 + 1;
        ppppppplVar19 = ppppppplVar17;
        if (0xfff < uVar25) {
          ppppppplVar19 = (longlong *******)ppppppplVar17[-1];
          if (0x1f < (ulonglong)((longlong)ppppppplVar17 + (-8 - (longlong)ppppppplVar19)))
          goto LAB_1401ebbaf;
          uVar25 = local_f8 + 0x28;
        }
        thunk_FUN_14028af80(ppppppplVar19,uVar25);
      }
      uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffea0 >> 0x20);
      uVar25 = 0;
      local_res20 = (longlong *******)((ulonglong)local_res20 & 0xffffffff00000000);
      ppppppplVar17 = local_88;
      for (local_118 = (longlong *******)param_1[0x30]; local_88 = ppppppplVar17,
          local_118 != (longlong *******)0x0; local_118 = (longlong *******)local_118[0x30]) {
        uVar10 = (*(code *)(*local_118)[0xc])();
        if ((uVar10 < 0xb) && ((0x412U >> (uVar10 & 0x1f) & 1) != 0)) {
          uVar10 = *(uint *)(local_118 + 100);
          if ((*(byte *)((longlong)local_118 + 0x304) & 0x10) == 0) {
            uVar10 = *(uint *)(local_118 + 100) - 1;
          }
          if (((ulonglong)local_118[0x24] & 4) == 0) {
LAB_1401eaf15:
            local_a0 = local_98;
LAB_1401eaf23:
            local_res18 = (longlong *******)((ulonglong)local_res18 & 0xffffffffffffff00);
          }
          else {
            uVar10 = uVar10 & 0x80000001;
            if ((int)uVar10 < 0) {
              uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
            }
            if ((local_118[(longlong)(int)uVar10 + 0x59] == (longlong ******)0x0) ||
               (ppppplVar4 = local_118[(longlong)(int)uVar10 + 0x59][4],
               ppppplVar4 == (longlong *****)0x0)) goto LAB_1401eaf15;
            local_70 = (longlong *******)((ulonglong)local_70 | 1);
            local_res18 = (longlong *******)(ppppplVar4 + 0xf);
            if ((longlong ****)0xf < ppppplVar4[0x12]) {
              local_res18 = (longlong *******)*local_res18;
            }
            local_98 = (code *******)0x0;
            uStack_90 = 0;
            local_88 = (longlong *******)0x0;
            local_80 = 0;
            sVar16 = strlen((char *)local_res18);
            FUN_140017480(&local_98,local_res18,sVar16);
            ppppppplVar17 = (longlong *******)&local_138;
            if ((longlong *******)0xf < local_120) {
              ppppppplVar17 = local_138;
            }
            pppppppcVar22 = (code *******)&local_98;
            if (0xf < local_80) {
              pppppppcVar22 = local_98;
            }
            local_a0 = local_98;
            if ((local_88 < local_128) ||
               (iVar28 = memcmp(pppppppcVar22,ppppppplVar17,(size_t)local_128), iVar28 != 0))
            goto LAB_1401eaf23;
            local_res18 = (longlong *******)CONCAT71(local_res18._1_7_,1);
          }
          if ((((ulonglong)local_70 & 1) != 0) &&
             (local_70 = (longlong *******)((ulonglong)local_70 & 0xfffffffffffffffe),
             0xf < local_80)) {
            uVar25 = local_80 + 1;
            pppppppcVar22 = local_a0;
            if (0xfff < uVar25) {
              pppppppcVar22 = (code *******)local_a0[-1];
              if (0x1f < (ulonglong)((longlong)local_a0 + (-8 - (longlong)pppppppcVar22)))
              goto LAB_1401ebbaf;
              uVar25 = local_80 + 0x28;
            }
            thunk_FUN_14028af80(pppppppcVar22,uVar25);
          }
          uVar25 = (ulonglong)local_res20 & 0xffffffff;
          if ((char)local_res18 != '\0') {
            uVar25 = (ulonglong)((int)local_res20 + 1U);
            local_res20 = (longlong *******)CONCAT44(local_res20._4_4_,(int)local_res20 + 1U);
          }
        }
        else {
          uVar25 = (ulonglong)local_res20 & 0xffffffff;
        }
        uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffea0 >> 0x20);
        ppppppplVar17 = local_88;
      }
      if (0 < (int)(uint)uVar25) {
        if ((uint)uVar25 < 10) {
          pcVar29 = (char *)((longlong)&local_88 + 4);
          local_88._5_3_ = (undefined3)((ulonglong)ppppppplVar17 >> 0x28);
          local_88._0_4_ = SUB84(ppppppplVar17,0);
          local_88._0_5_ = CONCAT14((char)uVar25 + '0',(undefined4)local_88);
        }
        else {
          pcVar29 = (char *)((longlong)&local_88 + 5);
          do {
            pcVar23 = pcVar29;
            pcVar29 = pcVar23 + -2;
            uVar8 = uVar25 / 100;
            uVar10 = (uint)uVar8;
            *(undefined2 *)pcVar29 =
                 *(undefined2 *)(&DAT_140474390 + (ulonglong)((int)uVar25 + uVar10 * -100) * 2);
            uVar25 = uVar8;
          } while (9 < uVar10);
          if (uVar10 != 0) {
            pcVar29 = pcVar23 + -3;
            *pcVar29 = (char)uVar8 + '0';
          }
        }
        FUN_140053d10(local_110,pcVar29,(longlong)&local_88 + 5);
        ppppppplVar17 = (longlong *******)local_110;
        if (0xf < local_f8) {
          ppppppplVar17 = local_110[0];
        }
        FUN_1400532a0(&local_138,ppppppplVar17,local_100);
        if (0xf < local_f8) {
          uVar25 = local_f8 + 1;
          ppppppplVar17 = local_110[0];
          if (0xfff < uVar25) {
            ppppppplVar17 = (longlong *******)local_110[0][-1];
            if (0x1f < (ulonglong)((longlong)local_110[0] + (-8 - (longlong)ppppppplVar17)))
            goto LAB_1401ebbaf;
            uVar25 = local_f8 + 0x28;
          }
          thunk_FUN_14028af80(ppppppplVar17,uVar25);
        }
      }
      local_res18 = (longlong *******)(longlong)(int)local_78;
      ppppppplVar17 = (longlong *******)&local_138;
      if ((longlong *******)0xf < local_120) {
        ppppppplVar17 = local_138;
      }
      in_stack_fffffffffffffea0 = CONCAT44(uVar12,(undefined4)local_f0);
      lVar14 = FUN_1401ab570(param_1[0x19] + 0x16c0,local_e8,local_e4,1,ppppppplVar17,
                             in_stack_fffffffffffffea0);
      param_1[(longlong)local_res18 + 0x59] = lVar14;
      ppppppplVar19 = local_res18;
      if ((longlong *******)0xf < local_120) {
        ppppppplVar24 = (longlong *******)((longlong)local_120 + 1);
        ppppppplVar19 = local_138;
        if ((longlong *******)0xfff < ppppppplVar24) {
          ppppppplVar19 = (longlong *******)local_138[-1];
          if (0x1f < (ulonglong)((longlong)local_138 + (-8 - (longlong)ppppppplVar19)))
          goto LAB_1401ebbaf;
          ppppppplVar24 = local_120 + 5;
        }
        thunk_FUN_14028af80(ppppppplVar19,ppppppplVar24);
        ppppppplVar19 = local_res18;
      }
    }
    else {
      local_res18 = (longlong *******)0x1f;
      local_118 = *(longlong ********)(param_1[0x19] + 0x1518);
      local_138 = (longlong *******)0x0;
      uStack_130 = 0;
      local_128 = (longlong *******)0x0;
      local_120 = (longlong *******)0x0;
      local_a0 = (code *******)(*local_118)[0xe];
      local_res20 = (longlong *******)param_1[1];
      local_138 = (longlong *******)FUN_1400173f0(&local_138,&local_res18);
      uVar9 = s__rt_imageLayerComposite__1404906f8._16_8_;
      uVar18 = s__rt_imageLayerComposite__1404906f8._8_8_;
      local_120 = local_res18;
      local_128 = (longlong *******)0x18;
      *local_138 = (longlong ******)s__rt_imageLayerComposite__1404906f8._0_8_;
      local_138[1] = (longlong ******)uVar18;
      local_138[2] = (longlong ******)uVar9;
      *(undefined1 *)(local_138 + 3) = 0;
      puVar13 = (undefined8 *)FUN_140153110(local_110,local_res20);
      puVar1 = puVar13 + 2;
      if (0xf < (ulonglong)puVar13[3]) {
        puVar13 = (undefined8 *)*puVar13;
      }
      FUN_1400532a0(&local_138,puVar13,*puVar1);
      FUN_140017240(local_110);
      FUN_1400532a0(&local_138,&DAT_14048de40,1);
      FUN_1400532a0(&local_138,&DAT_140490714,1);
      ppppppplVar17 = (longlong *******)&local_138;
      if ((longlong *******)0xf < local_120) {
        ppppppplVar17 = local_138;
      }
      in_stack_fffffffffffffea0 = CONCAT44(uVar12,(undefined4)local_f0);
      lVar14 = (*(code *)local_a0)(local_118,local_e8,local_e4,1,ppppppplVar17,
                                   in_stack_fffffffffffffea0,0x1b,(undefined4)local_b8,
                                   (undefined4)local_a8);
      param_1[0x59] = lVar14;
      FUN_140017240(&local_138);
      ppppppplVar19 = (longlong *******)(longlong)(int)local_78;
    }
    iVar28 = (int)local_78 + 1;
    local_78 = CONCAT44(local_78._4_4_,iVar28);
    *(int *)(param_1[(longlong)ppppppplVar19 + 0x59] + 0x2c) =
         *(int *)(param_1[(longlong)ppppppplVar19 + 0x59] + 0x2c) + 1;
  } while (iVar28 < (int)local_b0);
LAB_1401eb16e:
  if ((*(uint *)((longlong)param_1 + 0x304) >> 0xd & 1) == 0) {
    ppppppplVar17 = (longlong *******)((ulonglong)ppppppplVar17 & 0xffffffff00000000);
    local_res18 = (longlong *******)CONCAT44((float)local_64,(float)local_68);
    local_res20 = (longlong *******)CONCAT44((float)(int)local_e4,(float)(int)local_e8);
    FUN_1401ede30(param_1[0x19],local_res20,local_res18,local_60,ppppppplVar17,param_1 + 0x5b);
  }
  local_118 = (longlong *******)param_1[0x61];
  local_50 = (longlong *******)param_1[0x62];
  if (local_118 != local_50) {
    local_res20 = (longlong *******)
                  (CONCAT44(local_res20._4_4_,
                            CONCAT31((uint3)(*(uint *)((longlong)param_1 + 0x304) >> 9),
                                     (char)(*(uint *)((longlong)param_1 + 0x304) >> 1))) &
                  0xffffffffffffff01);
    do {
      local_a0 = (code *******)*local_118;
      local_f0 = local_a0[0x1d];
      local_58 = local_a0[0x1e];
      if (local_f0 != local_58) {
        do {
          ppppppplVar19 = (longlong *******)(local_f0 + 5);
          local_d0 = (longlong *******)0x0;
          local_c8 = (longlong *******)0xf;
          uStack_d8 = 0;
          local_e0 = (longlong *******)0x0;
          if (&local_e0 != (longlong ********)ppppppplVar19) {
            if ((code *****)0xf < local_f0[8]) {
              ppppppplVar19 = (longlong *******)*ppppppplVar19;
            }
            FUN_14000f880(&local_e0,ppppppplVar19,local_f0[7]);
          }
          uVar25 = (ulonglong)local_e4;
          uVar10 = (uint)*(ushort *)((longlong)local_f0 + 0xe);
          if (0x1000 < *(ushort *)((longlong)local_f0 + 0xe)) {
            uVar10 = local_e8;
          }
          if (*(ushort *)(local_f0 + 2) < 0x1001) {
            uVar25 = (ulonglong)*(ushort *)(local_f0 + 2);
          }
          uVar21 = (uint)uVar25;
          if (*(ushort *)((longlong)local_f0 + 0x12) < 0x1001) {
            uVar11 = (uint)*(ushort *)((longlong)local_f0 + 0x12);
            if (uVar10 < uVar21) {
              if (uVar21 < uVar11) {
                uVar11 = uVar21;
              }
              local_b8 = (ulonglong)uVar11;
              local_a8 = (ulonglong)(((float)uVar10 / (float)uVar25) * (float)(int)uVar11);
            }
            else {
              if (uVar10 < uVar11) {
                uVar11 = uVar10;
              }
              local_a8 = (ulonglong)uVar11;
              local_b8 = (longlong)(((float)uVar25 / (float)uVar10) * (float)(int)uVar11);
            }
          }
          else {
            local_a8 = CONCAT44(local_a8._4_4_,uVar10);
            local_b8 = uVar25;
          }
          if (((ulonglong)local_f0[9] & 1) == 0) {
            if ((char)local_res20 == '\0') {
              if (local_c8 == local_d0) {
                ppppppplVar17 = (longlong *******)0x0;
                FUN_140053110(&local_e0,1,(ulonglong)param_1 & 0xff,&DAT_14048de40,1);
              }
              else {
                ppppppplVar19 = (longlong *******)&local_e0;
                if ((longlong *******)0xf < local_c8) {
                  ppppppplVar19 = local_e0;
                }
                puVar3 = (undefined2 *)((longlong)ppppppplVar19 + (longlong)local_d0);
                local_d0 = (longlong *******)((longlong)local_d0 + 1);
                *puVar3 = 0x5f;
              }
              if ((uint)local_a8 < 10) {
                pcVar29 = (char *)((longlong)&local_88 + 4);
                local_88._0_5_ = CONCAT14((char)local_a8 + '0',(undefined4)local_88);
              }
              else {
                uVar25 = local_a8 & 0xffffffff;
                pcVar29 = (char *)((longlong)&local_88 + 5);
                do {
                  pcVar23 = pcVar29;
                  pcVar29 = pcVar23 + -2;
                  uVar8 = uVar25 / 100;
                  uVar10 = (uint)uVar8;
                  *(undefined2 *)pcVar29 =
                       *(undefined2 *)
                        (&DAT_140474390 + (ulonglong)((int)uVar25 + uVar10 * -100) * 2);
                  uVar25 = uVar8;
                } while (9 < uVar10);
                if (uVar10 != 0) {
                  pcVar29 = pcVar23 + -3;
                  *pcVar29 = (char)uVar8 + '0';
                }
              }
              FUN_140053d10(local_110,pcVar29,(longlong)&local_88 + 5);
              ppppppplVar19 = (longlong *******)local_110;
              if (0xf < local_f8) {
                ppppppplVar19 = local_110[0];
              }
              local_b0 = local_110[0];
              local_c0 = local_d0;
              if ((longlong *******)((longlong)local_c8 - (longlong)local_d0) < local_100) {
                ppppppplVar17 = local_100;
                FUN_140053110(&local_e0,local_100,(ulonglong)param_1 & 0xff,ppppppplVar19,local_100)
                ;
                ppppppplVar19 = local_110[0];
              }
              else {
                local_res18 = (longlong *******)&local_e0;
                if ((longlong *******)0xf < local_c8) {
                  local_res18 = local_e0;
                }
                lVar14 = (longlong)local_d0 + (longlong)local_res18;
                local_d0 = (longlong *******)((longlong)local_100 + (longlong)local_d0);
                FUN_1404210f0(lVar14,ppppppplVar19,local_100);
                *(undefined1 *)((longlong)local_c0 + (longlong)local_100 + (longlong)local_res18) =
                     0;
                ppppppplVar19 = local_b0;
              }
              if (0xf < local_f8) {
                uVar25 = local_f8 + 1;
                ppppppplVar24 = ppppppplVar19;
                if (0xfff < uVar25) {
                  ppppppplVar24 = (longlong *******)ppppppplVar19[-1];
                  if (0x1f < (ulonglong)((longlong)ppppppplVar19 + (-8 - (longlong)ppppppplVar24)))
                  goto LAB_1401ebbaf;
                  uVar25 = local_f8 + 0x28;
                }
                thunk_FUN_14028af80(ppppppplVar24,uVar25);
              }
              if (local_c8 == local_d0) {
                ppppppplVar17 = (longlong *******)0x0;
                FUN_140053110(&local_e0,1,(ulonglong)param_1 & 0xff,&DAT_14048de40,1);
              }
              else {
                ppppppplVar19 = (longlong *******)&local_e0;
                if ((longlong *******)0xf < local_c8) {
                  ppppppplVar19 = local_e0;
                }
                puVar3 = (undefined2 *)((longlong)ppppppplVar19 + (longlong)local_d0);
                local_d0 = (longlong *******)((longlong)local_d0 + 1);
                *puVar3 = 0x5f;
              }
              if ((uint)local_b8 < 10) {
                pcVar29 = (char *)((longlong)&local_88 + 4);
                local_88._0_5_ = CONCAT14((char)local_b8 + '0',(undefined4)local_88);
              }
              else {
                uVar25 = local_b8 & 0xffffffff;
                pcVar29 = (char *)((longlong)&local_88 + 5);
                do {
                  pcVar23 = pcVar29;
                  pcVar29 = pcVar23 + -2;
                  uVar8 = uVar25 / 100;
                  uVar10 = (uint)uVar8;
                  *(undefined2 *)pcVar29 =
                       *(undefined2 *)
                        (&DAT_140474390 + (ulonglong)((int)uVar25 + uVar10 * -100) * 2);
                  uVar25 = uVar8;
                } while (9 < uVar10);
                if (uVar10 != 0) {
                  pcVar29 = pcVar23 + -3;
                  *pcVar29 = (char)uVar8 + '0';
                }
              }
              FUN_140053d10(local_110,pcVar29,(longlong)&local_88 + 5);
              ppppppplVar19 = (longlong *******)local_110;
              if (0xf < local_f8) {
                ppppppplVar19 = local_110[0];
              }
              local_b0 = local_110[0];
              local_c0 = local_d0;
              if ((longlong *******)((longlong)local_c8 - (longlong)local_d0) < local_100) {
                ppppppplVar17 = local_100;
                FUN_140053110(&local_e0,local_100,(ulonglong)param_1 & 0xff,ppppppplVar19,local_100)
                ;
                ppppppplVar19 = local_110[0];
              }
              else {
                local_res18 = (longlong *******)&local_e0;
                if ((longlong *******)0xf < local_c8) {
                  local_res18 = local_e0;
                }
                lVar14 = (longlong)local_d0 + (longlong)local_res18;
                local_d0 = (longlong *******)((longlong)local_100 + (longlong)local_d0);
                FUN_1404210f0(lVar14,ppppppplVar19,local_100);
                *(undefined1 *)((longlong)local_c0 + (longlong)local_res18 + (longlong)local_100) =
                     0;
                ppppppplVar19 = local_b0;
              }
              if (0xf < local_f8) {
                uVar25 = local_f8 + 1;
                ppppppplVar24 = ppppppplVar19;
                if (0xfff < uVar25) {
                  ppppppplVar24 = (longlong *******)ppppppplVar19[-1];
                  if (0x1f < (ulonglong)((longlong)ppppppplVar19 + (-8 - (longlong)ppppppplVar24)))
                  goto LAB_1401ebbaf;
                  uVar25 = local_f8 + 0x28;
                }
                thunk_FUN_14028af80(ppppppplVar24,uVar25);
              }
              if (local_c8 == local_d0) {
                ppppppplVar17 = (longlong *******)0x0;
                FUN_140053110(&local_e0,1,local_res8,&DAT_14048de40,1);
              }
              else {
                ppppppplVar19 = (longlong *******)&local_e0;
                if ((longlong *******)0xf < local_c8) {
                  ppppppplVar19 = local_e0;
                }
                puVar3 = (undefined2 *)((longlong)ppppppplVar19 + (longlong)local_d0);
                local_d0 = (longlong *******)((longlong)local_d0 + 1);
                *puVar3 = 0x5f;
              }
              lVar14 = (longlong)&local_88 + 5;
              uVar18 = FUN_140053cb0(lVar14,*(undefined1 *)((longlong)local_f0 + 0xc));
              FUN_140053d10(local_110,uVar18,lVar14);
              ppppppplVar19 = (longlong *******)local_110;
              if (0xf < local_f8) {
                ppppppplVar19 = local_110[0];
              }
              local_b0 = local_110[0];
              local_c0 = local_d0;
              if ((longlong *******)((longlong)local_c8 - (longlong)local_d0) < local_100)
              goto LAB_1401eb919;
              local_res18 = (longlong *******)&local_e0;
              if ((longlong *******)0xf < local_c8) {
                local_res18 = local_e0;
              }
              lVar14 = (longlong)local_d0 + (longlong)local_res18;
              local_d0 = (longlong *******)((longlong)local_100 + (longlong)local_d0);
              FUN_1404210f0(lVar14,ppppppplVar19,local_100);
              *(undefined1 *)((longlong)local_c0 + (longlong)local_100 + (longlong)local_res18) = 0;
              ppppppplVar19 = local_b0;
              goto LAB_1401eb927;
            }
          }
          else {
            if (local_c8 == local_d0) {
              ppppppplVar17 = (longlong *******)0x0;
              FUN_140053110(&local_e0,1,local_res8,&DAT_14048de40,1);
            }
            else {
              ppppppplVar19 = (longlong *******)&local_e0;
              if ((longlong *******)0xf < local_c8) {
                ppppppplVar19 = local_e0;
              }
              puVar3 = (undefined2 *)((longlong)ppppppplVar19 + (longlong)local_d0);
              local_d0 = (longlong *******)((longlong)local_d0 + 1);
              *puVar3 = 0x5f;
            }
            ppppppcVar26 = local_a0[1];
            if (ppppppcVar26 < (code ******)0xa) {
              pcVar29 = (char *)((longlong)&local_88 + 4);
              local_88._0_5_ = CONCAT14((char)ppppppcVar26 + '0',(undefined4)local_88);
            }
            else {
              pcVar29 = (char *)((longlong)&local_88 + 5);
              do {
                pcVar23 = pcVar29;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = ppppppcVar26;
                lVar14 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar7,8);
                pcVar29 = pcVar23 + -2;
                ppppppcVar27 = (code ******)
                               (((ulonglong)((longlong)ppppppcVar26 - lVar14) >> 1) + lVar14 >> 6);
                *(undefined2 *)pcVar29 =
                     *(undefined2 *)
                      (&DAT_140474390 +
                      ((longlong)ppppppcVar26 + (longlong)ppppppcVar27 * -100 & 0xffffffffU) * 2);
                ppppppcVar26 = ppppppcVar27;
              } while ((code ******)0x9 < ppppppcVar27);
              if (ppppppcVar27 != (code ******)0x0) {
                pcVar29 = pcVar23 + -3;
                *pcVar29 = (char)ppppppcVar27 + '0';
              }
            }
            FUN_140053d10(local_110,pcVar29,(longlong)&local_88 + 5);
            ppppppplVar19 = (longlong *******)local_110;
            if (0xf < local_f8) {
              ppppppplVar19 = local_110[0];
            }
            local_c0 = local_110[0];
            if ((longlong *******)((longlong)local_c8 - (longlong)local_d0) < local_100) {
LAB_1401eb919:
              ppppppplVar17 = local_100;
              FUN_140053110(&local_e0,local_100,local_res8,ppppppplVar19,local_100);
              ppppppplVar19 = local_110[0];
            }
            else {
              local_res18 = (longlong *******)&local_e0;
              if ((longlong *******)0xf < local_c8) {
                local_res18 = local_e0;
              }
              local_res18 = (longlong *******)((longlong)local_res18 + (longlong)local_d0);
              local_d0 = (longlong *******)((longlong)local_d0 + (longlong)local_100);
              FUN_1404210f0(local_res18,ppppppplVar19,local_100);
              *(undefined1 *)((longlong)local_100 + (longlong)local_res18) = 0;
              ppppppplVar19 = local_c0;
            }
LAB_1401eb927:
            if (0xf < local_f8) {
              uVar25 = local_f8 + 1;
              ppppppplVar24 = ppppppplVar19;
              if (0xfff < uVar25) {
                ppppppplVar24 = (longlong *******)ppppppplVar19[-1];
                if (0x1f < (ulonglong)((longlong)ppppppplVar19 + (-8 - (longlong)ppppppplVar24)))
                goto LAB_1401ebbaf;
                uVar25 = local_f8 + 0x28;
              }
              thunk_FUN_14028af80(ppppppplVar24,uVar25);
            }
          }
          if (*local_f0 == (code *****)0x0) {
            uVar12 = 0;
            if (((ulonglong)local_f0[9] & 4) == 0) {
              uVar12 = 2;
            }
            local_res18 = (longlong *******)
                          CONCAT71(local_res18._1_7_,*(undefined1 *)((longlong)local_f0 + 0xc));
            local_c0 = (longlong *******)CONCAT44(local_c0._4_4_,uVar12);
            local_78 = param_1[0x19] + 0x16c0;
            local_b0 = (longlong *******)CONCAT44(local_b0._4_4_,*(undefined4 *)(local_f0 + 1));
            local_70 = (longlong *******)&local_e0;
            if ((longlong *******)0xf < local_c8) {
              local_70 = local_e0;
            }
            pppppcVar20 = (code *****)FUN_1401ab410(local_78,local_70);
            if (pppppcVar20 == (code *****)0x0) {
              ppppppplVar17 = local_70;
              pppppcVar20 = (code *****)
                            FUN_1401aadb0(local_78,local_a8 & 0xffffffff,local_b8 & 0xffffffff,
                                          (ulonglong)local_res18 & 0xff,local_70,
                                          (ulonglong)local_b0 & 0xffffffff,0x1b,(undefined4)local_c0
                                          ,1);
            }
            *local_f0 = pppppcVar20;
            *(int *)((longlong)pppppcVar20 + 0x2c) = *(int *)((longlong)pppppcVar20 + 0x2c) + 1;
          }
          else {
            FUN_140161f40(*local_f0,local_a8 & 0xffffffff,local_b8 & 0xffffffff);
          }
          uVar12 = (undefined4)((ulonglong)ppppppplVar17 >> 0x20);
          if (((ulonglong)local_f0[9] & 2) != 0) {
            pppppcVar20 = *local_f0;
            ppppcVar5 = pppppcVar20[1];
            ppppcVar2 = ppppcVar5 + 10;
            *ppppcVar2 = *ppppcVar2 + 1;
            *ppppcVar5[10] = (code **)pppppcVar20;
            (*(code *)(*pppppcVar20)[9])();
            ppppppplVar17 = (longlong *******)CONCAT44(uVar12,*(undefined4 *)(local_f0 + 4));
            (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0x118))
                      (*(longlong **)(param_1[0x19] + 0x1518),local_f0,*(undefined4 *)(local_f0 + 3)
                       ,*(undefined4 *)((longlong)local_f0 + 0x1c),ppppppplVar17);
            (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0x120))
                      (*(longlong **)(param_1[0x19] + 0x1518),1,0);
            pppppcVar20 = *local_f0;
            pppppcVar20[1][10] = pppppcVar20[1][10] + -1;
            if (*pppppcVar20[1][10] == (code **)0x0) {
              (*(code *)(*pppppcVar20)[10])(pppppcVar20);
            }
            else {
              (**(code **)(**pppppcVar20[1][10] + 0x48))();
            }
          }
          if ((longlong *******)0xf < local_c8) {
            ppppppplVar19 = local_e0;
            if ((0xfff < (longlong)local_c8 + 1U) &&
               (ppppppplVar19 = (longlong *******)local_e0[-1],
               0x1f < (ulonglong)((longlong)local_e0 + (-8 - (longlong)ppppppplVar19))))
            goto LAB_1401ebbaf;
            thunk_FUN_14028af80(ppppppplVar19);
          }
          local_f0 = local_f0 + 10;
        } while (local_f0 != local_58);
      }
      local_118 = local_118 + 1;
    } while (local_118 != local_50);
  }
  if (((*(uint *)((longlong)param_1 + 0x304) >> 8 & 1) != 0) &&
     (*(longlong *)(param_1[0x19] + 0x60) == 0)) {
    *(longlong *)(param_1[0x19] + 0x60) = param_1[0x59];
  }
  return;
}

