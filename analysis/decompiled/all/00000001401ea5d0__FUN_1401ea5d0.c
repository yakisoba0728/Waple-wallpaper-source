// Function: FUN_1401ea5d0
// Addr: 1401ea5d0
// Size: 43 bytes


/* WARNING: Removing unreachable block (ram,0x0001401eb485) */
/* WARNING: Removing unreachable block (ram,0x0001401eb600) */
/* WARNING: Removing unreachable block (ram,0x0001401eb5f3) */
/* WARNING: Removing unreachable block (ram,0x0001401eb478) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401ea5d0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 ****ppppuVar2;
  undefined2 *puVar3;
  longlong *****ppppplVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  ulonglong uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  char *******pppppppcVar16;
  char *******pppppppcVar17;
  undefined8 *****pppppuVar18;
  uint uVar19;
  longlong lVar20;
  undefined8 *******pppppppuVar21;
  char *pcVar22;
  ulonglong uVar23;
  longlong *******ppppppplVar24;
  undefined8 ******ppppppuVar25;
  undefined8 ******ppppppuVar26;
  int iVar27;
  char *pcVar28;
  undefined1 local_res8;
  char acStackX_10 [8];
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  undefined8 in_stack_fffffffffffffea0;
  char *******pppppppcStack_138;
  undefined8 uStack_130;
  longlong *******ppppppplStack_128;
  longlong *******ppppppplStack_120;
  longlong *******ppppppplStack_118;
  longlong *******appppppplStack_110 [2];
  char *******pppppppcStack_100;
  ulonglong uStack_f8;
  undefined8 uStack_f0;
  uint uStack_e8;
  uint uStack_e4;
  char *******pppppppcStack_e0;
  undefined8 uStack_d8;
  longlong *******ppppppplStack_d0;
  longlong *******ppppppplStack_c8;
  undefined8 uStack_c0;
  ulonglong uStack_b8;
  longlong *******ppppppplStack_b0;
  undefined8 uStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined8 *******pppppppuStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  char *******local_70;
  int iStack_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 ******ppppppuStack_58;
  longlong *******ppppppplStack_50;
  
  local_70 = (char *******)((ulonglong)local_70 & 0xffffffff00000000);
  if (*(longlong *)(param_1[0x19] + 0x60) == param_1[0x59]) {
    *(undefined8 *)(param_1[0x19] + 0x60) = 0;
  }
  lVar20 = param_1[0x59];
  if (lVar20 != 0) {
    lVar14 = param_1[0x19];
    *(int *)(lVar20 + 0x2c) = *(int *)(lVar20 + 0x2c) + -1;
    if (*(int *)(lVar20 + 0x2c) < 1) {
      func_0x0001401ab6c0(lVar14 + 0x16c0);
    }
  }
  lVar20 = param_1[0x5a];
  if (lVar20 != 0) {
    lVar14 = param_1[0x19];
    *(int *)(lVar20 + 0x2c) = *(int *)(lVar20 + 0x2c) + -1;
    if (*(int *)(lVar20 + 0x2c) < 1) {
      func_0x0001401ab6c0(lVar14 + 0x16c0);
    }
  }
  pppppppcVar17 = (char *******)&iStack_68;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  (**(code **)(*param_1 + 0x128))(param_1,acStackX_10,&uStack_60,&uStack_e8,pppppppcVar17);
  uVar10 = *(uint *)((longlong)param_1 + 0x304);
  if ((uVar10 >> 0xe & 1) != 0) {
    acStackX_10[0] = '\x01';
  }
  uVar19 = 4;
  if (4 < (int)uStack_e8) {
    uVar19 = uStack_e8;
  }
  uVar11 = 4;
  if (4 < (int)uStack_e4) {
    uVar11 = uStack_e4;
  }
  uStack_f0 = (undefined8 ******)
              (CONCAT44(uStack_f0._4_4_,-(uint)((*(uint *)(param_1[0x19] + 0x118) & 0x2000) != 0)) &
              0xffffffff0000000e);
  iVar27 = (uVar10 >> 4 & 1) + (int)param_1[100];
  local_res8 = SUB81(param_1,0);
  uStack_e8 = uVar19;
  uStack_e4 = uVar11;
  if (((iVar27 == 0) && ((*(byte *)(param_1 + 0x24) & 4) != 0)) && (param_1[0x33] != param_1[0x34]))
  {
    ppppppplStack_b0 = (longlong *******)CONCAT44(ppppppplStack_b0._4_4_,1);
  }
  else {
    if (2 < iVar27) {
      iVar27 = 2;
    }
    ppppppplStack_b0 = (longlong *******)CONCAT44(ppppppplStack_b0._4_4_,iVar27);
    if (iVar27 < 1) goto code_r0x0001401eb23e;
  }
  uStack_a8 = CONCAT44(uStack_a8._4_4_,~(*(uint *)(param_1[0x19] + 0x118) * 8)) & 0xffffffff00000008
              | 1;
  uStack_c0 = (longlong *******)(CONCAT44(uStack_c0._4_4_,uVar10 >> 0xf) & 0xffffffff00000001);
  iVar27 = 0;
  uStack_b8 = CONCAT44(uStack_b8._4_4_,(uint)(acStackX_10[0] != '\0') | (uVar10 >> 0xf & 1) * 2);
  uStack_78 = uStack_78 & 0xffffffff00000000;
  do {
    lVar20 = (longlong)&local_88 + 5;
    if (((*(uint *)((longlong)param_1 + 0x304) >> 4 & 1) != 0) && (iVar27 == 0)) {
      uStackX_18 = (char *******)0x1f;
      ppppppplStack_118 = *(longlong ********)(param_1[0x19] + 0x1518);
      pppppppcStack_138 = (char *******)0x0;
      uStack_130 = 0;
      ppppppplStack_128 = (longlong *******)0x0;
      ppppppplStack_120 = (longlong *******)0x0;
      pppppppuStack_a0 = *(undefined8 ********)((longlong)*ppppppplStack_118 + 0x70);
      uStackX_20 = (longlong *******)param_1[1];
      pppppppcStack_138 = (char *******)func_0x0001400174c0(&pppppppcStack_138,&uStackX_18);
      uVar9 = s__rt_imageLayerComposite__1404907c8._16_8_;
      uVar15 = s__rt_imageLayerComposite__1404907c8._8_8_;
      ppppppplStack_120 = (longlong *******)uStackX_18;
      ppppppplStack_128 = (longlong *******)0x18;
      *pppppppcStack_138 = (char ******)s__rt_imageLayerComposite__1404907c8._0_8_;
      pppppppcStack_138[1] = (char ******)uVar15;
      pppppppcStack_138[2] = (char ******)uVar9;
      *(char *)(pppppppcStack_138 + 3) = '\0';
      puVar13 = (undefined8 *)FUN_1401531e0(appppppplStack_110,uStackX_20);
      puVar1 = puVar13 + 2;
      if (0xf < (ulonglong)puVar13[3]) {
        puVar13 = (undefined8 *)*puVar13;
      }
      func_0x000140053370(&pppppppcStack_138,puVar13,*puVar1);
                    /* WARNING: Subroutine does not return */
      FUN_140017310(appppppplStack_110);
    }
    ppppppplStack_128 = (longlong *******)0x3;
    ppppppplStack_120 = (longlong *******)0xf;
    uStack_130 = 0;
    pppppppcStack_138 = (char *******)(ulonglong)(uint3)_UNK_140490904;
    if ((int)uStack_e8 < 0) {
      lVar14 = FUN_140053d80(lVar20,-uStack_e8);
      *(undefined1 *)(lVar14 + -1) = 0x2d;
      lVar14 = lVar14 + -1;
    }
    else {
      lVar14 = FUN_140053d80(lVar20);
    }
    FUN_140053de0(appppppplStack_110,lVar14,lVar20);
    ppppppplVar24 = (longlong *******)appppppplStack_110;
    if (0xf < uStack_f8) {
      ppppppplVar24 = appppppplStack_110[0];
    }
    ppppppplStack_118 = appppppplStack_110[0];
    uStackX_20 = ppppppplStack_128;
    if (pppppppcStack_100 <=
        (char *******)((longlong)ppppppplStack_120 - (longlong)ppppppplStack_128)) {
      uStackX_18 = (char *******)&pppppppcStack_138;
      if ((longlong *******)0xf < ppppppplStack_120) {
        uStackX_18 = pppppppcStack_138;
      }
      lVar20 = (longlong)ppppppplStack_128 + (longlong)uStackX_18;
      ppppppplStack_128 =
           (longlong *******)((longlong)pppppppcStack_100 + (longlong)ppppppplStack_128);
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(lVar20,ppppppplVar24,pppppppcStack_100);
    }
    FUN_1400531e0(&pppppppcStack_138,pppppppcStack_100,local_res8,ppppppplVar24,pppppppcStack_100);
    if (0xf < uStack_f8) {
      uVar23 = uStack_f8 + 1;
      ppppppplVar24 = appppppplStack_110[0];
      if (0xfff < uVar23) {
        ppppppplVar24 = (longlong *******)appppppplStack_110[0][-1];
        if (0x1f < (ulonglong)((longlong)appppppplStack_110[0] + (-8 - (longlong)ppppppplVar24))) {
code_r0x0001401ebc7f:
          pcVar6 = (code *)swi(0x29);
          (*pcVar6)(5);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar23 = uStack_f8 + 0x28;
      }
      func_0x00014028b040(ppppppplVar24,uVar23);
    }
    if (ppppppplStack_120 == ppppppplStack_128) {
      FUN_1400531e0(&pppppppcStack_138,1,(ulonglong)param_1 & 0xff,&UNK_140474150,1);
    }
    else {
      pppppppcVar17 = (char *******)&pppppppcStack_138;
      if ((longlong *******)0xf < ppppppplStack_120) {
        pppppppcVar17 = pppppppcStack_138;
      }
      puVar3 = (undefined2 *)((longlong)pppppppcVar17 + (longlong)ppppppplStack_128);
      ppppppplStack_128 = (longlong *******)((longlong)ppppppplStack_128 + 1);
      *puVar3 = 0x2e;
    }
    if ((int)uStack_e4 < 0) {
      lVar20 = FUN_140053d80((longlong)&local_88 + 5,-uStack_e4);
      *(undefined1 *)(lVar20 + -1) = 0x2d;
      lVar20 = lVar20 + -1;
    }
    else {
      lVar20 = FUN_140053d80((longlong)&local_88 + 5);
    }
    FUN_140053de0(appppppplStack_110,lVar20,(longlong)&local_88 + 5);
    ppppppplVar24 = (longlong *******)appppppplStack_110;
    if (0xf < uStack_f8) {
      ppppppplVar24 = appppppplStack_110[0];
    }
    uStackX_20 = appppppplStack_110[0];
    if (pppppppcStack_100 <=
        (char *******)((longlong)ppppppplStack_120 - (longlong)ppppppplStack_128)) {
      uStackX_18 = (char *******)&pppppppcStack_138;
      if ((longlong *******)0xf < ppppppplStack_120) {
        uStackX_18 = pppppppcStack_138;
      }
      uStackX_18 = (char *******)((longlong)uStackX_18 + (longlong)ppppppplStack_128);
      ppppppplStack_128 =
           (longlong *******)((longlong)ppppppplStack_128 + (longlong)pppppppcStack_100);
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(uStackX_18,ppppppplVar24,pppppppcStack_100);
    }
    FUN_1400531e0(&pppppppcStack_138,pppppppcStack_100,(ulonglong)param_1 & 0xff,ppppppplVar24,
                  pppppppcStack_100);
    if (0xf < uStack_f8) {
      uVar23 = uStack_f8 + 1;
      ppppppplVar24 = appppppplStack_110[0];
      if (0xfff < uVar23) {
        ppppppplVar24 = (longlong *******)appppppplStack_110[0][-1];
        if (0x1f < (ulonglong)((longlong)appppppplStack_110[0] + (-8 - (longlong)ppppppplVar24)))
        goto code_r0x0001401ebc7f;
        uVar23 = uStack_f8 + 0x28;
      }
      func_0x00014028b040(ppppppplVar24,uVar23);
    }
    if (ppppppplStack_120 == ppppppplStack_128) {
      FUN_1400531e0(&pppppppcStack_138,1,(ulonglong)param_1 & 0xff,&UNK_140474150,1);
    }
    else {
      pppppppcVar17 = (char *******)&pppppppcStack_138;
      if ((longlong *******)0xf < ppppppplStack_120) {
        pppppppcVar17 = pppppppcStack_138;
      }
      puVar3 = (undefined2 *)((longlong)pppppppcVar17 + (longlong)ppppppplStack_128);
      ppppppplStack_128 = (longlong *******)((longlong)ppppppplStack_128 + 1);
      *puVar3 = 0x2e;
    }
    uStackX_18 = (char *******)&UNK_1404906d0;
    if (acStackX_10[0] != '\0') {
      uStackX_18 = (char *******)&UNK_140490908;
    }
    ppppppplStack_118 = (longlong *******)func_0x000140421ed0(uStackX_18);
    if (ppppppplStack_118 <= (ulonglong)((longlong)ppppppplStack_120 - (longlong)ppppppplStack_128))
    {
      pppppppcVar17 = (char *******)&pppppppcStack_138;
      if ((longlong *******)0xf < ppppppplStack_120) {
        pppppppcVar17 = pppppppcStack_138;
      }
      uStackX_20 = (longlong *******)((longlong)ppppppplStack_128 + (longlong)pppppppcVar17);
      ppppppplStack_128 =
           (longlong *******)((longlong)ppppppplStack_128 + (longlong)ppppppplStack_118);
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(uStackX_20,uStackX_18,ppppppplStack_118);
    }
    FUN_1400531e0(&pppppppcStack_138,ppppppplStack_118,(ulonglong)param_1 & 0xff,uStackX_18,
                  ppppppplStack_118);
    uStackX_18 = (char *******)&UNK_14049089c;
    if ((char)uStack_c0 == '\0') {
      uStackX_18 = (char *******)&UNK_140490898;
    }
    ppppppplStack_118 = (longlong *******)func_0x000140421ed0(uStackX_18);
    if (ppppppplStack_118 <= (ulonglong)((longlong)ppppppplStack_120 - (longlong)ppppppplStack_128))
    {
      pppppppcVar17 = (char *******)&pppppppcStack_138;
      if ((longlong *******)0xf < ppppppplStack_120) {
        pppppppcVar17 = pppppppcStack_138;
      }
      uStackX_20 = (longlong *******)((longlong)ppppppplStack_128 + (longlong)pppppppcVar17);
      ppppppplStack_128 =
           (longlong *******)((longlong)ppppppplStack_128 + (longlong)ppppppplStack_118);
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(uStackX_20,uStackX_18,ppppppplStack_118);
    }
    FUN_1400531e0(&pppppppcStack_138,ppppppplStack_118,(ulonglong)param_1 & 0xff,uStackX_18,
                  ppppppplStack_118);
    if ((int)uStack_78 < 0) {
      lVar20 = FUN_140053d80((longlong)&local_88 + 5,-(int)uStack_78);
      *(undefined1 *)(lVar20 + -1) = 0x2d;
      lVar20 = lVar20 + -1;
    }
    else {
      lVar20 = FUN_140053d80((longlong)&local_88 + 5,uStack_78 & 0xffffffff);
    }
    FUN_140053de0(appppppplStack_110,lVar20,(longlong)&local_88 + 5);
    ppppppplVar24 = (longlong *******)appppppplStack_110;
    if (0xf < uStack_f8) {
      ppppppplVar24 = appppppplStack_110[0];
    }
    ppppppplStack_118 = appppppplStack_110[0];
    uStackX_20 = ppppppplStack_128;
    if (pppppppcStack_100 <=
        (char *******)((longlong)ppppppplStack_120 - (longlong)ppppppplStack_128)) {
      uStackX_18 = (char *******)&pppppppcStack_138;
      if ((longlong *******)0xf < ppppppplStack_120) {
        uStackX_18 = pppppppcStack_138;
      }
      lVar20 = (longlong)ppppppplStack_128 + (longlong)uStackX_18;
      ppppppplStack_128 =
           (longlong *******)((longlong)pppppppcStack_100 + (longlong)ppppppplStack_128);
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(lVar20,ppppppplVar24,pppppppcStack_100);
    }
    FUN_1400531e0(&pppppppcStack_138,pppppppcStack_100,(ulonglong)param_1 & 0xff,ppppppplVar24,
                  pppppppcStack_100);
    if (0xf < uStack_f8) {
      uVar23 = uStack_f8 + 1;
      ppppppplVar24 = appppppplStack_110[0];
      if (0xfff < uVar23) {
        ppppppplVar24 = (longlong *******)appppppplStack_110[0][-1];
        if (0x1f < (ulonglong)((longlong)appppppplStack_110[0] + (-8 - (longlong)ppppppplVar24)))
        goto code_r0x0001401ebc7f;
        uVar23 = uStack_f8 + 0x28;
      }
      func_0x00014028b040(ppppppplVar24,uVar23);
    }
    uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffea0 >> 0x20);
    uVar23 = 0;
    uStackX_20 = (longlong *******)((ulonglong)uStackX_20 & 0xffffffff00000000);
    ppppppplVar24 = local_88;
    for (ppppppplStack_118 = (longlong *******)param_1[0x30]; local_88 = ppppppplVar24,
        ppppppplStack_118 != (longlong *******)0x0;
        ppppppplStack_118 = (longlong *******)ppppppplStack_118[0x30]) {
      uVar10 = (*(code *)(*ppppppplStack_118)[0xc])();
      if ((uVar10 < 0xb) && ((0x412U >> (uVar10 & 0x1f) & 1) != 0)) {
        uVar10 = *(uint *)(ppppppplStack_118 + 100);
        if ((*(byte *)((longlong)ppppppplStack_118 + 0x304) & 0x10) == 0) {
          uVar10 = *(uint *)(ppppppplStack_118 + 100) - 1;
        }
        if (((ulonglong)ppppppplStack_118[0x24] & 4) == 0) {
code_r0x0001401eafe5:
          pppppppuStack_a0 = pppppppuStack_98;
code_r0x0001401eaff3:
          uStackX_18 = (char *******)((ulonglong)uStackX_18 & 0xffffffffffffff00);
        }
        else {
          uVar10 = uVar10 & 0x80000001;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
          }
          if ((ppppppplStack_118[(longlong)(int)uVar10 + 0x59] == (longlong ******)0x0) ||
             (ppppplVar4 = ppppppplStack_118[(longlong)(int)uVar10 + 0x59][4],
             ppppplVar4 == (longlong *****)0x0)) goto code_r0x0001401eafe5;
          local_70 = (char *******)((ulonglong)local_70 | 1);
          uStackX_18 = (char *******)(ppppplVar4 + 0xf);
          if ((longlong ****)0xf < ppppplVar4[0x12]) {
            uStackX_18 = (char *******)*uStackX_18;
          }
          pppppppuStack_98 = (undefined8 *******)0x0;
          uStack_90 = 0;
          local_88 = (longlong *******)0x0;
          uStack_80 = 0;
          uVar15 = func_0x000140421ed0();
          func_0x000140017550(&pppppppuStack_98,uStackX_18,uVar15);
          pppppppcVar17 = (char *******)&pppppppcStack_138;
          if ((longlong *******)0xf < ppppppplStack_120) {
            pppppppcVar17 = pppppppcStack_138;
          }
          pppppppuVar21 = &pppppppuStack_98;
          if (0xf < uStack_80) {
            pppppppuVar21 = pppppppuStack_98;
          }
          pppppppuStack_a0 = pppppppuStack_98;
          if ((local_88 < ppppppplStack_128) ||
             (iVar27 = func_0x0001404210c0(pppppppuVar21,pppppppcVar17), iVar27 != 0))
          goto code_r0x0001401eaff3;
          uStackX_18 = (char *******)CONCAT71(uStackX_18._1_7_,1);
        }
        if ((((ulonglong)local_70 & 1) != 0) &&
           (local_70 = (char *******)((ulonglong)local_70 & 0xfffffffffffffffe), 0xf < uStack_80)) {
          uVar23 = uStack_80 + 1;
          pppppppuVar21 = pppppppuStack_a0;
          if (0xfff < uVar23) {
            pppppppuVar21 = (undefined8 *******)pppppppuStack_a0[-1];
            if (0x1f < (ulonglong)((longlong)pppppppuStack_a0 + (-8 - (longlong)pppppppuVar21)))
            goto code_r0x0001401ebc7f;
            uVar23 = uStack_80 + 0x28;
          }
          func_0x00014028b040(pppppppuVar21,uVar23);
        }
        uVar23 = (ulonglong)uStackX_20 & 0xffffffff;
        if ((char)uStackX_18 != '\0') {
          uVar23 = (ulonglong)((int)uStackX_20 + 1U);
          uStackX_20 = (longlong *******)CONCAT44(uStackX_20._4_4_,(int)uStackX_20 + 1U);
        }
      }
      else {
        uVar23 = (ulonglong)uStackX_20 & 0xffffffff;
      }
      uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffea0 >> 0x20);
      ppppppplVar24 = local_88;
    }
    if (0 < (int)(uint)uVar23) {
      if ((uint)uVar23 < 10) {
        pcVar28 = (char *)((longlong)&local_88 + 4);
        local_88._5_3_ = (undefined3)((ulonglong)ppppppplVar24 >> 0x28);
        local_88._0_4_ = SUB84(ppppppplVar24,0);
        local_88._0_5_ = CONCAT14((char)uVar23 + '0',(undefined4)local_88);
      }
      else {
        pcVar28 = (char *)((longlong)&local_88 + 5);
        do {
          pcVar22 = pcVar28;
          pcVar28 = pcVar22 + -2;
          uVar8 = uVar23 / 100;
          uVar10 = (uint)uVar8;
          *(undefined2 *)pcVar28 =
               *(undefined2 *)(&DAT_140474460 + (ulonglong)((int)uVar23 + uVar10 * -100) * 2);
          uVar23 = uVar8;
        } while (9 < uVar10);
        if (uVar10 != 0) {
          pcVar28 = pcVar22 + -3;
          *pcVar28 = (char)uVar8 + '0';
        }
      }
      FUN_140053de0(appppppplStack_110,pcVar28,(longlong)&local_88 + 5);
      ppppppplVar24 = (longlong *******)appppppplStack_110;
      if (0xf < uStack_f8) {
        ppppppplVar24 = appppppplStack_110[0];
      }
      func_0x000140053370(&pppppppcStack_138,ppppppplVar24,pppppppcStack_100);
      if (0xf < uStack_f8) {
        uVar23 = uStack_f8 + 1;
        ppppppplVar24 = appppppplStack_110[0];
        if (0xfff < uVar23) {
          ppppppplVar24 = (longlong *******)appppppplStack_110[0][-1];
          if (0x1f < (ulonglong)((longlong)appppppplStack_110[0] + (-8 - (longlong)ppppppplVar24)))
          goto code_r0x0001401ebc7f;
          uVar23 = uStack_f8 + 0x28;
        }
        func_0x00014028b040(ppppppplVar24,uVar23);
      }
    }
    uStackX_18 = (char *******)(longlong)(int)uStack_78;
    pppppppcVar17 = (char *******)&pppppppcStack_138;
    if ((longlong *******)0xf < ppppppplStack_120) {
      pppppppcVar17 = pppppppcStack_138;
    }
    in_stack_fffffffffffffea0 = CONCAT44(uVar12,(undefined4)uStack_f0);
    lVar20 = func_0x0001401ab640(param_1[0x19] + 0x16c0,uStack_e8,uStack_e4,1,pppppppcVar17,
                                 in_stack_fffffffffffffea0);
    param_1[(longlong)((longlong)uStackX_18 + 0x59)] = lVar20;
    if ((longlong *******)0xf < ppppppplStack_120) {
      ppppppplVar24 = (longlong *******)((longlong)ppppppplStack_120 + 1);
      pppppppcVar16 = pppppppcStack_138;
      if ((longlong *******)0xfff < ppppppplVar24) {
        pppppppcVar16 = (char *******)pppppppcStack_138[-1];
        if (0x1f < (ulonglong)((longlong)pppppppcStack_138 + (-8 - (longlong)pppppppcVar16)))
        goto code_r0x0001401ebc7f;
        ppppppplVar24 = ppppppplStack_120 + 5;
      }
      func_0x00014028b040(pppppppcVar16,ppppppplVar24);
    }
    iVar27 = (int)uStack_78 + 1;
    uStack_78 = CONCAT44(uStack_78._4_4_,iVar27);
    *(int *)(param_1[(longlong)((longlong)uStackX_18 + 0x59)] + 0x2c) =
         *(int *)(param_1[(longlong)((longlong)uStackX_18 + 0x59)] + 0x2c) + 1;
  } while (iVar27 < (int)ppppppplStack_b0);
