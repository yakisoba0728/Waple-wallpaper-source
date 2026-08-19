// Function: FUN_140347650
// Addr: 140347650
// Size: 1 bytes


ulonglong FUN_140347650(longlong param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 auStackX_18 [4];
  
  if (param_3 == '\0') {
    uVar3 = 0x686d7478;
    lVar4 = 0x4c8;
    lVar5 = 0x430;
  }
  else {
    uVar3 = 0x766d7478;
    lVar4 = 0x4cc;
    lVar5 = 0x434;
  }
  uVar2 = (**(code **)(param_1 + 0x2a0))(param_1,uVar3,param_2,auStackX_18);
  if ((int)uVar2 == 0) {
    *(undefined4 *)(lVar5 + param_1) = auStackX_18[0];
    uVar1 = func_0x0001402f5570(param_2);
    *(undefined4 *)(lVar4 + param_1) = uVar1;
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}

