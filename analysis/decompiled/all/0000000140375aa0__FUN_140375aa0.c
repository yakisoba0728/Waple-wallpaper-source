// Function: FUN_140375aa0
// Addr: 140375aa0
// Size: 303 bytes


undefined8 FUN_140375aa0(int *param_1,byte *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  pcVar3 = "OUT-OF-RANGE";
  uVar7 = (ulonglong)(uint)param_1[6];
  pbVar5 = param_2 + 6;
  uVar8 = (longlong)pbVar5 - *(longlong *)(param_1 + 2);
  if (uVar8 <= uVar7) {
    pcVar3 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar5,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar5,
                *(longlong *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar3);
  if (uVar8 <= uVar7) {
    cVar1 = FUN_1404078b0(param_2 + 4,param_1);
    if (cVar1 != '\0') {
      uVar4 = (uint)param_2[5] + (uint)param_2[4] * 0x100;
      uVar6 = (uint)param_2[3] + (uint)param_2[2] * 0x100;
      uVar2 = uVar6 & 0x7fff;
      if (uVar2 <= uVar4) {
        cVar1 = FUN_14036f0c0(param_1,param_2 + (ulonglong)(uVar4 * 2 + 2) + 4,
                              (uint)*param_2 * 0x100 + (uint)param_2[1],
                              ((uVar6 >> 0xf != 0) + 1) * (uVar2 + uVar4));
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}

