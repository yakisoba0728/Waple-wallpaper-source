// Function: FUN_14026c8b0
// Addr: 14026c8b0
// Size: 204 bytes


float FUN_14026c8b0(longlong param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = DAT_140492704;
  fVar7 = DAT_1404925e0;
  uVar3 = *(uint *)(param_1 + 0xd0);
  fVar5 = *(float *)(param_1 + 0xcc);
  if ((uVar3 & 4) == 0) goto LAB_14026c931;
  fVar1 = *(float *)(param_1 + 0x100);
  fVar2 = *(float *)(param_1 + 0x18c);
  fVar4 = fVar1;
  if (fVar2 <= fVar1) {
    fVar4 = fVar2;
  }
  if (fVar4 <= DAT_1404925e0) {
LAB_14026c90b:
    fVar4 = DAT_140492704;
  }
  else {
    fVar4 = fVar1 * DAT_1404926c0;
    if (fVar2 <= fVar1 * DAT_1404926c0) {
      fVar4 = fVar2;
    }
    fVar4 = *(float *)(param_1 + 0xfc) / fVar4;
    if (DAT_140492704 < fVar4) goto LAB_14026c90b;
  }
  fVar5 = fVar4 * fVar5;
  if (((*(byte *)(param_1 + 0x104) & 2) == 0) && (DAT_140492704 <= fVar4)) {
    uVar3 = uVar3 & 0xfffffffb;
    *(uint *)(param_1 + 0xd0) = uVar3;
  }
LAB_14026c931:
  if ((uVar3 & 8) != 0) {
    fVar1 = *(float *)(param_1 + 0x100);
    fVar2 = *(float *)(param_1 + 0x18c);
    fVar4 = fVar1;
    if (fVar2 <= fVar1) {
      fVar4 = fVar2;
    }
    if (fVar7 < fVar4) {
      fVar7 = fVar1 * DAT_1404926c0;
      if (fVar2 <= fVar1 * DAT_1404926c0) {
        fVar7 = fVar2;
      }
      fVar7 = (fVar1 - *(float *)(param_1 + 0xfc)) / fVar7;
      if (fVar7 <= fVar6) {
        fVar6 = fVar7;
      }
      fVar5 = fVar5 * fVar6;
    }
  }
  return fVar5;
}

