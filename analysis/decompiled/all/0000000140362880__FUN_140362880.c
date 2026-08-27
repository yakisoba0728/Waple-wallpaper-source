// Function: FUN_140362880
// Addr: 140362880
// Size: 352 bytes


byte * FUN_140362880(longlong param_1,int param_2,int *param_3)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  byte *pbVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (param_2 != 0) {
    uVar7 = (ulonglong)(uint)param_3[6];
    pbVar5 = (byte *)(param_2 + param_1);
    pcVar3 = "OUT-OF-RANGE";
    uVar8 = (longlong)pbVar5 - *(longlong *)(param_3 + 2);
    uVar6 = 1;
    if (uVar8 <= uVar7) {
      pcVar3 = "OK";
    }
    FUN_1402fc370("SANITIZE",pbVar5,0,1,*param_3 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar5,
                  *(longlong *)(param_3 + 2),*(undefined8 *)(param_3 + 4),pcVar3);
    if (uVar8 <= uVar7) {
      pbVar1 = pbVar5 + 1;
      uVar7 = (ulonglong)(uint)param_3[6];
      uVar8 = (longlong)pbVar1 - *(longlong *)(param_3 + 2);
      FUN_1402fc370("SANITIZE",pbVar1,0);
      if (uVar8 <= uVar7) {
        if ((*pbVar5 & 0x7f) == 0) {
          cVar2 = FUN_1404074a0(pbVar1,param_3);
        }
        else {
          if ((*pbVar5 & 0x7f) != uVar6) goto LAB_140362991;
          cVar2 = FUN_140408420(pbVar1,param_3);
        }
        if (cVar2 != '\0') {
          if ((char)*pbVar5 < '\0') {
            uVar4 = FUN_14040c8b0(pbVar5);
            cVar2 = FUN_140407a10(uVar4,param_3);
            if (cVar2 == '\0') goto LAB_140362991;
          }
          return pbVar5;
        }
      }
    }
  }
LAB_140362991:
  return (byte *)&DAT_14045dd10;
}

