// Function: FUN_140258900
// Addr: 140258900
// Size: 419 bytes


void FUN_140258900(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float local_res8;
  float fStackX_c;
  
  if ((char)param_1[0x65] == '\0') {
    lVar1 = param_1[0xb5];
    fVar2 = DAT_1404927a8;
    fVar3 = DAT_1404927a8;
    if (lVar1 != 0) {
      fVar2 = *(float *)(lVar1 + 0x98) - *(float *)(lVar1 + 0x90);
      fVar3 = *(float *)(lVar1 + 0x9c) - *(float *)(lVar1 + 0x94);
    }
    if ((((int)param_1[100] < 1) && ((*(byte *)((longlong)param_1 + 0x304) & 0x10) == 0)) &&
       ((*(byte *)((longlong)param_1 + 0x594) & 2) == 0)) {
      fStackX_c = 0.0;
      local_res8 = 0.0;
    }
    else {
      local_res8 = *(float *)(param_1 + 0x9d);
      fStackX_c = *(float *)((longlong)param_1 + 0x4ec);
      if (DAT_140492934 <= local_res8) {
        local_res8 = DAT_140492934;
      }
      if (DAT_140492934 <= fStackX_c) {
        fStackX_c = DAT_140492934;
      }
    }
    fVar2 = fVar2 + local_res8 + local_res8;
    fVar3 = fVar3 + fStackX_c + fStackX_c;
    *(float *)(param_1 + 0x5e) = fVar2;
    *(float *)((longlong)param_1 + 0x2f4) = fVar3;
    (**(code **)(*param_1 + 0xb0))
              (param_1,(longlong)fVar3,DAT_140492704,(longlong)fVar2,(int)(longlong)fVar3,(int)fVar2
               ,(int)fVar3);
    (**(code **)(*param_1 + 0xb8))(param_1);
    (**(code **)(*param_1 + 0xc0))(param_1);
    if ((0 < (int)param_1[100]) || ((*(byte *)((longlong)param_1 + 0x304) & 0x10) != 0)) {
      FUN_1401ede30(param_1[0x19],param_1[0x5e],0x3f8000003f800000,0x3f8000003f800000,1,
                    param_1 + 0xb6);
      lVar1 = FUN_14014ff70(param_1[0x19] + 0x1630,"materials/util/composelayer_clearalpha.json");
      param_1[0xb7] = lVar1;
    }
  }
  return;
}

