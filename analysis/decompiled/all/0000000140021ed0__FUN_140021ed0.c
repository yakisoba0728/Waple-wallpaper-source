// Function: FUN_140021ed0
// Addr: 140021ed0
// Size: 28 bytes


void FUN_140021ed0(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  *param_1 = '\0';
  if ((cVar1 != '\0') && (DAT_1404e8cf0 = DAT_1404e8cf0 + -1, DAT_1404e8cf0 == 0)) {
    DAT_1404df610 = DAT_1404df610 & 0xfffffdff;
  }
  return;
}

