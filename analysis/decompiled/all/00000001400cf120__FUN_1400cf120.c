// Function: FUN_1400cf120
// Addr: 1400cf120
// Size: 2118 bytes


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400cf120(longlong param_1,undefined8 *param_2,uint *param_3,uint *param_4,
                       undefined4 *param_5,undefined4 *param_6,LPVOID *param_7,longlong *param_8,
                       longlong *param_9)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  LPVOID pvVar8;
  undefined8 *******pppppppuVar9;
  HRESULT HVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  int *lpMultiByteStr;
  undefined8 *******pppppppuVar16;
  LPCWSTR ******pppppppWVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  uint uVar22;
  short *psVar23;
  uint uVar24;
  int iVar25;
  short *psVar26;
  bool bVar27;
  byte bVar28;
  float fVar29;
  undefined1 auStackY_158 [8];
  undefined1 auStackY_150 [24];
  longlong *local_108;
  undefined8 local_100;
  longlong *local_f8;
  uint local_f0 [2];
  LPVOID local_e8;
  LPCWSTR ******local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  ulonglong local_c8;
  int local_c0 [12];
  undefined8 *******local_90;
  undefined8 uStack_88;
  size_t local_80;
  ulonglong uStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  undefined8 local_60 [5];
  
  local_60[1] = _UNK_140492b38;
  local_60[0] = _DAT_140492b30;
  local_60[3] = _UNK_140492a58;
  local_60[2] = _DAT_140492a50;
  puVar21 = auStackY_158;
  puVar20 = auStackY_158;
  *param_4 = 0;
  local_100 = 0;
  if ((*param_7 != (LPVOID)0x0) ||
     (HVar10 = CoCreateInstance((IID *)&DAT_140482ac8,(LPUNKNOWN)0x0,0x17,(IID *)&DAT_140482ad8,
                                param_7), -1 < HVar10)) {
    bVar28 = true;
    puVar21 = auStackY_158;
    if (param_2[2] != 0) {
      puVar15 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar15 = (undefined8 *)*param_2;
      }
      if ((param_2[2] != 7) ||
         (iVar11 = memcmp(puVar15,"default",7), puVar21 = auStackY_158, iVar11 != 0)) {
        uVar22 = 0;
        local_f8 = (longlong *)0x0;
        local_108 = (longlong *)0x0;
        local_e8 = (LPVOID)0x0;
        local_c0[10] = 0;
        local_68 = *param_7;
        local_c0[0xb] = 1;
        while( true ) {
          uVar24 = 0;
          iVar11 = local_c0[(longlong)(int)uVar22 + 10];
          iVar12 = (**(code **)(*local_68 + 0x18))(local_68,iVar11,1,&local_f8);
          if ((iVar12 < 0) ||
             (iVar12 = (**(code **)(*local_f8 + 0x18))(local_f8,local_f0), iVar12 < 0)) break;
          if (local_f0[0] != 0) {
            do {
              iVar12 = (**(code **)(*local_f8 + 0x20))(local_f8,uVar24,&local_108);
              if ((iVar12 < 0) ||
                 (iVar12 = (**(code **)(*local_108 + 0x28))(local_108,&local_e8), pvVar8 = local_e8,
                 iVar12 < 0)) goto LAB_1400cf4e7;
              local_d0 = 0;
              local_e0 = (LPCWSTR ******)0x0;
              uStack_d8 = 0;
              local_c8 = 0;
              uVar13 = FUN_1402d6aa0(local_e8);
              FUN_140016170(&local_e0,pvVar8,uVar13);
              if (local_d0 == 0) {
LAB_1400cf38a:
                local_80 = 0;
                uStack_88 = 0;
                uStack_78 = 0xf;
                local_90 = (undefined8 *******)0x0;
              }
              else {
                pppppppWVar17 = (LPCWSTR ******)&local_e0;
                if (7 < local_c8) {
                  pppppppWVar17 = local_e0;
                }
                iVar12 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar17,(int)local_d0,
                                             (LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
                if (iVar12 < 1) goto LAB_1400cf38a;
                FUN_140016940(local_c0,(longlong)iVar12,0);
                lpMultiByteStr = local_c0;
                if (0xf < CONCAT44(local_c0[7],local_c0[6])) {
                  lpMultiByteStr = (int *)CONCAT44(local_c0[1],local_c0[0]);
                }
                pppppppWVar17 = (LPCWSTR ******)&local_e0;
                if (7 < local_c8) {
                  pppppppWVar17 = local_e0;
                }
                WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar17,(int)local_d0,
                                    (LPSTR)lpMultiByteStr,iVar12,(LPCSTR)0x0,(LPBOOL)0x0);
                local_80 = CONCAT44(local_c0[5],local_c0[4]);
                uStack_78 = CONCAT44(local_c0[7],local_c0[6]);
                local_90 = (undefined8 *******)CONCAT44(local_c0[1],local_c0[0]);
                uStack_88 = CONCAT44(local_c0[3],local_c0[2]);
              }
              uVar14 = uStack_78;
              pppppppuVar9 = local_90;
              puVar15 = param_2;
              if (0xf < (ulonglong)param_2[3]) {
                puVar15 = (undefined8 *)*param_2;
              }
              pppppppuVar16 = &local_90;
              if (0xf < uStack_78) {
                pppppppuVar16 = local_90;
              }
              if (local_80 == param_2[2]) {
                if (local_80 == 0) {
                  bVar27 = true;
                }
                else {
                  iVar12 = memcmp(pppppppuVar16,puVar15,local_80);
                  bVar27 = iVar12 == 0;
                }
              }
              else {
                bVar27 = false;
              }
              if (0xf < uVar14) {
                uVar18 = uVar14 + 1;
                pppppppuVar16 = pppppppuVar9;
                if (uVar18 < 0x1000) {
LAB_1400cf413:
                  thunk_FUN_14028af80(pppppppuVar16,uVar18);
                  goto LAB_1400cf41b;
                }
                pppppppuVar16 = (undefined8 *******)pppppppuVar9[-1];
                if ((ulonglong)((longlong)pppppppuVar9 + (-8 - (longlong)pppppppuVar16)) < 0x20) {
                  uVar18 = uVar14 + 0x28;
                  goto LAB_1400cf413;
                }
LAB_1400cf4d2:
                pcVar4 = (code *)swi(0x29);
                (*pcVar4)(5);
                puVar20 = auStackY_150;
LAB_1400cf4d9:
                bVar28 = iVar11 == 0;
                goto LAB_1400cf4fa;
              }
LAB_1400cf41b:
              if (7 < local_c8) {
                uVar14 = local_c8 * 2 + 2;
                pppppppWVar17 = local_e0;
                if (0xfff < uVar14) {
                  pppppppWVar17 = (LPCWSTR ******)local_e0[-1];
                  if (0x1f < (ulonglong)((longlong)local_e0 + (-8 - (longlong)pppppppWVar17)))
                  goto LAB_1400cf4d2;
                  uVar14 = local_c8 * 2 + 0x29;
                }
                thunk_FUN_14028af80(pppppppWVar17,uVar14);
              }
              if (bVar27) goto LAB_1400cf4d9;
              CoTaskMemFree(local_e8);
              local_e8 = (LPVOID)0x0;
              if (local_108 != (longlong *)0x0) {
                (**(code **)(*local_108 + 0x10))();
                local_108 = (longlong *)0x0;
              }
              uVar24 = uVar24 + 1;
            } while (uVar24 < local_f0[0]);
          }
          if (local_f8 != (longlong *)0x0) {
            (**(code **)(*local_f8 + 0x10))(local_f8);
            local_f8 = (longlong *)0x0;
          }
          uVar22 = uVar22 + 1;
          if (1 < uVar22) break;
        }
LAB_1400cf4e7:
        if (local_108 != (longlong *)0x0) {
          (**(code **)(*local_108 + 0x10))();
          local_108 = (longlong *)0x0;
        }
        bVar28 = true;
        puVar20 = auStackY_158;
LAB_1400cf4fa:
        puVar20[0x40] = bVar28;
        *(undefined8 *)(puVar20 + -8) = 0x1400cf50a;
        CoTaskMemFree(*(LPVOID *)(puVar20 + 0x70));
        if (*(longlong **)(puVar20 + 0x60) != (longlong *)0x0) {
          pcVar4 = *(code **)(**(longlong **)(puVar20 + 0x60) + 0x10);
          *(undefined8 *)(puVar20 + -8) = 0x1400cf51a;
          (*pcVar4)();
        }
        *(undefined8 *)(puVar20 + 0x58) = *(undefined8 *)(puVar20 + 0x50);
        puVar21 = puVar20;
      }
    }
    uVar22 = 0;
    if (*(longlong *)(puVar21 + 0x58) == 0) {
      plVar5 = *param_7;
      pcVar4 = *(code **)(*plVar5 + 0x20);
      *(undefined8 *)(puVar21 + -8) = 0x1400cf551;
      iVar11 = (*pcVar4)(plVar5,0,0,puVar21 + 0x58);
      if ((iVar11 < 0) || (*(longlong *)(puVar21 + 0x58) == 0)) goto LAB_1400cf8e8;
    }
    *(longlong **)(puVar21 + 0x20) = param_8;
    pcVar4 = *(code **)(**(longlong **)(puVar21 + 0x58) + 0x18);
    *(undefined8 *)(puVar21 + -8) = 0x1400cf58c;
    uVar14 = (*pcVar4)(*(longlong **)(puVar21 + 0x58),&DAT_140482aa8,0x17,0);
    if (-1 < (int)uVar14) {
      plVar5 = (longlong *)*param_8;
      if (plVar5 == (longlong *)0x0) {
        return uVar14 & 0xffffffffffffff00;
      }
      pcVar4 = *(code **)(*plVar5 + 0x40);
      *(undefined8 *)(puVar21 + -8) = 0x1400cf5ae;
      iVar11 = (*pcVar4)(plVar5,puVar21 + 0x48);
      if (-1 < iVar11) {
        lVar19 = *(longlong *)(puVar21 + 0x48);
        if (*(short *)(lVar19 + 0xe) != 0x20) {
          *(undefined8 *)(puVar21 + -8) = 0x1400cf5ce;
          FUN_1400986c0("WASAPI processor requires 32 bit per sample.");
          lVar19 = *(longlong *)(puVar21 + 0x48);
        }
        fVar6 = DAT_140492704;
        *param_3 = (uint)*(ushort *)(lVar19 + 2);
        fVar7 = DAT_1404928e4;
        fVar29 = (float)*(uint *)(lVar19 + 4) / _DAT_140492964;
        if (fVar29 <= fVar6) {
          fVar29 = fVar6;
        }
        *param_5 = (int)(longlong)(fVar29 * DAT_1404928e4 * *(float *)(param_1 + 8));
        *param_6 = (int)(longlong)(*(float *)(param_1 + 0xc) * fVar7);
        if ((uint)*(ushort *)(lVar19 + 0xc) != (uint)*(ushort *)(lVar19 + 2) << 2) {
          uVar24 = *param_3;
          *(undefined8 *)(puVar21 + -8) = 0x1400cf657;
          FUN_1400986c0("WASAPI unexpected block align: %i * %i != %i.",4,uVar24);
          lVar19 = *(longlong *)(puVar21 + 0x48);
        }
        while( true ) {
          plVar5 = (longlong *)*param_8;
          *(undefined8 *)(puVar21 + 0x30) = 0;
          *(longlong *)(puVar21 + 0x28) = lVar19;
          lVar19 = *plVar5;
          *(undefined8 *)(puVar21 + 0x20) = 0;
          uVar13 = local_60[(int)uVar22];
          pcVar4 = *(code **)(lVar19 + 0x18);
          *(undefined8 *)(puVar21 + -8) = 0x1400cf695;
          iVar11 = (*pcVar4)(plVar5,0,(ulonglong)bVar28 << 0x11,uVar13);
          if (-1 < iVar11) break;
          uVar22 = uVar22 + 1;
          if (3 < uVar22) {
            bVar27 = false;
            DAT_1404e8f68 = DAT_1404e8f68 + 1;
            if (DAT_1404e8f68 < 10) {
              lVar19 = *(longlong *)(puVar21 + 0x48);
              uVar1 = *(undefined2 *)(lVar19 + 0xc);
              uVar2 = *(undefined2 *)(lVar19 + 2);
              uVar3 = *(undefined4 *)(lVar19 + 4);
              *(undefined8 *)(puVar21 + -8) = 0x1400cf6e9;
              FUN_140098760("Failed default format: channels %i, align %i, rate %i\n",uVar2,uVar1,
                            uVar3);
            }
            if ((bool)bVar28 == false) goto LAB_1400cf8e8;
            psVar26 = (short *)0x0;
            iVar12 = 0;
            local_c0[0] = 3;
            local_c0[1] = 4;
            psVar23 = psVar26;
            if (**(short **)(puVar21 + 0x48) == -2) {
              psVar23 = *(short **)(puVar21 + 0x48);
            }
            local_c0[2] = 7;
            local_c0[3] = 0x33;
            local_c0[4] = 0x107;
            local_c0[5] = 0x607;
            local_c0[6] = 0x3f;
            local_c0[7] = 0x60f;
            local_c0[8] = 0xff;
            local_c0[9] = 0x63f;
            local_70 = 8;
            local_6c = 8;
            local_90 = _DAT_140492c30;
            uStack_88 = _UNK_140492c38;
            local_80 = _DAT_140492c40;
            uStack_78 = _UNK_140492c48;
            if (psVar23 == (short *)0x0) {
              psVar26 = (short *)0x0;
            }
            else {
              iVar12 = *(int *)(psVar23 + 0xb);
            }
            goto LAB_1400cf793;
          }
          lVar19 = *(longlong *)(puVar21 + 0x48);
        }
        goto LAB_1400cf8a2;
      }
    }
  }
  goto LAB_1400cf8e8;
