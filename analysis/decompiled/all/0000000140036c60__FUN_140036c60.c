// Function: FUN_140036c60
// Addr: 140036c60
// Size: 473 bytes


/* WARNING: Removing unreachable block (ram,0x000140036ce4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140036c60(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong local_58;
  uint local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined1 local_30 [8];
  uint local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    local_28 = local_28 & 0xfffffe00;
    FUN_1400450f0(&PTR_s_wallpaperconfig_1404df5a0,local_30);
                    /* WARNING: Could not recover jumptable at 0x000140036cba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + _DAT_140036e64))
              (IMAGE_DOS_HEADER_140000000.e_magic + _DAT_140036e64);
    return;
  }
  local_28 = local_28 & 0xfffffe00;
  puVar2 = *(undefined8 **)(param_2 + 8);
  for (puVar3 = (undefined8 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined8 *)*puVar3) {
    iVar1 = *(int *)(puVar3 + 6);
    puVar6 = puVar3 + 2;
    uVar7 = local_50 >> 8;
    local_50 = CONCAT31((int3)uVar7,1);
    uVar7 = local_50 & 0xfffffeff;
    if (0xf < (ulonglong)puVar3[5]) {
      puVar6 = (undefined8 *)*puVar6;
    }
    plVar5 = (longlong *)FUN_140086de0(local_30,puVar6,puVar3[4] + (longlong)puVar6);
    local_50 = (uint)plVar5[1];
    *(uint *)(plVar5 + 1) = uVar7;
    local_58 = *plVar5;
    *plVar5 = (longlong)iVar1;
    lVar4 = plVar5[2];
    plVar5[2] = 0;
    local_38 = plVar5[4];
    local_40 = plVar5[3];
    plVar5[3] = 0;
    plVar5[4] = 0;
    local_48 = lVar4;
    FUN_140086d30(&local_58);
    if (lVar4 != 0) {
      FUN_140017240(lVar4 + 0x40);
      FUN_140017240(lVar4 + 0x20);
      FUN_140017240(lVar4);
      thunk_FUN_14028af80(lVar4,0x60);
    }
  }
  FUN_1400450f0(&PTR_s_wallpaperconfig_1404df5a0,local_30);
  FUN_140085440(local_30);
  if ((DAT_1404df540 & 0x1000) != 0) {
    return;
  }
  KillTimer(DAT_1404e5280,0x7a);
                    /* WARNING: Could not recover jumptable at 0x000140036e55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetTimer(DAT_1404e5280,0x7a,1000,(TIMERPROC)0x0);
  return;
}

