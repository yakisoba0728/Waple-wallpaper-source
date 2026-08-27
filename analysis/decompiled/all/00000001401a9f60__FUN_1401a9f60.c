// Function: FUN_1401a9f60
// Addr: 1401a9f60
// Size: 596 bytes


void FUN_1401a9f60(float param_1,longlong param_2,longlong param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  
  uVar4 = *(uint *)(param_2 + 0xc);
  if ((uVar4 & 0x60000000) != 0) {
    return;
  }
  if (((uVar4 & 2) != 0) && (*(float *)(param_2 + 8) <= *(float *)(param_2 + 4))) {
    return;
  }
  if (*(float *)(param_2 + 8) <= 0.0) {
    return;
  }
  if ((int)uVar4 < 0) {
    param_1 = (float)((uint)param_1 ^ DAT_140492ff0);
  }
  fVar5 = param_1 + *(float *)(param_2 + 4);
  if (param_3 != 0) {
    pfVar1 = *(float **)(param_2 + 0x20);
    pfVar2 = *(float **)(param_2 + 0x18);
    if (param_1 <= 0.0) {
      for (; pfVar2 != pfVar1; pfVar2 = pfVar2 + 10) {
        if ((fVar5 < *pfVar2) && (*pfVar2 <= *(float *)(param_2 + 4))) {
          FUN_1401aa1c0(param_3,pfVar2);
        }
      }
    }
    else {
      for (; pfVar2 != pfVar1; pfVar2 = pfVar2 + 10) {
        if ((*(float *)(param_2 + 4) <= *pfVar2) && (*pfVar2 < fVar5)) {
          FUN_1401aa1c0(param_3,pfVar2);
        }
      }
    }
  }
  *(float *)(param_2 + 4) = fVar5;
  if ((uVar4 & 2) == 0) {
    if ((uVar4 & 1) == 0) {
      if (fVar5 < 0.0) {
        fVar5 = (float)FUN_14041d0c0(fVar5 + *(float *)(param_2 + 8));
        *(float *)(param_2 + 4) = fVar5;
        if ((0.0 <= fVar5) && (param_3 != 0)) {
          pfVar1 = *(float **)(param_2 + 0x20);
          for (pfVar2 = *(float **)(param_2 + 0x18); pfVar2 != pfVar1; pfVar2 = pfVar2 + 10) {
            fVar5 = *pfVar2;
            if ((*(float *)(param_2 + 4) <= fVar5 && fVar5 != *(float *)(param_2 + 4)) &&
               (fVar5 <= *(float *)(param_2 + 8))) {
              FUN_1401aa1c0(param_3,pfVar2);
            }
          }
        }
      }
      fVar5 = *(float *)(param_2 + 8);
      if (*(float *)(param_2 + 4) < fVar5) {
        return;
      }
      fVar3 = (float)FUN_14041d0c0(*(float *)(param_2 + 4),fVar5);
      *(float *)(param_2 + 4) = fVar3;
      if (fVar5 <= fVar3) {
        return;
      }
      if (param_3 == 0) {
        return;
      }
      pfVar1 = *(float **)(param_2 + 0x20);
      for (pfVar2 = *(float **)(param_2 + 0x18); pfVar2 != pfVar1; pfVar2 = pfVar2 + 10) {
        if ((0.0 <= *pfVar2) && (*pfVar2 < *(float *)(param_2 + 4))) {
          FUN_1401aa1c0(param_3,pfVar2);
        }
      }
      return;
    }
    if (-1 < (int)uVar4) {
      fVar3 = *(float *)(param_2 + 8);
      if (fVar5 < fVar3) {
        return;
      }
      fVar5 = (float)FUN_14041d0c0(fVar5,fVar3);
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x80000000;
      *(float *)(param_2 + 4) = fVar3 - fVar5;
      return;
    }
    if (0.0 < fVar5) {
      return;
    }
    uVar4 = FUN_14041d0c0(fVar5,*(undefined4 *)(param_2 + 8));
    fVar3 = (float)(uVar4 ^ DAT_140492ff0);
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0x7fffffff;
  }
  else {
    fVar3 = *(float *)(param_2 + 8);
    if (fVar5 < fVar3) {
      return;
    }
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x40000000;
  }
  *(float *)(param_2 + 4) = fVar3;
  return;
}

