// Function: FUN_1400ff750
// Addr: 1400ff750
// Size: 1376 bytes


ulonglong FUN_1400ff750(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 ****ppppuVar12;
  char *pcVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 *puVar17;
  uint uVar18;
  undefined8 ***local_98;
  undefined8 uStack_90;
  longlong local_88;
  ulonglong local_80;
  undefined8 ***local_78 [2];
  longlong local_68;
  ulonglong local_60;
  undefined8 ***local_58 [2];
  longlong local_48;
  ulonglong local_40;
  
  uVar18 = 0;
  puVar8 = (undefined8 *)FUN_140086de0(param_2,"videoframework","");
  lVar9 = *(longlong *)(param_1 + 0x268);
  plVar1 = (longlong *)(param_1 + 0x260);
  lVar16 = *plVar1;
  if (lVar16 != lVar9) {
    do {
      FUN_140017240(lVar16);
      lVar16 = lVar16 + 0x20;
    } while (lVar16 != lVar9);
    *(longlong *)(param_1 + 0x268) = *plVar1;
  }
  if ((char)*(uint *)(puVar8 + 1) == '\x04') {
    puVar17 = (undefined1 *)*puVar8;
    if ((puVar17 != (undefined1 *)0x0) && ((*(uint *)(puVar8 + 1) >> 8 & 1) != 0)) {
      puVar17 = puVar17 + 4;
    }
  }
  else {
    puVar17 = &DAT_140474480;
  }
  iVar6 = FUN_1402c10d0(puVar17,&DAT_1404884d0);
  if (iVar6 == 0) {
    FUN_1401031f0(plVar1,&DAT_1404884d0);
    FUN_1401031f0(plVar1,"mfEngine");
    FUN_1401031f0(plVar1,"mfEngine.muted");
    FUN_140103450(plVar1);
    FUN_1401031f0(plVar1,"mf.muted");
  }
  else {
    iVar6 = FUN_1402c10d0(puVar17,&DAT_140476d00);
    if (iVar6 == 0) {
      FUN_140103450();
      FUN_1401031f0(plVar1,"mf.muted");
      FUN_1401031f0(plVar1,&DAT_1404884d0);
      FUN_1401031f0(plVar1,"mfEngine");
      pcVar13 = "mfEngine.muted";
    }
    else {
      FUN_1401031f0(plVar1,"mfEngine");
      FUN_1401031f0(plVar1,"mfEngine.muted");
      FUN_140103450(plVar1);
      FUN_1401031f0(plVar1,"mf.muted");
      pcVar13 = "dshow.lav.vmr9";
    }
    FUN_1401031f0(plVar1,pcVar13);
  }
  lVar9 = FUN_140086de0(param_2,"location","");
  uVar10 = FUN_140086de0(param_2,"videoaudiooutput","");
  cVar4 = FUN_140086300(uVar10);
  if (cVar4 == '\0') {
LAB_1400ff95f:
    bVar5 = 0;
  }
  else {
    if ((*(char *)(lVar9 + 8) == '\a') &&
       (lVar16 = FUN_140087490(lVar9,"videoaudiooutput",""), lVar16 != 0)) {
      uVar10 = FUN_140086de0(lVar9,"videoaudiooutput","");
      cVar4 = FUN_140086300(uVar10);
      if (cVar4 == '\0') goto LAB_1400ff95f;
    }
    bVar5 = 1;
  }
  uVar2 = *(uint *)(param_1 + 0x17c);
  if (bVar5 != ((byte)(uVar2 >> 3) & 1)) {
    uVar18 = 8;
    uVar11 = uVar2 | 8;
    if (bVar5 == 0) {
      uVar11 = uVar2 & 0xfffffff7;
    }
    *(uint *)(param_1 + 0x17c) = uVar11;
  }
  uVar10 = FUN_140086de0(param_2,"videohardwareacceleration","");
  bVar5 = FUN_140086300(uVar10);
  uVar2 = *(uint *)(param_1 + 0x17c);
  if ((bVar5 ^ 1) != ((byte)(uVar2 >> 4) & 1)) {
    uVar11 = uVar2 | 0x10;
    if (bVar5 != 0) {
      uVar11 = uVar2 & 0xffffffef;
    }
    uVar18 = uVar18 | 4;
    *(uint *)(param_1 + 0x17c) = uVar11;
  }
  uVar10 = FUN_140086de0(param_2,"videoloopmode","");
  FUN_140085cc0(uVar10,local_78);
  uVar15 = local_60;
  ppppuVar12 = local_78;
  if (0xf < local_60) {
    ppppuVar12 = (undefined8 ****)local_78[0];
  }
  if ((local_68 == 9) && (iVar6 = memcmp(ppppuVar12,"syncclock",9), iVar6 == 0)) {
    iVar6 = 1;
  }
  else {
    iVar6 = 0;
    ppppuVar12 = local_78;
    if (0xf < uVar15) {
      ppppuVar12 = (undefined8 ****)local_78[0];
    }
    if (local_68 == 8) {
      iVar7 = memcmp(ppppuVar12,"synctopo",8);
      iVar6 = 0;
      if (iVar7 == 0) {
        iVar6 = 2;
      }
    }
  }
  if (iVar6 != *(int *)(param_1 + 0x198)) {
    *(int *)(param_1 + 0x198) = iVar6;
    uVar18 = uVar18 | 0x10;
  }
  uVar10 = FUN_140086de0(param_2,"videoreadmode","");
  FUN_140085cc0(uVar10,local_58);
  ppppuVar12 = local_58;
  if (0xf < local_40) {
    ppppuVar12 = (undefined8 ****)local_58[0];
  }
  if (local_48 == 10) {
    iVar6 = memcmp(ppppuVar12,"frommemory",10);
    iVar7 = 0;
    if (iVar6 == 0) {
      iVar7 = 1;
    }
  }
  else {
    iVar7 = 0;
  }
  if (iVar7 != *(int *)(param_1 + 0x19c)) {
    *(int *)(param_1 + 0x19c) = iVar7;
    uVar18 = uVar18 | 0x20;
  }
  lVar9 = FUN_140086de0(param_2,"videomfstutterhack","");
  if (*(char *)(puVar8 + 1) == '\x04') {
    FUN_140085cc0(puVar8,&local_98);
    uVar15 = local_80;
    lVar16 = local_88;
    if (local_88 == 0) goto LAB_1400ffc7d;
    ppppuVar12 = &local_98;
    if (0xf < local_80) {
      ppppuVar12 = (undefined8 ****)local_98;
    }
    if ((local_88 == 2) && (iVar6 = memcmp(ppppuVar12,&DAT_140476d00,2), iVar6 == 0))
    goto LAB_1400ffc7d;
    ppppuVar12 = &local_98;
    if (0xf < uVar15) {
      ppppuVar12 = (undefined8 ****)local_98;
    }
    if ((lVar16 == 8) && (iVar6 = memcmp(ppppuVar12,"mfEngine",8), iVar6 == 0)) goto LAB_1400ffc7d;
LAB_1400ffb75:
    *(uint *)(param_1 + 0x17c) = *(uint *)(param_1 + 0x17c) & 0xffffffdf;
  }
  else {
    local_88 = 0;
    uVar15 = 0xf;
    uStack_90 = 0;
    local_98 = (undefined8 ****)0x0;
    local_80 = 0xf;
LAB_1400ffc7d:
    if ((*(char *)(lVar9 + 8) != '\x05') ||
       (cVar4 = FUN_140086300(lVar9), uVar15 = local_80, cVar4 == '\0')) goto LAB_1400ffb75;
    *(uint *)(param_1 + 0x17c) = *(uint *)(param_1 + 0x17c) | 0x20;
  }
  if (0xf < uVar15) {
    uVar14 = uVar15 + 1;
    ppppuVar12 = (undefined8 ****)local_98;
    if (0xfff < uVar14) {
      ppppuVar12 = (undefined8 ****)local_98[-1];
      if (0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)ppppuVar12))) goto LAB_1400ffca8;
      uVar14 = uVar15 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar12,uVar14);
  }
  local_88 = 0;
  local_80 = 0xf;
  local_98 = (undefined8 ***)((ulonglong)local_98 & 0xffffffffffffff00);
  if (0xf < local_40) {
    uVar15 = local_40 + 1;
    ppppuVar12 = (undefined8 ****)local_58[0];
    if (0xfff < uVar15) {
      ppppuVar12 = (undefined8 ****)local_58[0][-1];
      if (0x1f < (ulonglong)((longlong)local_58[0] + (-8 - (longlong)ppppuVar12)))
      goto LAB_1400ffca8;
      uVar15 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar12,uVar15);
  }
  if (0xf < local_60) {
    uVar15 = local_60 + 1;
    ppppuVar12 = (undefined8 ****)local_78[0];
    if (0xfff < uVar15) {
      ppppuVar12 = (undefined8 ****)local_78[0][-1];
      if (0x1f < (ulonglong)((longlong)local_78[0] + (-8 - (longlong)ppppuVar12))) {
LAB_1400ffca8:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        uVar15 = (*pcVar3)();
        return uVar15;
      }
      uVar15 = local_60 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar12,uVar15);
  }
  FUN_140085440(param_2);
  return (ulonglong)uVar18;
}

