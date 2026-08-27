// Function: FUN_14040a0f0
// Addr: 14040a0f0
// Size: 271 bytes


void FUN_14040a0f0(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = DAT_1404926c0;
  iVar3 = *param_2;
  lVar1 = *(longlong *)(param_1 + 0x58);
  lVar2 = *(longlong *)(param_1 + 0x60);
  iVar4 = param_2[1];
  fVar5 = (float)FUN_14041a5c0((float)(int)((ulonglong)((short)iVar3 * lVar1 + 0x8000) >> 0x10) +
                               DAT_1404926c0);
  *param_2 = (int)fVar5;
  fVar6 = (float)FUN_14041a5c0((float)(int)((ulonglong)((short)iVar4 * lVar2 + 0x8000) >> 0x10) +
                               fVar8);
  param_2[1] = (int)fVar6;
  fVar7 = (float)FUN_14041a5c0((float)(int)((ulonglong)
                                            ((short)((short)iVar3 + (short)param_2[2]) * lVar1 +
                                            0x8000) >> 0x10) + fVar8);
  param_2[2] = (int)(fVar7 - (float)(int)fVar5);
  fVar8 = (float)FUN_14041a5c0((float)(int)((ulonglong)
                                            ((short)((short)iVar4 + (short)param_2[3]) * lVar2 +
                                            0x8000) >> 0x10) + fVar8);
  param_2[3] = (int)(fVar8 - (float)(int)fVar6);
  return;
}

