// Function: FUN_140292840
// Addr: 140292840
// Size: 16 bytes


ulonglong FUN_140292840(char *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  char *pcVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 auStack_48 [3];
  
  puVar7 = auStack_48;
  if (param_2 != (undefined8 *)0x0) {
    puVar7 = param_2;
  }
  iVar2 = FUN_1402d5910(*param_1);
  pcVar5 = param_1;
  while (iVar2 != 0) {
    pcVar1 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
    iVar2 = FUN_1402d5910(*pcVar1);
  }
  cVar6 = *pcVar5;
  if ((cVar6 - 0x2bU & 0xfd) == 0) {
    pcVar5 = pcVar5 + 1;
  }
  else {
    cVar6 = '+';
  }
  uVar4 = func_0x000140292930(pcVar5,puVar7,param_3,param_4);
  uVar3 = (uint)uVar4;
  if (pcVar5 == (char *)*puVar7) {
    *puVar7 = param_1;
code_r0x0001402928bb:
    if (uVar3 != 0) goto code_r0x0001402928e3;
  }
  else if (param_1 == (char *)*puVar7) goto code_r0x0001402928bb;
  if (cVar6 != '+') {
    if (cVar6 == '-') {
      if (0x80000000 < uVar3) goto code_r0x0001402928e3;
      uVar4 = (ulonglong)-uVar3;
    }
    return uVar4;
  }
  if (uVar3 < 0x80000000) {
    return uVar4;
  }
code_r0x0001402928e3:
                    /* WARNING: Subroutine does not return */
  FUN_1402cb004();
}

