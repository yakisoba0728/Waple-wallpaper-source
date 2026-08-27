// Function: FUN_14001cb20
// Addr: 14001cb20
// Size: 304 bytes


HANDLE FUN_14001cb20(HICON param_1,byte param_2)

{
  float fVar1;
  HANDLE h;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
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
  
  local_78 = 0;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  local_54 = 0;
  uStack_4c = 0;
  local_14 = 0;
  local_44 = 0;
  uStack_3c = 0;
  local_34 = 0;
  uStack_2c = 0;
  local_24 = 0;
  uStack_1c = 0;
  local_98.fIcon = 0;
  local_98.xHotspot = 0;
  local_98.yHotspot = 0;
  local_98._12_4_ = 0;
  local_98.hbmMask = (HBITMAP)0x0;
  local_98.hbmColor = (HBITMAP)0x0;
  GetIconInfo(param_1,&local_98);
  h = CopyImage(local_98.hbmColor,0,0,0,0x2000);
  GetObjectW(h,0x68,&local_78);
  fVar1 = DAT_14049290c;
  if ((uStack_6c._6_2_ == 0x20) && (iVar5 = 0, 0 < local_74._4_4_ * (int)local_74)) {
    do {
      lVar4 = (longlong)iVar5;
      iVar5 = iVar5 + 1;
      uVar3 = *(int *)(CONCAT44(uStack_5c,uStack_60) + lVar4 * 4) >> 0x18 & 0xff;
      uVar2 = (int)(((float)uVar3 / fVar1) * (float)param_2) & 0xff;
      *(uint *)(CONCAT44(uStack_5c,uStack_60) + lVar4 * 4) =
           ((uVar3 << 8 | uVar2) << 8 | uVar2) << 8 | uVar2;
    } while (iVar5 < local_74._4_4_ * (int)local_74);
  }
  if (local_98.hbmColor != (HBITMAP)0x0) {
    DeleteObject(local_98.hbmColor);
  }
  if (local_98.hbmMask != (HBITMAP)0x0) {
    DeleteObject(local_98.hbmMask);
  }
  return h;
}

