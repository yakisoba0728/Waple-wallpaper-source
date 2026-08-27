// Function: FUN_1404094a0
// Addr: 1404094a0
// Size: 213 bytes


ulonglong FUN_1404094a0(undefined1 *param_1,int *param_2,ulonglong param_3)

{
  undefined1 *puVar1;
  char *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  puVar1 = param_1 + 3;
  uVar6 = (ulonglong)(uint)param_2[6];
  pcVar2 = "OUT-OF-RANGE";
  uVar5 = (longlong)puVar1 - *(longlong *)(param_2 + 2);
  if (uVar5 <= uVar6) {
    pcVar2 = "OK";
  }
  uVar3 = FUN_1402fc370("SANITIZE",puVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        puVar1,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar2);
  if (uVar5 <= uVar6) {
    lVar4 = (ulonglong)CONCAT11(*param_1,param_1[1]) * 0x100 + param_3;
    return CONCAT71((int7)((ulonglong)lVar4 >> 8),param_3 <= (ulonglong)(byte)param_1[2] + lVar4);
  }
  return uVar3 & 0xffffffffffffff00;
}

