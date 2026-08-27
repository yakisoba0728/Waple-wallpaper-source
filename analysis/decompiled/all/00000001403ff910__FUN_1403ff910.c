// Function: FUN_1403ff910
// Addr: 1403ff910
// Size: 483 bytes


undefined8 FUN_1403ff910(byte *param_1,int *param_2,longlong *param_3)

{
  byte *pbVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  
  pbVar1 = param_1 + 2;
  uVar7 = (ulonglong)(uint)param_2[6];
  pcVar10 = "OUT-OF-RANGE";
  uVar8 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  pcVar4 = "OUT-OF-RANGE";
  if (uVar8 <= uVar7) {
    pcVar4 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
  if (uVar8 <= uVar7) {
    uVar2 = *(uint *)(param_3 + 2);
    uVar6 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if ((uVar2 == 0) || (uVar6 < (uint)(0xffffffff / (ulonglong)uVar2))) {
      uVar6 = uVar6 * uVar2;
      if (((ulonglong)(uint)param_2[6] < (ulonglong)((longlong)pbVar1 - *(longlong *)(param_2 + 2)))
         || (((uint)(param_2[4] - (int)pbVar1) < uVar6 ||
             (param_2[7] = param_2[7] - uVar6, param_2[7] < 1)))) {
        cVar3 = '\0';
      }
      else {
        cVar3 = '\x01';
      }
      if (cVar3 != '\0') {
        pcVar10 = "OK";
      }
      uVar11 = 0;
      cVar5 = '\0';
      FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,
                    "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",pbVar1,pbVar1 + uVar6,uVar6,
                    *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar10);
      if (cVar3 != '\0') {
        if (*(char *)((longlong)param_2 + 0x3d) != cVar5) {
          return 1;
        }
        iVar9 = (uint)*param_1 * 0x100 + (uint)param_1[1];
        cVar3 = FUN_140409f40(*param_3,param_2,param_1,param_1 + 4,iVar9,
                              CONCAT44(uVar11,(int)param_3[2]));
        if ((cVar3 != '\0') &&
           (cVar3 = FUN_140409f40(*param_3 + 2,param_2,param_1,
                                  pbVar1 + ((ulonglong)*(uint *)(param_3 + 1) + 1) * 2,iVar9,
                                  (int)param_3[2]), cVar3 != '\0')) {
          return 1;
        }
      }
    }
  }
  return 0;
}

