// Function: FUN_140333900
// Addr: 140333900
// Size: 128 bytes


char * FUN_140333900(undefined8 *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  FUN_1403339f0();
  if (0 < *(int *)(param_1 + 3)) {
    return (char *)0x0;
  }
  pcVar3 = (char *)*param_1;
  pcVar1 = pcVar3 + -1;
  do {
    if ((char *)param_1[2] <= pcVar3) break;
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    *param_1 = pcVar3;
    if (cVar2 == ' ') {
      return pcVar1;
    }
    if (cVar2 == '\t') {
      return pcVar1;
    }
    if ((cVar2 == '\r') || (cVar2 == '\n')) {
      *(undefined4 *)(param_1 + 3) = 2;
      return pcVar1;
    }
    if (cVar2 == ';') {
      *(undefined4 *)(param_1 + 3) = 1;
      return pcVar1;
    }
  } while (cVar2 != '\x1a');
  *(undefined4 *)(param_1 + 3) = 3;
  return pcVar1;
}

