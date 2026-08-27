// Function: FUN_140046f20
// Addr: 140046f20
// Size: 5275 bytes


void FUN_140046f20(undefined8 param_1)

{
  double dVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  BOOL BVar5;
  ulonglong *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  double *pdVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 uVar17;
  char *pcVar18;
  bool bVar19;
  bool bVar20;
  undefined1 local_res10 [8];
  longlong *local_a8;
  uint local_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong local_80 [5];
  ulonglong local_58 [4];
  _SYSTEM_POWER_STATUS local_38 [2];
  
  uVar17 = 0;
  puVar6 = (ulonglong *)FUN_140086de0(param_1,"playbackfocus","");
  uVar16 = 0;
  if ((char)puVar6[1] != '\x04') {
    local_a0 = CONCAT31(local_a0._1_3_,4);
    puVar7 = (undefined4 *)_malloc_base(8);
    if (puVar7 == (undefined4 *)0x0) {
      FUN_140017170(&local_a8,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_a8);
    }
    *puVar7 = 3;
    uVar14 = local_a0 | 0x100;
    *(short *)(puVar7 + 1) = (short)DAT_140474a6c;
    *(char *)((longlong)puVar7 + 6) = (char)((uint)DAT_140474a6c >> 0x10);
    local_a0 = (uint)puVar6[1];
    *(uint *)(puVar6 + 1) = uVar14;
    local_a8 = (longlong *)*puVar6;
    *puVar6 = (ulonglong)puVar7;
    *(undefined1 *)((longlong)puVar7 + 7) = 0;
    uVar2 = puVar6[2];
    puVar6[2] = 0;
    uStack_90 = puVar6[3];
    local_88 = puVar6[4];
    puVar6[3] = 0;
    puVar6[4] = 0;
    local_98 = uVar2;
    FUN_140086d30(&local_a8);
    if (uVar2 != 0) {
      FUN_140017240(uVar2 + 0x40);
      FUN_140017240(uVar2 + 0x20);
      FUN_140017240(uVar2);
      thunk_FUN_14028af80(uVar2,0x60);
    }
    uVar17 = 1;
  }
  puVar6 = (ulonglong *)FUN_140086de0(param_1,"playbackmaximized","");
  if ((char)puVar6[1] != '\x04') {
    local_a0 = CONCAT31(local_a0._1_3_,4);
    puVar7 = (undefined4 *)_malloc_base(10);
    if (puVar7 == (undefined4 *)0x0) {
      FUN_140017170(&local_a8,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_a8);
    }
    *puVar7 = 5;
    uVar14 = local_a0 | 0x100;
    puVar7[1] = s_pause_140473b2c._0_4_;
    *(char *)(puVar7 + 2) = s_pause_140473b2c[4];
    local_a0 = (uint)puVar6[1];
    *(uint *)(puVar6 + 1) = uVar14;
    local_a8 = (longlong *)*puVar6;
    *puVar6 = (ulonglong)puVar7;
    local_98 = puVar6[2];
    puVar6[2] = 0;
    uStack_90 = puVar6[3];
    local_88 = puVar6[4];
    *(undefined1 *)((longlong)puVar7 + 9) = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"playbackfullscreen","");
  if (*(char *)(lVar8 + 8) != '\x04') {
    local_a0 = CONCAT31(local_a0._1_3_,4);
    local_a0 = local_a0 | 0x100;
    local_88 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (longlong *)FUN_140084b30("pause",5);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"playbackonbattery","");
  if (*(char *)(lVar8 + 8) != '\x04') {
    local_a0 = CONCAT31(local_a0._1_3_,4);
    local_a0 = local_a0 | 0x100;
    local_88 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (longlong *)FUN_140084b30(&DAT_140474a6c,3);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"playbacksleep","");
  if (*(char *)(lVar8 + 8) != '\x04') {
    local_a0 = CONCAT31(local_a0._1_3_,4);
    local_a0 = local_a0 | 0x100;
    local_88 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (longlong *)FUN_140084b30(&DAT_140473b34,4);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"playbackaudio","");
  if (*(char *)(lVar8 + 8) != '\x04') {
    local_a0 = CONCAT31(local_a0._1_3_,4);
    local_a0 = local_a0 | 0x100;
    local_88 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (longlong *)FUN_140084b30(&DAT_140474a6c,3);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,&DAT_140476e68,&DAT_140476e6c);
  if (*(char *)(lVar8 + 8) != '\x04') {
    local_a0 = CONCAT31(local_a0._1_3_,4);
    local_a0 = local_a0 | 0x100;
    local_88 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (longlong *)FUN_140084b30(&DAT_140476e70,2);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"resolution","");
  if (*(char *)(lVar8 + 8) != '\x04') {
    local_a0 = CONCAT31(local_a0._1_3_,4);
    local_a0 = local_a0 | 0x100;
    local_88 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (longlong *)FUN_140084b30(&DAT_140476e84,4);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"postprocessing","");
  if (*(char *)(lVar8 + 8) != '\x04') {
    local_a0 = CONCAT31(local_a0._1_3_,4);
    local_a0 = local_a0 | 0x100;
    local_88 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (longlong *)FUN_140084b30("disabled",8);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"shadows","");
  pcVar18 = "medium";
  if (*(char *)(lVar8 + 8) != '\x04') {
    local_a0 = CONCAT31(local_a0._1_3_,4);
    local_a0 = local_a0 | 0x100;
    local_88 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (longlong *)FUN_140084b30("medium",6);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"volumetrics","");
  if (*(char *)(lVar8 + 8) != '\x04') {
    local_a0 = CONCAT31(local_a0._1_3_,4);
    local_a0 = local_a0 | 0x100;
    local_88 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (longlong *)FUN_140084b30("medium",6);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"reflection","");
  if (*(char *)(lVar8 + 8) != '\x05') {
    local_a0 = CONCAT31(local_a0._1_3_,5);
    local_a0 = local_a0 & 0xfffffeff;
    local_88 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (longlong *)CONCAT71(local_a8._1_7_,1);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  uVar9 = FUN_140086de0(param_1,&DAT_140476edc,0x140476edf);
  cVar3 = FUN_1400886e0(uVar9);
  if (cVar3 == '\0') {
    local_a0 = CONCAT31(local_a0._1_3_,1);
    local_a0 = local_a0 & 0xfffffeff;
    local_88 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (longlong *)0xf;
    FUN_140085610(uVar9,&local_a8);
    FUN_140085440(&local_a8);
  }
  pdVar10 = (double *)FUN_140086de0(param_1,"windowupdaterate","");
  cVar3 = *(char *)(pdVar10 + 1);
  if (cVar3 == '\x01') {
    bVar19 = (longlong)*pdVar10 + 0x80000000U < 0xffffffff;
    bVar20 = (longlong)*pdVar10 + 0x80000000U == 0xffffffff;
LAB_14004753c:
    if (!bVar19 && !bVar20) {
LAB_14004753e:
      local_a0 = CONCAT31(local_a0._1_3_,1);
      local_a0 = local_a0 & 0xfffffeff;
      local_88 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = (longlong *)0x3e8;
      FUN_140085610(pdVar10,&local_a8);
      FUN_140085440(&local_a8);
    }
  }
  else {
    if (cVar3 == '\x02') {
      bVar19 = (ulonglong)*pdVar10 < 0x7fffffff;
      bVar20 = *pdVar10 == 1.06099789498857e-314;
      goto LAB_14004753c;
    }
    if (cVar3 != '\x03') goto LAB_14004753e;
    dVar1 = *pdVar10;
    if (((dVar1 < DAT_140492a08) || (DAT_140492898 < dVar1)) ||
       (dVar1 = (double)FUN_1402d3b50(SUB84(dVar1,0),local_res10), dVar1 != 0.0))
    goto LAB_14004753e;
  }
  lVar8 = FUN_140086de0(param_1,"audioinputdevice","");
  if (*(char *)(lVar8 + 8) != '\x04') {
    local_a0 = CONCAT31(local_a0._1_3_,4);
    local_a0 = local_a0 | 0x100;
    local_88 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (longlong *)FUN_140084b30("default",7);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  uVar9 = FUN_140086de0(param_1,"audioinputvolume","");
  cVar3 = FUN_1400886e0(uVar9);
  if (cVar3 == '\0') {
    local_a0 = CONCAT31(local_a0._1_3_,1);
    local_a0 = local_a0 & 0xfffffeff;
    local_88 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (longlong *)0x32;
    FUN_140085610(uVar9,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"audioinputthreshold","");
  if (2 < *(byte *)(lVar8 + 8) - 1) {
    local_98 = 0;
    FUN_140086ca0(&local_a8,3,0);
    local_a8 = (longlong *)0x0;
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"loglevel","");
  if (*(char *)(lVar8 + 8) != '\x04') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,4,1);
    local_a8 = (longlong *)FUN_140084b30("error",5);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"videoframework","");
  if (*(char *)(lVar8 + 8) != '\x04') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,4,1);
    local_a8 = (longlong *)FUN_140084b30("mfEngine",8);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"videoloopmode","");
  if (*(char *)(lVar8 + 8) != '\x04') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,4,1);
    local_a8 = (longlong *)FUN_140084b30("default",7);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"videoreadmode","");
  if (*(char *)(lVar8 + 8) != '\x04') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,4,1);
    local_a8 = (longlong *)FUN_140084b30("fromdisk",8);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"videoaudiooutput","");
  if (*(char *)(lVar8 + 8) != '\x05') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,5,0);
    local_a8 = (longlong *)CONCAT71(local_a8._1_7_,1);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"videohardwareacceleration","");
  if (*(char *)(lVar8 + 8) != '\x05') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,5,0);
    local_a8 = (longlong *)CONCAT71(local_a8._1_7_,1);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"videomfstutterhack","");
  if (*(char *)(lVar8 + 8) != '\x05') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,5,0);
    local_a8 = (longlong *)((ulonglong)local_a8 & 0xffffffffffffff00);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  puVar6 = (ulonglong *)FUN_140086de0(param_1,"processpriority","");
  if ((char)(uint)puVar6[1] == '\x04') {
    uVar2 = *puVar6;
    uVar15 = uVar16;
    if ((uVar2 != 0) && (uVar15 = uVar2, ((uint)puVar6[1] >> 8 & 1) != 0)) {
      uVar15 = uVar2 + 4;
    }
    iVar4 = FUN_1402c10d0(uVar15,"normal");
    if (iVar4 == 0) goto LAB_1400479db;
    uVar2 = *puVar6;
    if ((uVar2 != 0) && (uVar16 = uVar2, ((uint)puVar6[1] >> 8 & 1) != 0)) {
      uVar16 = uVar2 + 4;
    }
    iVar4 = FUN_1402c10d0(uVar16,"belownormal");
    if (iVar4 == 0) goto LAB_1400479db;
  }
  local_a0 = CONCAT31(local_a0._1_3_,4);
  puVar7 = (undefined4 *)_malloc_base(0xb);
  if (puVar7 == (undefined4 *)0x0) {
    FUN_140017170(&local_a8,
                  "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                 );
                    /* WARNING: Subroutine does not return */
    FUN_140084bc0(&local_a8);
  }
  *puVar7 = 6;
  uVar14 = local_a0 | 0x100;
  puVar7[1] = s_normal_140476fd0._0_4_;
  *(undefined2 *)(puVar7 + 2) = s_normal_140476fd0._4_2_;
  local_a0 = (uint)puVar6[1];
  *(uint *)(puVar6 + 1) = uVar14;
  local_a8 = (longlong *)*puVar6;
  *puVar6 = (ulonglong)puVar7;
  local_98 = puVar6[2];
  puVar6[2] = 0;
  uStack_90 = puVar6[3];
  local_88 = puVar6[4];
  *(undefined1 *)((longlong)puVar7 + 10) = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  FUN_140085440(&local_a8);
LAB_1400479db:
  lVar8 = FUN_140086de0(param_1,"monitordetection","");
  if (*(char *)(lVar8 + 8) != '\x04') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,4,1);
    local_a8 = (longlong *)FUN_140084b30("managed",7);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"hasshownwelcomedialog","");
  if (*(char *)(lVar8 + 8) != '\x05') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,5,0);
    local_a8 = (longlong *)((ulonglong)local_a8 & 0xffffffffffffff00);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"adjustdwmcolormode","");
  if (*(char *)(lVar8 + 8) != '\x04') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,4,1);
    local_a8 = (longlong *)FUN_140084b30("disabled",8);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"highprecisiontimer","");
  if (*(char *)(lVar8 + 8) != '\x05') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,5,0);
    local_a8 = (longlong *)CONCAT71(local_a8._1_7_,uVar17);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"language","");
  if (*(char *)(lVar8 + 8) != '\x04') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,4,1);
    local_a8 = (longlong *)FUN_140084b30("default",7);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"steamlanguage","");
  if (*(char *)(lVar8 + 8) != '\x04') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,4,1);
    local_a8 = (longlong *)FUN_140084b30("english",7);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  uVar9 = FUN_140086de0(param_1,"iconopacity","");
  cVar3 = FUN_1400886e0(uVar9);
  if (cVar3 == '\0') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,1,0);
    local_a8 = (longlong *)0x64;
    FUN_140085610(uVar9,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"cefcommandline","");
  if (*(char *)(lVar8 + 8) != '\x04') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,4,1);
    local_a8 = (longlong *)FUN_140084b30(&DAT_140474480,0);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"safemode","");
  if (*(char *)(lVar8 + 8) != '\x05') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,5,0);
    local_a8 = (longlong *)CONCAT71(local_a8._1_7_,1);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"unpauseaero","");
  if (*(char *)(lVar8 + 8) != '\x05') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,5,0);
    local_a8 = (longlong *)CONCAT71(local_a8._1_7_,1);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"pausevram","");
  if (*(char *)(lVar8 + 8) != '\x05') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,5,0);
    local_a8 = (longlong *)((ulonglong)local_a8 & 0xffffffffffffff00);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"uiskin","");
  if (*(char *)(lVar8 + 8) != '\x04') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,4,1);
    local_a8 = (longlong *)FUN_140084b30(&DAT_140477044,4);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"uiskinseasonal","");
  if (*(char *)(lVar8 + 8) != '\x05') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,5,0);
    local_a8 = (longlong *)CONCAT71(local_a8._1_7_,1);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"slideshowkiller","");
  if (*(char *)(lVar8 + 8) != '\x05') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,5,0);
    local_a8 = (longlong *)((ulonglong)local_a8 & 0xffffffffffffff00);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"overridewallpaper","");
  if (*(char *)(lVar8 + 8) != '\x05') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,5,0);
    local_a8 = (longlong *)((ulonglong)local_a8 & 0xffffffffffffff00);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"overridelockscreen","");
  if (*(char *)(lVar8 + 8) != '\x05') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,5,0);
    local_a8 = (longlong *)((ulonglong)local_a8 & 0xffffffffffffff00);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"vdesktopenabled","");
  if (*(char *)(lVar8 + 8) != '\x05') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,5,0);
    local_a8 = (longlong *)((ulonglong)local_a8 & 0xffffffffffffff00);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"uihardwareacceleration","");
  if (*(char *)(lVar8 + 8) != '\x05') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,5,0);
    local_a8 = (longlong *)CONCAT71(local_a8._1_7_,1);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
    lVar11 = FUN_140086de0(param_1,&DAT_1404738ac,&DAT_1404738b1);
    if (*(char *)(lVar11 + 8) == '\x04') {
      FUN_140085cc0(lVar11,&local_a8);
      lVar12 = FUN_140031d70(&local_a8,"--disable-gpu",0);
      if (lVar12 != -1) {
        local_80[2] = 0;
        local_80[3] = 0;
        local_80[0] = 0;
        local_80[1] = 0;
        FUN_140017480(local_80,&DAT_140474480,0);
        local_58[2] = 0;
        local_58[3] = 0;
        local_58[0] = 0;
        local_58[1] = 0;
        FUN_140017480(local_58,"--disable-gpu",0xd);
        FUN_14003fb10(&local_a8,local_58,local_80);
        if (0xf < local_58[3]) {
          FUN_140017200(local_58,local_58[0]);
        }
        local_58[2] = 0;
        local_58[3] = 0xf;
        local_58[0] = local_58[0] & 0xffffffffffffff00;
        if (0xf < local_80[3]) {
          FUN_140017200(local_80,local_80[0]);
        }
        FUN_140084fe0(local_80,&local_a8);
        FUN_140085610(lVar11,local_80);
        FUN_140085440(local_80);
        local_80[2] = 0;
        FUN_140086ca0(local_80,5,0);
        local_80[0] = local_80[0] & 0xffffffffffffff00;
        FUN_140085610(lVar8,local_80);
        FUN_140085440(local_80);
      }
      FUN_140017240(&local_a8);
    }
  }
  lVar8 = FUN_140086de0(param_1,"uiquality","");
  if (*(char *)(lVar8 + 8) != '\x04') {
    lVar11 = FUN_140086de0(param_1,"uieffects","");
    if (*(char *)(lVar11 + 8) == '\x05') {
      cVar3 = FUN_140086300(lVar11);
      if (cVar3 != '\0') {
        pcVar18 = "high";
      }
    }
    else {
      BVar5 = GetSystemPowerStatus(local_38);
      if (((BVar5 == 1) && (local_38[0].BatteryFlag != 0x80)) && (local_38[0].BatteryFlag != 0xff))
      {
        bVar19 = true;
      }
      else {
        bVar19 = false;
      }
      pcVar18 = "high";
      if (bVar19) {
        pcVar18 = "medium";
      }
    }
    FUN_140084f50(&local_a8,pcVar18);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"reloadaudio","");
  if (*(char *)(lVar8 + 8) != '\x05') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,5,0);
    local_a8 = (longlong *)CONCAT71(local_a8._1_7_,1);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"mediaintegration","");
  if (*(char *)(lVar8 + 8) != '\x05') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,5,0);
    local_a8 = (longlong *)CONCAT71(local_a8._1_7_,1);
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
  }
  lVar8 = FUN_140086de0(param_1,"browsetransition","");
  if (*(char *)(lVar8 + 8) != '\a') {
    local_98 = 0;
    FUN_140086ca0(&local_a8,7,0);
    plVar13 = (longlong *)FUN_14028af20(0x10);
    *plVar13 = 0;
    plVar13[1] = 0;
    lVar11 = FUN_14028af20(0x58);
    *(longlong *)lVar11 = lVar11;
    *(longlong *)(lVar11 + 8) = lVar11;
    *(longlong *)(lVar11 + 0x10) = lVar11;
    *(undefined2 *)(lVar11 + 0x18) = 0x101;
    *plVar13 = lVar11;
    local_a8 = plVar13;
    FUN_140085610(lVar8,&local_a8);
    FUN_140085440(&local_a8);
    local_98 = 0;
    FUN_140086ca0(&local_a8,4,1);
    local_a8 = (longlong *)FUN_140084b30(&DAT_14047709c,4);
    uVar9 = FUN_140086de0(lVar8,"transition","");
    FUN_140085610(uVar9,&local_a8);
    FUN_140085440(&local_a8);
    local_98 = 0;
    FUN_140086ca0(&local_a8,1,0);
    local_a8 = (longlong *)0x5dc;
    uVar9 = FUN_140086de0(lVar8,"transitiontime","");
    FUN_140085610(uVar9,&local_a8);
    FUN_140085440(&local_a8);
  }
  return;
}

