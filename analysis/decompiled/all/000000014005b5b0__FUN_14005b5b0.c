// Function: FUN_14005b5b0
// Addr: 14005b5b0
// Size: 686 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_14005b5b0(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  if ((param_3 <= 0.0) || (param_4 <= 0.0)) {
    FID_conflict__assert
              (L"NearZ > 0.f && FarZ > 0.f",
               L"C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.26100.0\\um\\DirectXMathMatrix.inl"
               ,0x9f4);
  }
  if ((float)((uint)(param_1 - 0.0) & _DAT_140492fc0) <= DAT_1404925f4) {
    FID_conflict__assert
              (L"!XMScalarNearEqual(FovAngleY, 0.0f, 0.00001f * 2.0f)",
               L"C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.26100.0\\um\\DirectXMathMatrix.inl"
               ,0x9f5);
  }
  fVar1 = DAT_1404925ec;
  if ((float)((uint)(param_2 - 0.0) & _DAT_140492fc0) <= DAT_1404925ec) {
    FID_conflict__assert
              (L"!XMScalarNearEqual(AspectRatio, 0.0f, 0.00001f)",
               L"C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.26100.0\\um\\DirectXMathMatrix.inl"
               ,0x9f6);
  }
  if ((float)((uint)(param_4 - param_3) & _DAT_140492fc0) <= fVar1) {
    FID_conflict__assert
              (L"!XMScalarNearEqual(FarZ, NearZ, 0.00001f)",
               L"C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.26100.0\\um\\DirectXMathMatrix.inl"
               ,0x9f7);
  }
  param_1 = param_1 * DAT_1404926c0;
  if (param_1 < 0.0) {
    fVar1 = param_1 * _DAT_140492664 - DAT_1404926c0;
  }
  else {
    fVar1 = param_1 * _DAT_140492664 + DAT_1404926c0;
  }
  param_1 = param_1 - (float)(int)fVar1 * DAT_140492864;
  if (param_1 <= DAT_140492744) {
    fVar1 = DAT_140492704;
    if (param_1 < DAT_1404929bc) {
      param_1 = DAT_140492a00 - param_1;
      fVar1 = DAT_1404929b8;
    }
  }
  else {
    param_1 = DAT_140492834 - param_1;
    fVar1 = DAT_1404929b8;
  }
  fVar2 = param_1 * param_1;
  return (((((((DAT_1404925f8 - fVar2 * _DAT_1404925e4) * fVar2 - _DAT_14049260c) * fVar2 +
             _DAT_140492640) * fVar2 - DAT_1404926c0) * fVar2 + DAT_140492704) * fVar1) /
         ((((((DAT_1404925e8 - fVar2 * _DAT_1404925d8) * fVar2 - _DAT_140492600) * fVar2 +
            _DAT_14049261c) * fVar2 - _DAT_140492668) * fVar2 + DAT_140492704) * param_1)) / param_2
  ;
}

