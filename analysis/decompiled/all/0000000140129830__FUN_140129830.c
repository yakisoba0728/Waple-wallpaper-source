// Function: FUN_140129830
// Addr: 140129830
// Size: 2619 bytes


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140129830(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  LPWSTR ******pppppppWVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  LPWSTR ******pppppppWVar7;
  LPWSTR ******pppppppWVar8;
  LPWSTR *****ppppppWVar9;
  undefined8 *puVar10;
  size_t sVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  CHAR *pCVar16;
  LPWSTR ******_Buf1;
  LPWSTR *****ppppppWVar17;
  LPWSTR ******pppppppWVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  CHAR *pCVar23;
  undefined1 auStackY_1a8 [8];
  undefined1 auStackY_1a0 [24];
  CHAR local_178;
  undefined7 uStack_177;
  LPWSTR *****local_168;
  ulonglong local_160;
  LPWSTR ******local_158;
  LPWSTR *****ppppppWStack_150;
  ulonglong local_148;
  ulonglong uStack_140;
  LPWSTR ******local_138;
  LPWSTR *****ppppppWStack_130;
  ulonglong local_128;
  ulonglong uStack_120;
  longlong local_118;
  char local_108 [208];
  
  puVar22 = auStackY_1a8;
  FUN_14010c650();
  FUN_140104b60(param_2,0x24);
  lVar6 = FUN_140087490(&DAT_1404e7ed0,"schemecolor","");
  if (lVar6 != 0) {
    return param_2;
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e92ec) &&
     (FUN_14028b140(&DAT_1404e92ec), DAT_1404e92ec == -1)) {
    DAT_1404e92f8 = (LPWSTR ******)FUN_14028af20(0x38);
    *DAT_1404e92f8 = (LPWSTR *****)DAT_1404e92f8;
    DAT_1404e92f8[1] = (LPWSTR *****)DAT_1404e92f8;
    DAT_1404e9308 = 0;
    _DAT_1404e9310 = 0;
    uRam00000001404e9318 = 0;
    _DAT_1404e9320 = 7;
    DAT_1404e9328 = 8;
    _DAT_1404e92f0 = 1.0;
    FUN_140011f50(&DAT_1404e9308,0x10,DAT_1404e92f8);
    FUN_14028b410(FUN_140424a30);
    _Init_thread_footer(&DAT_1404e92ec);
  }
  iVar5 = FUN_140290d80(&DAT_1404dfc50);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (DAT_1404dfc9c == 0x7fffffff) {
    DAT_1404dfc9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  FUN_140016fc0(&local_178);
  uVar19 = local_160;
  ppppppWVar9 = local_168;
  pCVar23 = (CHAR *)CONCAT71(uStack_177,local_178);
  uVar21 = 0xcbf29ce484222325;
  pCVar16 = &local_178;
  if (0xf < local_160) {
    pCVar16 = pCVar23;
  }
  uVar15 = 0xcbf29ce484222325;
  ppppppWVar17 = (LPWSTR *****)0x0;
  if (local_168 != (LPWSTR *****)0x0) {
    do {
      pbVar1 = (byte *)(pCVar16 + (longlong)ppppppWVar17);
      ppppppWVar17 = (LPWSTR *****)((longlong)ppppppWVar17 + 1);
      uVar15 = (uVar15 ^ *pbVar1) * 0x100000001b3;
    } while (ppppppWVar17 < local_168);
  }
  pppppppWVar8 = *(LPWSTR *******)(DAT_1404e9308 + 8 + (uVar15 & _DAT_1404e9320) * 0x10);
  if (pppppppWVar8 != DAT_1404e92f8) {
    pppppppWVar7 = *(LPWSTR *******)(DAT_1404e9308 + (uVar15 & _DAT_1404e9320) * 0x10);
    while( true ) {
      pppppppWVar18 = pppppppWVar8 + 2;
      if ((LPWSTR *****)0xf < pppppppWVar8[5]) {
        pppppppWVar18 = (LPWSTR ******)*pppppppWVar18;
      }
      pCVar16 = &local_178;
      if (0xf < uVar19) {
        pCVar16 = pCVar23;
      }
      if ((ppppppWVar9 == pppppppWVar8[4]) &&
         ((ppppppWVar9 == (LPWSTR *****)0x0 ||
          (iVar5 = memcmp(pCVar16,pppppppWVar18,(size_t)ppppppWVar9), iVar5 == 0))))
      goto LAB_1401299af;
      if (pppppppWVar8 == pppppppWVar7) break;
      pppppppWVar8 = (LPWSTR ******)pppppppWVar8[1];
    }
  }
  pppppppWVar8 = (LPWSTR ******)0x0;
LAB_1401299af:
  pppppppWVar7 = DAT_1404e92f8;
  if (pppppppWVar8 != (LPWSTR ******)0x0) {
    pppppppWVar7 = pppppppWVar8;
  }
  if (pppppppWVar7 == DAT_1404e92f8) {
    plVar14 = *(longlong **)(param_1 + 0x98);
    if (plVar14 == (longlong *)0x0) {
      pCVar16 = &local_178;
      if (0xf < uVar19) {
        pCVar16 = pCVar23;
      }
      ppppppWVar17 = (LPWSTR *****)0x0;
      if (ppppppWVar9 != (LPWSTR *****)0x0) {
        do {
          pbVar1 = (byte *)(pCVar16 + (longlong)ppppppWVar17);
          ppppppWVar17 = (LPWSTR *****)((longlong)ppppppWVar17 + 1);
          uVar21 = (uVar21 ^ *pbVar1) * 0x100000001b3;
        } while (ppppppWVar17 < ppppppWVar9);
      }
      FUN_1400110a0(&DAT_1404e92f0,&local_138,&local_178,uVar21);
      ppppppWVar9 = ppppppWStack_130;
      if (ppppppWStack_130 != (LPWSTR *****)0x0) goto LAB_140129f29;
      if (DAT_1404e9300 == 0x492492492492492) goto LAB_14012a262;
      ppppppWVar9 = (LPWSTR *****)FUN_14028af20(0x38);
      FUN_140016fc0(ppppppWVar9 + 2,&local_178);
      *(undefined4 *)(ppppppWVar9 + 6) = 0;
      if (_DAT_1404e92f0 < (float)(DAT_1404e9300 + 1) / (float)DAT_1404e9328) {
        FUN_140039940(&DAT_1404e92f0);
        puVar10 = (undefined8 *)FUN_1400110a0(&DAT_1404e92f0,&local_138,ppppppWVar9 + 2,uVar21);
        local_138 = (LPWSTR ******)*puVar10;
        ppppppWStack_130 = (LPWSTR *****)puVar10[1];
      }
      DAT_1404e9300 = DAT_1404e9300 + 1;
      ppppppWVar17 = local_138[1];
      *ppppppWVar9 = (LPWSTR ****)local_138;
      ppppppWVar9[1] = (LPWSTR ****)ppppppWVar17;
      *ppppppWVar17 = (LPWSTR ****)ppppppWVar9;
      local_138[1] = ppppppWVar9;
      lVar6 = DAT_1404e9308;
      uVar21 = uVar21 & _DAT_1404e9320;
      pppppppWVar8 = *(LPWSTR *******)(DAT_1404e9308 + uVar21 * 0x10);
      if (pppppppWVar8 == DAT_1404e92f8) {
        *(LPWSTR ******)(DAT_1404e9308 + uVar21 * 0x10) = ppppppWVar9;
LAB_140129f24:
        *(LPWSTR ******)(lVar6 + 8 + uVar21 * 0x10) = ppppppWVar9;
      }
      else if (pppppppWVar8 == local_138) {
        *(LPWSTR ******)(DAT_1404e9308 + uVar21 * 0x10) = ppppppWVar9;
      }
      else if (*(LPWSTR ******)(DAT_1404e9308 + 8 + uVar21 * 0x10) == ppppppWVar17)
      goto LAB_140129f24;
LAB_140129f29:
      uVar20 = 0;
      *(undefined4 *)(ppppppWVar9 + 6) = 0;
LAB_140129f31:
      pCVar23 = (CHAR *)CONCAT71(uStack_177,local_178);
      uVar19 = local_160;
      goto LAB_140129f3b;
    }
    lVar6 = *plVar14;
    if (ppppppWVar9 == (LPWSTR *****)0x0) {
LAB_140129ab2:
      local_128 = 0;
      uStack_120 = 7;
      ppppppWStack_130 = (LPWSTR *****)0x0;
      local_138 = (LPWSTR ******)0x0;
    }
    else {
      pCVar16 = &local_178;
      if (0xf < uVar19) {
        pCVar16 = pCVar23;
      }
      iVar5 = MultiByteToWideChar(0xfde9,0,pCVar16,(int)local_168,(LPWSTR)0x0,0);
      if (iVar5 < 1) goto LAB_140129ab2;
      local_148 = 0;
      uStack_140 = 0;
      local_158 = (LPWSTR ******)0x0;
      ppppppWStack_150 = (LPWSTR *****)0x0;
      FUN_1400167e0(&local_158,0,(longlong)iVar5);
      pppppppWVar8 = (LPWSTR ******)&local_158;
      if (7 < uStack_140) {
        pppppppWVar8 = local_158;
      }
      pCVar23 = &local_178;
      if (0xf < local_160) {
        pCVar23 = (LPCSTR)CONCAT71(uStack_177,local_178);
      }
      MultiByteToWideChar(0xfde9,0,pCVar23,(int)local_168,(LPWSTR)pppppppWVar8,iVar5);
      local_128 = local_148;
      uStack_120 = uStack_140;
      local_138 = local_158;
      ppppppWStack_130 = ppppppWStack_150;
    }
    pppppppWVar8 = (LPWSTR ******)&local_138;
    if (7 < uStack_120) {
      pppppppWVar8 = local_138;
    }
    uVar20 = (**(code **)(lVar6 + 0x70))(plVar14,pppppppWVar8);
    if (uStack_120 < 8) {
LAB_140129b32:
      uVar19 = local_160;
      ppppppWVar9 = local_168;
      pCVar23 = (CHAR *)CONCAT71(uStack_177,local_178);
      pCVar16 = &local_178;
      if (0xf < local_160) {
        pCVar16 = pCVar23;
      }
      ppppppWVar17 = (LPWSTR *****)0x0;
      if (local_168 != (LPWSTR *****)0x0) {
        do {
          pbVar1 = (byte *)(pCVar16 + (longlong)ppppppWVar17);
          ppppppWVar17 = (LPWSTR *****)((longlong)ppppppWVar17 + 1);
          uVar21 = (uVar21 ^ *pbVar1) * 0x100000001b3;
        } while (ppppppWVar17 < local_168);
      }
      pppppppWVar8 = *(LPWSTR *******)(DAT_1404e9308 + 8 + (uVar21 & _DAT_1404e9320) * 0x10);
      pppppppWVar7 = DAT_1404e92f8;
      if (pppppppWVar8 != DAT_1404e92f8) {
        pppppppWVar18 = *(LPWSTR *******)(DAT_1404e9308 + (uVar21 & _DAT_1404e9320) * 0x10);
        while( true ) {
          pppppppWVar7 = pppppppWVar8 + 2;
          if ((LPWSTR *****)0xf < pppppppWVar8[5]) {
            pppppppWVar7 = (LPWSTR ******)*pppppppWVar7;
          }
          pCVar16 = &local_178;
          if (0xf < uVar19) {
            pCVar16 = pCVar23;
          }
          if ((ppppppWVar9 == pppppppWVar8[4]) &&
             ((ppppppWVar9 == (LPWSTR *****)0x0 ||
              (iVar5 = memcmp(pCVar16,pppppppWVar7,(size_t)ppppppWVar9), iVar5 == 0))))
          goto LAB_140129d95;
          pppppppWVar7 = pppppppWVar8;
          if (pppppppWVar8 == pppppppWVar18) break;
          pppppppWVar8 = (LPWSTR ******)pppppppWVar8[1];
        }
      }
      if (DAT_1404e9300 == 0x492492492492492) {
LAB_14012a262:
                    /* WARNING: Subroutine does not return */
        FUN_14028c2e0("unordered_map/set too long");
      }
      pppppppWVar8 = (LPWSTR ******)FUN_14028af20(0x38);
      FUN_140016fc0(pppppppWVar8 + 2,&local_178);
      *(undefined4 *)(pppppppWVar8 + 6) = 0;
      if (_DAT_1404e92f0 < (float)(DAT_1404e9300 + 1) / (float)DAT_1404e9328) {
        FUN_140039940(&DAT_1404e92f0);
        pppppppWVar18 = *(LPWSTR *******)(DAT_1404e9308 + 8 + (uVar21 & _DAT_1404e9320) * 0x10);
        pppppppWVar7 = DAT_1404e92f8;
        if (pppppppWVar18 != DAT_1404e92f8) {
          ppppppWVar9 = pppppppWVar8[5];
          ppppppWVar17 = pppppppWVar8[4];
          pppppppWVar2 = *(LPWSTR *******)(DAT_1404e9308 + (uVar21 & _DAT_1404e9320) * 0x10);
          while( true ) {
            pppppppWVar7 = pppppppWVar18 + 2;
            if ((LPWSTR *****)0xf < pppppppWVar18[5]) {
              pppppppWVar7 = (LPWSTR ******)*pppppppWVar7;
            }
            if (ppppppWVar9 < (LPWSTR *****)0x10) {
              _Buf1 = pppppppWVar8 + 2;
            }
            else {
              _Buf1 = (LPWSTR ******)pppppppWVar8[2];
            }
            if ((ppppppWVar17 == pppppppWVar18[4]) &&
               ((ppppppWVar17 == (LPWSTR *****)0x0 ||
                (iVar5 = memcmp(_Buf1,pppppppWVar7,(size_t)ppppppWVar17), iVar5 == 0)))) break;
            pppppppWVar7 = pppppppWVar18;
            if (pppppppWVar18 == pppppppWVar2) goto LAB_140129d27;
            pppppppWVar18 = (LPWSTR ******)pppppppWVar18[1];
          }
          pppppppWVar7 = (LPWSTR ******)*pppppppWVar18;
        }
      }
LAB_140129d27:
      ppppppWVar9 = pppppppWVar7[1];
      DAT_1404e9300 = DAT_1404e9300 + 1;
      *pppppppWVar8 = (LPWSTR *****)pppppppWVar7;
      pppppppWVar8[1] = ppppppWVar9;
      *ppppppWVar9 = (LPWSTR ****)pppppppWVar8;
      pppppppWVar7[1] = (LPWSTR *****)pppppppWVar8;
      lVar6 = DAT_1404e9308;
      uVar21 = uVar21 & _DAT_1404e9320;
      pppppppWVar18 = *(LPWSTR *******)(DAT_1404e9308 + uVar21 * 0x10);
      if (pppppppWVar18 == DAT_1404e92f8) {
        *(LPWSTR *******)(DAT_1404e9308 + uVar21 * 0x10) = pppppppWVar8;
        *(LPWSTR *******)(lVar6 + 8 + uVar21 * 0x10) = pppppppWVar8;
        *(uint *)(pppppppWVar8 + 6) = uVar20;
      }
      else if (pppppppWVar18 == pppppppWVar7) {
        *(LPWSTR *******)(DAT_1404e9308 + uVar21 * 0x10) = pppppppWVar8;
        *(uint *)(pppppppWVar8 + 6) = uVar20;
      }
      else {
        if (*(LPWSTR ******)(DAT_1404e9308 + 8 + uVar21 * 0x10) == ppppppWVar9) {
          *(LPWSTR *******)(DAT_1404e9308 + 8 + uVar21 * 0x10) = pppppppWVar8;
        }
LAB_140129d95:
        *(uint *)(pppppppWVar8 + 6) = uVar20;
      }
      goto LAB_140129f31;
    }
    uVar19 = uStack_120 * 2 + 2;
    pppppppWVar8 = local_138;
    if (uVar19 < 0x1000) {
LAB_140129b2d:
      thunk_FUN_14028af80(pppppppWVar8,uVar19);
      goto LAB_140129b32;
    }
    pppppppWVar8 = (LPWSTR ******)local_138[-1];
    if ((ulonglong)((longlong)local_138 + (-8 - (longlong)pppppppWVar8)) < 0x20) {
      uVar19 = uStack_120 * 2 + 0x29;
      goto LAB_140129b2d;
    }
  }
  else {
    uVar20 = *(uint *)(pppppppWVar7 + 6);
LAB_140129f3b:
    if (0xf < uVar19) {
      uVar21 = uVar19 + 1;
      pCVar16 = pCVar23;
      if (0xfff < uVar21) {
        pCVar16 = *(CHAR **)(pCVar23 + -8);
        if ((CHAR *)0x1f < pCVar23 + (-8 - (longlong)pCVar16)) goto LAB_14012a18d;
        uVar21 = uVar19 + 0x28;
      }
      thunk_FUN_14028af80(pCVar16,uVar21);
    }
    local_168 = (LPWSTR *****)0x0;
    local_160 = 0xf;
    local_178 = '\0';
    FUN_140290ea0(&DAT_1404dfc50);
    FUN_1404217a0(local_108,0,0xc4);
    FUN_1400162a0(local_108,0xc4,"%.5f %.5f %.5f",(double)((float)(uVar20 & 0xff) / DAT_14049290c));
    local_148 = 0;
    uStack_140 = 0;
    local_158 = (LPWSTR ******)0x0;
    ppppppWStack_150 = (LPWSTR *****)0x0;
    sVar11 = strlen(local_108);
    FUN_140017480(&local_158,local_108,sVar11);
    uVar19 = uStack_140;
    pppppppWVar8 = local_158;
    uVar4 = (undefined4)local_148;
    uVar21 = local_148 & 0xffffffff;
    ppppppWStack_130 = (LPWSTR *****)CONCAT71(ppppppWStack_130._1_7_,4);
    pppppppWVar7 = (LPWSTR ******)&local_158;
    if (0xf < uStack_140) {
      pppppppWVar7 = local_158;
    }
    puVar12 = (undefined4 *)_malloc_base(uVar21 + 5);
    if (puVar12 == (undefined4 *)0x0) goto LAB_14012a194;
    *puVar12 = uVar4;
    uVar20 = (uint)ppppppWStack_130 | 0x100;
    FUN_1404210f0(puVar12 + 1,pppppppWVar7,uVar21);
    *(undefined1 *)((longlong)puVar12 + uVar21 + 4) = 0;
    uVar13 = FUN_140086de0(param_2,"schemecolor","");
    plVar14 = (longlong *)FUN_140086de0(uVar13,"value");
    lVar6 = plVar14[1];
    *(uint *)(plVar14 + 1) = uVar20;
    ppppppWStack_130 = (LPWSTR *****)CONCAT44(ppppppWStack_130._4_4_,(int)lVar6);
    local_138 = (LPWSTR ******)*plVar14;
    *plVar14 = (longlong)puVar12;
    uVar21 = plVar14[2];
    plVar14[2] = 0;
    local_118 = plVar14[4];
    uStack_120 = plVar14[3];
    plVar14[3] = 0;
    plVar14[4] = 0;
    local_128 = uVar21;
    FUN_140086d30(&local_138);
    if (uVar21 != 0) {
      FUN_140017240(uVar21 + 0x40);
      FUN_140017240(uVar21 + 0x20);
      FUN_140017240(uVar21);
      thunk_FUN_14028af80(uVar21,0x60);
    }
    if (uVar19 < 0x10) {
      return param_2;
    }
    uVar21 = uVar19 + 1;
    pppppppWVar7 = pppppppWVar8;
    if (uVar21 < 0x1000) {
LAB_14012a163:
      thunk_FUN_14028af80(pppppppWVar7,uVar21);
      return param_2;
    }
    pppppppWVar7 = (LPWSTR ******)pppppppWVar8[-1];
    if ((ulonglong)((longlong)pppppppWVar8 + (-8 - (longlong)pppppppWVar7)) < 0x20) {
      uVar21 = uVar19 + 0x28;
      goto LAB_14012a163;
    }
  }
LAB_14012a18d:
  pcVar3 = (code *)swi(0x29);
  (*pcVar3)(5);
  puVar22 = auStackY_1a0;
LAB_14012a194:
  *(undefined8 *)(puVar22 + -8) = 0x14012a1a5;
  FUN_140017170(puVar22 + 0x50,
                "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
               );
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar22 + -8) = &UNK_14012a1af;
  FUN_140084bc0(puVar22 + 0x50);
}

