// Function: FUN_140075a90
// Addr: 140075a90
// Size: 4422 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong **** FUN_140075a90(ulonglong param_1,ulonglong *****param_2,ulonglong *****param_3)

{
  ulonglong *****pppppuVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  undefined1 auVar8 [15];
  char cVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 *_Buf1;
  longlong *plVar16;
  undefined1 (*pauVar17) [16];
  ulonglong ****ppppuVar18;
  ulonglong *puVar19;
  ulonglong ****ppppuVar20;
  ulonglong ****ppppuVar21;
  ulonglong ****ppppuVar22;
  ulonglong *****pppppuVar23;
  ulonglong ****ppppuVar24;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined1 *puVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  undefined4 uVar34;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined *local_res8;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  ulonglong ****local_d8;
  undefined8 local_d0;
  ulonglong ****local_c8;
  ulonglong local_c0;
  longlong local_b8;
  undefined1 local_a8 [16];
  longlong local_98;
  ulonglong local_90;
  undefined4 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  ulonglong local_68;
  ulonglong ***local_58;
  ulonglong ***local_50;
  
  puVar30 = auStack_f8;
  iVar11 = 0;
  local_res8 = (undefined *)(param_1 & 0xffffffff00000000);
  ppppuVar24 = *param_3;
  ppppuVar18 = param_3[1];
  local_58 = (ulonglong ***)ppppuVar24;
  local_50 = (ulonglong ***)ppppuVar18;
  if (ppppuVar24 != ppppuVar18) {
    do {
      FUN_140017240(ppppuVar24 + 5);
      FUN_140017240(ppppuVar24);
      ppppuVar24 = ppppuVar24 + 9;
    } while (ppppuVar24 != ppppuVar18);
    param_3[1] = *param_3;
  }
  ppppuVar24 = (ulonglong ****)0x0;
  *(undefined4 *)((longlong)param_3 + 0x3c) = 0;
  *(undefined4 *)(param_3 + 6) = 0x42700000;
  lVar13 = FUN_140086de0(param_2,"settings","");
  uVar15 = extraout_XMM0_Qa;
  if (*(char *)(lVar13 + 8) != '\a') goto LAB_140075e96;
  lVar14 = FUN_140086de0(lVar13,"delay","");
  if (*(byte *)(lVar14 + 8) - 1 < 3) {
    uVar15 = FUN_140086de0(lVar13,"delay","");
    uVar34 = FUN_140086220(uVar15);
  }
  else {
    uVar34 = 0;
  }
  *(undefined4 *)(param_3 + 6) = uVar34;
  lVar14 = FUN_140086de0(lVar13,"order","");
  if (*(char *)(lVar14 + 8) == '\x04') {
    iVar11 = 1;
    uVar15 = FUN_140086de0(lVar13,"order","");
    _Buf1 = (undefined8 *)FUN_140085cc0(uVar15,&local_d8);
    plVar16 = _Buf1 + 2;
    if (0xf < (ulonglong)_Buf1[3]) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    if ((*plVar16 != 6) || (iVar10 = memcmp(_Buf1,"sorted",6), iVar26 = 1, iVar32 = 1, iVar10 != 0))
    goto LAB_140075bef;
  }
  else {
LAB_140075bef:
    iVar26 = iVar11;
    iVar32 = 0;
  }
  *(int *)((longlong)param_3 + 0x34) = iVar32;
  ppppuVar18 = ppppuVar24;
  if ((iVar26 != 0) && (0xf < local_c0)) {
    uVar27 = local_c0 + 1;
    pppppuVar23 = (ulonglong *****)local_d8;
    if (0xfff < uVar27) {
      pppppuVar23 = (ulonglong *****)local_d8[-1];
      if (0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)pppppuVar23))) goto LAB_1400765c9;
      uVar27 = local_c0 + 0x28;
    }
    thunk_FUN_14028af80(pppppuVar23,uVar27);
  }
  *(undefined4 *)(param_3 + 7) = 1;
  lVar14 = FUN_140086de0(lVar13,&DAT_140474ec0,&DAT_140474ec4);
  if (*(char *)(lVar14 + 8) == '\x04') {
    uVar15 = FUN_140086de0(lVar13,&DAT_140474ec0,&DAT_140474ec4);
    FUN_140085cc0(uVar15,&local_d8);
    uVar27 = local_c0;
    ppppuVar20 = local_c8;
    ppppuVar21 = local_d8;
    pppppuVar23 = &local_d8;
    if (0xf < local_c0) {
      pppppuVar23 = (ulonglong *****)local_d8;
    }
    if ((local_c8 == (ulonglong ****)&DAT_00000005) &&
       (iVar11 = memcmp(pppppuVar23,"logon",5), iVar11 == 0)) {
      *(undefined4 *)(param_3 + 7) = 0;
    }
    else {
      pppppuVar23 = &local_d8;
      if (0xf < uVar27) {
        pppppuVar23 = (ulonglong *****)ppppuVar21;
      }
      if (((ulonglong *****)ppppuVar20 == (ulonglong *****)0x7) &&
         (iVar11 = memcmp(pppppuVar23,"daytime",7), iVar11 == 0)) {
        *(undefined4 *)(param_3 + 7) = 2;
      }
      else {
        pppppuVar23 = &local_d8;
        if (0xf < uVar27) {
          pppppuVar23 = (ulonglong *****)ppppuVar21;
        }
        if ((ppppuVar20 == (ulonglong ****)&DAT_00000009) &&
           (iVar11 = memcmp(pppppuVar23,"dayofweek",9), iVar11 == 0)) {
          *(undefined4 *)(param_3 + 7) = 3;
        }
        else {
          pppppuVar23 = &local_d8;
          if (0xf < uVar27) {
            pppppuVar23 = (ulonglong *****)ppppuVar21;
          }
          if ((ppppuVar20 != (ulonglong ****)&DAT_00000005) ||
             (iVar11 = memcmp(pppppuVar23,"never",5), iVar11 != 0)) goto LAB_140075d45;
          *(undefined4 *)(param_3 + 7) = 4;
        }
      }
      *(undefined4 *)(param_3 + 6) = 0;
    }
LAB_140075d45:
    if (0xf < uVar27) {
      uVar28 = uVar27 + 1;
      pppppuVar23 = (ulonglong *****)ppppuVar21;
      if (0xfff < uVar28) {
        pppppuVar23 = (ulonglong *****)ppppuVar21[-1];
        if (0x1f < (ulonglong)((longlong)ppppuVar21 + (-8 - (longlong)pppppuVar23))) {
LAB_1400765c9:
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar30 = auStack_f0;
LAB_1400765d0:
          if ((*(byte *)((longlong)param_3 + 0x3c) & 0x10) != 0) {
            ppppuVar24 = *param_2;
            ppppuVar21 = param_3[4];
            ppppuVar20 = ppppuVar24;
            if (ppppuVar24 != ppppuVar21) {
              while (ppppuVar22 = ppppuVar20 + 9, ppppuVar22 != ppppuVar21) {
                *(undefined8 *)(puVar30 + -8) = 0x1400765fb;
                FUN_14000de40(ppppuVar24,ppppuVar22);
                *(undefined4 *)(ppppuVar24 + 4) = *(undefined4 *)(ppppuVar20 + 0xd);
                *(undefined8 *)(puVar30 + -8) = 0x14007660e;
                FUN_14000de40(ppppuVar24 + 5,ppppuVar20 + 0xe);
                ppppuVar24 = ppppuVar24 + 9;
                ppppuVar20 = ppppuVar22;
              }
              ppppuVar24 = param_3[4];
              *(undefined8 *)(puVar30 + -8) = 0x140076628;
              FUN_140017240(ppppuVar24 + -4);
              *(undefined8 *)(puVar30 + -8) = 0x140076631;
              FUN_140017240(ppppuVar24 + -9);
              param_3[4] = param_3[4] + -9;
            }
          }
          if ((DAT_1404e52e4 >> 0xe & 1) != 0) {
            ppppuVar24 = param_3[1];
            ppppuVar21 = *param_3;
            *(undefined8 *)(puVar30 + -8) = 0x14007665a;
            puVar19 = (ulonglong *)FUN_140077bd0(&local_res8,ppppuVar21,ppppuVar24);
            if ((ulonglong ****)*puVar19 != ppppuVar24) {
              ppppuVar21 = param_3[1];
              *(undefined8 *)(puVar30 + -8) = 0x14007666e;
              ppppuVar20 = (ulonglong ****)FUN_14007c1f0(ppppuVar24,ppppuVar21);
              ppppuVar24 = param_3[1];
              for (ppppuVar21 = ppppuVar20; ppppuVar21 != ppppuVar24; ppppuVar21 = ppppuVar21 + 9) {
                *(undefined8 *)(puVar30 + -8) = 0x140076689;
                FUN_140017240(ppppuVar21 + 5);
                *(undefined8 *)(puVar30 + -8) = 0x140076691;
                FUN_140017240(ppppuVar21);
              }
              param_3[1] = ppppuVar20;
            }
            ppppuVar24 = param_3[4];
            ppppuVar21 = *param_2;
            *(undefined8 *)(puVar30 + -8) = 0x1400766b2;
            puVar19 = (ulonglong *)FUN_140077bd0(&local_res8,ppppuVar21,ppppuVar24);
            if ((ulonglong ****)*puVar19 != ppppuVar24) {
              ppppuVar21 = param_3[4];
              *(undefined8 *)(puVar30 + -8) = 0x1400766c6;
              ppppuVar20 = (ulonglong ****)FUN_14007c1f0(ppppuVar24,ppppuVar21);
              ppppuVar24 = param_3[4];
              for (ppppuVar21 = ppppuVar20; ppppuVar21 != ppppuVar24; ppppuVar21 = ppppuVar21 + 9) {
                *(undefined8 *)(puVar30 + -8) = 0x1400766de;
                FUN_140017240(ppppuVar21 + 5);
                *(undefined8 *)(puVar30 + -8) = 0x1400766e6;
                FUN_140017240(ppppuVar21);
              }
              param_3[4] = ppppuVar20;
            }
          }
          fVar7 = DAT_140492704;
          if (*(int *)(param_3 + 7) == 2) {
            ppppuVar24 = param_3[1];
            uVar27 = (ulonglong)ppppuVar18 & 0xffffffff;
            ppppuVar21 = *param_3;
            fVar36 = 0.0;
            uVar28 = (ulonglong)ppppuVar18 & 0xffffffff;
            if (((longlong)ppppuVar24 - (longlong)ppppuVar21 >> 3) * -0x71c71c71c71c71c7 != 0) {
              do {
                iVar11 = (int)uVar28;
                fVar37 = fVar7;
                if (((longlong)iVar11 ==
                     ((longlong)ppppuVar24 - (longlong)ppppuVar21 >> 3) * -0x71c71c71c71c71c7 + -1)
                   || (fVar37 = *(float *)(ppppuVar21 + (longlong)iVar11 * 9 + 4),
                      0.0 < *(float *)(ppppuVar21 + (longlong)iVar11 * 9 + 4))) {
                  iVar32 = (int)uVar27;
                  iVar26 = (iVar11 - iVar32) + 1;
                  fVar35 = (float)iVar26;
                  if ((0.0 < fVar35) && (iVar32 <= iVar11)) {
                    fVar35 = (fVar37 - fVar36) * (fVar7 / fVar35);
                    if (3 < iVar26) {
                      uVar28 = (ulonglong)ppppuVar18 & 0xffffffff;
                      do {
                        iVar26 = (int)uVar28;
                        iVar10 = (int)uVar27;
                        *(float *)(*param_3 + (longlong)iVar10 * 9 + 4) =
                             (float)(iVar26 + 1) * fVar35 + fVar36;
                        *(float *)(*param_3 + ((longlong)iVar10 + 1) * 9 + 4) =
                             (float)(iVar26 + 2) * fVar35 + fVar36;
                        uVar28 = (ulonglong)(iVar26 + 4U);
                        *(float *)(*param_3 + ((longlong)iVar10 + 2) * 9 + 4) =
                             (float)(iVar26 + 3) * fVar35 + fVar36;
                        uVar27 = (ulonglong)(iVar10 + 4U);
                        *(float *)(*param_3 + ((longlong)iVar10 + 3) * 9 + 4) =
                             (float)(int)(iVar26 + 4U) * fVar35 + fVar36;
                      } while ((int)(iVar10 + 4U) <= iVar11 + -3);
                      ppppuVar24 = param_3[1];
                      ppppuVar21 = *param_3;
                    }
                    if ((int)uVar27 <= iVar11) {
                      do {
                        iVar26 = (int)uVar27;
                        uVar27 = (ulonglong)(iVar26 + 1U);
                        *(float *)(*param_3 + (longlong)iVar26 * 9 + 4) =
                             (float)((iVar26 - iVar32) + 1) * fVar35 + fVar36;
                      } while ((int)(iVar26 + 1U) <= iVar11);
                      ppppuVar24 = param_3[1];
                      ppppuVar21 = *param_3;
                    }
                  }
                  uVar27 = (ulonglong)(iVar11 + 1);
                  fVar36 = fVar37;
                }
                uVar28 = (ulonglong)(iVar11 + 1U);
              } while ((ulonglong)(longlong)(int)(iVar11 + 1U) <
                       (ulonglong)
                       (((longlong)ppppuVar24 - (longlong)ppppuVar21 >> 3) * -0x71c71c71c71c71c7));
            }
          }
          else if (*(int *)(param_3 + 7) == 3) {
            ppppuVar24 = param_3[1];
            ppppuVar21 = *param_3;
            if (((longlong)ppppuVar24 - (longlong)ppppuVar21 >> 3) * -0x71c71c71c71c71c7 != 0) {
              uVar27 = (ulonglong)ppppuVar18 & 0xffffffff;
              uVar28 = (ulonglong)ppppuVar18 & 0xffffffff;
              ppppuVar20 = ppppuVar21;
              do {
                iVar10 = (int)uVar28;
                iVar26 = (int)((longlong)ppppuVar24 - (longlong)ppppuVar20 >> 3) * 0x38e38e39;
                iVar32 = 7;
                uVar28 = (ulonglong)ppppuVar18 & 0xffffffff;
                iVar11 = 7;
                if (iVar26 < 7) {
                  iVar11 = iVar26;
                }
                iVar26 = 1;
                if (1 < iVar11) {
                  iVar26 = iVar11;
                }
                iVar11 = 1;
                if (0 < iVar26) {
                  do {
                    iVar31 = (int)uVar28;
                    iVar11 = iVar32;
                    if (iVar31 < iVar26 + -1) {
                      iVar11 = iVar32 / (iVar26 - iVar31);
                    }
                    if (iVar31 == iVar10) break;
                    iVar32 = iVar32 - iVar11;
                    uVar28 = (ulonglong)(iVar31 + 1U);
                  } while ((int)(iVar31 + 1U) < iVar26);
                }
                uVar25 = (int)uVar27 + iVar11;
                uVar27 = (ulonglong)uVar25;
                uVar28 = (ulonglong)(iVar10 + 1U);
                *(float *)(ppppuVar21 + (longlong)iVar10 * 9 + 4) = (float)(int)uVar25;
                ppppuVar24 = param_3[1];
                ppppuVar20 = *param_3;
              } while ((ulonglong)(longlong)(int)(iVar10 + 1U) <
                       (ulonglong)
                       (((longlong)ppppuVar24 - (longlong)ppppuVar20 >> 3) * -0x71c71c71c71c71c7));
            }
          }
          uVar27 = 1;
          ppppuVar24 = param_3[1];
          ppppuVar21 = *param_3;
          ppppuVar20 = (ulonglong ****)
                       (((longlong)ppppuVar24 - (longlong)ppppuVar21 >> 3) * -0x71c71c71c71c71c7);
          if (ppppuVar20 < (ulonglong ****)0x2) {
            if (ppppuVar21 != ppppuVar24) {
              do {
                *(undefined8 *)(puVar30 + -8) = 0x1400769de;
                FUN_140017240(ppppuVar21 + 5);
                *(undefined8 *)(puVar30 + -8) = 0x1400769e6;
                FUN_140017240(ppppuVar21);
                ppppuVar21 = ppppuVar21 + 9;
              } while (ppppuVar21 != ppppuVar24);
              param_3[1] = *param_3;
              ppppuVar20 = *param_3;
            }
          }
          else {
            ppppuVar20 = (ulonglong ****)local_58;
            if (local_58 == local_50) {
              if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e9180) {
                *(undefined8 *)(puVar30 + -8) = 0x140076bc4;
                FUN_14028b140(&DAT_1404e9180);
                if (DAT_1404e9180 == -1) {
                  uVar29 = 0x1571;
                  uVar28 = uVar27;
                  do {
                    uVar29 = ((uint)(uVar29 >> 0x1e) & 3 ^ (uint)uVar29) * 0x6c078965 + uVar28;
                    *(int *)(&DAT_1404dfd24 + uVar28 * 4) = (int)uVar29;
                    uVar28 = uVar28 + 1;
                  } while (uVar28 < 0x270);
                  _DAT_1404dfd20 = 0x270;
                  *(undefined8 *)(puVar30 + -8) = 0x140076ba7;
                  _Init_thread_footer(&DAT_1404e9180);
                }
              }
              *(undefined8 *)(puVar30 + -8) = 0x140076a35;
              lVar13 = _Xtime_get_ticks();
              uVar28 = lVar13 / 10000 + (longlong)DAT_1404e8f20;
              DAT_1404e8f20 = DAT_1404e8f20 + 1;
              _DAT_1404dfd24 = (undefined4)uVar28;
              do {
                uVar25 = ((uint)(uVar28 >> 0x1e) & 3 ^ (uint)uVar28) * 0x6c078965 + (int)uVar27;
                *(uint *)(&DAT_1404dfd24 + uVar27 * 4) = uVar25;
                uVar28 = (ulonglong)uVar25;
                uVar27 = uVar27 + 1;
              } while (uVar27 < 0x270);
              local_res8 = &DAT_1404dfd20;
              _DAT_1404dfd20 = 0x270;
              uVar25 = (int)((longlong)param_3[1] - (longlong)*param_3 >> 3) * 0x38e38e39 - 1U ^
                       0x80000000;
              if (uVar25 == 0x7fffffff) {
                *(undefined8 *)(puVar30 + -8) = 0x140076acb;
                iVar11 = FUN_14007d8f0(&local_res8);
              }
              else {
                uVar33 = uVar25 + 0x80000001;
                *(undefined8 *)(puVar30 + -8) = 0x140076ae1;
                uVar12 = FUN_14007d8f0(&local_res8);
                lVar13 = (ulonglong)uVar12 * (ulonglong)uVar33;
                uVar12 = (uint)lVar13;
                if (uVar12 < uVar33) {
                  while (uVar12 < (0x7fffffff - uVar25) % uVar33) {
                    *(undefined8 *)(puVar30 + -8) = 0x140076b09;
                    uVar12 = FUN_14007d8f0(&local_res8);
                    lVar13 = (ulonglong)uVar12 * (ulonglong)uVar33;
                    uVar12 = (uint)lVar13;
                  }
                }
                iVar11 = (int)((ulonglong)lVar13 >> 0x20);
              }
              uVar28 = ((longlong)param_3[1] - (longlong)*param_3 >> 3) * -0x71c71c71c71c71c7;
              uVar27 = (ulonglong)(int)(iVar11 + 0x80000000U ^ 0x80000000);
              ppppuVar20 = (ulonglong ****)(uVar27 / uVar28);
              *(int *)(param_3 + 8) = (int)(uVar27 % uVar28);
              if ((*(byte *)((longlong)param_3 + 0x3c) & 8) != 0) {
                *(int *)(param_3 + 8) = (int)ppppuVar18;
              }
            }
          }
          return ppppuVar20;
        }
        uVar28 = uVar27 + 0x28;
      }
      thunk_FUN_14028af80(pppppuVar23,uVar28);
    }
  }
  lVar14 = FUN_140086de0(lVar13,"videosequence","");
  if (*(char *)(lVar14 + 8) == '\x05') {
    uVar15 = FUN_140086de0(lVar13,"videosequence","");
    cVar9 = FUN_140086300(uVar15);
    if (cVar9 != '\0') {
      *(uint *)((longlong)param_3 + 0x3c) = *(uint *)((longlong)param_3 + 0x3c) | 1;
    }
  }
  lVar14 = FUN_140086de0(lVar13,"updateonpause","");
  uVar15 = extraout_XMM0_Qa_00;
  if (*(char *)(lVar14 + 8) == '\x05') {
    uVar15 = FUN_140086de0(lVar13,"updateonpause","");
    cVar9 = FUN_140086300(uVar15);
    uVar15 = extraout_XMM0_Qa_01;
    if (cVar9 != '\0') {
      *(uint *)((longlong)param_3 + 0x3c) = *(uint *)((longlong)param_3 + 0x3c) | 2;
    }
  }
  if ((*(int *)(param_3 + 7) == 1) &&
     (lVar14 = FUN_140086de0(lVar13,"beginfirst",""), uVar15 = extraout_XMM0_Qa_02,
     *(char *)(lVar14 + 8) == '\x05')) {
    uVar15 = FUN_140086de0(lVar13,"beginfirst","");
    cVar9 = FUN_140086300(uVar15);
    uVar15 = extraout_XMM0_Qa_03;
    if (cVar9 != '\0') {
      *(uint *)((longlong)param_3 + 0x3c) = *(uint *)((longlong)param_3 + 0x3c) | 8;
    }
  }
  if (((*(byte *)((longlong)param_3 + 0x3c) & 8) != 0) &&
     (lVar14 = FUN_140086de0(lVar13,"playintro",""), uVar15 = extraout_XMM0_Qa_04,
     *(char *)(lVar14 + 8) == '\x05')) {
    uVar15 = FUN_140086de0(lVar13,"playintro","");
    cVar9 = FUN_140086300(uVar15);
    uVar15 = extraout_XMM0_Qa_05;
    if (cVar9 != '\0') {
      *(uint *)((longlong)param_3 + 0x3c) = *(uint *)((longlong)param_3 + 0x3c) | 0x10;
    }
  }
