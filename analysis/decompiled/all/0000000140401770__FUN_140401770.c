// Function: FUN_140401770
// Addr: 140401770
// Size: 466 bytes


ulonglong FUN_140401770(undefined1 *param_1,int *param_2,longlong param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_res8;
  
  puVar1 = param_1 + 0x30;
  pcVar3 = "OUT-OF-RANGE";
  uVar6 = (longlong)puVar1 - *(longlong *)(param_2 + 2);
  uVar5 = (ulonglong)(uint)param_2[6];
  if (uVar6 <= uVar5) {
    pcVar3 = "OK";
  }
  uVar4 = FUN_1402fc370("SANITIZE",puVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        puVar1,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (((uVar6 <= uVar5) && (uVar4 = FUN_140409580(param_1,param_2,param_3), (char)uVar4 != '\0')) &&
     (uVar4 = FUN_14036b340(param_2,(ulonglong)(byte)param_1[3] +
                                    ((ulonglong)(byte)param_1[2] +
                                    (ulonglong)CONCAT11(*param_1,param_1[1]) * 0x100) * 0x100 +
                                    param_3,local_res8,param_1 + 8), (char)uVar4 != '\0')) {
    puVar1 = param_1 + 0x1c;
    uVar6 = (ulonglong)(uint)param_2[6];
    uVar7 = (longlong)puVar1 - *(longlong *)(param_2 + 2);
    pcVar3 = "OUT-OF-RANGE";
    uVar5 = 1;
    if (uVar7 <= uVar6) {
      pcVar3 = "OK";
    }
    uVar4 = FUN_1402fc370("SANITIZE",puVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                          puVar1,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
    if (uVar7 <= uVar6) {
      lVar2 = *(longlong *)(param_2 + 2);
      uVar6 = (ulonglong)(uint)param_2[6];
      uVar4 = FUN_1402fc370("SANITIZE",param_1 + 0x28,0);
      if ((ulonglong)((longlong)(param_1 + 0x28) - lVar2) <= uVar6) {
        return uVar5 & 0xff;
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}

