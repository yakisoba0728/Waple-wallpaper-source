// Function: FUN_1401e63b0
// Addr: 1401e63b0
// Size: 1476 bytes


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1401e63b0(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 ******ppppppuVar13;
  undefined8 *******pppppppuVar14;
  double *pdVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined8 *******pppppppuVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong *plVar24;
  ulonglong *puVar25;
  bool bVar26;
  int local_b4;
  undefined8 *******local_b0;
  ulonglong uStack_a8;
  ulonglong local_a0;
  ulonglong local_98;
  undefined8 *******local_90;
  undefined8 uStack_88;
  longlong local_80;
  ulonglong local_78;
  ulonglong *local_70;
  ulonglong *local_68;
  ulonglong *local_60;
  ulonglong *local_58;
  longlong local_50;
  
  if ((char)param_1[1] != '\x06') {
    return 1;
  }
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    plVar23 = (longlong *)0x0;
  }
  else {
    plVar23 = *(longlong **)*puVar3;
  }
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 == (undefined8 *)0x0) {
    plVar24 = (longlong *)0x0;
  }
  else {
    plVar24 = (longlong *)*puVar4;
  }
  do {
    bVar26 = puVar4 == (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      bVar26 = plVar23 == plVar24;
    }
    if (bVar26) {
      return 1;
    }
    if ((char)plVar23[7] == '\a') {
      bVar26 = true;
      FUN_140088360(plVar23 + 6,&local_60);
      local_70 = local_60;
      local_68 = local_60;
      bVar7 = bVar26;
      if (local_60 != local_58) {
        do {
          uVar22 = local_70[2];
          local_b0 = (undefined8 *******)0x0;
          uStack_a8 = 0;
          local_a0 = 0;
          local_98 = 0;
          puVar25 = local_70;
          if (0xf < local_70[3]) {
            puVar25 = (ulonglong *)*local_70;
          }
          if (0x7fffffffffffffff < uVar22) {
                    /* WARNING: Subroutine does not return */
            FUN_1400172e0();
          }
          if (uVar22 < 0x10) {
            local_98 = 0xf;
            local_b0 = (undefined8 *******)*puVar25;
            uStack_a8 = puVar25[1];
            local_a0 = uVar22;
          }
          else {
            uVar21 = uVar22 | 0xf;
            if (uVar21 < 0x8000000000000000) {
              if (uVar21 < 0x16) {
                uVar21 = 0x16;
              }
              uVar1 = uVar21 + 1;
              pppppppuVar14 = (undefined8 *******)0x0;
              if (uVar1 != 0) {
                if (0xfff < uVar1) {
                  uVar18 = uVar21 + 0x28;
                  if (uVar18 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                    FUN_140017370();
                  }
                  goto LAB_1401e64fc;
                }
                pppppppuVar14 = (undefined8 *******)FUN_14028af20(uVar1);
              }
            }
            else {
              uVar21 = 0x7fffffffffffffff;
              uVar18 = 0x8000000000000027;
LAB_1401e64fc:
              ppppppuVar13 = (undefined8 ******)FUN_14028af20(uVar18);
              if (ppppppuVar13 == (undefined8 ******)0x0) goto LAB_1401e6949;
              pppppppuVar14 =
                   (undefined8 *******)((longlong)ppppppuVar13 + 0x27U & 0xffffffffffffffe0);
              pppppppuVar14[-1] = ppppppuVar13;
            }
            local_b0 = pppppppuVar14;
            local_a0 = uVar22;
            local_98 = uVar21;
            FUN_1404210f0(pppppppuVar14,puVar25,uVar22 + 1);
          }
          local_b4 = 0;
          if (*(char *)(param_2 + 8) == '\a') {
            pppppppuVar14 = &local_b0;
            if (0xf < local_98) {
              pppppppuVar14 = local_b0;
            }
            pdVar15 = (double *)
                      FUN_140087490(param_2,pppppppuVar14,local_a0 + (longlong)pppppppuVar14);
            if (pdVar15 == (double *)0x0) {
              pdVar15 = (double *)FUN_140084ac0();
            }
            uVar10 = *(uint *)(pdVar15 + 1) & 0xff;
            if ((uVar10 == 1) || (uVar10 == 2)) {
              local_b4 = *(int *)pdVar15;
            }
            else if (uVar10 == 3) {
              local_b4 = (int)*pdVar15;
            }
          }
          pppppppuVar14 = &local_b0;
          if (0xf < local_98) {
            pppppppuVar14 = local_b0;
          }
          pdVar15 = (double *)
                    FUN_140087490(plVar23 + 6,pppppppuVar14,local_a0 + (longlong)pppppppuVar14);
          if (pdVar15 == (double *)0x0) {
            pdVar15 = (double *)FUN_140084ac0();
          }
          uVar10 = *(uint *)(pdVar15 + 1) & 0xff;
          bVar26 = bVar7;
          if ((uVar10 == 1) || (uVar10 == 2)) {
            iVar11 = *(int *)pdVar15;
LAB_1401e68bd:
            bVar26 = false;
            if (iVar11 == local_b4) {
              bVar26 = bVar7;
            }
          }
          else {
            if (uVar10 == 3) {
              iVar11 = (int)*pdVar15;
              goto LAB_1401e68bd;
            }
            if (uVar10 == 7) {
              lVar16 = FUN_140087490(pdVar15,"value","");
              if (lVar16 == 0) {
                lVar16 = FUN_140084ac0();
              }
              lVar17 = FUN_140087490(pdVar15,&DAT_1404906d8,&DAT_1404906da);
              if (lVar17 == 0) {
                lVar17 = FUN_140084ac0();
              }
              if (*(char *)(lVar17 + 8) == '\x04') {
                FUN_140085cc0(lVar17,&local_90);
              }
              else {
                local_80 = 0;
                uStack_88 = 0;
                local_90 = (undefined8 *******)0x0;
                local_78 = 0xf;
              }
              if (*(byte *)(lVar16 + 8) - 1 < 3) {
                iVar11 = FUN_140085ee0(lVar16);
              }
              else {
                iVar11 = 0;
              }
              uVar22 = local_78;
              lVar16 = local_80;
              pppppppuVar14 = local_90;
              pppppppuVar19 = &local_90;
              if (0xf < local_78) {
                pppppppuVar19 = local_90;
              }
              if ((local_80 == 2) && (iVar12 = memcmp(pppppppuVar19,&DAT_1404906dc,2), iVar12 == 0))
              {
                bVar26 = false;
                if (iVar11 <= local_b4) {
                  bVar26 = bVar7;
                }
              }
              else {
                pppppppuVar19 = &local_90;
                if (0xf < uVar22) {
                  pppppppuVar19 = pppppppuVar14;
                }
                if ((lVar16 == 2) && (iVar12 = memcmp(pppppppuVar19,&DAT_1404906e0,2), iVar12 == 0))
                {
                  bVar26 = false;
                  if (iVar11 < local_b4) {
                    bVar26 = bVar7;
                  }
                }
                else {
                  pppppppuVar19 = &local_90;
                  if (0xf < uVar22) {
                    pppppppuVar19 = pppppppuVar14;
                  }
                  if ((lVar16 == 2) &&
                     (iVar12 = memcmp(pppppppuVar19,&DAT_140490748,2), iVar12 == 0)) {
                    bVar26 = false;
                    if (local_b4 <= iVar11) {
                      bVar26 = bVar7;
                    }
                  }
                  else {
                    pppppppuVar19 = &local_90;
                    if (0xf < uVar22) {
                      pppppppuVar19 = pppppppuVar14;
                    }
                    if ((lVar16 == 2) &&
                       (iVar12 = memcmp(pppppppuVar19,&DAT_14049074c,2), iVar12 == 0)) {
                      bVar26 = false;
                      if (local_b4 < iVar11) {
                        bVar26 = bVar7;
                      }
                    }
                    else if (local_b4 != iVar11) {
                      bVar26 = false;
                    }
                  }
                }
              }
              if (0xf < uVar22) {
                uVar21 = uVar22 + 1;
                pppppppuVar19 = pppppppuVar14;
                if (0xfff < uVar21) {
                  pppppppuVar19 = (undefined8 *******)pppppppuVar14[-1];
                  if (0x1f < (ulonglong)((longlong)pppppppuVar14 + (-8 - (longlong)pppppppuVar19)))
                  goto LAB_1401e6949;
                  uVar21 = uVar22 + 0x28;
                }
                thunk_FUN_14028af80(pppppppuVar19,uVar21);
              }
            }
          }
          if (0xf < local_98) {
            uVar22 = local_98 + 1;
            pppppppuVar14 = local_b0;
            if (0xfff < uVar22) {
              pppppppuVar14 = (undefined8 *******)local_b0[-1];
              if (0x1f < (ulonglong)((longlong)local_b0 + (-8 - (longlong)pppppppuVar14)))
              goto LAB_1401e6949;
              uVar22 = local_98 + 0x28;
            }
            thunk_FUN_14028af80(pppppppuVar14,uVar22);
          }
          local_70 = local_70 + 4;
          bVar7 = bVar26;
        } while (local_70 != local_58);
      }
      puVar8 = local_58;
      puVar20 = local_68;
      puVar25 = local_68;
      if (local_68 != (ulonglong *)0x0) {
        for (; puVar25 != puVar8; puVar25 = puVar25 + 4) {
          FUN_140017240(puVar25);
        }
        uVar22 = local_50 - (longlong)puVar20 & 0xffffffffffffffe0;
        if (0xfff < uVar22) {
          if (0x1f < (ulonglong)((longlong)puVar20 + (-8 - (longlong)puVar20[-1]))) {
LAB_1401e6949:
            pcVar6 = (code *)swi(0x29);
            (*pcVar6)(5);
            return 0;
          }
          uVar22 = uVar22 + 0x27;
          puVar20 = (ulonglong *)puVar20[-1];
        }
        thunk_FUN_14028af80(puVar20,uVar22);
      }
      if (!bVar26) {
        return 0;
      }
    }
    plVar5 = (longlong *)plVar23[2];
    if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
      cVar2 = *(char *)(*plVar5 + 0x19);
      plVar23 = plVar5;
      while (cVar2 == '\0') {
        plVar23 = (longlong *)*plVar23;
        cVar2 = *(char *)(*plVar23 + 0x19);
      }
    }
    else {
      cVar2 = *(char *)(plVar23[1] + 0x19);
      plVar9 = (longlong *)plVar23[1];
      plVar5 = plVar23;
      while ((plVar23 = plVar9, cVar2 == '\0' && (plVar5 == (longlong *)plVar23[2]))) {
        cVar2 = *(char *)(plVar23[1] + 0x19);
        plVar9 = (longlong *)plVar23[1];
        plVar5 = plVar23;
      }
    }
  } while( true );
}

