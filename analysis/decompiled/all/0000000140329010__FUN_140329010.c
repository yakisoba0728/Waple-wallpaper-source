// Function: FUN_140329010
// Addr: 140329010
// Size: 542 bytes


ulonglong FUN_140329010(longlong param_1,ulonglong *param_2,ulonglong param_3,int param_4)

{
  char *_Str1;
  int iVar1;
  ulonglong uVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  uint *puVar6;
  longlong local_res10 [3];
  undefined1 local_68 [16];
  int local_58;
  
  pcVar3 = (char *)((longlong)param_4 + param_3);
  *param_2 = param_3;
  param_2[2] = (ulonglong)pcVar3;
  *(int *)(param_2 + 3) = 0;
  (*(code *)param_2[7])(param_2);
  pcVar5 = (char *)*param_2;
  while (pcVar5 < pcVar3) {
    if (*pcVar5 == 'F') {
      if ((pcVar5 + 0x19 < pcVar3) && (iVar1 = strncmp(pcVar5,"FontDirectory",0xd), iVar1 == 0)) {
        (*(code *)param_2[8])(param_2);
        (*(code *)param_2[7])(param_2);
        pcVar5 = (char *)*param_2;
        _Str1 = pcVar5;
        while ((_Str1 < pcVar3 &&
               (((*_Str1 != 'k' || (pcVar3 <= _Str1 + 5)) ||
                (iVar1 = strncmp(_Str1,"known",5), iVar1 != 0))))) {
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] != 0) goto LAB_14032921a;
          (*(code *)param_2[7])(param_2);
          _Str1 = (char *)*param_2;
        }
        if (_Str1 < pcVar3) {
          (*(code *)param_2[8])(param_2);
          (*(code *)param_2[0xe])(param_2,local_68);
          if (local_58 == 3) {
            pcVar5 = (char *)*param_2;
          }
        }
        *param_2 = (ulonglong)pcVar5;
      }
      else {
LAB_1403291fc:
        (*(code *)param_2[8])(param_2);
        if ((int)param_2[3] != 0) break;
      }
    }
    else {
      if ((*pcVar5 != '/') || (pcVar3 <= pcVar5 + 2)) goto LAB_1403291fc;
      *param_2 = (ulonglong)(pcVar5 + 1);
      (*(code *)param_2[8])(param_2);
      if ((int)param_2[3] != 0) break;
      iVar1 = (int)*param_2 - (int)pcVar5;
      uVar4 = iVar1 - 1;
      if ((iVar1 - 2U < 0x15) && ((char *)*param_2 < pcVar3)) {
        puVar6 = &DAT_14043f4e0;
        do {
          if (*(void **)(puVar6 + 2) != (void *)0x0) {
            if ((*puVar6 == uVar4) &&
               (iVar1 = memcmp(pcVar5 + 1,*(void **)(puVar6 + 2),(ulonglong)uVar4), iVar1 == 0)) {
              if (puVar6[5] == 0xb) {
                (**(code **)(puVar6 + 6))(param_1,param_2);
                uVar2 = (ulonglong)(uint)param_2[3];
              }
              else {
                uVar4 = puVar6[4];
                if (uVar4 == 3) {
                  local_res10[0] = 0x110;
                }
                else if ((uVar4 == 4) || (uVar4 != 6)) {
                  local_res10[0] = 0xd8;
                }
                else {
                  local_res10[0] = 0x27c;
                }
                local_res10[0] = local_res10[0] + param_1;
                if (puVar6[5] - 9 < 2) {
                  uVar2 = (*(code *)param_2[0x11])(param_2,puVar6,local_res10,0,0);
                }
                else {
                  uVar2 = (*(code *)param_2[0x10])();
                }
              }
              *(int *)(param_2 + 3) = (int)uVar2;
              if ((int)uVar2 != 0) {
                return uVar2;
              }
              break;
            }
            puVar6 = puVar6 + 0xe;
          }
        } while (*puVar6 != 0);
      }
    }
    (*(code *)param_2[7])(param_2);
    pcVar5 = (char *)*param_2;
  }
LAB_14032921a:
  return (ulonglong)(uint)param_2[3];
}

