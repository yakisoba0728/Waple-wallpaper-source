// Function: FUN_140007c30
// Addr: 140007c30
// Size: 26 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140007c30(undefined8 param_1,char param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [64];
  undefined1 auStack_48 [32];
  
  uVar2 = (*DAT_140426740)();
  (*_UNK_140426668)(uVar2,0x80);
  (*_UNK_140426820)(0);
  (*_UNK_140426780)(&UNK_140473a18);
  if (param_2 == '\0') {
    if (DAT_1404e8c30 == 0) {
      (*DAT_1404266a0)(0);
      lVar3 = (*DAT_140426698)(0,0,L"cxWallpaperEngineGlobalMutex");
      iVar1 = (*DAT_1404266a8)();
    }
    else {
      iVar1 = 0;
      lVar3 = DAT_1404e8c30;
    }
    DAT_1404e8c30 = lVar3;
    if ((((lVar3 != 0) && (iVar1 == 0xb7)) || (lVar3 == 0)) && ((param_3 == '\0' && (lVar3 != 0))))
    {
      (*_UNK_140426690)(lVar3);
      DAT_1404e8c30 = 0;
    }
  }
  if (DAT_1404e5388 == 2) {
    FUN_140098bd0("Application start.\nVersion: %s (%s)\n\n",&UNK_140473a6c,&UNK_140473a58);
    puVar4 = (undefined8 *)FUN_140005fb0(auStack_88);
    if (7 < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    FUN_140098bd0("Working dir: %S\n",puVar4);
                    /* WARNING: Subroutine does not return */
    FUN_140016840(auStack_88);
  }
  uVar2 = FUN_140005fb0(auStack_48);
                    /* WARNING: Subroutine does not return */
  FUN_1400166d0(auStack_88,uVar2);
}

