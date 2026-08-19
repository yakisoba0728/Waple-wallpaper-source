// Function: FUN_14033c3e0
// Addr: 14033c3e0
// Size: 2 bytes


undefined8 FUN_14033c3e0(undefined8 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  
  pcVar3 = (char *)*param_1;
  iVar4 = 0;
  uVar5 = 3;
  if (param_2 <= pcVar3) {
code_r0x00014033c4ba:
    *param_1 = pcVar3;
    return uVar5;
  }
code_r0x00014033c410:
  do {
    pcVar2 = pcVar3;
    cVar1 = *pcVar2;
    pcVar3 = pcVar2 + 1;
    if (cVar1 == '\\') {
      if (pcVar3 == param_2) goto code_r0x00014033c4ba;
      switch(*pcVar3) {
      case '(':
      case ')':
      case '\\':
      case 'b':
      case 'f':
      case 'n':
      case 'r':
      case 't':
        pcVar3 = pcVar2 + 2;
        break;
      default:
        if (param_2 <= pcVar3) goto code_r0x00014033c4ba;
        if (7 < (byte)(*pcVar3 - 0x30U)) goto code_r0x00014033c410;
        pcVar3 = pcVar2 + 2;
        if (param_2 <= pcVar3) goto code_r0x00014033c4ba;
        if (7 < (byte)(*pcVar3 - 0x30U)) goto code_r0x00014033c410;
        pcVar3 = pcVar2 + 3;
        if (param_2 <= pcVar3) goto code_r0x00014033c4ba;
        if (7 < (byte)(*pcVar3 - 0x30U)) goto code_r0x00014033c410;
        pcVar3 = pcVar2 + 4;
      }
    }
    else if (cVar1 == '(') {
      iVar4 = iVar4 + 1;
    }
    else if ((cVar1 == ')') && (iVar4 = iVar4 + -1, iVar4 == 0)) {
      uVar5 = 0;
      goto code_r0x00014033c4ba;
    }
    if (param_2 <= pcVar3) {
      *param_1 = pcVar3;
      return 3;
    }
  } while( true );
}

