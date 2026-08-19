// Function: FUN_1401de820
// Addr: 1401de820
// Size: 297 bytes


undefined8 FUN_1401de820(longlong param_1,longlong param_2,char param_3,int param_4)

{
  ushort *puVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  bool bVar17;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined1 auStack_188 [352];
  
  lVar3 = *(longlong *)(param_1 + 0x180);
  if ((lVar3 == param_2) && ((param_2 == 0 || (*(int *)(param_1 + 400) == param_4)))) {
UNWIND_INFO_1401df2e8_UnwindCodes_87__OffsetInProlog:
    uVar16 = 1;
  }
  else {
    if (lVar3 != 0) {
      lVar5 = func_0x00014028f030(*(undefined8 *)(lVar3 + 0x198),*(undefined8 *)(lVar3 + 0x1a0),
                                  param_1);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x180) + 0x1a0);
      if (lVar5 != lVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(lVar5,lVar5 + 8,lVar3 - (lVar5 + 8));
      }
    }
    uVar13 = 0;
    lVar3 = param_2;
    if (param_1 != param_2) {
      while (uVar12 = (uint)uVar13, lVar3 != 0) {
        uVar8 = uVar12 + 1;
        if ((*(byte *)(lVar3 + 0x120) & 4) == 0) {
          uVar8 = uVar12;
        }
        uVar13 = (ulonglong)uVar8;
        lVar3 = *(longlong *)(lVar3 + 0x180);
      }
      bVar17 = (*(byte *)(param_1 + 0x120) & 4) != 0;
      puVar7 = *(undefined8 **)(param_1 + 0x1a0);
      puVar10 = *(undefined8 **)(param_1 + 0x198);
      uVar9 = (ulonglong)bVar17;
      uVar8 = (uint)bVar17;
      uVar15 = uVar9;
      if (puVar10 != puVar7) {
        do {
          iVar4 = func_0x0001401ddc20(*puVar10);
          uVar12 = (uint)uVar13;
          uVar8 = iVar4 + (int)uVar15;
          iVar4 = (int)uVar9;
          uVar9 = uVar9 & 0xffffffff;
          if (iVar4 < (int)uVar8) {
            uVar9 = (ulonglong)uVar8;
          }
          uVar8 = (uint)uVar9;
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar7);
      }
      if ((int)(uVar8 + uVar12) < 4) {
        if (param_3 != '\0') {
          if (param_2 == 0) {
            uStack_294 = 0;
            uStack_290 = 0;
            uStack_28c = 0;
            uStack_288 = 0;
            uStack_280 = 0;
            uStack_27c = 0;
            uStack_278 = 0;
            uStack_274 = 0;
            uStack_26c = 0;
            uStack_268 = 0;
            uStack_264 = 0;
            uStack_260 = 0;
            uStack_298 = DAT_1404927d4;
            uStack_284 = DAT_1404927d4;
            uStack_270 = DAT_1404927d4;
            uStack_25c = DAT_1404927d4;
          }
          else {
            puVar6 = (undefined4 *)func_0x000140185170(param_2);
            uStack_294 = puVar6[1];
            uStack_290 = puVar6[2];
            uStack_28c = puVar6[3];
            uStack_288 = puVar6[4];
            uStack_280 = puVar6[6];
            uStack_27c = puVar6[7];
            uStack_278 = puVar6[8];
            uStack_274 = puVar6[9];
            uStack_26c = puVar6[0xb];
            uStack_268 = puVar6[0xc];
            uStack_264 = puVar6[0xd];
            uStack_260 = puVar6[0xe];
            uStack_298 = *puVar6;
            uStack_284 = puVar6[5];
            uStack_270 = puVar6[10];
            uStack_25c = puVar6[0xf];
          }
          puVar7 = (undefined8 *)func_0x000140185170(param_1);
          uStack_248 = *puVar7;
          uStack_240 = puVar7[1];
          uStack_238 = puVar7[2];
          uStack_230 = puVar7[3];
          uStack_228 = *(undefined4 *)(puVar7 + 4);
          uStack_224 = *(undefined4 *)((longlong)puVar7 + 0x24);
          uStack_220 = *(undefined4 *)(puVar7 + 5);
          uStack_21c = *(undefined4 *)((longlong)puVar7 + 0x2c);
          uStack_218 = *(undefined4 *)(puVar7 + 6);
          uStack_214 = *(undefined4 *)((longlong)puVar7 + 0x34);
          uStack_210 = *(undefined4 *)(puVar7 + 7);
          uStack_20c = *(undefined4 *)((longlong)puVar7 + 0x3c);
                    /* WARNING: Subroutine does not return */
          FUN_14005f800(auStack_188,&uStack_298);
        }
        *(undefined4 *)(param_1 + 0xd0) = 0;
        *(longlong *)(param_1 + 0x180) = param_2;
        *(int *)(param_1 + 400) = param_4;
        if (param_2 == 0) {
          *(undefined8 *)(param_1 + 0x188) = 0;
          FUN_1401dda70(param_1);
        }
        else {
          *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 8);
          FUN_1401ddb30();
        }
        goto UNWIND_INFO_1401df2e8_UnwindCodes_87__OffsetInProlog;
      }
    }
    uVar2 = *(ushort *)(param_1 + 0x120);
    uVar16 = 0xfffd;
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined4 *)(param_1 + 400) = 0xffffffff;
    *(ushort *)(param_1 + 0x120) = uVar2 & 0xfffd;
    *(undefined8 *)(param_1 + 0x188) = 0;
    plVar11 = *(longlong **)(param_1 + 0x198);
    plVar14 = *(longlong **)(param_1 + 0x1a0);
    if (plVar11 != plVar14) {
      if ((uVar2 & 4) != 0) {
        do {
          lVar3 = *plVar11;
          puVar1 = (ushort *)(lVar3 + 0x120);
          *puVar1 = *puVar1 | 2;
          FUN_1401dd9d0(lVar3,1);
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar14);
        return 0;
      }
      do {
        lVar3 = *plVar11;
        uVar2 = *(ushort *)(lVar3 + 0x120);
        *(ushort *)(lVar3 + 0x120) = uVar2 & (ushort)uVar16;
        FUN_1401dd9d0(lVar3,CONCAT11((char)(uVar2 >> 8),(uVar2 & 4) != 0));
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar14);
    }
    uVar16 = 0;
  }
  return uVar16;
}

