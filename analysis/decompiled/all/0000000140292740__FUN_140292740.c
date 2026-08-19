// Function: FUN_140292740
// Addr: 140292740
// Size: 34 bytes


ulonglong FUN_140292740(char *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  char *pcVar1;
  int iVar2;
  ulonglong uVar3;
  char *pcVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 local_48 [3];
  
  puVar6 = local_48;
  if (param_2 != (undefined8 *)0x0) {
    puVar6 = param_2;
  }
  iVar2 = FUN_1402d5910(*param_1);
  pcVar4 = param_1;
  while (iVar2 != 0) {
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
    iVar2 = FUN_1402d5910(*pcVar1);
  }
  cVar5 = *pcVar4;
  if ((cVar5 - 0x2bU & 0xfd) == 0) {
    pcVar4 = pcVar4 + 1;
  }
  else {
    cVar5 = '+';
  }
  uVar3 = func_0x000140292b30(pcVar4,puVar6,param_3,param_4);
  if (pcVar4 == (char *)*puVar6) {
    *puVar6 = param_1;
code_r0x0001402927c0:
    if (uVar3 != 0) goto code_r0x0001402927f2;
  }
  else if (param_1 == (char *)*puVar6) goto code_r0x0001402927c0;
  if (cVar5 != '+') {
    if (cVar5 == '-') {
      if (0x8000000000000000 < uVar3) goto code_r0x0001402927f2;
      uVar3 = -uVar3;
    }
    return uVar3;
  }
  if (uVar3 < 0x8000000000000000) {
    return uVar3;
  }
code_r0x0001402927f2:
                    /* WARNING: Subroutine does not return */
  FUN_1402cb004();
}

