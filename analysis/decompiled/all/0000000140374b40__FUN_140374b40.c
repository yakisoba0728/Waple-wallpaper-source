// Function: FUN_140374b40
// Addr: 140374b40
// Size: 254 bytes


ulonglong FUN_140374b40(int *param_1,byte *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  pbVar1 = param_2 + 2;
  uVar7 = (ulonglong)(uint)param_1[6];
  pcVar2 = "OUT-OF-RANGE";
  uVar8 = (longlong)pbVar1 - *(longlong *)(param_1 + 2);
  uVar6 = 1;
  if (uVar8 <= uVar7) {
    pcVar2 = "OK";
  }
  uVar3 = FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        pbVar1,*(longlong *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar2);
  if (uVar7 < uVar8) {
    return uVar3 & 0xffffffffffffff00;
  }
  iVar4 = (uint)*param_2 * 0x100 + (uint)param_2[1];
  iVar5 = (int)uVar6;
  if (iVar4 == iVar5) {
    uVar6 = FUN_1404078b0(pbVar1,param_1);
    return uVar6;
  }
  if (iVar4 - iVar5 != iVar5) {
    return uVar6 & 0xff;
  }
  uVar6 = FUN_140407340(pbVar1,param_1);
  return uVar6;
}

