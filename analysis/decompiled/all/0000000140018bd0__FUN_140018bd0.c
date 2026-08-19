// Function: FUN_140018bd0
// Addr: 140018bd0
// Size: 91 bytes


undefined8 * FUN_140018bd0(undefined8 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong local_28 [3];
  ulonglong local_10;
  
  puVar5 = (undefined4 *)FUN_140005950(local_28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *(undefined4 *)param_1 = *puVar5;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  uVar2 = puVar5[5];
  uVar3 = puVar5[6];
  uVar4 = puVar5[7];
  *(undefined4 *)(param_1 + 2) = puVar5[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 7;
  *(undefined2 *)puVar5 = 0;
  if (7 < local_10) {
    uVar8 = local_10 * 2 + 2;
    lVar7 = local_28[0];
    if (0xfff < uVar8) {
      lVar7 = *(longlong *)(local_28[0] + -8);
      if (0x1f < (local_28[0] - lVar7) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        puVar6 = (undefined8 *)(*pcVar1)();
        return puVar6;
      }
      uVar8 = local_10 * 2 + 0x29;
    }
    func_0x00014028b040(lVar7,uVar8);
  }
  return param_1;
}

