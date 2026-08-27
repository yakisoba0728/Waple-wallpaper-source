// Function: FUN_14031bba0
// Addr: 14031bba0
// Size: 180 bytes


void FUN_14031bba0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  puVar1 = *(undefined8 **)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(*param_1 + 0x3e0);
    uVar3 = *(undefined8 *)(*param_1 + 0x98);
    puVar4 = (undefined8 *)puVar2[0x21a];
    lVar6 = FUN_1402f0420(*puVar2,"pshinter");
    if ((((lVar6 != 0) && (puVar4 != (undefined8 *)0x0)) &&
        (pcVar5 = (code *)*puVar4, pcVar5 != (code *)0x0)) && (lVar6 = (*pcVar5)(lVar6), lVar6 != 0)
       ) {
      (**(code **)(lVar6 + 0x10))(*puVar1);
      uVar7 = *(uint *)(puVar2 + 0x115);
      uVar8 = (ulonglong)uVar7;
      while (uVar7 != 0) {
        uVar7 = (int)uVar8 - 1;
        uVar8 = (ulonglong)uVar7;
        (**(code **)(lVar6 + 0x10))(puVar1[uVar8 + 1]);
      }
    }
    FUN_1402f7f90(uVar3,puVar1);
  }
  return;
}

