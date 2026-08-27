// Function: FUN_140309220
// Addr: 140309220
// Size: 355 bytes


void FUN_140309220(longlong param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = (int)*(short *)(param_1 + 0x1a0);
  iVar6 = (int)*(short *)(param_1 + 0x1a2);
  iVar5 = *(short *)(param_1 + 0x19c) * iVar4 + 0x2000 + *(short *)(param_1 + 0x19e) * iVar6 >> 0xe;
  if (iVar5 < 0x3ffe) {
    if (iVar5 + 0x3ffU < 0x7ff) {
      *(undefined8 *)(param_1 + 0x2d0) = 0;
    }
    else {
      *(int *)(param_1 + 0x2d0) = (iVar4 << 0x10) / iVar5;
      *(int *)(param_1 + 0x2d4) = (iVar6 << 0x10) / iVar5;
    }
  }
  else {
    *(int *)(param_1 + 0x2d0) = iVar4 * 4;
    *(int *)(param_1 + 0x2d4) = iVar6 * 4;
    if (*(short *)(param_1 + 0x1a0) == 0x4000) {
      pcVar1 = (code *)&LAB_1403095c0;
      pcVar3 = (code *)&LAB_1403095e0;
      goto LAB_140309303;
    }
    if (*(short *)(param_1 + 0x1a2) == 0x4000) {
      pcVar1 = (code *)&LAB_1403095d0;
      pcVar3 = (code *)&LAB_140309600;
      goto LAB_140309303;
    }
  }
  pcVar1 = FUN_140309540;
  pcVar3 = FUN_140309490;
LAB_140309303:
  *(code **)(param_1 + 0x2f0) = pcVar3;
  *(code **)(param_1 + 0x2f8) = pcVar1;
  if (*(short *)(param_1 + 0x19c) == 0x4000) {
    puVar2 = &LAB_14030b410;
  }
  else {
    puVar2 = &LAB_14030b3d0;
    if (*(short *)(param_1 + 0x19e) == 0x4000) {
      puVar2 = &LAB_14030b420;
    }
  }
  *(undefined1 **)(param_1 + 0x2d8) = puVar2;
  if (*(short *)(param_1 + 0x198) == 0x4000) {
    *(undefined1 **)(param_1 + 0x2e0) = &LAB_14030b410;
    *(undefined4 *)(param_1 + 0x180) = 0;
    return;
  }
  puVar2 = &LAB_140309620;
  if (*(short *)(param_1 + 0x19a) == 0x4000) {
    puVar2 = &LAB_14030b420;
  }
  *(undefined1 **)(param_1 + 0x2e0) = puVar2;
  *(undefined4 *)(param_1 + 0x180) = 0;
  return;
}

