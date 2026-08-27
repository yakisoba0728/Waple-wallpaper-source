// Function: FUN_14005c390
// Addr: 14005c390
// Size: 1848 bytes


/* WARNING: Type propagation algorithm not settling */

int FUN_14005c390(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined8 *******pppppppuVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  bool bVar15;
  longlong *local_res10 [2];
  undefined8 local_res20;
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [24];
  longlong local_1e8;
  char *local_1e0;
  char *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  longlong **local_1c0;
  longlong **local_1b8;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  undefined1 local_188;
  undefined7 uStack_187;
  undefined8 local_178;
  ulonglong local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined7 uStack_13f;
  longlong local_130;
  ulonglong local_128;
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined8 local_110;
  ulonglong local_108;
  undefined8 *******local_100 [2];
  undefined8 local_f0;
  ulonglong local_e8;
  undefined1 local_d8 [24];
  uint local_c0;
  uint local_bc;
  
  puVar13 = auStack_208;
  uVar14 = 0;
  local_1a0 = (longlong *)0x0;
  local_190 = (longlong *)0x0;
  local_198 = (longlong *)0x0;
  local_res10[0] = (longlong *)0x0;
  local_1a8 = (longlong *)0x0;
  local_res20 = param_4;
  uVar5 = FUN_140005ee0(&local_168);
  if (0x7fffffffffffffffU - *(longlong *)(param_2 + 0x10) < 5) goto LAB_14005cac3;
  local_1d8 = (char *)0x5;
  local_1e0 = ".vert";
  local_1e8 = *(longlong *)(param_2 + 0x10);
  FUN_14003a790(&local_188);
  puVar6 = (undefined8 *)FUN_140018c60(uVar5,&local_188);
  if (7 < (ulonglong)puVar6[3]) {
    puVar6 = (undefined8 *)*puVar6;
  }
  FUN_14003f7b0(local_100,puVar6);
  if (local_170 < 0x10) {
LAB_14005c48d:
    local_178 = 0;
    local_170 = 0xf;
    local_188 = 0;
    FUN_140016770(&local_168);
    uVar5 = FUN_140005ee0(&local_168);
    uVar7 = FUN_14003a8b0(&local_188,param_2,".geom");
    puVar6 = (undefined8 *)FUN_140018c60(uVar5,uVar7);
    if (7 < (ulonglong)puVar6[3]) {
      puVar6 = (undefined8 *)*puVar6;
    }
    FUN_14003f7b0(&local_140,puVar6);
    if (0xf < local_170) {
      lVar2 = CONCAT71(uStack_187,local_188);
      uVar11 = local_170 + 1;
      lVar9 = lVar2;
      if (0xfff < uVar11) {
        lVar9 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar9) - 8U) goto LAB_14005cabc;
        uVar11 = local_170 + 0x28;
      }
      thunk_FUN_14028af80(lVar9,uVar11);
    }
    local_178 = 0;
    local_170 = 0xf;
    local_188 = 0;
    FUN_140016770(&local_168);
    uVar5 = FUN_140005ee0(&local_168);
    uVar7 = FUN_14003a8b0(&local_188,param_2,".frag");
    puVar6 = (undefined8 *)FUN_140018c60(uVar5,uVar7);
    if (7 < (ulonglong)puVar6[3]) {
      puVar6 = (undefined8 *)*puVar6;
    }
    FUN_14003f7b0(&local_120,puVar6);
    if (0xf < local_170) {
      lVar2 = CONCAT71(uStack_187,local_188);
      uVar11 = local_170 + 1;
      lVar9 = lVar2;
      if (0xfff < uVar11) {
        lVar9 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar9) - 8U) goto LAB_14005cabc;
        uVar11 = local_170 + 0x28;
      }
      thunk_FUN_14028af80(lVar9,uVar11);
    }
    local_178 = 0;
    local_170 = 0xf;
    local_188 = 0;
    FUN_140016770(&local_168);
    bVar15 = local_130 != 0;
    local_1b8 = local_res10;
    local_1c0 = &local_1a0;
    pppppppuVar10 = local_100;
    if (0xf < local_e8) {
      pppppppuVar10 = local_100[0];
    }
    local_1c8 = 0;
    local_1d0 = 0x8800;
    local_1d8 = "vs_4_0";
    local_1e0 = "main";
    local_1e8 = 0;
    iVar3 = (**(code **)(param_1 + 0x68))(pppppppuVar10,local_f0,&DAT_140477bc0,param_4);
    if (iVar3 < 0) {
LAB_14005c934:
      if (local_res10[0] != (longlong *)0x0) {
        uVar5 = (**(code **)(*local_res10[0] + 0x18))();
        FUN_140098760("fade error:\n%s\n",uVar5);
        if (local_res10[0] != (longlong *)0x0) {
          (**(code **)(*local_res10[0] + 0x10))();
          local_res10[0] = (longlong *)0x0;
        }
      }
      if (-1 < iVar3) goto LAB_14005c973;
      if (local_1a0 != (longlong *)0x0) {
        (**(code **)(*local_1a0 + 0x10))();
        local_1a0 = (longlong *)0x0;
      }
      if (local_190 != (longlong *)0x0) {
        (**(code **)(*local_190 + 0x10))();
        local_190 = (longlong *)0x0;
      }
      if (local_198 != (longlong *)0x0) {
        (**(code **)(*local_198 + 0x10))();
        local_198 = (longlong *)0x0;
      }
    }
    else {
      if (local_res10[0] != (longlong *)0x0) {
        (**(code **)(*local_res10[0] + 0x10))();
        local_res10[0] = (longlong *)0x0;
      }
      local_1b8 = local_res10;
      puVar8 = &local_120;
      if (0xf < local_108) {
        puVar8 = (undefined1 *)CONCAT71(uStack_11f,local_120);
      }
      local_1c0 = &local_198;
      local_1c8 = 0;
      local_1d0 = 0x8800;
      local_1d8 = "ps_4_0";
      local_1e0 = "main";
      local_1e8 = 0;
      iVar3 = (**(code **)(param_1 + 0x68))(puVar8,local_110,&DAT_140477bd0,local_res20);
      if (iVar3 < 0) goto LAB_14005c934;
      if (local_res10[0] != (longlong *)0x0) {
        (**(code **)(*local_res10[0] + 0x10))();
        local_res10[0] = (longlong *)0x0;
      }
      pcVar1 = *(code **)(param_1 + 0x70);
      uVar5 = (**(code **)(*local_1a0 + 0x20))();
      uVar7 = (**(code **)(*local_1a0 + 0x18))();
      iVar4 = (*pcVar1)(uVar7,uVar5,&DAT_14042c2a0,&local_1a8);
      if (-1 < iVar4) {
        FUN_1404217a0(local_d8,0,0xa0);
        (**(code **)(*local_1a8 + 0x18))(local_1a8,local_d8);
        uVar12 = 0;
        if (local_bc != 0) {
          do {
            local_168 = 0;
            uStack_160 = 0;
            local_148 = 0;
            local_158 = 0;
            uStack_150 = 0;
            (**(code **)(*local_1a8 + 0x38))(local_1a8,uVar12,&local_168);
            iVar4 = FUN_1402c10d0(local_168,"TEXCOORD");
            if ((iVar4 == 0) && ((int)uStack_160 == 1)) {
              uVar14 = 2;
              bVar15 = false;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < local_bc);
        }
        if (local_1a8 != (longlong *)0x0) {
          (**(code **)(*local_1a8 + 0x10))();
          local_1a8 = (longlong *)0x0;
        }
      }
      pcVar1 = *(code **)(param_1 + 0x70);
      uVar5 = (**(code **)(*local_198 + 0x20))();
      uVar7 = (**(code **)(*local_198 + 0x18))();
      iVar4 = (*pcVar1)(uVar7,uVar5,&DAT_14042c2a0,&local_1a8);
      if (-1 < iVar4) {
        FUN_1404217a0(local_d8,0,0xa0);
        (**(code **)(*local_1a8 + 0x18))(local_1a8,local_d8);
        uVar12 = 0;
        if (local_c0 != 0) {
          do {
            local_168 = 0;
            uStack_160 = 0;
            local_148 = 0;
            local_158 = 0;
            uStack_150 = 0;
            (**(code **)(*local_1a8 + 0x30))(local_1a8,uVar12,&local_168);
            iVar4 = FUN_1402c10d0(local_168,"g_Texture0MipMapped");
            if (iVar4 == 0) {
              uVar14 = uVar14 | 1;
            }
            else {
              iVar4 = FUN_1402c10d0(local_168,"g_Texture1Noise");
              if ((iVar4 == 0) || (iVar4 = FUN_1402c10d0(local_168,"g_Texture2Clouds"), iVar4 == 0))
              {
                uVar14 = uVar14 | 4;
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < local_c0);
        }
        if (local_1a8 != (longlong *)0x0) {
          (**(code **)(*local_1a8 + 0x10))();
          local_1a8 = (longlong *)0x0;
        }
      }
      if (!bVar15) goto LAB_14005c934;
      local_1b8 = local_res10;
      puVar8 = &local_140;
      if (0xf < local_128) {
        puVar8 = (undefined1 *)CONCAT71(uStack_13f,local_140);
      }
      local_1c0 = &local_190;
      local_1c8 = 0;
      local_1d0 = 0x8800;
      local_1d8 = "gs_4_0";
      local_1e0 = "main";
      local_1e8 = 0;
      iVar3 = (**(code **)(param_1 + 0x68))(puVar8,local_130,&DAT_140477c2c,local_res20);
      if (iVar3 < 0) goto LAB_14005c934;
      if (local_res10[0] != (longlong *)0x0) {
        (**(code **)(*local_res10[0] + 0x10))();
        local_res10[0] = (longlong *)0x0;
      }
LAB_14005c973:
      *param_3 = local_1a0;
      param_3[1] = local_190;
      param_3[2] = local_198;
      *(uint *)(param_3 + 3) = uVar14;
    }
    if (0xf < local_108) {
      lVar2 = CONCAT71(uStack_11f,local_120);
      uVar11 = local_108 + 1;
      lVar9 = lVar2;
      if (0xfff < uVar11) {
        lVar9 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar9) - 8U) goto LAB_14005cabc;
        uVar11 = local_108 + 0x28;
      }
      thunk_FUN_14028af80(lVar9,uVar11);
    }
    local_110 = 0;
    local_108 = 0xf;
    local_120 = 0;
    if (0xf < local_128) {
      lVar2 = CONCAT71(uStack_13f,local_140);
      uVar11 = local_128 + 1;
      lVar9 = lVar2;
      if (0xfff < uVar11) {
        lVar9 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar9) - 8U) goto LAB_14005cabc;
        uVar11 = local_128 + 0x28;
      }
      thunk_FUN_14028af80(lVar9,uVar11);
    }
    local_130 = 0;
    local_128 = 0xf;
    local_140 = 0;
    if (local_e8 < 0x10) {
      return iVar3;
    }
    uVar11 = local_e8 + 1;
    pppppppuVar10 = local_100[0];
    if (uVar11 < 0x1000) {
LAB_14005caa2:
      thunk_FUN_14028af80(pppppppuVar10,uVar11);
      return iVar3;
    }
    pppppppuVar10 = (undefined8 *******)local_100[0][-1];
    if ((ulonglong)((longlong)local_100[0] + (-8 - (longlong)pppppppuVar10)) < 0x20) {
      uVar11 = local_e8 + 0x28;
      goto LAB_14005caa2;
    }
  }
  else {
    lVar2 = CONCAT71(uStack_187,local_188);
    uVar11 = local_170 + 1;
    lVar9 = lVar2;
    if (uVar11 < 0x1000) {
LAB_14005c488:
      thunk_FUN_14028af80(lVar9,uVar11);
      goto LAB_14005c48d;
    }
    lVar9 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar9) - 8U < 0x20) {
      uVar11 = local_170 + 0x28;
      goto LAB_14005c488;
    }
  }
LAB_14005cabc:
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  puVar13 = auStack_200;
LAB_14005cac3:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar13 + -8) = &UNK_14005cac8;
  FUN_1400172e0();
}

