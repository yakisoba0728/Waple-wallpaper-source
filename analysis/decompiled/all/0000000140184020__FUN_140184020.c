// Function: FUN_140184020
// Addr: 140184020
// Size: 673 bytes


void FUN_140184020(longlong *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float local_res8;
  float local_resc;
  undefined8 local_38;
  float local_30;
  float local_2c;
  
  fVar2 = DAT_140492704;
  if ((*(uint *)(param_1 + 0x25) & 0x2000) == 0) {
    if ((param_1[0x62c] != 0) && (*param_1 != 0)) {
      local_res8 = *(float *)(*param_1 + 0x3bc);
      FUN_14017e920(param_1[0x62c],"bloomstrength",&local_res8,1);
      local_res8 = *(float *)(*param_1 + 0x3c0);
      FUN_14017e920(param_1[0x62c],"bloomthreshold",&local_res8,1);
      local_38 = *(undefined8 *)(*param_1 + 0x3d8);
      local_30 = *(float *)(*param_1 + 0x3e0);
      FUN_14017e920(param_1[0x62c],"bloomtint",&local_38,3);
      return;
    }
  }
  else if ((param_1[0x632] != 0) && (lVar4 = *param_1, lVar4 != 0)) {
    iVar6 = *(int *)(lVar4 + 0x3d4);
    iVar3 = *(int *)((longlong)param_1 + 0x310c);
    fVar1 = *(float *)(lVar4 + 0x3d0);
    iVar5 = iVar6;
    if ((float)iVar3 <= (float)iVar6) {
      iVar5 = iVar3;
    }
    if (DAT_140492704 <= (float)iVar5) {
      if ((float)iVar3 <= (float)iVar6) {
        iVar6 = iVar3;
      }
      *(int *)(param_1 + 0x621) = (int)(float)iVar6;
    }
    else {
      *(int *)(param_1 + 0x621) = (int)DAT_140492704;
    }
    fVar7 = (float)FUN_14041e350();
    local_res8 = *(float *)(lVar4 + 0x3c4) / (fVar7 + fVar2);
    local_resc = fVar1;
    FUN_14017e920(param_1[0x632],"bloomstrength",&local_res8,2);
    fVar2 = *(float *)(*param_1 + 0x3c8);
    fVar7 = fVar2 * *(float *)(*param_1 + 0x3cc);
    local_38 = CONCAT44(fVar2 - fVar7,fVar2);
    local_30 = fVar7 + fVar7;
    local_2c = DAT_14049268c / (fVar7 + DAT_1404925ec);
    FUN_14017e920(param_1[0x632],"blend",&local_38,4);
    local_38 = *(undefined8 *)(*param_1 + 0x3d8);
    local_30 = *(float *)(*param_1 + 0x3e0);
    FUN_14017e920(param_1[0x632],"bloomtint",&local_38,3);
    local_res8 = fVar1;
    FUN_14017e920(param_1[0x634],"scatter",&local_res8,1);
    local_res8 = fVar1;
    FUN_14017e920(param_1[0x635],"scatter",&local_res8,1);
  }
  return;
}

