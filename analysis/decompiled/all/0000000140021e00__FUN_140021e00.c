// Function: FUN_140021e00
// Addr: 140021e00
// Size: 28 bytes


void FUN_140021e00(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  *param_1 = '\0';
  if ((cVar1 != '\0') && (DAT_1404e8c20 = DAT_1404e8c20 + -1, DAT_1404e8c20 == 0)) {
    DAT_1404df540 = DAT_1404df540 & 0xfffffdff;
  }
  return;
}

