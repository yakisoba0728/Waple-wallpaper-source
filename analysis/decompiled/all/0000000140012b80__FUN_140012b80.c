// Function: FUN_140012b80
// Addr: 140012b80
// Size: 192 bytes


undefined8 * FUN_140012b80(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  puVar1 = param_1 + 1;
  puVar2 = param_1 + 2;
  puVar3 = param_1 + 5;
  puVar4 = param_1 + 6;
  puVar5 = param_1 + 9;
  puVar6 = (undefined4 *)((longlong)param_1 + 0x4c);
  *param_1 = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *puVar1 = 0;
  *puVar2 = 0;
  *puVar3 = 0;
  *puVar4 = 0;
  *(undefined4 *)puVar5 = 0;
  *puVar6 = 0;
  lVar7 = FUN_14028af20(0x10);
  uVar8 = FUN_140291700(1);
  *(undefined8 *)(lVar7 + 8) = uVar8;
  param_1[0xc] = lVar7;
  param_1[3] = puVar1;
  param_1[4] = puVar2;
  param_1[7] = puVar3;
  param_1[8] = puVar4;
  param_1[10] = puVar5;
  param_1[0xb] = puVar6;
  *puVar2 = 0;
  *puVar4 = 0;
  *puVar6 = 0;
  *puVar1 = 0;
  *puVar3 = 0;
  *(undefined4 *)puVar5 = 0;
  return param_1;
}

