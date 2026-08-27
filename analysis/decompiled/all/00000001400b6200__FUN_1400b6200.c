// Function: FUN_1400b6200
// Addr: 1400b6200
// Size: 207 bytes


ulonglong FUN_1400b6200(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  longlong lVar8;
  
  pcVar2 = (char *)*param_2;
  uVar3 = param_2[1];
  cVar5 = '\0';
  cVar6 = '\0';
  cVar7 = '\0';
  for (pcVar4 = pcVar2; pcVar4 < pcVar2 + (uVar3 / 6) * 6; pcVar4 = pcVar4 + 6) {
    *pcVar4 = *pcVar4 + cVar5;
    pcVar4[1] = pcVar4[1] + cVar6;
    pcVar4[2] = pcVar4[2] + cVar7;
    cVar5 = *pcVar4 + pcVar4[3];
    pcVar4[3] = cVar5;
    cVar6 = pcVar4[1] + pcVar4[4];
    pcVar4[4] = cVar6;
    cVar7 = pcVar4[2] + pcVar4[5];
    pcVar4[5] = cVar7;
  }
  lVar8 = uVar3 - (longlong)pcVar4;
  pcVar1 = pcVar4 + ((ulonglong)(pcVar2 + lVar8) / 3) * 2;
  for (; pcVar4 < pcVar1 + (ulonglong)(pcVar2 + lVar8) / 3; pcVar4 = pcVar4 + 3) {
    *pcVar4 = *pcVar4 + cVar5;
    cVar5 = *pcVar4;
    pcVar4[1] = pcVar4[1] + cVar6;
    cVar6 = pcVar4[1];
    pcVar4[2] = pcVar4[2] + cVar7;
    cVar7 = pcVar4[2];
  }
  return (ulonglong)pcVar1 & 0xffffffffffffff00;
}

