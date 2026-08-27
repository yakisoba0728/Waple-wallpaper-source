// Function: FUN_140374570
// Addr: 140374570
// Size: 263 bytes


ulonglong FUN_140374570(int *param_1,longlong param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = (ulonglong)(uint)param_1[6];
  lVar3 = param_2 + 0x1c;
  pcVar1 = "OUT-OF-RANGE";
  uVar4 = 1;
  uVar6 = lVar3 - *(longlong *)(param_1 + 2);
  if (uVar6 <= uVar5) {
    pcVar1 = "OK";
  }
  uVar2 = FUN_1402fc370("SANITIZE",lVar3,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        lVar3,*(longlong *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar1);
  if (uVar6 <= uVar5) {
    lVar3 = *(longlong *)(param_1 + 2);
    uVar5 = (ulonglong)(uint)param_1[6];
    uVar2 = FUN_1402fc370("SANITIZE",param_2 + 0x18,0);
    if ((ulonglong)((param_2 + 0x18) - lVar3) <= uVar5) {
      return uVar4 & 0xff;
    }
  }
  return uVar2 & 0xffffffffffffff00;
}