code_r0x0001401eb23e:
  if ((*(uint *)((longlong)param_1 + 0x304) >> 0xd & 1) == 0) {
    pppppppcVar17 = (char *******)((ulonglong)pppppppcVar17 & 0xffffffff00000000);
    uStackX_18 = (char *******)CONCAT44((float)iStack_64,(float)iStack_68);
    uStackX_20 = (longlong *******)CONCAT44((float)(int)uStack_e4,(float)(int)uStack_e8);
    FUN_1401edf00(param_1[0x19],uStackX_20,uStackX_18,uStack_60,pppppppcVar17,param_1 + 0x5b);
  }
  ppppppplStack_118 = (longlong *******)param_1[0x61];
  ppppppplStack_50 = (longlong *******)param_1[0x62];
  if (ppppppplStack_118 != ppppppplStack_50) {
    uStackX_20 = (longlong *******)
                 (CONCAT44(uStackX_20._4_4_,
                           CONCAT31((uint3)(*(uint *)((longlong)param_1 + 0x304) >> 9),
                                    (char)(*(uint *)((longlong)param_1 + 0x304) >> 1))) &
                 0xffffffffffffff01);
    do {
      pppppppuStack_a0 = (undefined8 *******)*ppppppplStack_118;
      uStack_f0 = pppppppuStack_a0[0x1d];
      ppppppuStack_58 = pppppppuStack_a0[0x1e];
      if (uStack_f0 != ppppppuStack_58) {
        do {
          pppppppcVar16 = (char *******)(uStack_f0 + 5);
          ppppppplStack_d0 = (longlong *******)0x0;
          ppppppplStack_c8 = (longlong *******)0xf;
          uStack_d8 = 0;
          pppppppcStack_e0 = (char *******)0x0;
          if (&pppppppcStack_e0 != (char ********)pppppppcVar16) {
            if ((undefined8 *****)0xf < uStack_f0[8]) {
              pppppppcVar16 = (char *******)*pppppppcVar16;
            }
                    /* WARNING: Subroutine does not return */
            FUN_14000f950(&pppppppcStack_e0,pppppppcVar16,uStack_f0[7]);
          }
          uVar23 = (ulonglong)uStack_e4;
          uVar10 = (uint)*(ushort *)((longlong)uStack_f0 + 0xe);
          if (0x1000 < *(ushort *)((longlong)uStack_f0 + 0xe)) {
            uVar10 = uStack_e8;
          }
          if (*(ushort *)(uStack_f0 + 2) < 0x1001) {
            uVar23 = (ulonglong)*(ushort *)(uStack_f0 + 2);
          }
          uVar19 = (uint)uVar23;
          if (*(ushort *)((longlong)uStack_f0 + 0x12) < 0x1001) {
            uVar11 = (uint)*(ushort *)((longlong)uStack_f0 + 0x12);
            if (uVar10 < uVar19) {
              if (uVar19 < uVar11) {
                uVar11 = uVar19;
              }
              uStack_b8 = (ulonglong)uVar11;
              uStack_a8 = (ulonglong)(((float)uVar10 / (float)uVar23) * (float)(int)uVar11);
            }
            else {
              if (uVar10 < uVar11) {
                uVar11 = uVar10;
              }
              uStack_a8 = (ulonglong)uVar11;
              uStack_b8 = (longlong)(((float)uVar23 / (float)uVar10) * (float)(int)uVar11);
            }
          }
          else {
            uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar10);
            uStack_b8 = uVar23;
          }
          if (((ulonglong)uStack_f0[9] & 1) == 0) {
            if ((char)uStackX_20 == '\0') {
              ppppppplStack_d0 = (longlong *******)0x1;
                    /* WARNING: Ignoring partial resolution of indirect */
              pppppppcStack_e0._0_2_ = 0x5f;
              if ((uint)uStack_a8 < 10) {
                pcVar28 = (char *)((longlong)&local_88 + 4);
                local_88._0_5_ = CONCAT14((char)uStack_a8 + '0',(undefined4)local_88);
              }
              else {
                uVar23 = uStack_a8 & 0xffffffff;
                pcVar28 = (char *)((longlong)&local_88 + 5);
                do {
                  pcVar22 = pcVar28;
                  pcVar28 = pcVar22 + -2;
                  uVar8 = uVar23 / 100;
                  uVar10 = (uint)uVar8;
                  *(undefined2 *)pcVar28 =
                       *(undefined2 *)
                        (&DAT_140474460 + (ulonglong)((int)uVar23 + uVar10 * -100) * 2);
                  uVar23 = uVar8;
                } while (9 < uVar10);
                if (uVar10 != 0) {
                  pcVar28 = pcVar22 + -3;
                  *pcVar28 = (char)uVar8 + '0';
                }
              }
              FUN_140053de0(appppppplStack_110,pcVar28,(longlong)&local_88 + 5);
              ppppppplVar24 = (longlong *******)appppppplStack_110;
              if (0xf < uStack_f8) {
                ppppppplVar24 = appppppplStack_110[0];
              }
              ppppppplStack_b0 = appppppplStack_110[0];
              uStack_c0 = ppppppplStack_d0;
              if (pppppppcStack_100 <=
                  (char *******)((longlong)ppppppplStack_c8 - (longlong)ppppppplStack_d0)) {
                uStackX_18 = (char *******)&pppppppcStack_e0;
                if ((longlong *******)0xf < ppppppplStack_c8) {
                  uStackX_18 = pppppppcStack_e0;
                }
                lVar20 = (longlong)ppppppplStack_d0 + (longlong)uStackX_18;
                ppppppplStack_d0 =
                     (longlong *******)((longlong)pppppppcStack_100 + (longlong)ppppppplStack_d0);
                    /* WARNING: Subroutine does not return */
                FUN_1404211c0(lVar20,ppppppplVar24,pppppppcStack_100);
              }
              FUN_1400531e0(&pppppppcStack_e0,pppppppcStack_100,(ulonglong)param_1 & 0xff,
                            ppppppplVar24,pppppppcStack_100);
              if (0xf < uStack_f8) {
                uVar23 = uStack_f8 + 1;
                ppppppplVar24 = appppppplStack_110[0];
                if (0xfff < uVar23) {
                  ppppppplVar24 = (longlong *******)appppppplStack_110[0][-1];
                  if (0x1f < (ulonglong)
                             ((longlong)appppppplStack_110[0] + (-8 - (longlong)ppppppplVar24)))
                  goto code_r0x0001401ebc7f;
                  uVar23 = uStack_f8 + 0x28;
                }
                func_0x00014028b040(ppppppplVar24,uVar23);
              }
              if (ppppppplStack_c8 == ppppppplStack_d0) {
                FUN_1400531e0(&pppppppcStack_e0,1,(ulonglong)param_1 & 0xff,&DAT_14048df10,1);
              }
              else {
                pppppppcVar17 = (char *******)&pppppppcStack_e0;
                if ((longlong *******)0xf < ppppppplStack_c8) {
                  pppppppcVar17 = pppppppcStack_e0;
                }
                puVar3 = (undefined2 *)((longlong)pppppppcVar17 + (longlong)ppppppplStack_d0);
                ppppppplStack_d0 = (longlong *******)((longlong)ppppppplStack_d0 + 1);
                *puVar3 = 0x5f;
              }
              if ((uint)uStack_b8 < 10) {
                pcVar28 = (char *)((longlong)&local_88 + 4);
                local_88._0_5_ = CONCAT14((char)uStack_b8 + '0',(undefined4)local_88);
              }
              else {
                uVar23 = uStack_b8 & 0xffffffff;
                pcVar28 = (char *)((longlong)&local_88 + 5);
                do {
                  pcVar22 = pcVar28;
                  pcVar28 = pcVar22 + -2;
                  uVar8 = uVar23 / 100;
                  uVar10 = (uint)uVar8;
                  *(undefined2 *)pcVar28 =
                       *(undefined2 *)
                        (&DAT_140474460 + (ulonglong)((int)uVar23 + uVar10 * -100) * 2);
                  uVar23 = uVar8;
                } while (9 < uVar10);
                if (uVar10 != 0) {
                  pcVar28 = pcVar22 + -3;
                  *pcVar28 = (char)uVar8 + '0';
                }
              }
              FUN_140053de0(appppppplStack_110,pcVar28,(longlong)&local_88 + 5);
              ppppppplVar24 = (longlong *******)appppppplStack_110;
              if (0xf < uStack_f8) {
                ppppppplVar24 = appppppplStack_110[0];
              }
              ppppppplStack_b0 = appppppplStack_110[0];
              uStack_c0 = ppppppplStack_d0;
              if (pppppppcStack_100 <=
                  (char *******)((longlong)ppppppplStack_c8 - (longlong)ppppppplStack_d0)) {
                uStackX_18 = (char *******)&pppppppcStack_e0;
                if ((longlong *******)0xf < ppppppplStack_c8) {
                  uStackX_18 = pppppppcStack_e0;
                }
                lVar20 = (longlong)ppppppplStack_d0 + (longlong)uStackX_18;
                ppppppplStack_d0 =
                     (longlong *******)((longlong)pppppppcStack_100 + (longlong)ppppppplStack_d0);
                    /* WARNING: Subroutine does not return */
                FUN_1404211c0(lVar20,ppppppplVar24,pppppppcStack_100);
              }
              FUN_1400531e0(&pppppppcStack_e0,pppppppcStack_100,(ulonglong)param_1 & 0xff,
                            ppppppplVar24,pppppppcStack_100);
              if (0xf < uStack_f8) {
                uVar23 = uStack_f8 + 1;
                ppppppplVar24 = appppppplStack_110[0];
                if (0xfff < uVar23) {
                  ppppppplVar24 = (longlong *******)appppppplStack_110[0][-1];
                  if (0x1f < (ulonglong)
                             ((longlong)appppppplStack_110[0] + (-8 - (longlong)ppppppplVar24)))
                  goto code_r0x0001401ebc7f;
                  uVar23 = uStack_f8 + 0x28;
                }
                func_0x00014028b040(ppppppplVar24,uVar23);
              }
              if (ppppppplStack_c8 == ppppppplStack_d0) {
                FUN_1400531e0(&pppppppcStack_e0,1,local_res8,&DAT_14048df10,1);
              }
              else {
                pppppppcVar17 = (char *******)&pppppppcStack_e0;
                if ((longlong *******)0xf < ppppppplStack_c8) {
                  pppppppcVar17 = pppppppcStack_e0;
                }
                puVar3 = (undefined2 *)((longlong)pppppppcVar17 + (longlong)ppppppplStack_d0);
                ppppppplStack_d0 = (longlong *******)((longlong)ppppppplStack_d0 + 1);
                *puVar3 = 0x5f;
              }
              lVar20 = (longlong)&local_88 + 5;
              uVar15 = FUN_140053d80(lVar20,*(undefined1 *)((longlong)uStack_f0 + 0xc));
              FUN_140053de0(appppppplStack_110,uVar15,lVar20);
              ppppppplVar24 = (longlong *******)appppppplStack_110;
              if (0xf < uStack_f8) {
                ppppppplVar24 = appppppplStack_110[0];
              }
              ppppppplStack_b0 = appppppplStack_110[0];
              uStack_c0 = ppppppplStack_d0;
              if (pppppppcStack_100 <=
                  (char *******)((longlong)ppppppplStack_c8 - (longlong)ppppppplStack_d0)) {
                uStackX_18 = (char *******)&pppppppcStack_e0;
                if ((longlong *******)0xf < ppppppplStack_c8) {
                  uStackX_18 = pppppppcStack_e0;
                }
                lVar20 = (longlong)ppppppplStack_d0 + (longlong)uStackX_18;
                ppppppplStack_d0 =
                     (longlong *******)((longlong)pppppppcStack_100 + (longlong)ppppppplStack_d0);
                    /* WARNING: Subroutine does not return */
                FUN_1404211c0(lVar20,ppppppplVar24,pppppppcStack_100);
              }
              goto code_r0x0001401eb9e9;
            }
          }
          else {
            ppppppplStack_d0 = (longlong *******)0x1;
                    /* WARNING: Ignoring partial resolution of indirect */
            pppppppcStack_e0._0_2_ = 0x5f;
            ppppppuVar25 = pppppppuStack_a0[1];
            if (ppppppuVar25 < (undefined8 ******)0xa) {
              pcVar28 = (char *)((longlong)&local_88 + 4);
              local_88._0_5_ = CONCAT14((char)ppppppuVar25 + '0',(undefined4)local_88);
            }
            else {
              pcVar28 = (char *)((longlong)&local_88 + 5);
              do {
                pcVar22 = pcVar28;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = ppppppuVar25;
                lVar20 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar7,8);
                pcVar28 = pcVar22 + -2;
                ppppppuVar26 = (undefined8 ******)
                               (((ulonglong)((longlong)ppppppuVar25 - lVar20) >> 1) + lVar20 >> 6);
                *(undefined2 *)pcVar28 =
                     *(undefined2 *)
                      (&DAT_140474460 +
                      ((longlong)ppppppuVar25 + (longlong)ppppppuVar26 * -100 & 0xffffffffU) * 2);
                ppppppuVar25 = ppppppuVar26;
              } while ((undefined8 ******)0x9 < ppppppuVar26);
              if (ppppppuVar26 != (undefined8 ******)0x0) {
                pcVar28 = pcVar22 + -3;
                *pcVar28 = (char)ppppppuVar26 + '0';
              }
            }
            FUN_140053de0(appppppplStack_110,pcVar28,(longlong)&local_88 + 5);
            ppppppplVar24 = (longlong *******)appppppplStack_110;
            if (0xf < uStack_f8) {
              ppppppplVar24 = appppppplStack_110[0];
            }
            uStack_c0 = appppppplStack_110[0];
            if (pppppppcStack_100 <=
                (char *******)((longlong)ppppppplStack_c8 - (longlong)ppppppplStack_d0)) {
              uStackX_18 = (char *******)&pppppppcStack_e0;
              if ((longlong *******)0xf < ppppppplStack_c8) {
                uStackX_18 = pppppppcStack_e0;
              }
              uStackX_18 = (char *******)((longlong)uStackX_18 + (longlong)ppppppplStack_d0);
              ppppppplStack_d0 =
                   (longlong *******)((longlong)ppppppplStack_d0 + (longlong)pppppppcStack_100);
                    /* WARNING: Subroutine does not return */
              FUN_1404211c0(uStackX_18,ppppppplVar24,pppppppcStack_100);
            }
code_r0x0001401eb9e9:
            pppppppcVar17 = pppppppcStack_100;
            FUN_1400531e0(&pppppppcStack_e0,pppppppcStack_100,local_res8,ppppppplVar24,
                          pppppppcStack_100);
            if (0xf < uStack_f8) {
              uVar23 = uStack_f8 + 1;
              ppppppplVar24 = appppppplStack_110[0];
              if (0xfff < uVar23) {
                ppppppplVar24 = (longlong *******)appppppplStack_110[0][-1];
                if (0x1f < (ulonglong)
                           ((longlong)appppppplStack_110[0] + (-8 - (longlong)ppppppplVar24)))
                goto code_r0x0001401ebc7f;
                uVar23 = uStack_f8 + 0x28;
              }
              func_0x00014028b040(ppppppplVar24,uVar23);
            }
          }
          if (*uStack_f0 == (undefined8 *****)0x0) {
            uVar12 = 0;
            if (((ulonglong)uStack_f0[9] & 4) == 0) {
              uVar12 = 2;
            }
            uStackX_18 = (char *******)
                         CONCAT71(uStackX_18._1_7_,*(undefined1 *)((longlong)uStack_f0 + 0xc));
            uStack_c0 = (longlong *******)CONCAT44(uStack_c0._4_4_,uVar12);
            uStack_78 = param_1[0x19] + 0x16c0;
            ppppppplStack_b0 =
                 (longlong *******)CONCAT44(ppppppplStack_b0._4_4_,*(undefined4 *)(uStack_f0 + 1));
            local_70 = (char *******)&pppppppcStack_e0;
            if ((longlong *******)0xf < ppppppplStack_c8) {
              local_70 = pppppppcStack_e0;
            }
            pppppuVar18 = (undefined8 *****)FUN_1401ab4e0(uStack_78,local_70);
            if (pppppuVar18 == (undefined8 *****)0x0) {
              pppppppcVar17 = local_70;
              pppppuVar18 = (undefined8 *****)
                            FUN_1401aae80(uStack_78,uStack_a8 & 0xffffffff,uStack_b8 & 0xffffffff,
                                          (ulonglong)uStackX_18 & 0xff,local_70,
                                          (ulonglong)ppppppplStack_b0 & 0xffffffff,0x1b,
                                          (undefined4)uStack_c0,1);
            }
            *uStack_f0 = pppppuVar18;
            *(int *)((longlong)pppppuVar18 + 0x2c) = *(int *)((longlong)pppppuVar18 + 0x2c) + 1;
          }
          else {
            FUN_140162010(*uStack_f0,uStack_a8 & 0xffffffff,uStack_b8 & 0xffffffff);
          }
          uVar12 = (undefined4)((ulonglong)pppppppcVar17 >> 0x20);
          if (((ulonglong)uStack_f0[9] & 2) != 0) {
            pppppuVar18 = *uStack_f0;
            ppppuVar5 = pppppuVar18[1];
            ppppuVar2 = ppppuVar5 + 10;
            *ppppuVar2 = *ppppuVar2 + 1;
            *ppppuVar5[10] = pppppuVar18;
            (*(code *)(*pppppuVar18)[9])();
            pppppppcVar17 = (char *******)CONCAT44(uVar12,*(undefined4 *)(uStack_f0 + 4));
            (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0x118))
                      (*(longlong **)(param_1[0x19] + 0x1518),uStack_f0,
                       *(undefined4 *)(uStack_f0 + 3),*(undefined4 *)((longlong)uStack_f0 + 0x1c),
                       pppppppcVar17);
            (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0x120))
                      (*(longlong **)(param_1[0x19] + 0x1518),1,0);
            pppppuVar18 = *uStack_f0;
            pppppuVar18[1][10] = pppppuVar18[1][10] + -1;
            if (*pppppuVar18[1][10] == (undefined8 **)0x0) {
              (*(code *)(*pppppuVar18)[10])(pppppuVar18);
            }
            else {
              (*(code *)(**pppppuVar18[1][10])[9])();
            }
          }
          if ((longlong *******)0xf < ppppppplStack_c8) {
            pppppppcVar16 = pppppppcStack_e0;
            if ((0xfff < (longlong)ppppppplStack_c8 + 1U) &&
               (pppppppcVar16 = (char *******)pppppppcStack_e0[-1],
               0x1f < (ulonglong)((longlong)pppppppcStack_e0 + (-8 - (longlong)pppppppcVar16))))
            goto code_r0x0001401ebc7f;
            func_0x00014028b040(pppppppcVar16);
          }
          uStack_f0 = uStack_f0 + 10;
        } while (uStack_f0 != ppppppuStack_58);
      }
      ppppppplStack_118 = ppppppplStack_118 + 1;
    } while (ppppppplStack_118 != ppppppplStack_50);
  }
  if (((*(uint *)((longlong)param_1 + 0x304) >> 8 & 1) != 0) &&
     (*(longlong *)(param_1[0x19] + 0x60) == 0)) {
    *(longlong *)(param_1[0x19] + 0x60) = param_1[0x59];
  }
  return;
}

