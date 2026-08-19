// Function: FUN_14040eb90
// Addr: 14040eb90
// Size: 215 bytes


void FUN_14040eb90(float *param_1,longlong param_2)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  float *pfVar4;
  
  if (*param_1 == 0.0) {
    if (param_1[1] != 0.0) {
      lVar3 = *(longlong *)(param_2 + 8);
      lVar1 = lVar3 + (ulonglong)*(uint *)(param_2 + 0x10) * 0xc;
      if (lVar3 != lVar1) {
        do {
          *(float *)(lVar3 + 4) = param_1[1] + *(float *)(lVar3 + 4);
          lVar3 = lVar3 + 0xc;
        } while (lVar3 != lVar1);
        return;
      }
    }
  }
  else {
    pfVar4 = *(float **)(param_2 + 8);
    if (param_1[1] == 0.0) {
      pfVar2 = pfVar4 + (ulonglong)*(uint *)(param_2 + 0x10) * 3;
      if (pfVar4 != pfVar2) {
        do {
          *pfVar4 = *pfVar4 + *param_1;
          pfVar4 = pfVar4 + 3;
        } while (pfVar4 != pfVar2);
        return;
      }
    }
    else {
      pfVar2 = pfVar4 + (ulonglong)*(uint *)(param_2 + 0x10) * 3;
      for (; pfVar4 != pfVar2; pfVar4 = pfVar4 + 3) {
        *pfVar4 = *param_1 + *pfVar4;
        pfVar4[1] = pfVar4[1] + param_1[1];
      }
    }
  }
  return;
}

