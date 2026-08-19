// Function: FUN_14003c910
// Addr: 14003c910
// Size: 630 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14003c910(void)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  wchar_t local_28 [16];
  
  uVar2 = DAT_1404e5370;
  if (DAT_1404e5358 != 0) {
    DAT_1404e5370 = DAT_1404e5358;
    return 1;
  }
  iVar6 = 0;
  bVar1 = 9 < DAT_1404e5360;
  DAT_1404e5370 = 0;
  DAT_1404e5368 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  lVar4 = (*DAT_1404267f8)(L"Progman",0);
  _DAT_1404e5378 = lVar4;
  if (lVar4 == 0) {
    return 0;
  }
LAB_14003c9a2:
  do {
    iVar3 = (*DAT_140426af0)(uVar2);
    if (iVar3 == 0) {
LAB_14003c9eb:
      if (!bVar1) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0xd;
      }
      lVar5 = (*DAT_1404267f0)(lVar4,0x52c,uVar7,bVar1,1,0x9c4,local_res8);
      if (lVar5 == 0) {
        return 0;
      }
    }
    else {
      local_28[0] = L'\0';
      local_28[1] = L'\0';
      local_28[2] = L'\0';
      local_28[3] = L'\0';
      local_28[4] = L'\0';
      local_28[5] = L'\0';
      local_28[6] = L'\0';
      local_28[7] = L'\0';
      local_28[8] = L'\0';
      local_28[9] = L'\0';
      local_28[10] = L'\0';
      local_28[0xb] = L'\0';
      local_28[0xc] = L'\0';
      local_28[0xd] = L'\0';
      local_28[0xe] = L'\0';
      local_28[0xf] = L'\0';
      iVar3 = (*DAT_140426a90)(uVar2,local_28,0x10);
      if ((iVar3 < 0) || (iVar3 = wcsncmp(local_28,L"WorkerW",7), iVar3 != 0)) goto LAB_14003c9eb;
    }
    uVar7 = (*DAT_1404269b0)();
    (*DAT_1404269b8)(uVar7,&DAT_14003c830);
    if ((10 < DAT_1404e5360) && (iVar3 = (*DAT_140426af0)(local_38), iVar3 == 0)) {
      local_38 = (*DAT_1404269c0)(lVar4,0);
      iVar3 = (*DAT_140426af0)(local_38);
      if (iVar3 != 0) {
        local_48 = (*DAT_1404269c0)(lVar4,0,L"SHELLDLL_DefView");
        uStack_40 = (*DAT_1404269c0)(local_48,0);
      }
    }
    if (local_38 != 0) {
      (*DAT_140426990)(local_38,0xffffffec,0x80000a0);
      if (((DAT_1404e5360 < 8) && (iVar6 = (*DAT_140426af0)(local_48), iVar6 != 0)) &&
         (iVar6 = (*DAT_140426af0)(local_38), iVar6 != 0)) {
        (*DAT_140426af8)(local_38,4);
      }
      DAT_1404e5370 = local_38;
      DAT_1404e5368 = local_48;
      (*_UNK_1404269e0)(local_38,L"WallpaperEngineParent",1);
      if ((10 < DAT_1404e5360) && (iVar6 = (*DAT_140426af0)(uStack_40), iVar6 != 0)) {
        (*DAT_140426b00)(uStack_40,0,1);
      }
      return 1;
    }
    if (!bVar1) {
LAB_14003cafc:
      if (0x27 < iVar6) {
        return 0;
      }
      (*DAT_1404267e8)(0x1043,0);
      iVar6 = iVar6 + 1;
      bVar1 = false;
      (*DAT_140426240)(0x32);
      goto LAB_14003c9a2;
    }
    if (iVar6 < 10) {
      iVar6 = iVar6 + 1;
      (*DAT_140426240)(0x32);
    }
    else {
      if (0x13 < iVar6) goto LAB_14003cafc;
      iVar6 = iVar6 + 1;
      (*DAT_140426240)(300);
    }
  } while( true );
}

