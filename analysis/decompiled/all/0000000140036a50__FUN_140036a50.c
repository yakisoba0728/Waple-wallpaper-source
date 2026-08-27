// Function: FUN_140036a50
// Addr: 140036a50
// Size: 487 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140036a50(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 local_48;
  undefined7 uStack_47;
  longlong local_38;
  ulonglong local_30;
  longlong local_28 [3];
  ulonglong local_10;
  
  KillTimer(DAT_1404e5280,0x75);
  iVar1 = *(int *)(param_3 + 0x40);
  uVar4 = FUN_140053e40(local_28,iVar1);
  FUN_14002fd20(&local_48,&DAT_140476c08,uVar4);
  if (0xf < local_10) {
    uVar6 = local_10 + 1;
    lVar5 = local_28[0];
    if (0xfff < uVar6) {
      lVar5 = *(longlong *)(local_28[0] + -8);
      if (0x1f < (local_28[0] - lVar5) - 8U) goto LAB_140036c2f;
      uVar6 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(lVar5,uVar6);
  }
  if (iVar1 < 0) {
LAB_140036af2:
    lVar5 = FUN_140086de0(&DAT_1404df5e8,"wpropertiesvd","");
    if (*(char *)(lVar5 + 8) != '\a') goto LAB_140036b97;
    uVar4 = FUN_140086de0(&DAT_1404df5e8,"wpropertiesvd","");
    puVar7 = &local_48;
    if (0xf < local_30) {
      puVar7 = (undefined1 *)CONCAT71(uStack_47,local_48);
    }
    lVar5 = FUN_140087490(uVar4,puVar7,puVar7 + local_38);
    if (lVar5 == 0) goto LAB_140036b97;
    uVar4 = FUN_140086de0(&DAT_1404df5e8,"wpropertiesvd","");
    puVar7 = &local_48;
    if (0xf < local_30) {
      puVar7 = (undefined1 *)CONCAT71(uStack_47,local_48);
    }
    lVar5 = FUN_140086de0(uVar4,puVar7,puVar7 + local_38);
    if (*(char *)(lVar5 + 8) != '\a') goto LAB_140036b97;
  }
  else {
    lVar5 = FUN_140087490(&DAT_1404df5e8,"wpropertiesvd","");
    if (lVar5 != 0) goto LAB_140036af2;
LAB_140036b97:
    FUN_140045c40(&PTR_s_wallpaperconfig_1404df5a0);
  }
  _DAT_1404df638 = iVar1;
  if (0xf < local_30) {
    lVar3 = CONCAT71(uStack_47,local_48);
    uVar6 = local_30 + 1;
    lVar5 = lVar3;
    if (0xfff < uVar6) {
      lVar5 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar5) - 8U) {
LAB_140036c2f:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(lVar5,uVar6);
  }
  local_38 = 0;
  local_30 = 0xf;
  local_48 = 0;
  KillTimer(DAT_1404e5280,0x79);
                    /* WARNING: Could not recover jumptable at 0x000140036c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetTimer(DAT_1404e5280,0x79,1,(TIMERPROC)0x0);
  return;
}

