// Function: FUN_140090a70
// Addr: 140090a70
// Size: 188 bytes


undefined8 * FUN_140090a70(longlong param_1,undefined8 *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char local_48 [64];
  
  pcVar6 = *(char **)(param_1 + 0x70);
  iVar4 = 0;
  iVar5 = (int)pcVar6;
  if (pcVar6 < param_3) {
    pcVar1 = pcVar6;
    do {
      iVar5 = (int)pcVar6;
      if (pcVar1 == *(char **)(param_1 + 0x78)) break;
      pcVar2 = pcVar1 + 1;
      if (*pcVar1 == '\r') {
        if ((pcVar2 != *(char **)(param_1 + 0x78)) && (*pcVar2 == '\n')) {
          pcVar2 = pcVar1 + 2;
        }
LAB_140090ac7:
        iVar4 = iVar4 + 1;
        pcVar6 = pcVar2;
      }
      else if (*pcVar1 == '\n') goto LAB_140090ac7;
      iVar5 = (int)pcVar6;
      pcVar1 = pcVar2;
    } while (pcVar2 < param_3);
  }
  FUN_1400899e0(local_48,0x33,"Line %d, Column %d",iVar4 + 1,((int)param_3 - iVar5) + 1);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  sVar3 = strlen(local_48);
  FUN_140017480(param_2,local_48,sVar3);
  return param_2;
}

