// Function: FUN_1403092f0
// Addr: 1403092f0
// Size: 147 bytes


void FUN_1403092f0(longlong param_1)

{
  code *pcVar1;
  undefined *puVar2;
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
      pcVar1 = (code *)&LAB_140309690;
      pcVar3 = (code *)&LAB_1403096b0;
      goto LAB_1403093d3;
    }
    if (*(short *)(param_1 + 0x1a2) == 0x4000) {
      pcVar1 = (code *)&LAB_1403096a0;
      pcVar3 = (code *)&UNK_1403096d0;
      goto LAB_1403093d3;
    }
  }
  pcVar1 = FUN_140309610;
  pcVar3 = FUN_140309560;
LAB_1403093d3:
  *(code **)(param_1 + 0x2f0) = pcVar3;
  *(code **)(param_1 + 0x2f8) = pcVar1;
  if (*(short *)(param_1 + 0x19c) == 0x4000) {
    puVar2 = &UNK_14030b4e0;
  }
  else {
    puVar2 = &UNK_14030b4a0;
    if (*(short *)(param_1 + 0x19e) == 0x4000) {
      puVar2 = &UNK_14030b4f0;
    }
  }
  *(undefined **)(param_1 + 0x2d8) = puVar2;
  if (*(short *)(param_1 + 0x198) == 0x4000) {
    *(undefined **)(param_1 + 0x2e0) = &UNK_14030b4e0;
    *(undefined4 *)(param_1 + 0x180) = 0;
    return;
  }
  puVar2 = &UNK_1403096f0;
  if (*(short *)(param_1 + 0x19a) == 0x4000) {
    puVar2 = &UNK_14030b4f0;
  }
  *(undefined **)(param_1 + 0x2e0) = puVar2;
  *(undefined4 *)(param_1 + 0x180) = 0;
  return;
}

