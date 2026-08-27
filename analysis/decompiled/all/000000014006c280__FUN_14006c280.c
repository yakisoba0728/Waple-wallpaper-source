// Function: FUN_14006c280
// Addr: 14006c280
// Size: 3095 bytes


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14006c280(ulonglong param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  HRESULT HVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  HANDLE pvVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  undefined8 *******pppppppuVar14;
  undefined **ppuVar15;
  bool bVar16;
  undefined *puVar17;
  ulonglong uVar18;
  uint uVar19;
  DWORD dwPriorityClass;
  undefined1 *puVar20;
  bool bVar21;
  float fVar22;
  undefined8 extraout_XMM0_Qa;
  float fVar23;
  ulonglong local_res8;
  undefined1 auStackY_138 [8];
  undefined1 auStackY_130 [24];
  undefined **local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined *local_f0;
  undefined ***local_d0;
  undefined8 *******local_c8 [2];
  longlong local_b8;
  ulonglong local_b0;
  undefined **local_a8;
  undefined1 *local_a0;
  undefined4 *local_98;
  undefined ***local_70;
  longlong local_68 [7];
  longlong *local_30;
  
  puVar20 = auStackY_138;
  local_res8 = param_1 & 0xffffffff00000000;
  uVar8 = FUN_140086de0(param_2,"adjustdwmcolormode","");
  FUN_140085cc0(uVar8,local_c8);
  uVar18 = local_b0;
  pppppppuVar14 = local_c8;
  if (0xf < local_b0) {
    pppppppuVar14 = local_c8[0];
  }
  if ((local_b8 == 10) && (iVar6 = memcmp(pppppppuVar14,"everything",10), iVar6 == 0)) {
    uVar19 = 2;
  }
  else {
    pppppppuVar14 = local_c8;
    if (0xf < uVar18) {
      pppppppuVar14 = local_c8[0];
    }
    if (local_b8 == 6) {
      iVar6 = memcmp(pppppppuVar14,"accent",6);
      bVar21 = iVar6 == 0;
    }
    else {
      bVar21 = false;
    }
    uVar19 = (uint)bVar21;
  }
  local_res8 = CONCAT71(local_res8._1_7_,DAT_1404e53d8 != uVar19);
  uVar8 = FUN_140086de0(param_2,"playbackfocus","");
  uVar8 = FUN_140085cc0(uVar8,&local_108);
  DAT_1404e53c0 = FUN_140141880(uVar8);
  if (local_f0 < &DAT_00000010) {
LAB_14006c3ba:
    uVar8 = FUN_140086de0(param_2,"playbackmaximized","");
    uVar8 = FUN_140085cc0(uVar8,&local_108);
    DAT_1404e53c4 = FUN_140141880(uVar8);
    if ((undefined *)0xf < local_f0) {
      puVar17 = local_f0 + 1;
      ppuVar15 = local_108;
      if ((undefined *)0xfff < puVar17) {
        ppuVar15 = (undefined **)local_108[-1];
        if (0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)ppuVar15))) goto LAB_14006ce60;
        puVar17 = local_f0 + 0x28;
      }
      thunk_FUN_14028af80(ppuVar15,puVar17);
    }
    uVar8 = FUN_140086de0(param_2,"playbackfullscreen","");
    uVar8 = FUN_140085cc0(uVar8,&local_108);
    DAT_1404e53c8 = FUN_140141880(uVar8);
    if ((undefined *)0xf < local_f0) {
      puVar17 = local_f0 + 1;
      ppuVar15 = local_108;
      if ((undefined *)0xfff < puVar17) {
        ppuVar15 = (undefined **)local_108[-1];
        if (0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)ppuVar15))) goto LAB_14006ce60;
        puVar17 = local_f0 + 0x28;
      }
      thunk_FUN_14028af80(ppuVar15,puVar17);
    }
    uVar8 = FUN_140086de0(param_2,"playbacksleep","");
    uVar8 = FUN_140085cc0(uVar8,&local_108);
    DAT_1404e53cc = FUN_140141880(uVar8);
    if ((undefined *)0xf < local_f0) {
      puVar17 = local_f0 + 1;
      ppuVar15 = local_108;
      if ((undefined *)0xfff < puVar17) {
        ppuVar15 = (undefined **)local_108[-1];
        if (0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)ppuVar15))) goto LAB_14006ce60;
        puVar17 = local_f0 + 0x28;
      }
      thunk_FUN_14028af80(ppuVar15,puVar17);
    }
    uVar8 = FUN_140086de0(param_2,"playbackonbattery","");
    uVar8 = FUN_140085cc0(uVar8,&local_108);
    DAT_1404e53d0 = FUN_140141880(uVar8);
    if ((undefined *)0xf < local_f0) {
      puVar17 = local_f0 + 1;
      ppuVar15 = local_108;
      if ((undefined *)0xfff < puVar17) {
        ppuVar15 = (undefined **)local_108[-1];
        if (0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)ppuVar15))) goto LAB_14006ce60;
        puVar17 = local_f0 + 0x28;
      }
      thunk_FUN_14028af80(ppuVar15,puVar17);
    }
    uVar8 = FUN_140086de0(param_2,"playbackaudio","");
    uVar8 = FUN_140085cc0(uVar8,&local_108);
    DAT_1404e53d4 = FUN_140141880(uVar8);
    if ((undefined *)0xf < local_f0) {
      puVar17 = local_f0 + 1;
      ppuVar15 = local_108;
      if ((undefined *)0xfff < puVar17) {
        ppuVar15 = (undefined **)local_108[-1];
        if (0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)ppuVar15))) goto LAB_14006ce60;
        puVar17 = local_f0 + 0x28;
      }
      thunk_FUN_14028af80(ppuVar15,puVar17);
    }
    uVar8 = FUN_140086de0(param_2,"unpauseaero","");
    DAT_1404e52f0 = FUN_140086300(uVar8);
    DAT_1404e53d8 = uVar19;
    uVar8 = FUN_140086de0(param_2,"audioinputdevice","");
    uVar8 = FUN_140085cc0(uVar8,&local_108);
    FUN_14000de40(&DAT_1404e5580,uVar8);
    if ((undefined *)0xf < local_f0) {
      puVar17 = local_f0 + 1;
      ppuVar15 = local_108;
      if ((undefined *)0xfff < puVar17) {
        ppuVar15 = (undefined **)local_108[-1];
        if (0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)ppuVar15))) goto LAB_14006ce60;
        puVar17 = local_f0 + 0x28;
      }
      thunk_FUN_14028af80(ppuVar15,puVar17);
    }
    if (DAT_1404e5618 != 0) {
      puVar10 = &DAT_1404e56a8;
      if (0xf < DAT_1404e56c0) {
        puVar10 = DAT_1404e56a8;
      }
      cVar3 = FUN_14000d010(&DAT_1404e5580,puVar10);
      if (cVar3 == '\0') {
        FUN_1400d00b0(&DAT_1404e55a8);
        FUN_14006e0c0();
      }
    }
    uVar8 = FUN_140086de0(param_2,&DAT_140476edc,0x140476edf);
    iVar6 = FUN_140085ee0(uVar8);
    fVar22 = (float)FUN_14041a5c0(DAT_140492944 / (float)iVar6);
    fVar22 = fVar22 * DAT_1404926c0;
    fVar23 = DAT_1404928f8;
    if (((fVar22 < DAT_1404928f8) && (fVar23 = DAT_140492860, DAT_140492860 <= fVar22)) &&
       (fVar23 = DAT_1404928f8, fVar22 < DAT_1404928f8)) {
      fVar23 = fVar22;
    }
    _DAT_1404e55bc = (int)fVar23;
    uVar8 = FUN_140086de0(param_2,"audioinputvolume","");
    iVar6 = FUN_140085ee0(uVar8);
    _DAT_1404e55b4 = (float)iVar6 * DAT_14049262c;
    uVar8 = FUN_140086de0(param_2,"audioinputthreshold","");
    _DAT_1404e55b8 = (float)FUN_140086220(uVar8);
    _DAT_1404e55b8 = _DAT_1404e55b8 * DAT_140492608;
    uVar8 = FUN_140086de0(param_2,"highprecisiontimer","");
    cVar3 = FUN_140086300(uVar8);
    if (cVar3 == '\0') {
      DAT_1404e52e4 = DAT_1404e52e4 & 0xfffdffff;
    }
    else {
      DAT_1404e52e4 = DAT_1404e52e4 | 0x20000;
    }
    lVar9 = FUN_140086de0(param_2,"webmframework","");
    bVar21 = true;
    bVar16 = false;
    if (*(char *)(lVar9 + 8) == '\x04') {
      uVar8 = FUN_140086de0(param_2,"webmframework","");
      puVar10 = (undefined8 *)FUN_140085cc0(uVar8,&local_108);
      plVar13 = puVar10 + 2;
      if (0xf < (ulonglong)puVar10[3]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      bVar16 = bVar21;
      if ((*plVar13 != 6) || (iVar6 = memcmp(puVar10,"native",6), bVar16 = true, iVar6 != 0))
      goto LAB_14006c838;
      DAT_1404e6368 = 1;
    }
    else {
LAB_14006c838:
      bVar21 = bVar16;
      DAT_1404e6368 = 0;
    }
    if ((bVar21) && ((undefined *)0xf < local_f0)) {
      puVar17 = local_f0 + 1;
      ppuVar15 = local_108;
      if ((undefined *)0xfff < puVar17) {
        ppuVar15 = (undefined **)local_108[-1];
        if (0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)ppuVar15))) goto LAB_14006ce60;
        puVar17 = local_f0 + 0x28;
      }
      thunk_FUN_14028af80(ppuVar15,puVar17);
    }
    bVar21 = false;
    uVar8 = FUN_140086de0(param_2,"apprules","");
    FUN_140134b70(&DAT_1404e53e0,uVar8);
    cVar3 = DAT_1404e6128;
    if ((DAT_1404e53d4 == 0) && (DAT_1404e53f8 == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    if (cVar2 == DAT_1404e6128) {
      if (DAT_1404e6128 != '\0') {
        puVar10 = &DAT_1404e6140;
        if (0xf < DAT_1404e6158) {
          puVar10 = DAT_1404e6140;
        }
        cVar4 = FUN_14000d010(&DAT_1404e5580,puVar10);
        if (cVar4 == '\0') goto LAB_14006c8fc;
      }
    }
    else {
LAB_14006c8fc:
      if (cVar3 != '\0') {
        FUN_140138a90(&DAT_1404e6128);
      }
      if (cVar2 == '\0') {
        FUN_140138a90(&DAT_1404e6128);
      }
      else {
        puVar10 = &DAT_1404e5580;
        if (0xf < DAT_1404e5598) {
          puVar10 = DAT_1404e5580;
        }
        FUN_14000f880(&DAT_1404e6140,puVar10,DAT_1404e5590);
        if (DAT_1404e6128 == '\0') {
          DAT_1404e6128 = '\x01';
          FUN_140139270(&DAT_1404e6128);
        }
      }
    }
    DAT_1404e6260 = 1;
    FUN_14006e0c0();
    if ((char)local_res8 != '\0') {
      FUN_14006e6d0();
    }
    lVar9 = FUN_140086de0(param_2,"processpriority","");
    if (*(char *)(lVar9 + 8) == '\x04') {
      bVar21 = true;
      uVar8 = FUN_140086de0(param_2,"processpriority","");
      puVar10 = (undefined8 *)FUN_140085cc0(uVar8,&local_108);
      plVar13 = puVar10 + 2;
      if (0xf < (ulonglong)puVar10[3]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      if ((*plVar13 != 0xb) || (iVar6 = memcmp(puVar10,"belownormal",0xb), iVar6 != 0))
      goto LAB_14006c9e8;
      bVar16 = true;
    }
    else {
LAB_14006c9e8:
      bVar16 = false;
    }
    if ((bVar21) && ((undefined *)0xf < local_f0)) {
      puVar17 = local_f0 + 1;
      ppuVar15 = local_108;
      if ((undefined *)0xfff < puVar17) {
        ppuVar15 = (undefined **)local_108[-1];
        if (0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)ppuVar15))) goto LAB_14006ce60;
        puVar17 = local_f0 + 0x28;
      }
      thunk_FUN_14028af80(ppuVar15,puVar17);
    }
    dwPriorityClass = 0x20;
    if (bVar16) {
      dwPriorityClass = 0x4000;
    }
    pvVar11 = GetCurrentProcess();
    SetPriorityClass(pvVar11,dwPriorityClass);
    FUN_1400567b0(&DAT_1404e6268,param_2);
    FUN_140086de0(param_2,"pausevram","");
    cVar3 = FUN_140086300();
    if ((cVar3 == '\0') || ((DAT_1404e52e4 >> 0xe & 1) != 0)) {
      bVar21 = false;
      bVar16 = false;
    }
    else {
      bVar21 = true;
      bVar16 = true;
    }
    if (bVar16 != (DAT_1404e6410 != (undefined1 *)0x0)) {
      if (bVar21) {
        puVar12 = (undefined1 *)FUN_14028af20(0x38);
        *puVar12 = 0;
        *(undefined8 *)(puVar12 + 0x10) = 0;
        *(undefined8 *)(puVar12 + 0x18) = 0;
        *(undefined8 *)(puVar12 + 0x20) = 0;
        *(undefined8 *)(puVar12 + 0x28) = 0;
        *(undefined8 *)(puVar12 + 0x30) = 0;
        LOCK();
        *puVar12 = 1;
        UNLOCK();
        pvVar11 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
        *(HANDLE *)(puVar12 + 8) = pvVar11;
        puVar10 = (undefined8 *)FUN_14028af20(0x10);
        puVar10[1] = FUN_140141460;
        *puVar10 = puVar12;
        local_108 = (undefined **)FUN_1402ca17c(0,0,FUN_140141850,puVar10);
        if (local_108 == (undefined **)0x0) {
          uStack_100 = (code *)((ulonglong)uStack_100._4_4_ << 0x20);
                    /* WARNING: Subroutine does not return */
          FUN_140290d30(6);
        }
        if (*(int *)(puVar12 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140015110();
        }
        *(undefined4 *)(puVar12 + 0x18) = (undefined4)uStack_100;
        *(uint *)(puVar12 + 0x1c) = uStack_100._4_4_;
        *(undefined ***)(puVar12 + 0x10) = local_108;
        DAT_1404e52e4 = DAT_1404e52e4 | 0x200;
        local_108 = (undefined **)0x0;
        uStack_100 = (code *)0x0;
        DAT_1404e6410 = puVar12;
      }
      else {
        FUN_1401417e0(&DAT_1404e6410);
        DAT_1404e52e4 = DAT_1404e52e4 & 0xfffff9ff;
      }
    }
    uVar8 = FUN_140086de0(param_2,"reloadaudio","");
    cVar3 = FUN_140086300(uVar8);
    if ((bool)cVar3 != (DAT_1404e636c != 0)) {
      if (cVar3 == '\0') {
        FUN_1400cfe40(&DAT_1404e61b8,DAT_1404e636c);
        DAT_1404e636c = 0;
      }
      else {
        local_a8 = &PTR_FUN_140478280;
        local_a0 = &LAB_140067960;
        local_98 = &DAT_1404e52e0;
        local_70 = &local_a8;
        if ((DAT_1404e61c8 == 0) && (DAT_1404e6250 == (longlong *)0x0)) {
          HVar7 = CoCreateInstance((IID *)&DAT_140482ac8,(LPUNKNOWN)0x0,0x17,(IID *)&DAT_140482ad8,
                                   &DAT_1404e6250);
          if (-1 < HVar7) {
            uVar8 = FUN_14028af20(0x50);
            local_f0 = &DAT_1404e61b8;
            local_108 = &PTR_LAB_1404866c8;
            uStack_100 = FUN_1400cffc0;
            local_f8 = (char)local_res8;
            local_f7 = (char)local_res8;
            local_d0 = &local_108;
            DAT_1404e6258 = FUN_1400cf9d0(uVar8,&local_108);
          }
          (**(code **)(*DAT_1404e6250 + 0x30))(DAT_1404e6250,DAT_1404e6258);
        }
        iVar6 = FUN_140290d80(&DAT_1404e6200);
        if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140290d30(5);
        }
        if (DAT_1404e624c == 0x7fffffff) goto LAB_14006ce67;
        DAT_1404e61f8 = DAT_1404e61f8 + 1;
        local_res8 = CONCAT44(local_res8._4_4_,DAT_1404e61f8);
        plVar13 = (longlong *)FUN_1400d21b0(&DAT_1404e61b8,&local_108,&local_res8);
        local_30 = (longlong *)0x0;
        lVar9 = *plVar13;
        if (local_70 != (undefined ***)0x0) {
          local_30 = (longlong *)(*(code *)**local_70)(local_70,local_68);
        }
        FUN_140033a00(local_68,lVar9 + 0x18);
        if (local_30 != (longlong *)0x0) {
          (**(code **)(*local_30 + 0x20))
                    (local_30,CONCAT71((int7)((ulonglong)local_68 >> 8),local_30 != local_68));
        }
        iVar6 = (int)local_res8;
        FUN_140290ea0(&DAT_1404e6200);
        if (local_70 != (undefined ***)0x0) {
          (*(code *)(*local_70)[4])
                    (local_70,CONCAT71((int7)((ulonglong)&local_a8 >> 8),local_70 != &local_a8));
        }
        DAT_1404e636c = iVar6;
      }
    }
    uVar8 = FUN_140086de0(param_2,"mediaintegration","");
    uVar5 = FUN_140086300(uVar8);
    FUN_1400c8340(&DAT_1404e55a0,uVar5);
    uVar8 = FUN_140086de0(param_2,"mediablocklist","");
    FUN_1400c88c0(&DAT_1404e55a0,uVar8);
    uVar8 = FUN_140086de0(param_2,"browsetransition","");
    FUN_140075790(extraout_XMM0_Qa,uVar8,&DAT_1404e64b0);
    if (local_b0 < 0x10) {
      return;
    }
    uVar18 = local_b0 + 1;
    pppppppuVar14 = local_c8[0];
    if (uVar18 < 0x1000) {
LAB_14006ce31:
      thunk_FUN_14028af80(pppppppuVar14,uVar18);
      return;
    }
    pppppppuVar14 = (undefined8 *******)local_c8[0][-1];
    if ((ulonglong)((longlong)local_c8[0] + (-8 - (longlong)pppppppuVar14)) < 0x20) {
      uVar18 = local_b0 + 0x28;
      goto LAB_14006ce31;
    }
  }
  else {
    puVar17 = local_f0 + 1;
    ppuVar15 = local_108;
    if (puVar17 < (undefined *)0x1000) {
LAB_14006c3b5:
      thunk_FUN_14028af80(ppuVar15,puVar17);
      goto LAB_14006c3ba;
    }
    ppuVar15 = (undefined **)local_108[-1];
    if ((ulonglong)((longlong)local_108 + (-8 - (longlong)ppuVar15)) < 0x20) {
      puVar17 = local_f0 + 0x28;
      goto LAB_14006c3b5;
    }
  }
LAB_14006ce60:
  pcVar1 = (code *)swi(0x29);
  DAT_1404e624c = (*pcVar1)(5);
  puVar20 = auStackY_130;
LAB_14006ce67:
  DAT_1404e624c = DAT_1404e624c + -1;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar20 + -8) = &UNK_14006ce79;
  FUN_140290d30(6);
}

