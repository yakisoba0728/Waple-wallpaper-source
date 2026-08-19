// Function: FUN_1402afb40
// Addr: 1402afb40
// Size: 70 bytes


undefined8 *
FUN_1402afb40(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             longlong param_5,uint *param_6,longlong param_7)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int aiStackX_10 [2];
  undefined1 local_28 [8];
  longlong local_20;
  
  lVar3 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  local_20 = lVar3;
  (*(code *)PTR_FUN_140426bb8)(lVar3);
  uVar2 = FUN_14000f520(local_28);
  if ((lVar3 != 0) && (lVar3 = (*(code *)PTR_FUN_140426bb8)(lVar3), lVar3 != 0)) {
    (*(code *)PTR_FUN_140426bb8)(lVar3,1);
  }
  param_5._0_4_ = 0;
  uVar1 = FUN_1402958f0(param_3,param_4,0,9999,&param_5,aiStackX_10,uVar2);
  *param_6 = *param_6 | uVar1;
  if ((uVar1 & 2) == 0) {
    if (aiStackX_10[0] < 3) {
      if ((int)param_5 < 0x45) {
        param_5._0_4_ = (int)param_5 + 100;
      }
      else if (99 < (int)param_5) goto code_r0x0001402afc38;
    }
    else {
      param_5._0_4_ = (int)param_5 + -0x76c;
    }
    *(int *)(param_7 + 0x14) = (int)param_5;
  }
code_r0x0001402afc38:
  uVar2 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = uVar2;
  return param_2;
}

