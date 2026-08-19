// Function: FUN_14027e810
// Addr: 14027e810
// Size: 171 bytes


ulonglong FUN_14027e810(ulonglong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                       undefined8 param_5,float param_6,float param_7)

{
  double dVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 extraout_XMM0_Da;
  
  dVar1 = (double)param_6 / (double)(param_6 - param_7);
  if ((dVar1 <= DAT_1404927d8) || (DAT_140492840 <= dVar1)) {
    param_1 = param_1 & 0xffffffffffffff00;
  }
  else {
    uVar3 = FUN_14027bb00(param_4,param_5,dVar1);
    uVar2 = FUN_14027b730(uVar3,0,DAT_140492848,SUB84(dVar1,0),param_2,param_3,extraout_XMM0_Da);
    param_1 = (ulonglong)CONCAT31((uint3)(uVar2 >> 9),(char)(uVar2 >> 1)) & 0xffffffffffffff01;
  }
  return param_1;
}

