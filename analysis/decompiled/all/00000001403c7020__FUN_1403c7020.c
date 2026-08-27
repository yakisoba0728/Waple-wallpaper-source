// Function: FUN_1403c7020
// Addr: 1403c7020
// Size: 208 bytes


void FUN_1403c7020(longlong param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float local_res8 [8];
  
  fVar3 = DAT_1404925f0;
  fVar2 = ((float)(int)((((uint)*(byte *)(param_1 + 9) + (uint)*(byte *)(param_1 + 8) * 0x100) *
                         0x100 + (uint)*(byte *)(param_1 + 10)) * 0x100 +
                       (uint)*(byte *)(param_1 + 0xb)) + 0.0) * DAT_1404925f0;
  *param_3 = fVar2;
  local_res8[0] =
       ((float)(int)((((uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5)) * 0x100
                     + (uint)*(byte *)(param_1 + 6)) * 0x100 + (uint)*(byte *)(param_1 + 7)) + 0.0)
       * fVar3;
  pfVar1 = local_res8;
  if (fVar2 <= local_res8[0]) {
    pfVar1 = param_3;
  }
  *param_2 = *pfVar1;
  fVar3 = ((float)(int)((((uint)*(byte *)(param_1 + 0xc) * 0x100 + (uint)*(byte *)(param_1 + 0xd)) *
                         0x100 + (uint)*(byte *)(param_1 + 0xe)) * 0x100 +
                       (uint)*(byte *)(param_1 + 0xf)) + 0.0) * fVar3;
  fVar2 = *param_3;
  if (*param_3 <= fVar3) {
    fVar2 = fVar3;
  }
  *param_4 = fVar2;
  return;
}

