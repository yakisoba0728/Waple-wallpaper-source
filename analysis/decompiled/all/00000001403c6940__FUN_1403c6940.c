// Function: FUN_1403c6940
// Addr: 1403c6940
// Size: 484 bytes


void FUN_1403c6940(longlong param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  
  *param_2 = (int)(short)((ushort)*(byte *)(param_1 + 1) * 0x100 + (ushort)*(byte *)(param_1 + 2));
  param_2[1] = (int)(short)((ushort)*(byte *)(param_1 + 3) * 0x100 + (ushort)*(byte *)(param_1 + 4))
  ;
  param_2[2] = (int)(short)((ushort)*(byte *)(param_1 + 5) * 0x100 + (ushort)*(byte *)(param_1 + 6))
  ;
  param_2[3] = (int)(short)((ushort)*(byte *)(param_1 + 7) * 0x100 + (ushort)*(byte *)(param_1 + 8))
  ;
  if (*param_3 != 0) {
    plVar1 = param_3 + 2;
    if (param_3 == (longlong *)0xffffffffffffffef) {
      plVar1 = (longlong *)0x0;
    }
    if ((int)plVar1[2] != 0) {
      fVar2 = (float)FUN_1403993a0(param_3,(uint)*(byte *)(param_1 + 10) * 0x10000 +
                                           (uint)*(byte *)(param_1 + 9) * 0x1000000 +
                                           (uint)*(byte *)(param_1 + 0xb) * 0x100 +
                                           (uint)*(byte *)(param_1 + 0xc),0);
      fVar3 = DAT_1404926c0;
      fVar2 = (float)FUN_14041a5c0(fVar2 + DAT_1404926c0);
      *param_2 = (int)((float)*param_2 + fVar2);
      fVar2 = (float)FUN_1403993a0(param_3,(uint)*(byte *)(param_1 + 10) * 0x10000 +
                                           (uint)*(byte *)(param_1 + 9) * 0x1000000 +
                                           (uint)*(byte *)(param_1 + 0xb) * 0x100 +
                                           (uint)*(byte *)(param_1 + 0xc),1);
      fVar2 = (float)FUN_14041a5c0(fVar2 + fVar3);
      param_2[1] = (int)((float)param_2[1] + fVar2);
      fVar2 = (float)FUN_1403993a0(param_3,(uint)*(byte *)(param_1 + 10) * 0x10000 +
                                           (uint)*(byte *)(param_1 + 9) * 0x1000000 +
                                           (uint)*(byte *)(param_1 + 0xb) * 0x100 +
                                           (uint)*(byte *)(param_1 + 0xc),2);
      fVar2 = (float)FUN_14041a5c0(fVar2 + fVar3);
      param_2[2] = (int)((float)param_2[2] + fVar2);
      fVar2 = (float)FUN_1403993a0(param_3,(uint)*(byte *)(param_1 + 10) * 0x10000 +
                                           (uint)*(byte *)(param_1 + 9) * 0x1000000 +
                                           (uint)*(byte *)(param_1 + 0xb) * 0x100 +
                                           (uint)*(byte *)(param_1 + 0xc),3);
      fVar3 = (float)FUN_14041a5c0(fVar2 + fVar3);
      param_2[3] = (int)((float)param_2[3] + fVar3);
    }
  }
  return;
}

