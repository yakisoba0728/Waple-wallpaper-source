// Function: FUN_140373e20
// Addr: 140373e20
// Size: 282 bytes


ulonglong FUN_140373e20(int *param_1,longlong param_2)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = (ulonglong)(uint)param_1[6];
  param_2 = param_2 + 0x18;
  pcVar2 = "OUT-OF-RANGE";
  uVar6 = param_2 - *(longlong *)(param_1 + 2);
  uVar4 = 1;
  if (uVar6 <= uVar5) {
    pcVar2 = "OK";
  }
  uVar3 = FUN_1402fc370("SANITIZE",param_2,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        param_2,*(longlong *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar2);
  if (uVar6 <= uVar5) {
    lVar1 = *(longlong *)(param_1 + 2);
    uVar5 = (ulonglong)(uint)param_1[6];
    uVar3 = FUN_1402fc370("SANITIZE");
    if ((ulonglong)(param_2 - lVar1) <= uVar5) {
      return uVar4 & 0xff;
    }
  }
  return uVar3 & 0xffffffffffffff00;
}

