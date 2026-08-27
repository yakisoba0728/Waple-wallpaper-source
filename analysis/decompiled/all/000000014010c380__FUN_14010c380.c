// Function: FUN_14010c380
// Addr: 14010c380
// Size: 147 bytes


void FUN_14010c380(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_140086de0(param_1 + 0x38,"wproperties","");
  FUN_140109f80(uVar2,param_2);
  puVar1 = *(undefined8 **)(param_1 + 0xb0);
  for (puVar4 = *(undefined8 **)(param_1 + 0xa8); puVar4 != puVar1; puVar4 = puVar4 + 1) {
    uVar2 = *puVar4;
    uVar3 = FUN_140086de0(param_1 + 0x38,"wproperties","");
    FUN_14011cf10(uVar2,uVar3);
  }
  FUN_140085440(param_2);
  return;
}

