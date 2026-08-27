// Function: FUN_14032f230
// Addr: 14032f230
// Size: 70 bytes


char * FUN_14032f230(char *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  
  cVar2 = *param_1;
  while ((cVar2 != '\0' && (cVar2 != param_2))) {
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  if (*param_1 != '\0') {
    *param_1 = '\0';
    param_1 = param_1 + 1;
    cVar2 = *param_1;
    while ((cVar2 != '\0' && (cVar2 == param_2))) {
      pcVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar2 = *pcVar1;
    }
  }
  return param_1;
}

