// Function: FUN_140044570
// Addr: 140044570
// Size: 251 bytes


undefined8 FUN_140044570(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  
  uVar9 = 0;
  uVar4 = FUN_140086de0(param_1 + 0x48,"general","");
  puVar1 = *(undefined8 **)(param_1 + 0xa8);
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    plVar3 = (longlong *)puVar2[3];
    plVar8 = puVar2 + 3;
    if (0xf < (ulonglong)plVar3[3]) {
      plVar8 = plVar3;
    }
    lVar5 = FUN_140087490(uVar4,*plVar8,plVar3[2] + *plVar8);
    if (lVar5 != 0) {
      uVar9 = 1;
      plVar8 = plVar3;
      if (0xf < (ulonglong)plVar3[3]) {
        plVar8 = (longlong *)*plVar3;
      }
      uVar6 = FUN_140086de0(uVar4,plVar8,plVar3[2] + (longlong)plVar8);
      plVar8 = plVar3;
      if (0xf < (ulonglong)plVar3[3]) {
        plVar8 = (longlong *)*plVar3;
      }
      uVar7 = FUN_140086de0(param_2,plVar8,plVar3[2] + (longlong)plVar8);
      FUN_140085520(uVar7,uVar6);
    }
  }
  return uVar9;
}

