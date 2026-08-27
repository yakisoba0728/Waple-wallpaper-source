// Function: FUN_14009c500
// Addr: 14009c500
// Size: 92 bytes


char * FUN_14009c500(longlong *param_1)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar1 = (char *)param_1[1];
  lVar2 = *param_1;
  lVar3 = (longlong)pcVar1 - lVar2;
  pcVar4 = pcVar1;
  while ((lVar3 < (longlong)(ulonglong)*(uint *)(param_1 + 2) && (*pcVar4 != '\0'))) {
    pcVar4 = pcVar4 + 1;
    param_1[1] = (longlong)pcVar4;
    lVar3 = (longlong)pcVar4 - lVar2;
  }
  param_1[1] = (longlong)(pcVar4 + 1);
  pcVar5 = "";
  if ((longlong)(pcVar4 + 1) - lVar2 <= (longlong)(ulonglong)*(uint *)(param_1 + 2)) {
    pcVar5 = pcVar1;
  }
  return pcVar5;
}

