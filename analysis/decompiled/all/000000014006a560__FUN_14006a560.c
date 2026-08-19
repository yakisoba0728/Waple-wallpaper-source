// Function: FUN_14006a560
// Addr: 14006a560
// Size: 222 bytes


/* WARNING: Removing unreachable block (ram,0x00014006bc45) */
/* WARNING: Removing unreachable block (ram,0x00014006bb30) */
/* WARNING: Removing unreachable block (ram,0x00014006ba5c) */
/* WARNING: Removing unreachable block (ram,0x00014006baca) */
/* WARNING: Removing unreachable block (ram,0x00014006bb6b) */
/* WARNING: Removing unreachable block (ram,0x00014006bbe7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14006a560(ulonglong param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  byte *pbVar1;
  code *pcVar2;
  undefined1 *puVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 ***pppuVar13;
  undefined8 ****ppppuVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined8 *****pppppuVar19;
  uint uVar20;
  longlong *plVar21;
  undefined1 *puVar22;
  longlong *plVar23;
  byte bVar24;
  longlong *plVar25;
  longlong *unaff_R12;
  undefined8 *****unaff_R13;
  undefined8 *****pppppuVar26;
  longlong *plVar27;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  ulonglong local_res8;
  undefined8 uStackX_18;
  longlong *plStackX_20;
  undefined1 auStack_488 [8];
  undefined1 auStack_480 [48];
  undefined1 auStack_450 [32];
  longlong *aplStack_430 [2];
  longlong lStack_420;
  undefined8 ****ppppuStack_418;
  longlong lStack_410;
  longlong *plStack_408;
  longlong *plStack_400;
  longlong *plStack_3f0;
  undefined1 auStack_3e8 [32];
  longlong alStack_3c8 [2];
  undefined1 local_3b8 [16];
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined1 auStack_378 [104];
  undefined1 auStack_310 [200];
  undefined1 auStack_248 [352];
  undefined1 auStack_e8 [40];
  undefined1 auStack_c0 [16];
  undefined1 local_b0 [40];
  longlong alStack_88 [2];
  undefined1 auStack_78 [64];
  
  puVar22 = auStack_488;
  local_res8 = param_1 & 0xffffffff00000000;
  cVar4 = FUN_140019230(param_1,0x24);
  if ((cVar4 == '\0') && (*(char *)(param_2 + 8) == '\a')) {
    FUN_1400855f0(&DAT_1404e6448,param_2);
    puVar8 = (undefined4 *)func_0x0001400171a0(local_3b8,"profile");
    local_3a8 = *puVar8;
    uStack_3a4 = puVar8[1];
    uStack_3a0 = puVar8[2];
    uStack_39c = puVar8[3];
    uVar9 = FUN_140087710(&DAT_1404e6448,&local_3a8);
    func_0x000140085160(local_b0,uVar9);
    FUN_1400741a0(&DAT_1404e53b0,local_b0);
    puVar8 = (undefined4 *)func_0x0001400171a0(local_3b8,"layout");
    local_3a8 = *puVar8;
    uStack_3a4 = puVar8[1];
    uStack_3a0 = puVar8[2];
    uStack_39c = puVar8[3];
    uVar9 = FUN_140087710(&DAT_1404e6448,&local_3a8);
    cVar4 = FUN_140088950(uVar9);
    if (cVar4 == '\0') {
      iVar6 = 0;
    }
    else {
      puVar8 = (undefined4 *)func_0x0001400171a0(aplStack_430,"layout");
      local_3a8 = *puVar8;
      uStack_3a4 = puVar8[1];
      uStack_3a0 = puVar8[2];
      uStack_39c = puVar8[3];
      uVar9 = FUN_140087710(&DAT_1404e6448,&local_3a8);
      iVar6 = func_0x000140085fb0(uVar9);
    }
    if (iVar6 != DAT_1404e53b0) {
      DAT_1404e53b0 = iVar6;
      func_0x000140065650();
    }
    cVar4 = iVar6 == 2;
    for (plVar23 = (longlong *)*DAT_1404e5440; plVar23 != DAT_1404e5440;
        plVar23 = (longlong *)*plVar23) {
      if (((bool)cVar4 == false) &&
         (((*(byte *)((longlong)plVar23 + 0x53) & 2) == 0 ||
          (*(int *)((longlong)plVar23 + 0x54) != 2)))) {
        cVar4 = false;
      }
      else {
        cVar4 = true;
      }
    }
    cVar5 = func_0x0001400192a0();
    if (cVar4 != cVar5) {
      if (cVar4 == '\0') {
        DAT_1404e53b4 = DAT_1404e53b4 & 0xffefffff;
        FUN_140062f10();
      }
      else {
        FUN_140066790();
        cVar4 = FUN_140062de0();
        if (cVar4 == '\0') {
          DAT_1404e53b4 = DAT_1404e53b4 & 0xffefffff;
        }
        else {
          DAT_1404e53b4 = DAT_1404e53b4 | 0x100000;
        }
      }
    }
    puVar8 = (undefined4 *)func_0x0001400171a0(local_3b8,"selectedwallpapers");
    local_3a8 = *puVar8;
    uStack_3a4 = puVar8[1];
    uStack_3a0 = puVar8[2];
    uStack_39c = puVar8[3];
    uVar9 = FUN_140087710(&DAT_1404e6448,&local_3a8);
    uVar28 = func_0x000140085160(auStack_e8,uVar9);
    plVar23 = (longlong *)*DAT_1404e5400;
    if (plVar23 != DAT_1404e5400) {
      do {
        param_4 = FUN_1400325f0(uVar28,plVar23 + 2);
        lVar10 = func_0x000140011170(&DAT_1404e5438,alStack_88,plVar23 + 2);
        plVar27 = *(longlong **)(lVar10 + 8);
        if (((plVar27 == (longlong *)0x0) || (plVar27 == DAT_1404e5440)) ||
           ((*(byte *)((longlong)plVar27 + 0x53) & 1) != 0)) {
          if (plVar23[6] != 0) {
            uVar9 = func_0x0001400171e0(plVar23 + 2);
            func_0x000140061180(uVar9);
            FUN_140062db0(plVar23 + 6);
          }
          plVar27 = alStack_3c8;
code_r0x00014006ab9f:
          puVar12 = (undefined8 *)func_0x0001400771f0(&DAT_1404e53f8,plVar27,plVar23);
          plVar23 = (longlong *)*puVar12;
          uVar28 = extraout_XMM0_Da_00;
        }
        else {
          lVar10 = plVar23[6];
          uStackX_18 = lVar10;
          if (lVar10 != 0) {
            puVar8 = (undefined4 *)func_0x00014003ab10(plVar23 + 2,auStack_78);
            local_3a8 = *puVar8;
            uStack_3a4 = puVar8[1];
            uStack_3a0 = puVar8[2];
            uStack_39c = puVar8[3];
            cVar4 = FUN_140088410(auStack_e8,&local_3a8);
            if (cVar4 != '\0') {
              puVar8 = (undefined4 *)func_0x00014003ab10(plVar23 + 2,auStack_c0);
              local_3a8 = *puVar8;
              uStack_3a4 = puVar8[1];
              uStack_3a0 = puVar8[2];
              uStack_39c = puVar8[3];
              uVar9 = FUN_140087710(auStack_e8,&local_3a8);
              puVar8 = (undefined4 *)func_0x0001400171a0(auStack_378,"playlist");
              local_3a8 = *puVar8;
              uStack_3a4 = puVar8[1];
              uStack_3a0 = puVar8[2];
              uStack_39c = puVar8[3];
              lVar11 = FUN_140087710(uVar9,&local_3a8);
              func_0x0001400605e0(auStack_248);
              if (*(char *)(lVar11 + 8) == '\a') {
                func_0x000140075b60(&DAT_1404e53b0);
              }
              puVar8 = (undefined4 *)func_0x0001400171a0(auStack_450,&DAT_140473c38);
              local_3a8 = *puVar8;
              uStack_3a4 = puVar8[1];
              uStack_3a0 = puVar8[2];
              uStack_39c = puVar8[3];
              uVar9 = FUN_140087710(uVar9,&local_3a8);
              FUN_140085d90(uVar9,auStack_310);
                    /* WARNING: Subroutine does not return */
              FUN_140017090(auStack_3e8,lVar10 + 0xe0);
            }
            uVar9 = func_0x0001400171e0(plVar23 + 2);
            func_0x000140061180(uVar9);
            FUN_140062db0(&uStackX_18);
            plVar27 = &lStack_420;
            goto code_r0x00014006ab9f;
          }
          plVar23 = (longlong *)*plVar23;
          uVar28 = extraout_XMM0_Da;
        }
      } while (plVar23 != DAT_1404e5400);
    }
    bVar24 = ~(byte)(DAT_1404e53b4 >> 0xc);
    uVar20 = DAT_1404e53b4 >> 0xb;
    uStackX_18 = CONCAT44(uStackX_18._4_4_,CONCAT31((uint3)(DAT_1404e53b4 >> 0x14),bVar24)) &
                 0xffffffffffffff01;
    if ((((bVar24 & 1) == 0) ||
        (cVar4 = FUN_140019230(uVar28,0x4000), uVar28 = extraout_XMM0_Da_01, cVar4 == '\0')) ||
       (iVar6 = FUN_1402c11a0(PTR_s_le_gpu___disable_direct_composit_1404748b8_8_1404df670,
                              "wallpaperconfigscreensaver"), uVar28 = extraout_XMM0_Da_02,
       iVar6 != 0)) {
      if ((~(byte)uVar20 & 1) != 0) {
        uVar9 = FUN_140005fb0(auStack_3e8);
        uVar9 = FUN_140005df0(uVar9,"bin/playliststate.bin");
                    /* WARNING: Subroutine does not return */
        FUN_1400166d0(auStack_310,uVar9);
      }
    }
    else {
      uStackX_18 = uStackX_18 & 0xffffffffffffff00;
    }
    aplStack_430[0] = DAT_1404e5440;
    plVar23 = (longlong *)*DAT_1404e5440;
    plVar27 = DAT_1404e5440;
    if (plVar23 != DAT_1404e5440) {
      do {
        plVar17 = plVar23 + 2;
        plVar21 = (longlong *)plVar23[4];
        ppppuStack_418 = (undefined8 *****)0x0;
        lStack_410 = 0;
        plStack_408 = (longlong *)0x0;
        plStack_400 = (longlong *)0x0;
        if (0xf < (ulonglong)plVar23[5]) {
          plVar17 = (longlong *)*plVar17;
        }
        if ((longlong *)0x7fffffffffffffff < plVar21) {
                    /* WARNING: Subroutine does not return */
          FUN_1400173b0();
        }
        if ((longlong *)0xf < plVar21) {
          plVar25 = (longlong *)((ulonglong)plVar21 | 0xf);
          if (plVar25 < (longlong *)0x8000000000000000) {
            if (plVar25 < (longlong *)0x16) {
              plVar25 = (longlong *)0x16;
            }
            plVar15 = (longlong *)((longlong)plVar25 + 1);
            ppppuVar14 = (undefined8 ****)0x0;
            if (plVar15 == (longlong *)0x0) goto code_r0x00014006ba1d;
            if (plVar15 < (longlong *)0x1000) {
              ppppuVar14 = (undefined8 ****)func_0x00014028aff0(plVar15);
              goto code_r0x00014006ba1d;
            }
            plVar16 = plVar25 + 5;
            if (plVar16 <= plVar15) {
                    /* WARNING: Subroutine does not return */
              FUN_140017440();
            }
          }
          else {
            plVar25 = (longlong *)0x7fffffffffffffff;
            plVar16 = (longlong *)0x8000000000000027;
          }
          pppuVar13 = (undefined8 ***)func_0x00014028aff0(plVar16);
          if (pppuVar13 == (undefined8 ***)0x0) {
code_r0x00014006c216:
            iVar6 = (int)plVar25;
            lVar10 = 5;
            pcVar2 = (code *)swi(0x29);
            uVar28 = (*pcVar2)();
            puVar22 = auStack_480;
            plVar25 = plVar17;
            goto code_r0x00014006c220;
          }
          ppppuVar14 = (undefined8 ****)((longlong)pppuVar13 + 0x27U & 0xffffffffffffffe0);
          ppppuVar14[-1] = pppuVar13;
code_r0x00014006ba1d:
          ppppuStack_418 = ppppuVar14;
          plStack_408 = plVar21;
          plStack_400 = plVar25;
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(ppppuVar14,plVar17,(longlong)plVar21 + 1);
        }
        unaff_R12 = (longlong *)0xf;
        plStack_408 = plVar21;
        plStack_400 = (longlong *)0xf;
        uVar28 = (undefined4)*plVar17;
        pppppuVar26 = (undefined8 *****)*plVar17;
        ppppuStack_418 = pppppuVar26;
        pppppuVar19 = (undefined8 *****)ppppuStack_418;
        lStack_410 = plVar17[1];
        uVar18 = 0xcbf29ce484222325;
        plVar17 = (longlong *)0x0;
        if (plVar21 != (longlong *)0x0) {
          do {
            pbVar1 = (byte *)((longlong)plVar17 + (longlong)&ppppuStack_418);
            plVar17 = (longlong *)((longlong)plVar17 + 1);
            uVar18 = (uVar18 ^ *pbVar1) * 0x100000001b3;
            plVar27 = aplStack_430[0];
          } while (plVar17 < plVar21);
        }
        plVar17 = *(longlong **)(DAT_1404e5410 + 8 + (uVar18 & _DAT_1404e5428) * 0x10);
        if (plVar17 != DAT_1404e5400) {
          plVar25 = *(longlong **)(DAT_1404e5410 + (uVar18 & _DAT_1404e5428) * 0x10);
          while( true ) {
            plVar15 = plVar17 + 2;
            if (0xf < (ulonglong)plVar17[5]) {
              plVar15 = (longlong *)*plVar15;
            }
            if ((plVar21 == (longlong *)plVar17[4]) &&
               ((plVar21 == (longlong *)0x0 ||
                (iVar6 = func_0x0001404210c0(&ppppuStack_418,plVar15,plVar21),
                uVar28 = extraout_XMM0_Da_03, iVar6 == 0)))) goto code_r0x00014006bb08;
            if (plVar17 == plVar25) break;
            plVar17 = (longlong *)plVar17[1];
          }
        }
        plVar17 = (longlong *)0x0;
code_r0x00014006bb08:
        plVar25 = DAT_1404e5400;
        if ((((plVar17 == (longlong *)0x0) || (plVar25 = plVar17, plVar17 == DAT_1404e5400)) ||
            (plVar17[6] == 0)) || ((char)uStackX_18 != '\0')) {
          uVar18 = 0xcbf29ce484222325;
          plVar17 = (longlong *)0x0;
          if (plVar21 != (longlong *)0x0) {
            do {
              pbVar1 = (byte *)((longlong)plVar17 + (longlong)&ppppuStack_418);
              plVar17 = (longlong *)((longlong)plVar17 + 1);
              uVar18 = (uVar18 ^ *pbVar1) * 0x100000001b3;
              plVar27 = aplStack_430[0];
            } while (plVar17 < plVar21);
          }
          plVar17 = *(longlong **)(lRam00000001404e5450 + 8 + (uVar18 & _DAT_1404e5468) * 0x10);
          plStackX_20 = plVar25;
          if (plVar17 != DAT_1404e5440) {
            plVar15 = *(longlong **)(lRam00000001404e5450 + (uVar18 & _DAT_1404e5468) * 0x10);
            plStack_3f0 = plVar15;
            while( true ) {
              plVar16 = plVar17 + 2;
              if (0xf < (ulonglong)plVar17[5]) {
                plVar16 = (longlong *)*plVar16;
              }
              if ((plVar21 == (longlong *)plVar17[4]) &&
                 ((plVar21 == (longlong *)0x0 ||
                  (iVar6 = func_0x0001404210c0(&ppppuStack_418,plVar16,plVar21),
                  plVar15 = plStack_3f0, uVar28 = extraout_XMM0_Da_04, iVar6 == 0))))
              goto code_r0x00014006bc14;
              if (plVar17 == plVar15) break;
              plVar17 = (longlong *)plVar17[1];
            }
          }
          plVar17 = (longlong *)0x0;
code_r0x00014006bc14:
          pppppuVar26 = pppppuVar19;
          if (((plVar17 != (longlong *)0x0) && (plVar17 != DAT_1404e5440)) &&
             (((*(byte *)((longlong)plVar17 + 0x53) & 1) == 0 &&
              (lVar10 = func_0x000140087560(auStack_e8,&ppppuStack_418,
                                            (longlong)plVar21 + (longlong)&ppppuStack_418),
              unaff_R12 = plStack_400, pppppuVar26 = (undefined8 *****)ppppuStack_418,
              uVar28 = extraout_XMM0_Da_05, lVar10 != 0)))) {
            pppppuVar19 = &ppppuStack_418;
            if (0xf < plStack_400) {
              pppppuVar19 = (undefined8 *****)ppppuStack_418;
            }
                    /* WARNING: Subroutine does not return */
            FUN_140086eb0(auStack_e8,pppppuVar19,
                          (undefined1 *)((longlong)plStack_408 + (longlong)pppppuVar19));
          }
          pppppuVar19 = pppppuVar26;
          if (0xf < unaff_R12) {
            uVar18 = (longlong)unaff_R12 + 1;
            if (0xfff < uVar18) {
              pppppuVar19 = (undefined8 *****)pppppuVar26[-1];
              unaff_R13 = (undefined8 *****)((longlong)pppppuVar26 + (-8 - (longlong)pppppuVar19));
              if ((undefined8 *****)0x1f < unaff_R13) goto code_r0x00014006c216;
              uVar18 = (longlong)unaff_R12 + 0x28;
            }
            uVar28 = func_0x00014028b040(pppppuVar19,uVar18);
          }
        }
        plVar23 = (longlong *)*plVar23;
        unaff_R13 = pppppuVar19;
      } while (plVar23 != plVar27);
    }
    DAT_1404e53b4 = DAT_1404e53b4 | 0x1800;
    if (cRam00000001404e6330 != '\0') {
      FUN_14006e190();
      uVar28 = FUN_14006e7a0();
    }
    plVar21 = (longlong *)*DAT_1404e5400;
    puVar3 = auStack_488;
    plVar23 = DAT_1404e5400;
    if (plVar21 != DAT_1404e5400) {
      do {
        puVar22 = puVar3;
        lVar10 = plVar21[6];
        if (lVar10 != 0) {
          unaff_R12 = (longlong *)plVar21[7];
          if (((unaff_R12 != (longlong *)plVar21[8]) && (*(int *)((longlong)plVar21 + 0x6c) == 1))
             && (plVar27 = (longlong *)
                           ((plVar21[8] - (longlong)unaff_R12 >> 3) * -0x71c71c71c71c71c7),
                0 < (int)plVar27)) {
            param_4 = *(ulonglong *)(lVar10 + 0xf0);
            plVar25 = (longlong *)(lVar10 + 0xe0);
            unaff_R13 = *(undefined8 ******)(lVar10 + 0xf8);
            iVar6 = 0;
            local_res8 = param_4;
            do {
              lVar10 = (longlong)unaff_R12 + (longlong)iVar6 * 0x48;
              plVar17 = plVar25;
              if (&DAT_00000010 <= unaff_R13) {
                plVar17 = (longlong *)*plVar25;
              }
code_r0x00014006c220:
              if (*(ulonglong *)(lVar10 + 0x10) == param_4) {
                if (*(ulonglong *)(lVar10 + 0x10) != 0) {
                  *(undefined8 *)(puVar22 + -8) = 0x14006c23d;
                  iVar7 = func_0x0001404210c0(uVar28,plVar17);
                  param_4 = local_res8;
                  uVar28 = extraout_XMM0_Da_06;
                  if (iVar7 != 0) goto code_r0x00014006c248;
                }
                *(int *)(plVar21 + 0xf) = iVar6 + 1;
                break;
              }
code_r0x00014006c248:
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)plVar27);
          }
        }
        plVar21 = (longlong *)*plVar21;
        puVar3 = puVar22;
      } while (plVar21 != plVar23);
    }
    DAT_1404e53b4 = DAT_1404e53b4 | 0x200000;
    *(undefined8 *)(puVar22 + -8) = 0x14006c27e;
    FUN_14006a100(uVar28,1);
    *(undefined8 *)(puVar22 + -8) = 0x14006c28a;
    func_0x000140085510(auStack_e8);
    *(undefined8 *)(puVar22 + -8) = 0x14006c296;
    func_0x000140085510(local_b0);
  }
  return;
}