LAB_1400cf793:
  do {
    uVar22 = 0;
    if (bVar27) break;
    iVar25 = (int)psVar26;
    uVar24 = *(uint *)((longlong)&local_90 + (longlong)iVar25 * 4);
    *param_3 = uVar24;
    *(short *)(*(longlong *)(puVar21 + 0x48) + 2) = (short)uVar24;
    iVar11 = (uint)*(ushort *)(*(longlong *)(puVar21 + 0x48) + 0xe) * (uVar24 & 0xffff);
    uVar24 = (int)(iVar11 + (iVar11 >> 0x1f & 7U)) >> 3;
    *(short *)(*(longlong *)(puVar21 + 0x48) + 0xc) = (short)uVar24;
    *(uint *)(*(longlong *)(puVar21 + 0x48) + 8) =
         (uVar24 & 0xffff) * *(int *)(*(longlong *)(puVar21 + 0x48) + 4);
    if (psVar23 != (short *)0x0) {
      *(int *)(psVar23 + 0xb) = local_c0[iVar25];
    }
    do {
      *(undefined8 *)(puVar21 + 0x30) = 0;
      plVar5 = (longlong *)*param_8;
      lVar19 = *plVar5;
      uVar13 = local_60[(int)uVar22];
      *(undefined8 *)(puVar21 + 0x28) = *(undefined8 *)(puVar21 + 0x48);
      *(undefined8 *)(puVar21 + 0x20) = 0;
      pcVar4 = *(code **)(lVar19 + 0x18);
      *(undefined8 *)(puVar21 + -8) = 0x1400cf82e;
      iVar11 = (*pcVar4)(plVar5,0,0x20000,uVar13);
      if (-1 < iVar11) {
LAB_1400cf885:
        bVar27 = true;
        break;
      }
      if (iVar12 != 0) {
        *(undefined8 *)(puVar21 + 0x30) = 0;
        *(int *)(*(longlong *)(puVar21 + 0x48) + 0x16) = iVar12;
        plVar5 = (longlong *)*param_8;
        *(undefined8 *)(puVar21 + 0x28) = *(undefined8 *)(puVar21 + 0x48);
        *(undefined8 *)(puVar21 + 0x20) = 0;
        pcVar4 = *(code **)(*plVar5 + 0x18);
        *(undefined8 *)(puVar21 + -8) = 0x1400cf872;
        iVar11 = (*pcVar4)(plVar5,0,0x20000,uVar13);
        if (-1 < iVar11) goto LAB_1400cf885;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < 4);
    psVar26 = (short *)(ulonglong)(iVar25 + 1U);
  } while (iVar25 + 1U < 10);
  if (-1 < iVar11) {
    bVar28 = puVar21[0x40];
LAB_1400cf8a2:
    plVar5 = (longlong *)*param_8;
    pcVar4 = *(code **)(*plVar5 + 0x70);
    *(undefined8 *)(puVar21 + -8) = 0x1400cf8c0;
    iVar11 = (*pcVar4)(plVar5,&DAT_140482ab8,param_9);
    if (-1 < iVar11) {
      pcVar4 = *(code **)(*(longlong *)*param_8 + 0x50);
      *(undefined8 *)(puVar21 + -8) = 0x1400cf8cd;
      iVar11 = (*pcVar4)();
      if (-1 < iVar11) {
        uVar14 = 1;
        if (bVar28 == 0) {
          *param_4 = *param_4 | 1;
        }
        goto LAB_1400cf92b;
      }
    }
  }
LAB_1400cf8e8:
  uVar14 = 0;
  if ((longlong *)*param_9 != (longlong *)0x0) {
    pcVar4 = *(code **)(*(longlong *)*param_9 + 0x10);
    *(undefined8 *)(puVar21 + -8) = 0x1400cf8ff;
    (*pcVar4)();
    *param_9 = 0;
  }
  if ((longlong *)*param_8 != (longlong *)0x0) {
    pcVar4 = *(code **)(*(longlong *)*param_8 + 0x10);
    *(undefined8 *)(puVar21 + -8) = 0x1400cf910;
    (*pcVar4)();
    *param_8 = 0;
  }
  if (*param_7 != (longlong *)0x0) {
    pcVar4 = *(code **)(*(longlong *)*param_7 + 0x10);
    *(undefined8 *)(puVar21 + -8) = 0x1400cf928;
    (*pcVar4)();
    *param_7 = (LPVOID)0x0;
  }
LAB_1400cf92b:
  if (*(longlong **)(puVar21 + 0x58) != (longlong *)0x0) {
    pcVar4 = *(code **)(**(longlong **)(puVar21 + 0x58) + 0x10);
    *(undefined8 *)(puVar21 + -8) = 0x1400cf93b;
    (*pcVar4)();
    *(undefined8 *)(puVar21 + 0x58) = 0;
  }
  *(undefined8 *)(puVar21 + -8) = 0x1400cf94b;
  CoTaskMemFree(*(LPVOID *)(puVar21 + 0x48));
  return uVar14;
}

