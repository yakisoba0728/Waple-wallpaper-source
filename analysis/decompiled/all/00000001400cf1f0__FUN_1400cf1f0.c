// Function: FUN_1400cf1f0
// Addr: 1400cf1f0
// Size: 1936 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400cf1f0(longlong param_1,undefined8 *param_2,uint *param_3,uint *param_4,
                       undefined4 *param_5,undefined4 *param_6,longlong *param_7,longlong *param_8,
                       longlong *param_9)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  undefined8 ******ppppppuVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *******pppppppuVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  short *psVar23;
  int iVar24;
  short *psVar25;
  bool bVar26;
  byte bVar27;
  float fVar28;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [24];
  longlong *local_138;
  int local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong *local_f8;
  uint local_f0 [2];
  undefined8 local_e8;
  undefined8 ******local_e0;
  undefined8 uStack_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98 [2];
  undefined8 ******local_90;
  undefined8 uStack_88;
  longlong local_80;
  ulonglong uStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  undefined8 local_60 [5];
  
  local_60[1] = _UNK_140492c08;
  local_60[0] = _DAT_140492c00;
  local_60[3] = _UNK_140492b28;
  local_60[2] = _DAT_140492b20;
  puVar22 = auStack_158;
  puVar20 = auStack_158;
  puVar21 = auStack_158;
  *param_4 = 0;
  local_100 = 0;
  local_110 = 0;
  if (*param_7 == 0) {
    local_138 = param_7;
    iVar10 = (*DAT_140426b78)(&DAT_140482b98,0,0x17,&DAT_140482ba8);
    if (iVar10 < 0) goto UNWIND_INFO_1400cf969_UnwindCodes_37__UnwindOpCode;
  }
  bVar27 = true;
  local_118 = 1;
  puVar22 = auStack_158;
  if (param_2[2] != 0) {
    puVar15 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar15 = (undefined8 *)*param_2;
    }
    if ((param_2[2] != 7) ||
       (iVar10 = func_0x0001404210c0(puVar15,"default"), puVar22 = auStack_158, iVar10 != 0)) {
      uVar19 = 0;
      local_f8 = (longlong *)0x0;
      local_108 = (longlong *)0x0;
      local_e8 = 0;
      local_98[0] = 0;
      local_68 = (longlong *)*param_7;
      local_98[1] = 1;
      while( true ) {
        uVar12 = 0;
        iVar10 = local_98[(int)uVar19];
        iVar11 = (**(code **)(*local_68 + 0x18))(local_68,iVar10,1,&local_f8);
        if ((iVar11 < 0) ||
           (iVar11 = (**(code **)(*local_f8 + 0x18))(local_f8,local_f0), iVar11 < 0)) break;
        if (local_f0[0] != 0) {
          do {
            iVar11 = (**(code **)(*local_f8 + 0x20))(local_f8,uVar12,&local_108);
            if ((iVar11 < 0) ||
               (iVar11 = (**(code **)(*local_108 + 0x28))(local_108,&local_e8), uVar5 = local_e8,
               iVar11 < 0)) goto LAB_1400cf5b7;
            local_d0 = 0;
            local_e0 = (undefined8 *******)0x0;
            uStack_d8 = 0;
            local_c8 = 0;
            uVar13 = FUN_1402d6b70(local_e8);
            FUN_140016240(&local_e0,uVar5,uVar13);
            if (local_d0 == 0) {
LAB_1400cf45a:
              local_80 = 0;
              uStack_88 = 0;
              uStack_78 = 0xf;
              local_90 = (undefined8 *******)0x0;
            }
            else {
              local_120 = 0;
              pppppppuVar16 = &local_e0;
              if (7 < local_c8) {
                pppppppuVar16 = (undefined8 *******)local_e0;
              }
              local_128 = 0;
              local_130 = 0;
              local_138 = (longlong *)0x0;
              iVar11 = (*DAT_140426608)(0xfde9,0,pppppppuVar16);
              if (iVar11 < 1) goto LAB_1400cf45a;
              FUN_140016a10(&local_c0,(longlong)iVar11,0);
              local_138 = &local_c0;
              if (0xf < CONCAT44(uStack_a4,uStack_a8)) {
                local_138 = (longlong *)CONCAT44(local_c0._4_4_,(undefined4)local_c0);
              }
              local_120 = 0;
              pppppppuVar16 = &local_e0;
              if (7 < local_c8) {
                pppppppuVar16 = (undefined8 *******)local_e0;
              }
              local_128 = 0;
              local_130 = iVar11;
              (*DAT_140426608)(0xfde9,0,pppppppuVar16,local_d0 & 0xffffffff);
              local_80 = CONCAT44(uStack_ac,local_b0);
              uStack_78 = CONCAT44(uStack_a4,uStack_a8);
              local_90 = (undefined8 ******)CONCAT44(local_c0._4_4_,(undefined4)local_c0);
              uStack_88 = CONCAT44(uStack_b4,uStack_b8);
            }
            uVar14 = uStack_78;
            ppppppuVar9 = local_90;
            puVar15 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              puVar15 = (undefined8 *)*param_2;
            }
            pppppppuVar16 = &local_90;
            if (0xf < uStack_78) {
              pppppppuVar16 = (undefined8 *******)local_90;
            }
            if (local_80 == param_2[2]) {
              if (local_80 == 0) {
                bVar26 = true;
              }
              else {
                iVar11 = func_0x0001404210c0(pppppppuVar16,puVar15);
                bVar26 = iVar11 == 0;
              }
            }
            else {
              bVar26 = false;
            }
            if (0xf < uVar14) {
              uVar17 = uVar14 + 1;
              pppppppuVar16 = (undefined8 *******)ppppppuVar9;
              if (uVar17 < 0x1000) {
LAB_1400cf4e3:
                uVar14 = func_0x00014028b040(pppppppuVar16,uVar17);
                return uVar14;
              }
              pppppppuVar16 = (undefined8 *******)ppppppuVar9[-1];
              if ((ulonglong)((longlong)ppppppuVar9 + (-8 - (longlong)pppppppuVar16)) < 0x20) {
                uVar17 = uVar14 + 0x28;
                goto LAB_1400cf4e3;
              }
LAB_1400cf5a2:
              pcVar6 = (code *)swi(0x29);
              (*pcVar6)(5);
              puVar20 = auStack_150;
LAB_1400cf5a9:
              bVar27 = iVar10 == 0;
              puVar21 = puVar20;
              goto LAB_1400cf5ca;
            }
            if (7 < local_c8) {
              uVar14 = local_c8 * 2 + 2;
              pppppppuVar16 = (undefined8 *******)local_e0;
              if (uVar14 < 0x1000) {
LAB_1400cf52b:
                uVar14 = func_0x00014028b040(pppppppuVar16,uVar14);
                return uVar14;
              }
              pppppppuVar16 = (undefined8 *******)local_e0[-1];
              if ((ulonglong)((longlong)local_e0 + (-8 - (longlong)pppppppuVar16)) < 0x20) {
                uVar14 = local_c8 * 2 + 0x29;
                goto LAB_1400cf52b;
              }
              goto LAB_1400cf5a2;
            }
            if (bVar26) goto LAB_1400cf5a9;
            (*DAT_140426b80)(local_e8);
            local_e8 = 0;
            if (local_108 != (longlong *)0x0) {
              (**(code **)(*local_108 + 0x10))();
              local_108 = (longlong *)0x0;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < local_f0[0]);
        }
        if (local_f8 != (longlong *)0x0) {
          (**(code **)(*local_f8 + 0x10))(local_f8);
          local_f8 = (longlong *)0x0;
        }
        uVar19 = uVar19 + 1;
        if (1 < uVar19) break;
      }
LAB_1400cf5b7:
      if (local_108 != (longlong *)0x0) {
        (**(code **)(*local_108 + 0x10))();
        local_108 = (longlong *)0x0;
      }
      bVar27 = true;
LAB_1400cf5ca:
      puVar21[0x40] = bVar27;
      *(undefined8 *)(puVar21 + -8) = 0x1400cf5da;
      (*DAT_140426b80)(*(undefined8 *)(puVar21 + 0x70));
      if (*(longlong **)(puVar21 + 0x60) != (longlong *)0x0) {
        pcVar6 = *(code **)(**(longlong **)(puVar21 + 0x60) + 0x10);
        *(undefined8 *)(puVar21 + -8) = 0x1400cf5ea;
        (*pcVar6)();
      }
      *(undefined8 *)(puVar21 + 0x58) = *(undefined8 *)(puVar21 + 0x50);
      puVar22 = puVar21;
    }
  }
  uVar19 = 0;
  if (*(longlong *)(puVar22 + 0x58) == 0) {
    plVar4 = (longlong *)*param_7;
    pcVar6 = *(code **)(*plVar4 + 0x20);
    *(undefined8 *)(puVar22 + -8) = 0x1400cf621;
    iVar10 = (*pcVar6)(plVar4,0,0,puVar22 + 0x58);
    if ((iVar10 < 0) || (*(longlong *)(puVar22 + 0x58) == 0))
    goto UNWIND_INFO_1400cf969_UnwindCodes_37__UnwindOpCode;
  }
  *(longlong **)(puVar22 + 0x20) = param_8;
  pcVar6 = *(code **)(**(longlong **)(puVar22 + 0x58) + 0x18);
  *(undefined8 *)(puVar22 + -8) = 0x1400cf65c;
  uVar14 = (*pcVar6)(*(longlong **)(puVar22 + 0x58),&DAT_140482b78,0x17,0);
  if (-1 < (int)uVar14) {
    plVar4 = (longlong *)*param_8;
    if (plVar4 == (longlong *)0x0) {
      return uVar14 & 0xffffffffffffff00;
    }
    pcVar6 = *(code **)(*plVar4 + 0x40);
    *(undefined8 *)(puVar22 + -8) = 0x1400cf67e;
    iVar10 = (*pcVar6)(plVar4,puVar22 + 0x48);
    if (-1 < iVar10) {
      lVar18 = *(longlong *)(puVar22 + 0x48);
      if (*(short *)(lVar18 + 0xe) != 0x20) {
        *(undefined8 *)(puVar22 + -8) = 0x1400cf69e;
        func_0x000140098790("WASAPI processor requires 32 bit per sample.");
        lVar18 = *(longlong *)(puVar22 + 0x48);
      }
      fVar7 = DAT_1404927d4;
      *param_3 = (uint)*(ushort *)(lVar18 + 2);
      fVar8 = DAT_1404929b4;
      fVar28 = (float)*(uint *)(lVar18 + 4) / _DAT_140492a34;
      if (fVar28 <= fVar7) {
        fVar28 = fVar7;
      }
      *param_5 = (int)(longlong)(fVar28 * DAT_1404929b4 * *(float *)(param_1 + 8));
      *param_6 = (int)(longlong)(*(float *)(param_1 + 0xc) * fVar8);
      if ((uint)*(ushort *)(lVar18 + 0xc) != (uint)*(ushort *)(lVar18 + 2) << 2) {
        uVar12 = *param_3;
        *(undefined8 *)(puVar22 + -8) = 0x1400cf727;
        func_0x000140098790("WASAPI unexpected block align: %i * %i != %i.",4,uVar12);
        lVar18 = *(longlong *)(puVar22 + 0x48);
      }
      while( true ) {
        plVar4 = (longlong *)*param_8;
        *(undefined8 *)(puVar22 + 0x30) = 0;
        *(longlong *)(puVar22 + 0x28) = lVar18;
        lVar18 = *plVar4;
        *(undefined8 *)(puVar22 + 0x20) = 0;
        uVar5 = local_60[(int)uVar19];
        pcVar6 = *(code **)(lVar18 + 0x18);
        *(undefined8 *)(puVar22 + -8) = 0x1400cf765;
        iVar10 = (*pcVar6)(plVar4,0,(ulonglong)bVar27 << 0x11,uVar5);
        if (-1 < iVar10) break;
        uVar19 = uVar19 + 1;
        if (3 < uVar19) {
          bVar26 = false;
          DAT_1404e9038 = DAT_1404e9038 + 1;
          if (DAT_1404e9038 < 10) {
            lVar18 = *(longlong *)(puVar22 + 0x48);
            uVar1 = *(undefined2 *)(lVar18 + 0xc);
            uVar2 = *(undefined2 *)(lVar18 + 2);
            uVar3 = *(undefined4 *)(lVar18 + 4);
            *(undefined8 *)(puVar22 + -8) = 0x1400cf7b9;
            FUN_140098830("Failed default format: channels %i, align %i, rate %i\n",uVar2,uVar1,
                          uVar3);
          }
          if ((bool)bVar27 == false) goto UNWIND_INFO_1400cf969_UnwindCodes_37__UnwindOpCode;
          psVar25 = (short *)0x0;
          iVar11 = 0;
          local_c0._0_4_ = 3;
          local_c0._4_4_ = 4;
          psVar23 = psVar25;
          if (**(short **)(puVar22 + 0x48) == -2) {
            psVar23 = *(short **)(puVar22 + 0x48);
          }
          uStack_b8 = 7;
          uStack_b4 = 0x33;
          local_b0 = 0x107;
          uStack_ac = 0x607;
          uStack_a8 = 0x3f;
          uStack_a4 = 0x60f;
          local_a0 = 0xff;
          local_9c = 0x63f;
          local_70 = 8;
          local_6c = 8;
          local_90 = _DAT_140492d00;
          uStack_88 = _UNK_140492d08;
          local_80 = _DAT_140492d10;
          uStack_78 = _UNK_140492d18;
          if (psVar23 == (short *)0x0) {
            psVar25 = (short *)0x0;
          }
          else {
            iVar11 = *(int *)(psVar23 + 0xb);
          }
          goto LAB_1400cf863;
        }
        lVar18 = *(longlong *)(puVar22 + 0x48);
      }
      goto UNWIND_INFO_1400cf969_UnwindCodes_2__UnwindOpCode;
    }
  }
  goto UNWIND_INFO_1400cf969_UnwindCodes_37__UnwindOpCode;
