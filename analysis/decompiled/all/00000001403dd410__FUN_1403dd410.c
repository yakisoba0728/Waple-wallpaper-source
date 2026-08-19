// Function: FUN_1403dd410
// Addr: 1403dd410
// Size: 272 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403dd410(undefined8 param_1,int *param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  char cVar9;
  float *pfVar10;
  ulonglong uVar11;
  
  uVar1 = param_2[1] - 1;
  if (uVar1 < (uint)param_2[1]) {
    pfVar10 = (float *)(*(longlong *)(param_2 + 2) + (ulonglong)uVar1 * 0x18);
  }
  else {
    pfVar10 = (float *)&DAT_1404e4ff0;
    DAT_1404e4ff0 = CONCAT44(DAT_14045dde0._4_4_,(undefined4)DAT_14045dde0);
    DAT_1404e4ff8 = CONCAT44(_DAT_14045ddec,_DAT_14045dde8);
    _DAT_1404e5000 = DAT_14045ddf0;
  }
  fVar2 = *pfVar10;
  fVar3 = pfVar10[1];
  fVar4 = pfVar10[2];
  fVar5 = pfVar10[3];
  fVar6 = pfVar10[4];
  fVar7 = pfVar10[5];
  if ((*param_2 <= param_2[1]) && (cVar9 = FUN_1403a4b00(param_2,param_2[1] + 1,0), cVar9 == '\0'))
  {
    DAT_1404e4ff0 = CONCAT44(DAT_14045dde0._4_4_,(undefined4)DAT_14045dde0);
    DAT_1404e4ff8 = CONCAT44(_DAT_14045ddec,_DAT_14045dde8);
    _DAT_1404e5000 = DAT_14045ddf0;
    return;
  }
  uVar11 = (ulonglong)(uint)param_2[1];
  lVar8 = *(longlong *)(param_2 + 2);
  param_2[1] = param_2[1] + 1;
  *(float *)(lVar8 + uVar11 * 0x18) = fVar4 * param_4 + fVar2 * param_3;
  *(float *)(lVar8 + 4 + uVar11 * 0x18) = fVar5 * param_4 + fVar3 * param_3;
  *(float *)(lVar8 + 8 + uVar11 * 0x18) = fVar4 * param_6 + fVar2 * param_5;
  *(float *)(lVar8 + 0xc + uVar11 * 0x18) = fVar5 * param_6 + fVar3 * param_5;
  *(float *)(lVar8 + 0x10 + uVar11 * 0x18) = fVar4 * param_8 + fVar2 * param_7 + fVar6;
  *(float *)(lVar8 + 0x14 + uVar11 * 0x18) = fVar5 * param_8 + fVar3 * param_7 + fVar7;
  return;
}

