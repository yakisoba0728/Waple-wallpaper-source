// Function: FUN_14027e740
// Addr: 14027e740
// Size: 171 bytes


ulonglong FUN_14027e740(ulonglong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                       undefined8 param_5,float param_6,float param_7)

{
  double dVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 extraout_XMM0_Da;
  
  dVar1 = (double)param_6 / (double)(param_6 - param_7);
  if ((dVar1 <= DAT_140492708) || (DAT_140492770 <= dVar1)) {
    param_1 = param_1 & 0xffffffffffffff00;
  }
  else {
    uVar3 = FUN_14027ba30(param_4,param_5,dVar1);
    uVar2 = FUN_14027b660(uVar3,0,DAT_140492778,SUB84(dVar1,0),param_2,param_3,extraout_XMM0_Da);
    param_1 = (ulonglong)CONCAT31((uint3)(uVar2 >> 9),(char)(uVar2 >> 1)) & 0xffffffffffffff01;
  }
  return param_1;
}

