// Function: FUN_14001b9c0
// Addr: 14001b9c0
// Size: 1717 bytes


undefined8 * FUN_14001b9c0(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 ***pppuVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 ****ppppuVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [24];
  undefined8 ***local_1c8 [2];
  longlong local_1b8;
  ulonglong local_1b0;
  longlong local_1a8;
  uint local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  ulonglong local_180 [5];
  undefined1 local_158 [16];
  undefined1 local_148 [32];
  longlong *local_128;
  longlong *local_120;
  longlong *local_108;
  ulonglong *local_100;
  int *local_f0;
  ulonglong local_d8;
  uint local_d0;
  undefined1 local_58 [48];
  
  puVar13 = auStack_1e8;
  local_1a0 = (local_1a0 >> 8 & 0xfffffe) << 8;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uVar6 = FUN_140086de0(&DAT_1404df5e8,"general","");
  lVar7 = FUN_140087490(uVar6,&DAT_1404737fc,&DAT_140473800);
  if (lVar7 != 0) {
    uVar6 = FUN_140086de0(uVar6,&DAT_1404737fc,&DAT_140473800);
    FUN_140085520(&local_1a8,uVar6);
  }
  uVar6 = FUN_140086de0(&local_1a8,"uiskin","");
  FUN_140085090(local_58,uVar6);
  FUN_14000ef10(local_158);
  FUN_14000c990(local_148," -weuimain ");
  uVar6 = FUN_14000cbc0(local_148,param_2);
  uVar6 = FUN_14000c990(uVar6," -buildv ");
  FUN_140031fc0(uVar6,0x1230cc94482a);
  local_180[2] = 0;
  local_180[1] = 0;
  local_180[0] = 0;
  local_180[3] = 0xf;
  cVar4 = FUN_140046870(&PTR_s_wallpaperconfig_1404df5a0,local_180,0);
  if (cVar4 != '\0') {
    uVar6 = FUN_14000c990(local_148," -skin ");
    FUN_14000cbc0(uVar6,local_180);
  }
  uVar6 = FUN_14000c990(local_148," -language ");
  uVar10 = (ulonglong)DAT_1404e6d80;
  if (0x23 < DAT_1404e6d80) {
    uVar10 = 0;
  }
  FUN_14000c990(uVar6,(&PTR_DAT_140478d70)[uVar10 * 4]);
  uVar6 = FUN_14000c990(local_148," -steamlanguage ");
  uVar10 = (ulonglong)DAT_1404e6d84;
  if (0x23 < DAT_1404e6d84) {
    uVar10 = 0;
  }
  FUN_14000c990(uVar6,(&PTR_DAT_140478d70)[uVar10 * 4]);
  uVar6 = FUN_140086de0(&local_1a8,"monitordetection","");
  uVar6 = FUN_140085cc0(uVar6,local_1c8);
  uVar8 = FUN_14000c990(local_148," -monitordetection ");
  FUN_14000cbc0(uVar8,uVar6);
  if (local_1b0 < 0x10) {
LAB_14001bc07:
    uVar6 = FUN_14000c990(local_148," -monitormap RAW~(");
    puVar11 = &DAT_1404e7f20;
    if ((DAT_1404e8df8 >> 4 & 1) == 0) {
      puVar11 = (undefined8 *)&DAT_1404e7ef8;
    }
    uVar8 = FUN_140004d00(local_1c8,puVar11,0);
    uVar6 = FUN_14000cbc0(uVar6,uVar8);
    FUN_14000c990(uVar6,")~END");
    if (0xf < local_1b0) {
      uVar10 = local_1b0 + 1;
      ppppuVar9 = (undefined8 ****)local_1c8[0];
      if (0xfff < uVar10) {
        ppppuVar9 = (undefined8 ****)local_1c8[0][-1];
        if (0x1f < (ulonglong)((longlong)local_1c8[0] + (-8 - (longlong)ppppuVar9)))
        goto LAB_14001bfc3;
        uVar10 = local_1b0 + 0x28;
      }
      thunk_FUN_14028af80(ppppuVar9,uVar10);
    }
    uVar6 = FUN_140086de0(&local_1a8,"uiquality","");
    FUN_140085cc0(uVar6,local_1c8);
    lVar7 = FUN_140086de0(&local_1a8,"uihardwareacceleration","");
    if (*(char *)(lVar7 + 8) == '\x05') {
      uVar6 = FUN_140086de0(&local_1a8,"uihardwareacceleration","");
      cVar4 = FUN_140086300(uVar6);
      if (cVar4 != '\0') goto LAB_14001bd10;
      bVar2 = true;
    }
    else {
LAB_14001bd10:
      bVar2 = false;
    }
    uVar10 = local_1b0;
    pppuVar3 = local_1c8[0];
    ppppuVar9 = local_1c8;
    if (0xf < local_1b0) {
      ppppuVar9 = (undefined8 ****)local_1c8[0];
    }
    if (local_1b8 == 4) {
      iVar5 = memcmp(ppppuVar9,&DAT_1404747dc,4);
      bVar15 = iVar5 == 0;
    }
    else {
      bVar15 = false;
    }
    ppppuVar9 = local_1c8;
    if (0xf < uVar10) {
      ppppuVar9 = (undefined8 ****)pppuVar3;
    }
    if (local_1b8 == 3) {
      iVar5 = memcmp(ppppuVar9,&DAT_1404747e4,3);
      bVar16 = iVar5 == 0;
    }
    else {
      bVar16 = false;
    }
    if (bVar2) {
      FUN_14000c990(local_148," --disable-gpu --disable-direct-composition");
    }
    if ((!bVar15) || (bVar2)) {
      FUN_14000c990(local_148," -disablefx");
    }
    if (bVar16) {
      FUN_14000c990(local_148," -disablegifs");
    }
    if ((DAT_1404df540 & 0x10000) != 0) {
      FUN_14000c990(local_148," -vdesktopenabled");
    }
    lVar7 = FUN_140087490(&local_1a8,&DAT_1404738ac,&DAT_1404738b1);
    if ((lVar7 != 0) &&
       (lVar7 = FUN_140086de0(&local_1a8,&DAT_1404738ac,&DAT_1404738b1),
       *(char *)(lVar7 + 8) == '\x04')) {
      uVar6 = FUN_14000c990(local_148,&DAT_1404738a8);
      uVar8 = FUN_140085cc0(lVar7,local_1c8);
      FUN_14000cbc0(uVar6,uVar8);
      if (0xf < local_1b0) {
        uVar12 = local_1b0 + 1;
        ppppuVar9 = (undefined8 ****)local_1c8[0];
        if (0xfff < uVar12) {
          ppppuVar9 = (undefined8 ****)local_1c8[0][-1];
          if (0x1f < (ulonglong)((longlong)local_1c8[0] + (-8 - (longlong)ppppuVar9)))
          goto LAB_14001bfc3;
          uVar12 = local_1b0 + 0x28;
        }
        thunk_FUN_14028af80(ppppuVar9,uVar12);
      }
    }
    FUN_14000c990(local_148," -x64");
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    if ((((byte)local_d0 & 0x22) == 2) || (uVar12 = *local_100, uVar12 == 0)) {
      if (((local_d0 & 4) == 0) && (*local_108 != 0)) {
        lVar7 = *local_128;
        uVar12 = (longlong)*local_f0 + *local_108;
        goto LAB_14001befe;
      }
    }
    else {
      lVar7 = *local_120;
      if (uVar12 < local_d8) {
        uVar12 = local_d8;
      }
LAB_14001befe:
      if (lVar7 != 0) {
        FUN_14000f880(param_1,lVar7,uVar12 - lVar7);
      }
    }
    if (0xf < uVar10) {
      uVar12 = uVar10 + 1;
      ppppuVar9 = (undefined8 ****)pppuVar3;
      if (0xfff < uVar12) {
        ppppuVar9 = (undefined8 ****)pppuVar3[-1];
        if (0x1f < (ulonglong)((longlong)pppuVar3 + (-8 - (longlong)ppppuVar9))) goto LAB_14001bfc3;
        uVar12 = uVar10 + 0x28;
      }
      thunk_FUN_14028af80(ppppuVar9,uVar12);
    }
    if (0xf < local_180[3]) {
      uVar12 = local_180[3] + 1;
      uVar10 = local_180[0];
      if (0xfff < uVar12) {
        uVar10 = *(ulonglong *)(local_180[0] - 8);
        if (0x1f < (local_180[0] - uVar10) - 8) goto LAB_14001bfc3;
        uVar12 = local_180[3] + 0x28;
      }
      thunk_FUN_14028af80(uVar10,uVar12);
    }
    local_180[2] = 0;
    local_180[3] = 0xf;
    local_180[0] = local_180[0] & 0xffffffffffffff00;
    FUN_1400056d0(local_158);
    FUN_140085440(local_58);
    puVar14 = auStack_1e8;
    switch((undefined1)local_1a0) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      goto switchD_14001bfc1_caseD_4;
    case 6:
    case 7:
      puVar14 = auStack_1e8;
      if (local_1a8 != 0) {
        FUN_140088e40(local_1a8);
        thunk_FUN_14028af80(local_1a8,0x10);
        puVar14 = auStack_1e8;
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
      puVar14 = auStack_1e8;
    }
  }
  else {
    uVar10 = local_1b0 + 1;
    ppppuVar9 = (undefined8 ****)local_1c8[0];
    if (uVar10 < 0x1000) {
LAB_14001bc02:
      thunk_FUN_14028af80(ppppuVar9,uVar10);
      goto LAB_14001bc07;
    }
    ppppuVar9 = (undefined8 ****)local_1c8[0][-1];
    if ((ulonglong)((longlong)local_1c8[0] + (-8 - (longlong)ppppuVar9)) < 0x20) {
      uVar10 = local_1b0 + 0x28;
      goto LAB_14001bc02;
    }
LAB_14001bfc3:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar13 = auStack_1e0;
switchD_14001bfc1_caseD_4:
    puVar14 = puVar13;
    if ((*(uint *)(puVar13 + 0x48) >> 8 & 1) != 0) {
      *(undefined8 *)(puVar13 + -8) = 0x14001bfdf;
      thunk_FUN_1402d9040(*(undefined8 *)(puVar13 + 0x40));
    }
  }
  lVar7 = *(longlong *)(puVar14 + 0x50);
  if (lVar7 != 0) {
    *(undefined8 *)(puVar14 + -8) = 0x14001c02e;
    FUN_140017240(lVar7 + 0x40);
    *(undefined8 *)(puVar14 + -8) = 0x14001c037;
    FUN_140017240(lVar7 + 0x20);
    *(undefined8 *)(puVar14 + -8) = 0x14001c03f;
    FUN_140017240(lVar7);
    *(undefined8 *)(puVar14 + -8) = 0x14001c04c;
    thunk_FUN_14028af80(lVar7,0x60);
  }
  *(undefined8 *)(puVar14 + -8) = 0x14001c054;
  FUN_140017240(param_2);
  return param_1;
}

