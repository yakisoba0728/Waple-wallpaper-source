// Function: FUN_140349090
// Addr: 140349090
// Size: 263 bytes


void FUN_140349090(uint param_1,char *param_2)

{
  char *pcVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  char local_18 [8];
  ulonglong local_10;
  
  pcVar6 = local_18;
  local_10 = DAT_1404dc110 ^ (ulonglong)local_18;
  if (param_1 == 0) {
    *param_2 = '0';
    func_0x0001402ed2f0(local_10 ^ (ulonglong)local_18);
    return;
  }
  pcVar7 = param_2;
  if ((int)param_1 < 0) {
    pcVar7 = param_2 + 1;
    *param_2 = '-';
    param_1 = -param_1;
  }
  uVar8 = (int)param_1 >> 0x10 & 0xffff;
  if (uVar8 != 0) {
    do {
      uVar4 = (int)uVar8 / 10;
      *pcVar6 = (char)uVar8 + (char)uVar4 * -10 + '0';
      pcVar6 = pcVar6 + 1;
      uVar8 = uVar4;
    } while (0 < (int)uVar4);
    if (local_18 < pcVar6) {
      do {
        pcVar1 = pcVar6 + -1;
        pcVar6 = pcVar6 + -1;
        *pcVar7 = *pcVar1;
        pcVar7 = pcVar7 + 1;
      } while (local_18 < pcVar6);
    }
  }
  if ((param_1 & 0xffff) == 0) {
    func_0x0001402ed2f0(local_10 ^ (ulonglong)local_18);
    return;
  }
  *pcVar7 = '.';
  uVar8 = (param_1 & 0xffff) * 10 + 5;
  pcVar7[1] = (char)(uVar8 >> 0x10) + '0';
  pcVar6 = pcVar7 + 3;
  uVar8 = (uVar8 & 0xffff) * 10;
  uVar4 = uVar8 & 0xffff;
  pcVar7[2] = (char)(uVar8 >> 0x10) + '0';
  uVar8 = 0;
  if (uVar4 != 0) {
    uVar4 = uVar4 * 10;
    uVar5 = uVar4 & 0xffff;
    *pcVar6 = (char)(uVar4 >> 0x10) + '0';
    pcVar6 = pcVar7 + 4;
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar5 = uVar5 * 10;
      uVar4 = uVar5 & 0xffff;
      *pcVar6 = (char)(uVar5 >> 0x10) + '0';
      pcVar6 = pcVar7 + 5;
      uVar8 = 0;
      if (uVar4 != 0) {
        uVar4 = uVar4 * 10;
        uVar5 = uVar4 & 0xffff;
        *pcVar6 = (char)(uVar4 >> 0x10) + '0';
        pcVar6 = pcVar7 + 6;
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar5 * 10;
        }
      }
    }
  }
  pbVar3 = (byte *)(pcVar6 + -1);
  if (((longlong)pbVar3 - (longlong)pcVar7 == 5) && (uVar8 < 0x542e0)) {
    bVar2 = *pbVar3;
    if (bVar2 == 0x31) {
      *pbVar3 = 0x30;
    }
    else {
      if (uVar8 == 0x2a120) {
        if ((bVar2 & 1) == 0) goto code_r0x000140349249;
      }
      else if ((0x2a11f < uVar8) || (bVar2 == 0x30)) goto code_r0x000140349249;
      *pbVar3 = bVar2 - 1;
    }
  }
code_r0x000140349249:
  bVar2 = *pbVar3;
  while (bVar2 == 0x30) {
    *pbVar3 = 0;
    pbVar3 = pbVar3 + -1;
    bVar2 = *pbVar3;
  }
  func_0x0001402ed2f0(local_10 ^ (ulonglong)local_18);
  return;
}