LAB_140075e96:
  FUN_140075790(uVar15,lVar13,param_3 + 9);
  plVar16 = (longlong *)FUN_140086de0(param_2,&DAT_14047491c,&DAT_140474921);
  uVar25 = *(uint *)(plVar16 + 1) & 0xff;
  if (((uVar25 == 6) || (uVar25 == 7)) && ((undefined8 *)*plVar16 != (undefined8 *)0x0)) {
    bVar4 = false;
    ppppuVar21 = (ulonglong ****)**(longlong **)*plVar16;
  }
  else {
    bVar4 = true;
    ppppuVar21 = ppppuVar24;
  }
  if (((uVar25 == 6) || (uVar25 == 7)) && ((undefined8 *)*plVar16 != (undefined8 *)0x0)) {
    ppppuVar24 = *(ulonglong *****)*plVar16;
    cVar9 = '\0';
  }
  else {
    cVar9 = '\x01';
  }
  local_res8 = (undefined *)CONCAT71(local_res8._1_7_,cVar9);
LAB_140075f0c:
  ppppuVar18 = (ulonglong ****)0x0;
  param_2 = param_3 + 3;
  if (!bVar4) {
    cVar9 = ppppuVar21 == ppppuVar24;
  }
  if (cVar9 != '\0') goto LAB_1400765d0;
  local_98 = 0;
  local_70 = 0;
  local_a8._1_15_ = SUB1615(ZEXT816(0),1);
  auVar8 = local_a8._1_15_;
  auVar5[0xf] = 0;
  auVar5._0_15_ = local_a8._1_15_;
  local_a8 = auVar5 << 8;
  auVar6[0xf] = 0;
  auVar6._0_15_ = auVar8;
  local_80 = auVar6 << 8;
  local_90 = 0xf;
  local_68 = 0xf;
  local_88 = 0;
  if ((*(uint *)(ppppuVar21 + 7) & 0xff) == 4) {
    pauVar17 = (undefined1 (*) [16])FUN_140085cc0(ppppuVar21 + 6,&local_d8);
    if (&local_a8 != pauVar17) {
      local_a8 = *pauVar17;
      local_98 = *(longlong *)pauVar17[1];
      local_90 = *(ulonglong *)(pauVar17[1] + 8);
      *(undefined8 *)pauVar17[1] = 0;
      *(undefined8 *)(pauVar17[1] + 8) = 0xf;
      (*pauVar17)[0] = 0;
    }
    if (0xf < local_c0) {
      uVar27 = local_c0 + 1;
      pppppuVar23 = (ulonglong *****)local_d8;
      if (0xfff < uVar27) {
        pppppuVar23 = (ulonglong *****)local_d8[-1];
        if (0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)pppppuVar23)))
        goto LAB_1400765c9;
        uVar27 = local_c0 + 0x28;
      }
      thunk_FUN_14028af80(pppppuVar23,uVar27);
    }
    ppppuVar18 = param_3[1];
    if (ppppuVar18 == param_3[2]) {
      lVar13 = (longlong)ppppuVar18 - (longlong)*param_3;
      lVar13 = lVar13 / 0x12 + (lVar13 >> 0x3f);
      lVar13 = (lVar13 >> 2) - (lVar13 >> 0x3f);
      if (lVar13 == 0x38e38e38e38e38e) goto LAB_140076bb2;
      uVar28 = ((longlong)param_3[2] - (longlong)*param_3 >> 3) * -0x71c71c71c71c71c7;
      uVar27 = 0x38e38e38e38e38e - (uVar28 >> 1);
      if (uVar27 <= uVar28 && uVar28 - uVar27 != 0) goto LAB_140076bac;
      pppppuVar23 = (ulonglong *****)(lVar13 + 1);
      pppppuVar1 = (ulonglong *****)((uVar28 >> 1) + uVar28);
      param_2 = pppppuVar23;
      if (pppppuVar23 <= pppppuVar1) {
        param_2 = pppppuVar1;
      }
      if ((ulonglong *****)0x38e38e38e38e38e < param_2) goto LAB_140076bac;
      uVar27 = (longlong)param_2 * 0x48;
      if (uVar27 == 0) {
        uVar27 = 0;
      }
      else if (uVar27 < 0x1000) {
        uVar27 = FUN_14028af20();
      }
      else {
        if (uVar27 + 0x27 <= uVar27) goto LAB_140076bac;
        lVar14 = FUN_14028af20(uVar27 + 0x27);
        if (lVar14 == 0) goto LAB_1400765c9;
        uVar27 = lVar14 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar27 - 8) = lVar14;
      }
      uVar29 = uVar27 + lVar13 * 0x48;
      local_b8 = uVar29 + 0x48;
      local_d8 = (ulonglong ****)param_3;
      local_c8 = (ulonglong ****)param_2;
      FUN_140016fc0(uVar29,local_a8);
      *(undefined4 *)(uVar29 + 0x20) = local_88;
      FUN_140016fc0(uVar29 + 0x28,local_80);
      ppppuVar20 = param_3[1];
      ppppuVar22 = *param_3;
      uVar28 = uVar27;
      local_c0 = uVar29;
      if (ppppuVar18 != ppppuVar20) {
        FUN_14007c690(*param_3,ppppuVar18,uVar27);
        ppppuVar20 = param_3[1];
        uVar28 = uVar29 + 0x48;
        ppppuVar22 = ppppuVar18;
        local_c0 = uVar27;
      }
      FUN_14007c690(ppppuVar22,ppppuVar20,uVar28);
      local_d0 = 0;
      FUN_14007d1c0(param_3,uVar27,pppppuVar23,param_2);
      FUN_14007d100(&local_d8);
      uVar27 = local_90;
    }
    else {
      FUN_140016fc0(ppppuVar18,local_a8);
      *(undefined4 *)(ppppuVar18 + 4) = local_88;
      FUN_140016fc0(ppppuVar18 + 5,local_80);
      param_3[1] = param_3[1] + 9;
      uVar27 = local_90;
    }
  }
  else {
    uVar27 = 0xf;
    if ((*(uint *)(ppppuVar21 + 7) & 0xff) == 7) {
      param_2 = (ulonglong *****)FUN_140086de0(ppppuVar21 + 6,&DAT_140473b68,&DAT_140473b6c);
      ppppuVar18 = (ulonglong ****)FUN_140086de0(ppppuVar21 + 6,"daytimeend","");
      lVar13 = FUN_140086de0(ppppuVar21 + 6,"preset","");
      if (*(char *)(param_2 + 1) == '\x04') {
        pauVar17 = (undefined1 (*) [16])FUN_140085cc0(param_2,&local_d8);
        if (&local_a8 != pauVar17) {
          local_a8 = *pauVar17;
          local_98 = *(longlong *)pauVar17[1];
          local_90 = *(ulonglong *)(pauVar17[1] + 8);
          *(undefined8 *)pauVar17[1] = 0;
          *(undefined8 *)(pauVar17[1] + 8) = 0xf;
          (*pauVar17)[0] = 0;
        }
        if (0xf < local_c0) {
          uVar27 = local_c0 + 1;
          pppppuVar23 = (ulonglong *****)local_d8;
          if (0xfff < uVar27) {
            pppppuVar23 = (ulonglong *****)local_d8[-1];
            if (0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)pppppuVar23)))
            goto LAB_1400765c9;
            uVar27 = local_c0 + 0x28;
          }
          thunk_FUN_14028af80(pppppuVar23,uVar27);
        }
        if (*(byte *)(ppppuVar18 + 1) - 1 < 3) {
          local_88 = FUN_140086220(ppppuVar18);
        }
        if (*(char *)(lVar13 + 8) == '\x04') {
          pauVar17 = (undefined1 (*) [16])FUN_140085cc0(lVar13,&local_d8);
          if (&local_80 != pauVar17) {
            local_80 = *pauVar17;
            local_70 = *(undefined8 *)pauVar17[1];
            local_68 = *(ulonglong *)(pauVar17[1] + 8);
            *(undefined8 *)pauVar17[1] = 0;
            *(undefined8 *)(pauVar17[1] + 8) = 0xf;
            (*pauVar17)[0] = 0;
          }
          if (0xf < local_c0) {
            uVar27 = local_c0 + 1;
            pppppuVar23 = (ulonglong *****)local_d8;
            if (0xfff < uVar27) {
              pppppuVar23 = (ulonglong *****)local_d8[-1];
              if (0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)pppppuVar23)))
              goto LAB_1400765c9;
              uVar27 = local_c0 + 0x28;
            }
            thunk_FUN_14028af80(pppppuVar23,uVar27);
          }
        }
        FUN_140077960(param_3,local_a8);
        uVar27 = local_90;
      }
    }
  }
  if (local_98 != 0) {
    ppppuVar18 = param_3[4];
    if (ppppuVar18 == param_3[5]) {
      lVar13 = (longlong)ppppuVar18 - (longlong)param_3[3];
      lVar13 = lVar13 / 0x12 + (lVar13 >> 0x3f);
      lVar13 = (lVar13 >> 2) - (lVar13 >> 0x3f);
      if (lVar13 == 0x38e38e38e38e38e) {
LAB_140076bb2:
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      uVar28 = ((longlong)param_3[5] - (longlong)param_3[3] >> 3) * -0x71c71c71c71c71c7;
      uVar27 = 0x38e38e38e38e38e - (uVar28 >> 1);
      if (uVar27 <= uVar28 && uVar28 - uVar27 != 0) {
LAB_140076bac:
                    /* WARNING: Subroutine does not return */
        FUN_140017370();
      }
      pppppuVar23 = (ulonglong *****)(lVar13 + 1);
      pppppuVar1 = (ulonglong *****)((uVar28 >> 1) + uVar28);
      param_2 = pppppuVar23;
      if (pppppuVar23 <= pppppuVar1) {
        param_2 = pppppuVar1;
      }
      if ((ulonglong *****)0x38e38e38e38e38e < param_2) goto LAB_140076bac;
      uVar27 = (longlong)param_2 * 0x48;
      if (uVar27 == 0) {
        uVar27 = 0;
      }
      else if (uVar27 < 0x1000) {
        uVar27 = FUN_14028af20();
      }
      else {
        if (uVar27 + 0x27 <= uVar27) goto LAB_140076bac;
        lVar14 = FUN_14028af20(uVar27 + 0x27);
        if (lVar14 == 0) goto LAB_1400765c9;
        uVar27 = lVar14 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar27 - 8) = lVar14;
      }
      uVar29 = uVar27 + lVar13 * 0x48;
      local_d8 = (ulonglong ****)(param_3 + 3);
      local_b8 = uVar29 + 0x48;
      local_c8 = (ulonglong ****)param_2;
      FUN_140016fc0(uVar29,local_a8);
      *(undefined4 *)(uVar29 + 0x20) = local_88;
      FUN_140016fc0(uVar29 + 0x28,local_80);
      ppppuVar20 = param_3[4];
      ppppuVar22 = param_3[3];
      uVar28 = uVar27;
      local_c0 = uVar29;
      if (ppppuVar18 != ppppuVar20) {
        FUN_14007c690(param_3[3],ppppuVar18,uVar27);
        ppppuVar20 = param_3[4];
        uVar28 = uVar29 + 0x48;
        ppppuVar22 = ppppuVar18;
        local_c0 = uVar27;
      }
      FUN_14007c690(ppppuVar22,ppppuVar20,uVar28);
      local_d0 = 0;
      FUN_14007d1c0(param_3 + 3,uVar27,pppppuVar23,param_2);
      FUN_14007d100(&local_d8);
      uVar27 = local_90;
    }
    else {
      FUN_140016fc0(ppppuVar18,local_a8);
      *(undefined4 *)(ppppuVar18 + 4) = local_88;
      FUN_140016fc0(ppppuVar18 + 5,local_80);
      param_3[4] = param_3[4] + 9;
      uVar27 = local_90;
    }
  }
  ppppuVar18 = (ulonglong ****)0x0;
  param_2 = param_3 + 3;
  if (0xf < local_68) {
    uVar28 = local_68 + 1;
    lVar13 = local_80._0_8_;
    if (0xfff < uVar28) {
      lVar13 = *(longlong *)(local_80._0_8_ + -8);
      if (0x1f < (local_80._0_8_ - lVar13) - 8U) goto LAB_1400765c9;
      uVar28 = local_68 + 0x28;
    }
    thunk_FUN_14028af80(lVar13,uVar28);
  }
  if (0xf < uVar27) {
    uVar28 = uVar27 + 1;
    lVar13 = local_a8._0_8_;
    if (0xfff < uVar28) {
      lVar13 = *(longlong *)(local_a8._0_8_ + -8);
      if (0x1f < (local_a8._0_8_ - lVar13) - 8U) goto LAB_1400765c9;
      uVar28 = uVar27 + 0x28;
    }
    thunk_FUN_14028af80(lVar13,uVar28);
  }
  ppppuVar18 = (ulonglong ****)ppppuVar21[2];
  cVar9 = (char)local_res8;
  if (*(char *)((longlong)ppppuVar18 + 0x19) == '\0') {
    cVar2 = *(char *)((longlong)*ppppuVar18 + 0x19);
    ppppuVar21 = ppppuVar18;
    while (cVar2 == '\0') {
      ppppuVar21 = (ulonglong ****)*ppppuVar21;
      cVar2 = *(char *)((longlong)*ppppuVar21 + 0x19);
    }
  }
  else {
    cVar2 = *(char *)((longlong)ppppuVar21[1] + 0x19);
    ppppuVar20 = (ulonglong ****)ppppuVar21[1];
    ppppuVar18 = ppppuVar21;
    while ((ppppuVar21 = ppppuVar20, cVar2 == '\0' && (ppppuVar18 == (ulonglong ****)ppppuVar21[2]))
          ) {
      cVar2 = *(char *)((longlong)ppppuVar21[1] + 0x19);
      ppppuVar20 = (ulonglong ****)ppppuVar21[1];
      ppppuVar18 = ppppuVar21;
    }
  }
  goto LAB_140075f0c;
}

