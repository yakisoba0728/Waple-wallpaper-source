// Function: FUN_140321c90
// Addr: 140321c90
// Size: 127 bytes


void FUN_140321c90(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  size_t sVar3;
  char *pcVar4;
  char *pcVar5;
  
  sVar3 = strlen(param_1);
  pcVar4 = param_1 + sVar3;
  sVar3 = strlen(param_2);
  pcVar5 = param_2 + sVar3;
  while( true ) {
    if (pcVar5 <= param_2) {
      do {
        *pcVar4 = '\0';
        if (pcVar4 <= param_1) {
          return;
        }
        cVar2 = pcVar4[-1];
        pcVar4 = pcVar4 + -1;
      } while ((((cVar2 == '-') || (cVar2 == ' ')) || (cVar2 == '_')) || (cVar2 == '+'));
      return;
    }
    if (pcVar4 == param_1) break;
    pcVar1 = pcVar4 + -1;
    pcVar4 = pcVar4 + -1;
    pcVar5 = pcVar5 + -1;
    if (*pcVar5 != *pcVar1) {
      return;
    }
  }
  return;
}

