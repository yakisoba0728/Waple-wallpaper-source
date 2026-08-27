// Function: FUN_1403c6c20
// Addr: 1403c6c20
// Size: 188 bytes


void FUN_1403c6c20(byte *param_1,undefined8 param_2,float *param_3,undefined4 param_4,
                  undefined8 param_5)

{
  float fVar1;
  
  fVar1 = (float)FUN_1403993a0(param_5,param_4,0);
  *param_3 = ((float)(int)(short)((ushort)param_1[1] + (ushort)*param_1 * 0x100) + fVar1) *
             DAT_140471a5c;
  fVar1 = (float)FUN_1403993a0(param_5,param_4,1);
  fVar1 = (float)FUN_1403c6b30(param_2,(uint)param_1[3] + (uint)param_1[2] * 0x100,
                               ((float)(int)(short)((ushort)param_1[5] + (ushort)param_1[4] * 0x100)
                               + fVar1) * DAT_140471a5c,param_3 + 1);
  param_3[2] = fVar1;
  return;
}

