// Function: FUN_14032a790
// Addr: 14032a790
// Size: 466 bytes


int FUN_14032a790(undefined8 param_1,longlong param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_38 [3];
  
  iVar3 = FUN_14032bf60();
  if (iVar3 != 0) {
    FUN_14032a610(param_2);
    lVar5 = param_2 + 0xd8;
    iVar3 = FUN_140357280(lVar5,param_1);
    if (((char)iVar3 == '\a') ||
       ((iVar3 != 0 && ((iVar3 = FUN_14035a630(lVar5,param_1), (char)iVar3 == '\a' || (iVar3 != 0)))
        ))) {
LAB_14032a804:
      FUN_14032a610(param_2);
      return 2;
    }
    *(undefined8 *)(param_2 + 0x120) = param_1;
    *(longlong *)(param_2 + 0xa0) = lVar5;
    iVar3 = FUN_14032bf60(lVar5,param_2,param_3);
    if (iVar3 != 0) goto LAB_14032a804;
  }
  if (param_3 < 0) {
    return 0;
  }
  if ((0 < param_3) && ((short)param_3 != 0)) {
    FUN_14032a610(param_2);
    return 6;
  }
  pcVar1 = *(char **)(param_2 + 0x130);
  if ((((pcVar1 == (char *)0x0) || (pcVar2 = *(char **)(param_2 + 0x128), pcVar2 == (char *)0x0)) ||
      ((*pcVar1 + 0xb7U & 0xdf) != 0)) ||
     (((pcVar1[1] + 0xadU & 0xdf) != 0 || ((pcVar1[2] + 0xb1U & 0xdf) != 0)))) {
LAB_14032a925:
    local_38[1] = 0;
    goto LAB_14032a92e;
  }
  pcVar1 = pcVar1 + 3;
  lVar5 = 0;
  do {
    lVar4 = lVar5 + 1;
    if (pcVar1[lVar5] != (&DAT_14043ff00)[lVar5]) {
      lVar5 = 0;
      goto LAB_14032a8c0;
    }
    lVar5 = lVar4;
  } while (lVar4 != 6);
  goto LAB_14032a913;
  while (lVar5 = lVar4, lVar4 != 5) {
LAB_14032a8c0:
    lVar4 = lVar5 + 1;
    if (pcVar1[lVar5] != (&DAT_14043ff08)[lVar5]) goto LAB_14032a8df;
  }
  if ((*pcVar2 != '1') || (pcVar2[1] != '\0')) {
LAB_14032a8df:
    iVar3 = strcmp(pcVar1,"646.1991");
    if (iVar3 != 0) goto LAB_14032a925;
    lVar5 = 0;
    do {
      lVar4 = lVar5 + 1;
      if (pcVar2[lVar5] != (&DAT_14043ff1c)[lVar5]) goto LAB_14032a925;
      lVar5 = lVar4;
    } while (lVar4 != 4);
  }
LAB_14032a913:
  local_38[1] = 0x10003756e6963;
LAB_14032a92e:
  local_38[0] = param_2;
  iVar3 = FUN_1402ef870(&DAT_14043fce0,0,local_38,0);
  if (iVar3 != 0) {
    FUN_14032a610(param_2);
  }
  return iVar3;
}

