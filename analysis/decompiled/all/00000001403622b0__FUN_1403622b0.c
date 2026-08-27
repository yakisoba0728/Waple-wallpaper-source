// Function: FUN_1403622b0
// Addr: 1403622b0
// Size: 370 bytes


char * FUN_1403622b0(longlong param_1,int param_2,int *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_2 != 0) {
    uVar6 = (ulonglong)(uint)param_3[6];
    pcVar5 = (char *)(param_2 + param_1);
    uVar7 = (longlong)pcVar5 - *(longlong *)(param_3 + 2);
    pcVar4 = "OUT-OF-RANGE";
    if (uVar7 <= uVar6) {
      pcVar4 = "OK";
    }
    FUN_1402fc370("SANITIZE",pcVar5,0,1,*param_3 + 1,0,"check_point [%p] in [%p..%p] -> %s",pcVar5,
                  *(longlong *)(param_3 + 2),*(undefined8 *)(param_3 + 4),pcVar4);
    if (uVar7 <= uVar6) {
      uVar1 = *param_4;
      uVar2 = param_4[1];
      pcVar4 = pcVar5 + 1;
      uVar6 = (ulonglong)(uint)param_3[6];
      uVar7 = (longlong)pcVar4 - *(longlong *)(param_3 + 2);
      FUN_1402fc370("SANITIZE",pcVar4,0);
      if (uVar7 <= uVar6) {
        if (*pcVar5 == '\0') {
          cVar3 = FUN_140403790(pcVar4,param_3,CONCAT11(uVar1,uVar2));
        }
        else {
          if (*pcVar5 != '\x03') goto LAB_14036240c;
          cVar3 = FUN_1403fbf80(pcVar4,param_3);
        }
        if (cVar3 == '\0') {
          pcVar5 = "";
        }
        return pcVar5;
      }
    }
  }
LAB_14036240c:
  return "";
}

