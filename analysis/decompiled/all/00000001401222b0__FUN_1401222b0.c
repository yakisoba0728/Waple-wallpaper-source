// Function: FUN_1401222b0
// Addr: 1401222b0
// Size: 1187 bytes


/* WARNING: Removing unreachable block (ram,0x000140122738) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401222b0(longlong param_1)

{
  short sVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  undefined1 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_98;
  undefined4 local_94;
  ushort local_90;
  short local_8e;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  if ((((*(float *)(lVar2 + 0x1a8) == 0.0) && (*(float *)(lVar2 + 0x1a4) == 0.0)) &&
      (*(float *)(lVar2 + 0x1b0) == 0.0)) && (*(float *)(lVar2 + 0x1ac) == 0.0)) {
    if (*(char *)(param_1 + 0x68) == '\0') {
      return;
    }
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  iVar5 = MFGetService(*(undefined8 *)(param_1 + 0x88),&DAT_14042c380,&DAT_140489fa0);
  if (-1 < iVar5) {
    *(undefined1 *)(param_1 + 0x68) = uVar7;
    iVar5 = (**(code **)(lRam0000000000000000 + 0x38))(0,2);
    fVar4 = DAT_140492974;
    fVar10 = DAT_140492968;
    fVar3 = DAT_1404925f0;
    if (-1 < iVar5) {
      if (0.0 <= *(float *)(lVar2 + 0x1a4)) {
        sVar1 = local_94._2_2_;
        uVar6 = local_94;
      }
      else {
        sVar1 = local_98._2_2_;
        uVar6 = local_98;
      }
      fVar8 = (float)local_90 * DAT_1404925f0 + (float)(int)local_8e;
      fVar8 = (float)((uint)*(float *)(lVar2 + 0x1a4) & _DAT_140492fc0) *
              (((float)(uVar6 & 0xffff) * DAT_1404925f0 + (float)(int)sVar1) - fVar8) + fVar8;
      fVar9 = fVar8 * DAT_140492968;
      if (DAT_140492974 <= fVar9) {
        fVar9 = fVar9 - DAT_140492974;
      }
      uVar6 = (int)fVar8 << 0x10 | (uint)(ushort)(longlong)fVar9;
      local_84 = local_94;
      if ((int)uVar6 < (int)local_94) {
        local_84 = uVar6;
      }
      if ((int)local_84 < (int)(local_98 + 1)) {
        local_84 = local_98 + 1;
      }
      (**(code **)(lRam0000000000000000 + 0x48))(0,2,&local_88);
    }
    iVar5 = (**(code **)(lRam0000000000000000 + 0x38))(0,1,&local_98);
    if (-1 < iVar5) {
      if (0.0 <= *(float *)(lVar2 + 0x1a8)) {
        sVar1 = local_94._2_2_;
        uVar6 = local_94;
      }
      else {
        sVar1 = local_98._2_2_;
        uVar6 = local_98;
      }
      fVar8 = (float)local_90 * fVar3 + (float)(int)local_8e;
      fVar8 = (float)((uint)*(float *)(lVar2 + 0x1a8) & _DAT_140492fc0) *
              (((float)(uVar6 & 0xffff) * fVar3 + (float)(int)sVar1) - fVar8) + fVar8;
      fVar9 = fVar8 * fVar10;
      if (fVar4 <= fVar9) {
        fVar9 = fVar9 - fVar4;
      }
      uVar6 = (int)fVar8 << 0x10 | (uint)(ushort)(longlong)fVar9;
      local_88 = local_94;
      if ((int)uVar6 < (int)local_94) {
        local_88 = uVar6;
      }
      if ((int)local_88 < (int)local_98) {
        local_88 = local_98;
      }
      (**(code **)(lRam0000000000000000 + 0x48))(0,1,&local_88);
    }
    iVar5 = (**(code **)(lRam0000000000000000 + 0x38))(0,8);
    if (-1 < iVar5) {
      if (0.0 <= *(float *)(lVar2 + 0x1ac)) {
        sVar1 = local_94._2_2_;
        uVar6 = local_94;
      }
      else {
        sVar1 = local_98._2_2_;
        uVar6 = local_98;
      }
      fVar8 = (float)local_90 * fVar3 + (float)(int)local_8e;
      fVar8 = (float)((uint)*(float *)(lVar2 + 0x1ac) & _DAT_140492fc0) *
              (((float)(uVar6 & 0xffff) * fVar3 + (float)(int)sVar1) - fVar8) + fVar8;
      fVar9 = fVar8 * fVar10;
      if (fVar4 <= fVar9) {
        fVar9 = fVar9 - fVar4;
      }
      uVar6 = (int)fVar8 << 0x10 | (uint)(ushort)(longlong)fVar9;
      local_7c = local_94;
      if ((int)uVar6 < (int)local_94) {
        local_7c = uVar6;
      }
      if ((int)local_7c < (int)local_98) {
        local_7c = local_98;
      }
      (**(code **)(lRam0000000000000000 + 0x48))(0,8,&local_88);
    }
    iVar5 = (**(code **)(lRam0000000000000000 + 0x38))(0,4);
    if (-1 < iVar5) {
      if (0.0 <= *(float *)(lVar2 + 0x1b0)) {
        sVar1 = local_94._2_2_;
        uVar6 = local_94;
      }
      else {
        sVar1 = local_98._2_2_;
        uVar6 = local_98;
      }
      fVar8 = (float)local_90 * fVar3 + (float)(int)local_8e;
      fVar8 = (float)((uint)*(float *)(lVar2 + 0x1b0) & _DAT_140492fc0) *
              (((float)(uVar6 & 0xffff) * fVar3 + (float)(int)sVar1) - fVar8) + fVar8;
      fVar10 = fVar8 * fVar10;
      if (fVar4 <= fVar10) {
        fVar10 = fVar10 - fVar4;
      }
      uVar6 = (int)fVar8 << 0x10 | (uint)(ushort)(longlong)fVar10;
      if ((int)uVar6 < (int)local_94) {
        local_94 = uVar6;
      }
      local_80 = local_94;
      if ((int)local_94 < (int)local_98) {
        local_80 = local_98;
      }
      (**(code **)(lRam0000000000000000 + 0x48))(0,4,&local_88);
    }
  }
  return;
}