LAB_1400cf863:
  do {
    uVar19 = 0;
    if (bVar26) break;
    iVar24 = (int)psVar25;
    uVar12 = *(uint *)((longlong)&local_90 + (longlong)iVar24 * 4);
    *param_3 = uVar12;
    *(short *)(*(longlong *)(puVar22 + 0x48) + 2) = (short)uVar12;
    iVar10 = (uint)*(ushort *)(*(longlong *)(puVar22 + 0x48) + 0xe) * (uVar12 & 0xffff);
    uVar12 = (int)(iVar10 + (iVar10 >> 0x1f & 7U)) >> 3;
    *(short *)(*(longlong *)(puVar22 + 0x48) + 0xc) = (short)uVar12;
    *(uint *)(*(longlong *)(puVar22 + 0x48) + 8) =
         (uVar12 & 0xffff) * *(int *)(*(longlong *)(puVar22 + 0x48) + 4);
    if (psVar23 != (short *)0x0) {
      *(undefined4 *)(psVar23 + 0xb) = *(undefined4 *)((longlong)&local_c0 + (longlong)iVar24 * 4);
    }
    do {
      *(undefined8 *)(puVar22 + 0x30) = 0;
      plVar4 = (longlong *)*param_8;
      lVar18 = *plVar4;
      uVar5 = local_60[(int)uVar19];
      *(undefined8 *)(puVar22 + 0x28) = *(undefined8 *)(puVar22 + 0x48);
      *(undefined8 *)(puVar22 + 0x20) = 0;
      pcVar6 = *(code **)(lVar18 + 0x18);
      *(undefined8 *)(puVar22 + -8) = 0x1400cf8fe;
      iVar10 = (*pcVar6)(plVar4,0,0x20000,uVar5);
      if (-1 < iVar10) {
LAB_1400cf955:
        bVar26 = true;
        break;
      }
      if (iVar11 != 0) {
        *(undefined8 *)(puVar22 + 0x30) = 0;
        *(int *)(*(longlong *)(puVar22 + 0x48) + 0x16) = iVar11;
        plVar4 = (longlong *)*param_8;
        *(undefined8 *)(puVar22 + 0x28) = *(undefined8 *)(puVar22 + 0x48);
        *(undefined8 *)(puVar22 + 0x20) = 0;
        pcVar6 = *(code **)(*plVar4 + 0x18);
        *(undefined8 *)(puVar22 + -8) = 0x1400cf942;
        iVar10 = (*pcVar6)(plVar4,0,0x20000,uVar5);
        if (-1 < iVar10) goto LAB_1400cf955;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < 4);
    psVar25 = (short *)(ulonglong)(iVar24 + 1U);
  } while (iVar24 + 1U < 10);
  if (-1 < iVar10) {
    bVar27 = puVar22[0x40];
UNWIND_INFO_1400cf969_UnwindCodes_2__UnwindOpCode:
    plVar4 = (longlong *)*param_8;
    pcVar6 = *(code **)(*plVar4 + 0x70);
    *(undefined8 *)(puVar22 + -8) = 0x1400cf990;
    iVar10 = (*pcVar6)(plVar4,&UNK_140482b88,param_9);
    if (-1 < iVar10) {
      pcVar6 = *(code **)(*(longlong *)*param_8 + 0x50);
      *(undefined8 *)(puVar22 + -8) = 0x1400cf99d;
      iVar10 = (*pcVar6)();
      if (-1 < iVar10) {
        uVar14 = 1;
        if (bVar27 == 0) {
          *param_4 = *param_4 | 1;
        }
        goto code_r0x0001400cf9fb;
      }
    }
  }
UNWIND_INFO_1400cf969_UnwindCodes_37__UnwindOpCode:
  uVar14 = 0;
  if ((longlong *)*param_9 != (longlong *)0x0) {
    pcVar6 = *(code **)(*(longlong *)*param_9 + 0x10);
    *(undefined8 *)(puVar22 + -8) = 0x1400cf9cf;
    (*pcVar6)();
    *param_9 = 0;
  }
  if ((longlong *)*param_8 != (longlong *)0x0) {
    pcVar6 = *(code **)(*(longlong *)*param_8 + 0x10);
    *(undefined8 *)(puVar22 + -8) = 0x1400cf9e0;
    (*pcVar6)();
    *param_8 = 0;
  }
  if ((longlong *)*param_7 != (longlong *)0x0) {
    pcVar6 = *(code **)(*(longlong *)*param_7 + 0x10);
    *(undefined8 *)(puVar22 + -8) = 0x1400cf9f8;
    (*pcVar6)();
    *param_7 = 0;
  }
code_r0x0001400cf9fb:
  if (*(longlong **)(puVar22 + 0x58) != (longlong *)0x0) {
    pcVar6 = *(code **)(**(longlong **)(puVar22 + 0x58) + 0x10);
    *(undefined **)(puVar22 + -8) = &UNK_1400cfa0b;
    (*pcVar6)();
    *(undefined8 *)(puVar22 + 0x58) = 0;
  }
  *(undefined **)(puVar22 + -8) = &UNK_1400cfa1b;
  (*DAT_140426b80)(*(undefined8 *)(puVar22 + 0x48));
  return uVar14;
}

