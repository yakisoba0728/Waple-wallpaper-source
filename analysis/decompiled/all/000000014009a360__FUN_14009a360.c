// Function: FUN_14009a360
// Addr: 14009a360
// Size: 716 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14009a360(undefined8 param_1,undefined1 (*param_2) [16],float param_3,float param_4,
                  float param_5,float param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((param_6 <= 0.0) || (param_5 <= 0.0)) {
    FID_conflict__assert
              (L"NearZ > 0.f && FarZ > 0.f",
               L"C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.26100.0\\um\\DirectXMathMatrix.inl"
               ,0x9f4);
  }
  if ((float)((uint)(param_3 - 0.0) & _DAT_140492fc0) <= DAT_1404925f4) {
    FID_conflict__assert
              (L"!XMScalarNearEqual(FovAngleY, 0.0f, 0.00001f * 2.0f)",
               L"C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.26100.0\\um\\DirectXMathMatrix.inl"
               ,0x9f5);
  }
  fVar3 = DAT_1404925ec;
  if ((float)((uint)(param_4 - 0.0) & _DAT_140492fc0) <= DAT_1404925ec) {
    FID_conflict__assert
              (L"!XMScalarNearEqual(AspectRatio, 0.0f, 0.00001f)",
               L"C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.26100.0\\um\\DirectXMathMatrix.inl"
               ,0x9f6);
  }
  if ((float)((uint)(param_5 - param_6) & _DAT_140492fc0) <= fVar3) {
    FID_conflict__assert
              (L"!XMScalarNearEqual(FarZ, NearZ, 0.00001f)",
               L"C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.26100.0\\um\\DirectXMathMatrix.inl"
               ,0x9f7);
  }
  uVar2 = DAT_14047558c;
  uVar1 = DAT_140475588;
  param_3 = param_3 * DAT_1404926c0;
  if (param_3 < 0.0) {
    fVar3 = param_3 * _DAT_140492664 - DAT_1404926c0;
  }
  else {
    fVar3 = param_3 * _DAT_140492664 + DAT_1404926c0;
  }
  param_3 = param_3 - (float)(int)fVar3 * DAT_140492864;
  if (param_3 <= DAT_140492744) {
    fVar3 = DAT_140492704;
    if (param_3 < DAT_1404929bc) {
      param_3 = DAT_140492a00 - param_3;
      fVar3 = DAT_1404929b8;
    }
  }
  else {
    param_3 = DAT_140492834 - param_3;
    fVar3 = DAT_1404929b8;
  }
  fVar4 = param_3 * param_3;
  param_5 = param_5 / (param_6 - param_5);
  fVar3 = ((((((DAT_1404925f8 - fVar4 * _DAT_1404925e4) * fVar4 - _DAT_14049260c) * fVar4 +
             _DAT_140492640) * fVar4 - DAT_1404926c0) * fVar4 + DAT_140492704) * fVar3) /
          ((((((DAT_1404925e8 - fVar4 * _DAT_1404925d8) * fVar4 - _DAT_140492600) * fVar4 +
             _DAT_14049261c) * fVar4 - _DAT_140492668) * fVar4 + DAT_140492704) * param_3);
  param_4 = fVar3 / param_4;
  uVar5 = (uint)param_4 & _DAT_140475570;
  uVar6 = (uint)fVar3 & _UNK_140475574;
  uVar7 = (uint)param_5 & _UNK_140475578;
  uVar8 = (uint)(param_5 * param_6) & _UNK_14047557c;
  *param_2 = ZEXT416((uint)param_4);
  *(uint *)param_2[1] = uVar5;
  *(uint *)(param_2[1] + 4) = uVar6;
  *(uint *)(param_2[1] + 8) = uVar7;
  *(uint *)(param_2[1] + 0xc) = uVar8;
  *(undefined8 *)param_2[2] = 0;
  *(ulonglong *)(param_2[2] + 8) = CONCAT44(uVar2,param_5);
  *(undefined8 *)param_2[3] = 0;
  *(ulonglong *)(param_2[3] + 8) = CONCAT44(uVar1,param_5 * param_6);
  return;
}

