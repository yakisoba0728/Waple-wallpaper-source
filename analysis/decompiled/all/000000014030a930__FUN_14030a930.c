// Function: FUN_14030a930
// Addr: 14030a930
// Size: 64 bytes


void FUN_14030a930(longlong param_1,ushort *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iStackX_8;
  int iStackX_c;
  
  if ((*(ushort *)(param_1 + 0x78) <= *param_2) || (*(ushort *)(param_1 + 0xb0) <= param_2[2])) {
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x86;
    }
    return;
  }
  lVar1 = (ulonglong)param_2[2] * 8;
  lVar2 = (ulonglong)*param_2 * 8;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x80) + 4 + lVar2);
  iVar8 = *(int *)(*(longlong *)(param_1 + 0xb8) + 4 + lVar1);
  iStackX_c = iVar6 - iVar8;
  iVar9 = *(int *)(*(longlong *)(param_1 + 0x80) + lVar2) -
          *(int *)(*(longlong *)(param_1 + 0xb8) + lVar1);
  if ((iVar9 == 0) && (iStackX_c == 0)) {
    bVar7 = 0;
    iStackX_8 = 0x4000;
code_r0x00014030a9d9:
    FUN_1402f5f40(&iStackX_8);
    *(short *)(param_1 + 0x198) = (short)((int)(iStackX_8 + (iStackX_8 >> 0x1f & 3U)) >> 2);
    *(short *)(param_1 + 0x19a) = (short)((int)(iStackX_c + (iStackX_c >> 0x1f & 3U)) >> 2);
  }
  else {
    bVar7 = *(byte *)(param_1 + 0x1f0);
    if ((bVar7 & 1) != 0) {
      iStackX_c = iVar9;
    }
    iStackX_8 = iVar8 - iVar6;
    if ((bVar7 & 1) == 0) {
      iStackX_8 = iVar9;
    }
    if ((iStackX_8 != 0) || (iStackX_c != 0)) goto code_r0x00014030a9d9;
  }
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x88) + 4 + lVar2);
  iVar8 = *(int *)(*(longlong *)(param_1 + 0xc0) + 4 + lVar1);
  iStackX_c = iVar6 - iVar8;
  iVar9 = *(int *)(*(longlong *)(param_1 + 0x88) + lVar2) -
          *(int *)(*(longlong *)(param_1 + 0xc0) + lVar1);
  if ((iVar9 == 0) && (iStackX_c == 0)) {
    iStackX_8 = 0x4000;
code_r0x00014030aa69:
    FUN_1402f5f40(&iStackX_8);
    *(short *)(param_1 + 0x19c) = (short)((int)(iStackX_8 + (iStackX_8 >> 0x1f & 3U)) >> 2);
    *(short *)(param_1 + 0x19e) = (short)((int)(iStackX_c + (iStackX_c >> 0x1f & 3U)) >> 2);
  }
  else {
    if ((bVar7 & 1) != 0) {
      iStackX_c = iVar9;
    }
    iStackX_8 = iVar8 - iVar6;
    if ((bVar7 & 1) == 0) {
      iStackX_8 = iVar9;
    }
    if ((iStackX_8 != 0) || (iStackX_c != 0)) goto code_r0x00014030aa69;
  }
  iVar6 = (int)*(short *)(param_1 + 0x1a0);
  iVar9 = (int)*(short *)(param_1 + 0x1a2);
  iVar8 = *(short *)(param_1 + 0x19c) * iVar6 + 0x2000 + *(short *)(param_1 + 0x19e) * iVar9 >> 0xe;
  if (iVar8 < 0x3ffe) {
    if (iVar8 + 0x3ffU < 0x7ff) {
      *(undefined8 *)(param_1 + 0x2d0) = 0;
    }
    else {
      *(int *)(param_1 + 0x2d0) = (iVar6 << 0x10) / iVar8;
      *(int *)(param_1 + 0x2d4) = (iVar9 << 0x10) / iVar8;
    }
  }
  else {
    *(int *)(param_1 + 0x2d0) = iVar6 * 4;
    *(int *)(param_1 + 0x2d4) = iVar9 * 4;
    if (*(short *)(param_1 + 0x1a0) == 0x4000) {
      pcVar3 = (code *)&LAB_140309690;
      pcVar5 = (code *)&LAB_1403096b0;
      goto LAB_1403093d3;
    }
    if (*(short *)(param_1 + 0x1a2) == 0x4000) {
      pcVar3 = (code *)&LAB_1403096a0;
      pcVar5 = (code *)&UNK_1403096d0;
      goto LAB_1403093d3;
    }
  }
  pcVar3 = FUN_140309610;
  pcVar5 = FUN_140309560;
LAB_1403093d3:
  *(code **)(param_1 + 0x2f0) = pcVar5;
  *(code **)(param_1 + 0x2f8) = pcVar3;
  if (*(short *)(param_1 + 0x19c) == 0x4000) {
    puVar4 = &UNK_14030b4e0;
  }
  else {
    puVar4 = &UNK_14030b4a0;
    if (*(short *)(param_1 + 0x19e) == 0x4000) {
      puVar4 = &UNK_14030b4f0;
    }
  }
  *(undefined **)(param_1 + 0x2d8) = puVar4;
  if (*(short *)(param_1 + 0x198) == 0x4000) {
    *(undefined **)(param_1 + 0x2e0) = &UNK_14030b4e0;
    *(undefined4 *)(param_1 + 0x180) = 0;
    return;
  }
  puVar4 = &UNK_1403096f0;
  if (*(short *)(param_1 + 0x19a) == 0x4000) {
    puVar4 = &UNK_14030b4f0;
  }
  *(undefined **)(param_1 + 0x2e0) = puVar4;
  *(undefined4 *)(param_1 + 0x180) = 0;
  return;
}

