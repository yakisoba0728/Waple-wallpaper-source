// Function: FUN_14012b890
// Addr: 14012b890
// Size: 558 bytes


undefined8 * FUN_14012b890(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar3 = (undefined8 *)FUN_14028af20(0x31f0);
  puVar1 = puVar3 + 2;
  *puVar3 = 0;
  FUN_14017c6d0(puVar1,param_3);
  puVar3[0x612] = 0;
  puVar3[0x613] = 0;
  puVar3[0x614] = 0;
  puVar3[0x615] = 0;
  puVar3[0x616] = 0;
  puVar3[0x617] = 0;
  puVar3[0x618] = 0;
  puVar3[0x619] = 0;
  puVar3[0x61a] = 0;
  puVar3[0x61b] = 0;
  puVar3[0x61c] = 0;
  puVar3[0x61d] = 0;
  puVar3[0x61e] = 0;
  *(undefined1 *)(puVar3 + 0x622) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3114) = 0x3f800000;
  *(undefined4 *)(puVar3 + 0x623) = 0x3f800000;
  *(undefined8 *)((longlong)puVar3 + 0x311c) = 0x3f800000;
  puVar3[0x61f] = 0;
  puVar3[0x620] = 0;
  puVar3[0x621] = 0;
  puVar3[0x625] = 0;
  puVar3[0x626] = 0;
  puVar3[0x627] = 0;
  puVar3[0x628] = 0xf;
  *(undefined1 *)(puVar3 + 0x625) = 0;
  *(undefined4 *)(puVar3 + 0x629) = 0x3f800000;
  puVar3[0x62a] = 0;
  puVar3[0x62b] = 0;
  puVar3[0x62c] = 0;
  puVar3[0x62d] = 0;
  puVar3[0x62e] = 0;
  puVar3[0x62f] = 0;
  puVar3[0x630] = 0;
  puVar3[0x631] = 0;
  puVar3[0x632] = 0;
  puVar3[0x633] = 0;
  puVar3[0x634] = 0;
  puVar3[0x635] = 0;
  puVar3[0x636] = 0;
  *(undefined4 *)(puVar3 + 0x637) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x31bc) = 0x3f000000;
  *(undefined4 *)(puVar3 + 0x638) = 0x3f000000;
  *(undefined4 *)((longlong)puVar3 + 0x31c4) = 0x3f800000;
  puVar3[0x639] = 0x3f000000;
  puVar3[0x63a] = 0;
  puVar3[0x63b] = 0;
  puVar3[0x63c] = 0;
  *(undefined4 *)(puVar3 + 0x63d) = 0;
  (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,puVar1);
  puVar3[0x316] = puVar1;
  lVar4 = FUN_14028af20(0x20);
  puVar3[0x317] = lVar4;
  *(undefined1 **)(lVar4 + 8) = &LAB_1401ab990;
  *(undefined1 **)(puVar3[0x317] + 0x10) = &LAB_1401ab9a0;
  *(undefined1 **)(puVar3[0x317] + 0x18) = &LAB_1401ab9b0;
  *(undefined8 *)puVar3[0x317] = 0;
  iVar2 = FUN_1402f2440(puVar3[0x317],puVar3 + 0x318);
  if (iVar2 == 0) {
    FUN_1402fa410(puVar3[0x318]);
  }
  FUN_14017eae0(puVar3);
  FUN_14017f1b0(puVar3,param_1,param_2);
  return puVar3;
}

