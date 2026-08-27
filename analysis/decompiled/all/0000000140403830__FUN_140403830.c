// Function: FUN_140403830
// Addr: 140403830
// Size: 256 bytes


undefined8 FUN_140403830(byte *param_1,int *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  pcVar3 = "OUT-OF-RANGE";
  pbVar1 = param_1 + 4;
  uVar7 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  uVar6 = (ulonglong)(uint)param_2[6];
  if (uVar7 <= uVar6) {
    pcVar3 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (uVar7 <= uVar6) {
    uVar5 = 0;
    if (param_3 != (undefined4 *)0x0) {
      uVar5 = *param_3;
    }
    cVar2 = FUN_1404093d0(param_1,param_2,param_1);
    if (cVar2 != '\0') {
      uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
      if ((uVar4 != 0) && (cVar2 = FUN_140403930(param_1 + uVar4,param_2,uVar5), cVar2 == '\0')) {
        return 0;
      }
      cVar2 = FUN_1404078b0(param_1 + 2,param_2);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

