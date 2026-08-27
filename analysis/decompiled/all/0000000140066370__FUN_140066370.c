// Function: FUN_140066370
// Addr: 140066370
// Size: 845 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140066370(longlong *param_1,char *param_2,char param_3)

{
  byte *pbVar1;
  code *pcVar2;
  longlong *plVar3;
  size_t sVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  bool bVar14;
  longlong *local_res8 [4];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  longlong local_88 [11];
  
  puVar11 = auStack_a8;
  puVar12 = auStack_a8;
  local_res8[0] = param_1;
  FUN_140030de0(&DAT_1404e5328,local_res8,param_2);
  plVar7 = local_res8[0];
  bVar14 = local_res8[0] != DAT_1404e5330;
  uVar10 = 0;
  if (local_res8[0] != DAT_1404e5330) {
    pcVar8 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pcVar8 = *(char **)param_2;
    }
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[0] = 0;
    local_88[1] = 0;
    sVar4 = strlen(pcVar8);
    FUN_140017480(local_88,pcVar8,sVar4);
    FUN_1400335d0(&DAT_1404e8ae0,local_88);
    if ((ulonglong)local_88[3] < 0x10) {
LAB_140066444:
      if ((longlong *)plVar7[6] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar7[6] + 0x18))();
        plVar7[6] = 0;
      }
      if ((ulonglong)plVar7[5] < 0x10) goto LAB_14006646b;
      plVar13 = (longlong *)plVar7[2];
      puVar12 = auStack_a8;
    }
    else {
      uVar9 = local_88[3] + 1;
      lVar5 = local_88[0];
      if (uVar9 < 0x1000) {
LAB_14006643f:
        thunk_FUN_14028af80(lVar5,uVar9);
        goto LAB_140066444;
      }
      lVar5 = *(longlong *)(local_88[0] + -8);
      if ((local_88[0] - lVar5) - 8U < 0x20) {
        uVar9 = local_88[3] + 0x28;
        goto LAB_14006643f;
      }
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar11 = auStack_a0;
LAB_14006646b:
      plVar13 = plVar7 + 2;
      puVar12 = puVar11;
    }
    lVar5 = DAT_1404e5340;
    plVar3 = DAT_1404e5330;
    uVar9 = 0xcbf29ce484222325;
    if (plVar7[4] != 0) {
      do {
        pbVar1 = (byte *)((longlong)plVar13 + uVar10);
        uVar10 = uVar10 + 1;
        uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
      } while (uVar10 < (ulonglong)plVar7[4]);
    }
    uVar9 = uVar9 & _DAT_1404e5358;
    plVar13 = *(longlong **)(DAT_1404e5340 + uVar9 * 0x10);
    if (*(longlong **)(DAT_1404e5340 + 8 + uVar9 * 0x10) == plVar7) {
      if (plVar13 == plVar7) {
        *(longlong **)(DAT_1404e5340 + uVar9 * 0x10) = DAT_1404e5330;
        *(longlong **)(lVar5 + 8 + uVar9 * 0x10) = plVar3;
      }
      else {
        *(longlong *)(DAT_1404e5340 + 8 + uVar9 * 0x10) = plVar7[1];
      }
    }
    else if (plVar13 == plVar7) {
      *(longlong *)(DAT_1404e5340 + uVar9 * 0x10) = *plVar7;
    }
    lVar5 = *plVar7;
    DAT_1404e5338 = DAT_1404e5338 + -1;
    *(longlong *)plVar7[1] = lVar5;
    *(longlong *)(lVar5 + 8) = plVar7[1];
    *(undefined8 *)(puVar12 + -8) = 0x140066513;
    FUN_140017240(plVar7 + 0x18);
    *(undefined8 *)(puVar12 + -8) = 0x14006651f;
    FUN_140017240(plVar7 + 0x14);
    *(undefined8 *)(puVar12 + -8) = 0x14006652b;
    FUN_140031b80(plVar7 + 0x11);
    *(undefined8 *)(puVar12 + -8) = 0x140066534;
    FUN_140031170(plVar7 + 10);
    *(undefined8 *)(puVar12 + -8) = 0x14006653d;
    FUN_140031170(plVar7 + 7);
    *(undefined8 *)(puVar12 + -8) = 0x140066546;
    FUN_140017240(plVar7 + 2);
    *(undefined8 *)(puVar12 + -8) = 0x140066553;
    thunk_FUN_14028af80(plVar7,0xe8);
    *(undefined8 *)(puVar12 + -8) = 0x140066558;
    FUN_14006e0c0();
    *(undefined8 *)(puVar12 + -8) = 0x14006655d;
    FUN_14006e6d0();
  }
  *(undefined8 *)(puVar12 + -8) = 0x140066577;
  lVar5 = FUN_140086de0(&DAT_1404e6378,"selectedwallpapers","");
  if (*(char *)(lVar5 + 8) == '\a') {
    *(undefined8 *)(puVar12 + -8) = 0x140066597;
    uVar6 = FUN_140086de0(&DAT_1404e6378,"selectedwallpapers","");
    *(undefined8 *)(puVar12 + -8) = 0x1400665a4;
    FUN_140085090(puVar12 + 0x40,uVar6);
  }
  else {
    puVar12[0x48] = 7;
    *(uint *)(puVar12 + 0x48) = *(uint *)(puVar12 + 0x48) & 0xfffffeff;
    *(undefined8 *)(puVar12 + 0x50) = 0;
    *(undefined8 *)(puVar12 + 0x58) = 0;
    *(undefined8 *)(puVar12 + 0x60) = 0;
    *(undefined8 *)(puVar12 + -8) = 0x1400665cb;
    plVar7 = (longlong *)FUN_14028af20(0x10);
    *plVar7 = 0;
    plVar7[1] = 0;
    *(undefined8 *)(puVar12 + -8) = 0x1400665df;
    lVar5 = FUN_14028af20(0x58);
    *(longlong *)lVar5 = lVar5;
    *(longlong *)(lVar5 + 8) = lVar5;
    *(longlong *)(lVar5 + 0x10) = lVar5;
    *(undefined2 *)(lVar5 + 0x18) = 0x101;
    *plVar7 = lVar5;
    *(longlong **)(puVar12 + 0x40) = plVar7;
  }
  pcVar8 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pcVar8 = *(char **)param_2;
  }
  lVar5 = *(longlong *)(param_2 + 0x10);
  *(undefined8 *)(puVar12 + -8) = 0x140066616;
  lVar5 = FUN_140086de0(puVar12 + 0x40,pcVar8,pcVar8 + lVar5);
  if (param_3 == '\0') {
    if (*(char *)(lVar5 + 8) != '\a') goto LAB_140066668;
    *(undefined8 *)(puVar12 + -8) = 0x140066637;
    lVar5 = FUN_140087490(lVar5,"playlist","");
    if (lVar5 != 0) goto LAB_140066668;
  }
  pcVar8 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pcVar8 = *(char **)param_2;
  }
  *(char **)(puVar12 + 0x20) = pcVar8;
  *(undefined8 *)(puVar12 + 0x28) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(puVar12 + -8) = 0x140066668;
  FUN_1400878f0(puVar12 + 0x40,puVar12 + 0x20);
LAB_140066668:
  *(undefined8 *)(puVar12 + -8) = 0x140066682;
  uVar6 = FUN_140086de0(&DAT_1404e6378,"selectedwallpapers","");
  *(undefined8 *)(puVar12 + -8) = 0x14006668f;
  FUN_140085520(uVar6,puVar12 + 0x40);
  if ((DAT_1404e52e4 >> 0x14 & 1) != 0) {
    *(undefined8 *)(puVar12 + -8) = 0x1400666a2;
    FUN_140074da0();
  }
  *(undefined8 *)(puVar12 + -8) = 0x1400666ac;
  FUN_140085440(puVar12 + 0x40);
  return bVar14;
}

