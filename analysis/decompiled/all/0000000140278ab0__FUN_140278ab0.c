// Function: FUN_140278ab0
// Addr: 140278ab0
// Size: 1791 bytes


void FUN_140278ab0(undefined8 param_1,undefined8 *param_2)

{
  short *psVar1;
  short *psVar2;
  code *pcVar3;
  undefined8 **ppuVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  short *psVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  short *psVar16;
  undefined8 **local_res18 [2];
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [24];
  undefined8 ***local_278;
  int local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined4 *local_258;
  undefined8 *local_250;
  undefined8 ***local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  ulonglong uStack_230;
  undefined8 ***local_228;
  undefined8 uStack_220;
  ulonglong local_218;
  ulonglong local_210;
  undefined8 ***local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  ulonglong uStack_1f0;
  undefined8 ***local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  ulonglong uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 ***local_1b0 [2];
  longlong local_1a0;
  ulonglong local_198;
  undefined4 local_188;
  undefined8 local_184;
  undefined8 uStack_17c;
  undefined8 local_174;
  undefined8 uStack_16c;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined4 local_124;
  undefined1 local_118 [16];
  undefined1 local_108 [32];
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_c8;
  longlong *local_c0;
  uint local_90;
  
  puVar14 = auStack_298;
  FUN_140005fb0(local_1b0);
  if (DAT_1404dfc70 == 0) {
LAB_140278b81:
    FUN_140005df0(local_1b0,"resourcecompiler64.exe");
    FUN_14000e050(local_118);
    ppppuVar10 = local_1b0;
    if (7 < local_198) {
      ppppuVar10 = (undefined8 ****)local_1b0[0];
    }
    psVar2 = (short *)((longlong)ppppuVar10 + local_1a0 * 2);
    psVar16 = psVar2;
    for (psVar8 = (short *)FUN_140015f60(ppppuVar10,psVar2); psVar8 != psVar2; psVar8 = psVar8 + 1)
    {
      if ((*psVar8 != 0x5c) && (*psVar8 != 0x2f)) goto LAB_140278be0;
    }
LAB_140278bfd:
    local_238 = 0;
    uStack_230 = 0;
    local_248 = (undefined8 ****)0x0;
    uStack_240 = 0;
    FUN_140016240(&local_248,psVar16,(longlong)psVar2 - (longlong)psVar16 >> 1);
    local_1f8 = local_238;
    uStack_1f0 = uStack_230;
    local_208 = local_248;
    uStack_200 = uStack_240;
    ppppuVar10 = &local_208;
    if (7 < uStack_230) {
      ppppuVar10 = (undefined8 ****)local_248;
    }
    uVar7 = FUN_140030170(local_108,ppppuVar10);
    uVar7 = FUN_14000d210(uVar7,&DAT_140473978);
    FUN_140030170(uVar7,param_1);
    if (7 < uStack_1f0) {
      uVar12 = uStack_1f0 * 2 + 2;
      ppppuVar10 = (undefined8 ****)local_208;
      if (uVar12 < 0x1000) {
LAB_140278cb7:
        func_0x00014028b040(ppppuVar10,uVar12);
        return;
      }
      ppppuVar10 = (undefined8 ****)local_208[-1];
      if ((ulonglong)((longlong)local_208 + (-8 - (longlong)ppppuVar10)) < 0x20) {
        uVar12 = uStack_1f0 * 2 + 0x29;
        goto LAB_140278cb7;
      }
      goto LAB_140279189;
    }
    local_1b8 = 0;
    local_124 = 0;
    local_218 = 0;
    local_188 = 0x68;
    local_238 = 0;
    uStack_230 = 7;
    uStack_240 = 0;
    local_248 = (undefined8 ****)0x0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_184 = 0;
    uStack_17c = 0;
    local_174 = 0;
    uStack_16c = 0;
    local_164 = 0;
    uStack_15c = 0;
    local_154 = 0;
    uStack_14c = 0;
    local_144 = 0;
    uStack_13c = 0;
    local_134 = 0;
    uStack_12c = 0;
    local_228 = (undefined8 ****)0x0;
    uStack_220 = 0;
    if ((((byte)local_90 & 0x22) == 2) || (*local_c0 == 0)) {
      if (((local_90 & 4) == 0) && (*local_c8 != 0)) {
        lVar11 = *local_e8;
        goto LAB_140278d75;
      }
    }
    else {
      lVar11 = *local_e0;
LAB_140278d75:
      if (lVar11 != 0) {
        FUN_140016bb0(&local_248);
      }
    }
    local_250 = &local_1c8;
    ppppuVar10 = &local_248;
    if (7 < uStack_230) {
      ppppuVar10 = (undefined8 ****)local_248;
    }
    local_258 = &local_188;
    ppppuVar9 = local_1b0;
    if (7 < local_198) {
      ppppuVar9 = (undefined8 ****)local_1b0[0];
    }
    local_260 = 0;
    local_268 = 0;
    local_270 = 0x8000020;
    local_278 = (undefined8 ***)((ulonglong)local_278 & 0xffffffff00000000);
    iVar5 = (*DAT_140426218)(ppppuVar9,ppppuVar10,0,0);
    if (7 < uStack_230) {
      uVar12 = uStack_230 * 2 + 2;
      ppppuVar10 = (undefined8 ****)local_248;
      if (uVar12 < 0x1000) {
LAB_140278e27:
        func_0x00014028b040(ppppuVar10,uVar12);
        return;
      }
      ppppuVar10 = (undefined8 ****)local_248[-1];
      if ((ulonglong)((longlong)local_248 + (-8 - (longlong)ppppuVar10)) < 0x20) {
        uVar12 = uStack_230 * 2 + 0x29;
        goto LAB_140278e27;
      }
      goto LAB_140279189;
    }
    if (iVar5 == 0) {
      uVar6 = (*DAT_1404266a8)();
      local_268 = 0;
      local_270 = 0;
      local_278 = local_res18;
      (*DAT_140426230)(0x1300,0,uVar6,0x400);
      ppuVar4 = local_res18[0];
      local_218 = 0;
      local_228 = (undefined8 ****)0x0;
      uStack_220 = 0;
      local_210 = 0;
      uVar7 = FUN_1402d6b70(local_res18[0]);
      FUN_140016240(&local_228,ppuVar4,uVar7);
      if (local_218 == 0) {
LAB_140278f3f:
        local_238 = 0;
        uStack_240 = 0;
        local_248 = (undefined8 ****)0x0;
        uStack_230 = 0xf;
      }
      else {
        local_260 = 0;
        ppppuVar10 = &local_228;
        if (7 < local_210) {
          ppppuVar10 = (undefined8 ****)local_228;
        }
        local_268 = 0;
        local_270 = 0;
        local_278 = (undefined8 ****)0x0;
        iVar5 = (*DAT_140426608)(0xfde9,0,ppppuVar10);
        if (iVar5 < 1) goto LAB_140278f3f;
        FUN_140016a10(&local_208,(longlong)iVar5,0);
        local_278 = &local_208;
        if (0xf < uStack_1f0) {
          local_278 = local_208;
        }
        local_260 = 0;
        ppppuVar10 = &local_228;
        if (7 < local_210) {
          ppppuVar10 = (undefined8 ****)local_228;
        }
        local_268 = 0;
        local_270 = iVar5;
        (*DAT_140426608)(0xfde9,0,ppppuVar10,local_218 & 0xffffffff);
        local_248 = local_208;
        uStack_240 = uStack_200;
        local_238 = local_1f8;
        uStack_230 = uStack_1f0;
      }
      if (7 < local_210) {
        uVar12 = local_210 * 2 + 2;
        ppppuVar10 = (undefined8 ****)local_228;
        if (uVar12 < 0x1000) {
LAB_140278f9a:
          func_0x00014028b040(ppppuVar10,uVar12);
          return;
        }
        ppppuVar10 = (undefined8 ****)local_228[-1];
        if ((ulonglong)((longlong)local_228 + (-8 - (longlong)ppppuVar10)) < 0x20) {
          uVar12 = local_210 * 2 + 0x29;
          goto LAB_140278f9a;
        }
        goto LAB_140279189;
      }
      local_218 = 0;
      local_210 = 0;
      local_228 = (undefined8 ****)0x0;
      uStack_220 = 0;
      uVar7 = FUN_1402d6b70(param_1);
      FUN_140016240(&local_228,param_1,uVar7);
      if (local_218 == 0) {
LAB_14027906f:
        local_1d8 = 0;
        uStack_1e0 = 0;
        local_1e8 = (undefined8 ****)0x0;
        uStack_1d0 = 0xf;
      }
      else {
        local_260 = 0;
        ppppuVar10 = &local_228;
        if (7 < local_210) {
          ppppuVar10 = (undefined8 ****)local_228;
        }
        local_268 = 0;
        local_270 = 0;
        local_278 = (undefined8 ****)0x0;
        iVar5 = (*DAT_140426608)(0xfde9,0,ppppuVar10);
        if (iVar5 < 1) goto LAB_14027906f;
        FUN_140016a10(&local_208,(longlong)iVar5,0);
        local_278 = &local_208;
        if (0xf < uStack_1f0) {
          local_278 = local_208;
        }
        local_260 = 0;
        ppppuVar10 = &local_228;
        if (7 < local_210) {
          ppppuVar10 = (undefined8 ****)local_228;
        }
        local_268 = 0;
        local_270 = iVar5;
        (*DAT_140426608)(0xfde9,0,ppppuVar10,local_218 & 0xffffffff);
        local_1e8 = local_208;
        uStack_1e0 = uStack_200;
        local_1d8 = local_1f8;
        uStack_1d0 = uStack_1f0;
      }
      if (local_210 < 8) {
        (*DAT_1404261d0)(local_res18[0]);
        ppppuVar10 = &local_1e8;
        if (0xf < uStack_1d0) {
          ppppuVar10 = (undefined8 ****)local_1e8;
        }
        ppppuVar9 = &local_248;
        if (0xf < uStack_230) {
          ppppuVar9 = (undefined8 ****)local_248;
        }
        FUN_140098830("CreateProcess for compiler failed: %s (%s)\n",ppppuVar9,ppppuVar10);
        if (uStack_1d0 < 0x10) {
          local_1d8 = 0;
          uStack_1d0 = 0xf;
          local_1e8 = (undefined8 ***)((ulonglong)local_1e8 & 0xffffffffffffff00);
          puVar15 = auStack_298;
          if (uStack_230 < 0x10) goto LAB_1402791f1;
          uVar12 = uStack_230 + 1;
          ppppuVar10 = (undefined8 ****)local_248;
          if (0xfff < uVar12) {
            ppppuVar10 = (undefined8 ****)local_248[-1];
            if (0x1f < (ulonglong)((longlong)local_248 + (-8 - (longlong)ppppuVar10)))
            goto LAB_140279189;
            uVar12 = uStack_230 + 0x28;
          }
          func_0x00014028b040(ppppuVar10,uVar12);
          puVar15 = auStack_298;
          goto LAB_1402791f1;
        }
        uVar12 = uStack_1d0 + 1;
        ppppuVar10 = (undefined8 ****)local_1e8;
        if (uVar12 < 0x1000) {
LAB_140279135:
          func_0x00014028b040(ppppuVar10,uVar12);
          return;
        }
        ppppuVar10 = (undefined8 ****)local_1e8[-1];
        if ((ulonglong)((longlong)local_1e8 + (-8 - (longlong)ppppuVar10)) < 0x20) {
          uVar12 = uStack_1d0 + 0x28;
          goto LAB_140279135;
        }
      }
      else {
        uVar12 = local_210 * 2 + 2;
        ppppuVar10 = (undefined8 ****)local_228;
        if (uVar12 < 0x1000) {
LAB_1402790c6:
          func_0x00014028b040(ppppuVar10,uVar12);
          return;
        }
        ppppuVar10 = (undefined8 ****)local_228[-1];
        if ((ulonglong)((longlong)local_228 + (-8 - (longlong)ppppuVar10)) < 0x20) {
          uVar12 = local_210 * 2 + 0x29;
          goto LAB_1402790c6;
        }
      }
      goto LAB_140279189;
    }
  }
  else {
    puVar13 = &DAT_1404dfc60;
    if (7 < DAT_1404dfc78) {
      puVar13 = DAT_1404dfc60;
    }
    uVar7 = FUN_1402d6b70(puVar13);
    local_238 = 0;
    uStack_230 = 0;
    local_248 = (undefined8 ****)0x0;
    uStack_240 = 0;
    FUN_140016240(&local_248,puVar13,uVar7);
    FUN_140015530(local_1b0,&local_248);
    if (uStack_230 < 8) goto LAB_140278b81;
    uVar12 = uStack_230 * 2 + 2;
    ppppuVar10 = (undefined8 ****)local_248;
    if (uVar12 < 0x1000) {
LAB_140278b7c:
      func_0x00014028b040(ppppuVar10,uVar12);
      return;
    }
    ppppuVar10 = (undefined8 ****)local_248[-1];
    if ((ulonglong)((longlong)local_248 + (-8 - (longlong)ppppuVar10)) < 0x20) {
      uVar12 = uStack_230 * 2 + 0x29;
      goto LAB_140278b7c;
    }
LAB_140279189:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar14 = auStack_290;
  }
  puVar15 = puVar14;
  if (param_2 == (undefined8 *)0x0) {
    *(undefined8 *)(puVar14 + -8) = 0x1402791ba;
    (*DAT_140426228)(local_1c8,0xffffffff);
    *(undefined8 *)(puVar14 + -8) = 0x1402791cb;
    (*DAT_1404262e0)(local_1c8,local_res18);
    *(undefined8 *)(puVar14 + -8) = 0x1402791d7;
    (*DAT_140426368)(local_1c8);
    *(undefined8 *)(puVar14 + -8) = 0x1402791e1;
    (*DAT_140426368)(uStack_1c0);
  }
  else {
    *param_2 = local_1c8;
    *(undefined8 *)(puVar14 + -8) = 0x1402791a6;
    (*DAT_140426368)(uStack_1c0);
  }
LAB_1402791f1:
  *(undefined **)(puVar15 + -8) = &UNK_1402791fd;
  func_0x000140005c20(local_118);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar15 + -8) = &UNK_140279206;
  FUN_140016840(local_1b0);
LAB_140278be0:
  psVar1 = psVar16 + -1;
  if (psVar16[-1] == 0x5c) goto LAB_140278bfd;
  if ((psVar16[-1] == 0x2f) || (psVar16 = psVar1, psVar8 == psVar1)) goto LAB_140278bfd;
  goto LAB_140278be0;
}

