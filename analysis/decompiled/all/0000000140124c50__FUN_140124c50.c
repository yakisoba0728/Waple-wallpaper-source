// Function: FUN_140124c50
// Addr: 140124c50
// Size: 1209 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140124c50(char *param_1,char *param_2)

{
  char cVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_68;
  undefined4 local_64;
  ushort local_60;
  short local_5e;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     ((((cVar1 = *param_2, param_1[0x20] != cVar1 ||
        (*(float *)(param_1 + 0x24) != *(float *)(param_2 + 4))) ||
       (*(float *)(param_1 + 0x28) != *(float *)(param_2 + 8))) ||
      (((*(float *)(param_1 + 0x2c) != *(float *)(param_2 + 0xc) ||
        (*(float *)(param_1 + 0x30) != *(float *)(param_2 + 0x10))) ||
       ((cVar5 = FUN_14000d0f0(param_1 + 0x38,param_2 + 0x18), cVar5 == '\0' ||
        (*(float *)(param_1 + 0x58) != *(float *)(param_2 + 0x38))))))))) {
    param_1[0x20] = cVar1;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x10);
    if (param_1 != param_2 + -0x20) {
      plVar7 = (longlong *)(param_2 + 0x18);
      if (0xf < *(ulonglong *)(param_2 + 0x30)) {
        plVar7 = (longlong *)*plVar7;
      }
      FUN_14000f880(param_1 + 0x38,plVar7,*(undefined8 *)(param_2 + 0x28));
    }
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x38);
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))(*(longlong **)(param_1 + 0x18),2);
    fVar4 = DAT_140492974;
    fVar11 = DAT_140492968;
    fVar3 = DAT_1404925f0;
    if (-1 < iVar6) {
      if (0.0 <= *(float *)(param_2 + 4)) {
        sVar2 = local_64._2_2_;
        uVar8 = local_64;
      }
      else {
        sVar2 = local_68._2_2_;
        uVar8 = local_68;
      }
      fVar9 = (float)local_60 * DAT_1404925f0 + (float)(int)local_5e;
      fVar9 = (float)((uint)*(float *)(param_2 + 4) & _DAT_140492fc0) *
              (((float)(uVar8 & 0xffff) * DAT_1404925f0 + (float)(int)sVar2) - fVar9) + fVar9;
      fVar10 = fVar9 * DAT_140492968;
      if (DAT_140492974 <= fVar10) {
        fVar10 = fVar10 - DAT_140492974;
      }
      uVar8 = (int)fVar9 << 0x10 | (uint)(ushort)(longlong)fVar10;
      local_54 = local_64;
      if ((int)uVar8 < (int)local_64) {
        local_54 = uVar8;
      }
      if ((int)local_54 < (int)(local_68 + 1)) {
        local_54 = local_68 + 1;
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
                (*(longlong **)(param_1 + 0x18),2,&local_58);
    }
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))
                      (*(longlong **)(param_1 + 0x18),1,&local_68);
    if (-1 < iVar6) {
      if (0.0 <= *(float *)(param_2 + 8)) {
        sVar2 = local_64._2_2_;
        uVar8 = local_64;
      }
      else {
        sVar2 = local_68._2_2_;
        uVar8 = local_68;
      }
      fVar9 = (float)local_60 * fVar3 + (float)(int)local_5e;
      fVar9 = (float)((uint)*(float *)(param_2 + 8) & _DAT_140492fc0) *
              (((float)(uVar8 & 0xffff) * fVar3 + (float)(int)sVar2) - fVar9) + fVar9;
      fVar10 = fVar9 * fVar11;
      if (fVar4 <= fVar10) {
        fVar10 = fVar10 - fVar4;
      }
      uVar8 = (int)fVar9 << 0x10 | (uint)(ushort)(longlong)fVar10;
      local_58 = local_64;
      if ((int)uVar8 < (int)local_64) {
        local_58 = uVar8;
      }
      if ((int)local_58 < (int)local_68) {
        local_58 = local_68;
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
                (*(longlong **)(param_1 + 0x18),1,&local_58);
    }
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))(*(longlong **)(param_1 + 0x18),8);
    if (-1 < iVar6) {
      if (0.0 <= *(float *)(param_2 + 0xc)) {
        sVar2 = local_64._2_2_;
        uVar8 = local_64;
      }
      else {
        sVar2 = local_68._2_2_;
        uVar8 = local_68;
      }
      fVar9 = (float)local_60 * fVar3 + (float)(int)local_5e;
      fVar9 = (float)((uint)*(float *)(param_2 + 0xc) & _DAT_140492fc0) *
              (((float)(uVar8 & 0xffff) * fVar3 + (float)(int)sVar2) - fVar9) + fVar9;
      fVar10 = fVar9 * fVar11;
      if (fVar4 <= fVar10) {
        fVar10 = fVar10 - fVar4;
      }
      uVar8 = (int)fVar9 << 0x10 | (uint)(ushort)(longlong)fVar10;
      local_4c = local_64;
      if ((int)uVar8 < (int)local_64) {
        local_4c = uVar8;
      }
      if ((int)local_4c < (int)local_68) {
        local_4c = local_68;
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
                (*(longlong **)(param_1 + 0x18),8,&local_58);
    }
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))(*(longlong **)(param_1 + 0x18),4);
    if (-1 < iVar6) {
      if (0.0 <= *(float *)(param_2 + 0x10)) {
        sVar2 = local_64._2_2_;
        uVar8 = local_64;
      }
      else {
        sVar2 = local_68._2_2_;
        uVar8 = local_68;
      }
      fVar9 = (float)local_60 * fVar3 + (float)(int)local_5e;
      fVar9 = (float)((uint)*(float *)(param_2 + 0x10) & _DAT_140492fc0) *
              (((float)(uVar8 & 0xffff) * fVar3 + (float)(int)sVar2) - fVar9) + fVar9;
      fVar11 = fVar9 * fVar11;
      if (fVar4 <= fVar11) {
        fVar11 = fVar11 - fVar4;
      }
      uVar8 = (int)fVar9 << 0x10 | (uint)(ushort)(longlong)fVar11;
      if ((int)uVar8 < (int)local_64) {
        local_64 = uVar8;
      }
      local_50 = local_64;
      if ((int)local_64 < (int)local_68) {
        local_50 = local_68;
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
                (*(longlong **)(param_1 + 0x18),4,&local_58);
    }
  }
  return;
}

