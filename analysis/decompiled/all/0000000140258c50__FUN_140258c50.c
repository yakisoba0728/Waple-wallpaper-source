// Function: FUN_140258c50
// Addr: 140258c50
// Size: 171 bytes


void FUN_140258c50(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = DAT_1404926f0;
  if ((*(byte *)(param_1 + 0x518) & 2) == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x520);
    if (*(float *)(param_1 + 0x520) <= DAT_1404927d4) {
      fVar2 = DAT_1404927d4;
    }
  }
  *param_2 = fVar2;
  *(undefined8 *)(param_2 + 1) = *(undefined8 *)(param_1 + 0x524);
  param_2[3] = *(float *)(param_1 + 0x52c);
  if ((*(byte *)(param_1 + 0x518) & 4) == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x530);
    if (*(float *)(param_1 + 0x530) <= fVar1) {
      fVar2 = fVar1;
    }
  }
  param_2[4] = fVar2;
  fVar2 = 0.0;
  if (((*(byte *)(param_1 + 0x518) & 8) != 0) &&
     (fVar2 = *(float *)(param_1 + 0x534), *(float *)(param_1 + 0x534) <= fVar1)) {
    fVar2 = fVar1;
  }
  param_2[5] = fVar2;
  param_2[6] = *(float *)(param_1 + 0x538);
  *(undefined8 *)(param_2 + 7) = *(undefined8 *)(param_1 + 0x544);
  param_2[9] = *(float *)(param_1 + 0x54c);
  if ((*(byte *)(param_1 + 0x518) & 8) == 0) {
    param_2[10] = 0.0;
    param_2[0xb] = 0.0;
    return;
  }
  *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_1 + 0x53c);
  return;
}

