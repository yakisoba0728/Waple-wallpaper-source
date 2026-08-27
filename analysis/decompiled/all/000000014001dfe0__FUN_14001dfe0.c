// Function: FUN_14001dfe0
// Addr: 14001dfe0
// Size: 442 bytes


HICON FUN_14001dfe0(char param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  HICON hIcon;
  HBITMAP h;
  HICON pHVar4;
  longlong lVar5;
  ICONINFO local_98;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined8 local_24;
  undefined8 uStack_1c;
  undefined4 local_14;
  
  iVar3 = GetSystemMetrics(0x31);
  if (0x10 < iVar3) {
    iVar3 = 0x20;
  }
  hIcon = LoadImageW(DAT_1404e8b80,(LPCWSTR)0x95,1,iVar3,iVar3,0x8000);
  pHVar4 = hIcon;
  if (param_1 != '\0') {
    local_78 = 0;
    local_14 = 0;
    local_98.fIcon = 0;
    local_98.xHotspot = 0;
    local_98.yHotspot = 0;
    local_98._12_4_ = 0;
    local_98.hbmMask = (HBITMAP)0x0;
    local_98.hbmColor = (HBITMAP)0x0;
    local_74 = 0;
    uStack_6c = 0;
    local_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    local_54 = 0;
    uStack_4c = 0;
    local_44 = 0;
    uStack_3c = 0;
    local_34 = 0;
    uStack_2c = 0;
    local_24 = 0;
    uStack_1c = 0;
    GetIconInfo(hIcon,&local_98);
    h = CopyImage(local_98.hbmColor,0,0,0,0x2000);
    GetObjectW(h,0x68,&local_78);
    fVar2 = DAT_14049290c;
    if (uStack_6c._6_2_ == 0x20) {
      iVar3 = 0;
      if (0 < local_74._4_4_ * (int)local_74) {
        do {
          lVar5 = (longlong)iVar3;
          iVar3 = iVar3 + 1;
          uVar1 = *(uint *)(CONCAT44(uStack_5c,uStack_60) + lVar5 * 4);
          *(int *)(CONCAT44(uStack_5c,uStack_60) + lVar5 * 4) =
               (int)(((float)(uVar1 >> 0x18) / fVar2) * (float)(uVar1 & 0xff)) << 0x18;
        } while (iVar3 < local_74._4_4_ * (int)local_74);
      }
    }
    if (local_98.hbmColor != (HBITMAP)0x0) {
      DeleteObject(local_98.hbmColor);
    }
    local_98.hbmColor = h;
    pHVar4 = CreateIconIndirect(&local_98);
    if (local_98.hbmMask != (HBITMAP)0x0) {
      DeleteObject(local_98.hbmMask);
    }
    DeleteObject(h);
    DestroyIcon(hIcon);
  }
  return pHVar4;
}

